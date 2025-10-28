package com.example.atry.backend;

import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.Query;
import com.google.firebase.firestore.QueryDocumentSnapshot;
import com.google.firebase.firestore.QuerySnapshot;
import com.google.firebase.firestore.SetOptions;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class SwipeService {
    public enum SwipeType {
        RIGHT,
        LEFT,
        SUPER
    }

    private final FirebaseFirestore db;
    private final FirebaseAuth auth;
    private final List<User> cachedUsers = new ArrayList<>();

    public interface SwipeCallback {
        void onSuccess(String message);
        void onFailure(String error);
    }

    public interface LoadUsersCallback {
        void onSuccess(List<User> users, DocumentSnapshot lastVisible);
        void onFailure(String error);
    }

    public SwipeService() {
        db = FirebaseFirestore.getInstance();
        auth = FirebaseAuth.getInstance();
    }


    // Tải danh sách ng dùng khác chưa có điều kiện lọc (AI Matching)???
    public void loadProfilesPaginated(int limit,DocumentSnapshot lastDoc, LoadUsersCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }
        Query query = db.collection("users")
                .whereNotEqualTo("userId", currentUserId)
//                .orderBy("createdAt") ///  sắp xếp theo cj?
                .limit(limit);

        if (lastDoc != null) {
            query = query.startAfter(lastDoc);
        }

        // xem xet viec tai nhieu anh co the gay lac he thống

        query.get().addOnCompleteListener(task -> {
            if (task.isSuccessful()) {
                List<User> userList = new ArrayList<>();
                DocumentSnapshot lastVisible = null;

                for (QueryDocumentSnapshot doc : task.getResult()) {
                    User user = doc.toObject(User.class);
                    userList.add(user);
                    lastVisible = doc;
                }
                callback.onSuccess(userList, lastVisible);
            } else {
                callback.onFailure("Không thể tải danh sách người dùng");
            }
        });
    }


    public void swipeType(String targetUserId, SwipeType swipeType, SwipeCallback callback) {
        String currentUserId = auth.getCurrentUser().getUid();

        if (targetUserId == null) {
            callback.onFailure("ID người dùng không hợp lệ");
            return;
        }

        Map<String, Object> data = new HashMap<>();

        String subCollection;

        if (swipeType == SwipeType.RIGHT) {
            data.put("timestamp", System.currentTimeMillis()); // Nên thêm timestamp
            subCollection = "liked";
        } else if (swipeType == SwipeType.LEFT){
            data.put("timestamp", System.currentTimeMillis());
            subCollection = "passed";
        } else { // SUPER
            data.put("timestamp", System.currentTimeMillis());
            subCollection = "super liked"; // LƯU Ý: Phải nhất quán tên này
        }
        db.collection("swipes")
                .document(targetUserId)
                .collection(subCollection)
                .document(currentUserId)
                .set(data, SetOptions.merge())
                .addOnSuccessListener(aVoid -> {
                    // 3. SỬA LỖI LOGIC: Kiểm tra match nếu là LIKE HOẶC SUPER
                    if (swipeType == SwipeType.RIGHT || swipeType == SwipeType.SUPER) {
                        checkForMatch(currentUserId, targetUserId, callback);
                    } else if (swipeType == SwipeType.LEFT){
                        callback.onSuccess("Đã bỏ qua người dùng");
                    }
                    // Nếu là SUPER, nó sẽ chạy qua checkForMatch.
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Lỗi khi lưu swipe: " + e.getMessage());
                });
    }

    private void checkForMatch(String currentUserId, String targetUserId, SwipeCallback callback) {
        // LƯU Ý: Sửa "superliked" thành "super liked" (có khoảng trắng)

        // 1. Task kiểm tra LIKE ngược lại (B đã LIKE A chưa?)
        Task<DocumentSnapshot> likedTask = db.collection("swipes")
                .document(targetUserId)
                .collection("liked") // Phải khớp với subCollection trong swipeType
                .document(currentUserId)
                .get();

        // 2. Task kiểm tra SUPER LIKE ngược lại (B đã SUPER LIKE A chưa?)
        Task<DocumentSnapshot> superTask = db.collection("swipes")
                .document(targetUserId)
                .collection("super liked") // Sửa lại để khớp
                .document(currentUserId)
                .get();

        // Chạy song song cả 2 task
        Tasks.whenAllSuccess(likedTask, superTask)
                .addOnSuccessListener(results -> {
                    DocumentSnapshot likedDoc = (DocumentSnapshot) results.get(0);
                    DocumentSnapshot superDoc = (DocumentSnapshot) results.get(1);

                    // MATCH nếu Document bất kỳ tồn tại
                    if (likedDoc.exists() || superDoc.exists()) {
                        saveMatch(currentUserId, targetUserId, callback);
                    } else {
                        callback.onSuccess("Đã like người dùng, chưa match");
                    }
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Lỗi khi kiểm tra match: " + e.getMessage());
                });
    }

    public void saveMatch(String userA, String userB, SwipeCallback callback) {
        // 1. Đảm bảo ID Match là duy nhất và nhất quán (ví dụ: A_B, nếu A < B)
        final String matchId;
        final String finalUserA, finalUserB;

        if (userA.compareTo(userB) < 0) {
            finalUserA = userA;
            finalUserB = userB;
        } else {
            finalUserA = userB;
            finalUserB = userA;
        }
        matchId = finalUserA + "_" + finalUserB;

        long timestamp = System.currentTimeMillis();

        // 2. Dữ liệu cho bản ghi chung (matches/{matchId})
        Map<String, Object> matchData = new HashMap<>();
        matchData.put("users", List.of(userA, userB)); // Lưu cả hai ID
        matchData.put("timestamp", timestamp);

        // 3. Dữ liệu cho sub-collection của User
        Map<String, Object> userMatchData = new HashMap<>();
        userMatchData.put("matchId", matchId); // Dùng Match ID để tham chiếu đến cuộc trò chuyện
        userMatchData.put("timestamp", timestamp);


        // --- 4. Tạo các Task ghi ---

        // Task 1: Ghi vào Collection Match chung
        Task<Void> task1 = db.collection("matches")
                .document(matchId)
                .set(matchData);

        // Task 2: Ghi vào Sub-collection của User A (users/{A}/matches/{B})
        Task<Void> task2 = db.collection("users")
                .document(userA)
                .collection("matches")
                .document(userB) // Document ID là ID của người match còn lại
                .set(userMatchData, SetOptions.merge());

        // Task 3: Ghi vào Sub-collection của User B (users/{B}/matches/{A})
        Task<Void> task3 = db.collection("users")
                .document(userB)
                .collection("matches")
                .document(userA) // Document ID là ID của người match còn lại
                .set(userMatchData, SetOptions.merge());

        // --- 5. Chạy song song và xử lý kết quả ---
        Tasks.whenAll(task1, task2, task3)
                .addOnSuccessListener(aVoid ->
                        callback.onSuccess("Bạn đã match với người dùng này!"))
                .addOnFailureListener(e ->
                        callback.onFailure("Lỗi khi lưu match: " + e.getMessage()));
    }

    public List<User> getCachedUsers() {
        return cachedUsers;
    }

    public void addUsers(List<User> newUsers) {
        cachedUsers.addAll(newUsers);
    }

    public void removeFirstUser() {
        if (!cachedUsers.isEmpty()) {
            cachedUsers.remove(0);
        }
    }




    //---------------new code-----------------
    public void getUsersWhoLikedMe(LoadUsersCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;

        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        // Truy vấn sub-collection "incoming_likes" của user hiện tại.
        // Đây là truy vấn tối ưu nhất để lấy danh sách người đã thích bạn.
        db.collection("swipes")
                .document(currentUserId)
                .collection("liked")
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    if (querySnapshot.isEmpty()) {
                        callback.onSuccess(new ArrayList<>(), null);
                        return;
                    }

                    List<Task<User>> userLoadingTasks = new ArrayList<>();

                    for (DocumentSnapshot likeDoc : querySnapshot.getDocuments()) {
                        // ID của Document chính là ID của người thích bạn (swiperId)
                        String swiperId = likeDoc.getId();

                        if (swiperId != null) {
                            // Tải thông tin chi tiết người dùng
                            Task<User> userTask = db.collection("users")
                                    .document(swiperId)
                                    .get()
                                    .continueWith(task -> {
                                        if (task.isSuccessful() && task.getResult().exists()) {
                                            return task.getResult().toObject(User.class);
                                        }
                                        return null;
                                    });
                            userLoadingTasks.add(userTask);
                        }
                    }

                    // Chờ tất cả Task tải User hoàn thành
                    Tasks.whenAllSuccess(userLoadingTasks)
                            .addOnSuccessListener(results -> {
                                List<User> likedUsers = new ArrayList<>();
                                for (Object result : results) {
                                    if (result instanceof User) {
                                        likedUsers.add((User) result);
                                    }
                                }
                                callback.onSuccess(likedUsers, null);
                            })
                            .addOnFailureListener(e -> callback.onFailure("Lỗi khi tải thông tin người dùng đã thích bạn: " + e.getMessage()));
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi truy vấn danh sách thích bạn: " + e.getMessage()));
    }
    public interface MatchedUsersWithIdCallback {
        void onSuccess(List<MatchedUser> matchedUsers);
        void onFailure(String error);
    }

    // Trong SwipeService.java

// ... (Định nghĩa MatchedUsersWithIdCallback giữ nguyên)

    // Trong SwipeService.java

    public void getMyMatches(MatchedUsersWithIdCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;

        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        // 🔥 SỬA: Bắt đầu từ collection "users" và truy vấn sub-collection "matches"
        // Đường dẫn chính xác: users/{currentUserId}/matches/{partnerId}
        db.collection("users")
                .document(currentUserId)
                .collection("matches") // Truy vấn danh sách người đã match
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    if (querySnapshot.isEmpty()) {
                        callback.onSuccess(new ArrayList<>());
                        return;
                    }

                    List<Task<MatchedUser>> matchLoadingTasks = new ArrayList<>();

                    for (DocumentSnapshot matchDoc : querySnapshot.getDocuments()) {
                        // ID của Document chính là ID của người match (partnerId)
                        String partnerId = matchDoc.getId();
                        String matchId = matchDoc.getString("matchId"); // Lấy Match ID chung (đã lưu trong saveMatch)

                        // 2. Tạo Task để tải thông tin chi tiết của người match
                        Task<MatchedUser> userTask = db.collection("users")
                                .document(partnerId)
                                .get()
                                .continueWith(task -> {
                                    if (task.isSuccessful() && task.getResult().exists()) {
                                        User user = task.getResult().toObject(User.class);
                                        if (user != null) {
                                            // Tạo đối tượng MatchedUser
                                            // Nếu matchId là null, dùng partnerId làm dự phòng
                                            return new MatchedUser(user, matchId != null ? matchId : partnerId);
                                        }
                                    }
                                    return null;
                                });
                        matchLoadingTasks.add(userTask);
                    }

                    // 3. Chờ tất cả Task tải User hoàn thành
                    Tasks.whenAllSuccess(matchLoadingTasks)
                            .addOnSuccessListener(results -> {
                                List<MatchedUser> matchedUsers = new ArrayList<>();
                                for (Object result : results) {
                                    if (result instanceof MatchedUser) {
                                        matchedUsers.add((MatchedUser) result);
                                    }
                                }
                                callback.onSuccess(matchedUsers);
                            })
                            .addOnFailureListener(e -> callback.onFailure("Lỗi khi tải thông tin người dùng match: " + e.getMessage()));
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi truy vấn danh sách match: " + e.getMessage()));
    }
}

