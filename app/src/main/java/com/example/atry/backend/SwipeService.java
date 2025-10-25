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
            data.put("liked", true);
            subCollection = "liked";
        } else if (swipeType == SwipeType.LEFT){
            data.put("passed", true);
            subCollection = "passed";
        } else {
            data.put ("super liked", true);
            subCollection = "super liked";
        }
        db.collection("swipes")
                .document(currentUserId)
                .collection(subCollection)
                .document(targetUserId)
                .set(data, SetOptions.merge())
                .addOnSuccessListener(aVoid -> {
                    if (swipeType == SwipeType.RIGHT && swipeType == SwipeType.SUPER) {
                        checkForMatch(currentUserId, targetUserId, callback);
                    } else if (swipeType == SwipeType.LEFT){
                        callback.onSuccess("Đã bỏ qua người dùng");
                    }
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Lỗi khi lưu swipe: " + e.getMessage());
                });
    }

    private void checkForMatch(String currentUserId, String targetUserId, SwipeCallback callback) {
        Task<DocumentSnapshot> likedTask = db.collection("swipes")
                .document(targetUserId)
                .collection("liked")
                .document(currentUserId)
                .get();

        Task<DocumentSnapshot> superTask = db.collection("swipes")
                .document(targetUserId)
                .collection("superliked")
                .document(currentUserId)
                .get();

        // Chạy song song cả 2 task
        Tasks.whenAllSuccess(likedTask, superTask)
                .addOnSuccessListener(results -> {
                    DocumentSnapshot likedDoc = (DocumentSnapshot) results.get(0);
                    DocumentSnapshot superDoc = (DocumentSnapshot) results.get(1);

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
        Map<String, Object> matchData = new HashMap<>();
        matchData.put("users", List.of(userA, userB));
        matchData.put("timestamp", System.currentTimeMillis());

        db.collection("matches")
                .document(userA + "_" + userB)
                .set(matchData)
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

        // 1. Truy vấn collection "swipe"
        db.collection("swipe")
                // 2. Lọc: Người nhận swipe là user hiện tại
                .whereEqualTo("user_target_id", currentUserId)
                // 3. Lọc: Hành động là "like"
                .whereEqualTo("action", "like")
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    if (querySnapshot.isEmpty()) {
                        callback.onSuccess(new ArrayList<>(), null);
                        return;
                    }

                    // Danh sách các Task để tải thông tin của từng người đã swipe
                    List<Task<User>> userLoadingTasks = new ArrayList<>();

                    for (QueryDocumentSnapshot swipeDoc : querySnapshot) {
                        // Lấy ID của người đã thực hiện swipe
                        String swiperId = swipeDoc.getString("user_swiping_id");

                        if (swiperId != null) {
                            // Tạo Task để tải thông tin người dùng từ collection "users"
                            Task<User> userTask = db.collection("users")
                                    .document(swiperId)
                                    .get()
                                    .continueWith(task -> {
                                        if (task.isSuccessful() && task.getResult().exists()) {
                                            return task.getResult().toObject(User.class);
                                        }
                                        return null; // Trả về null nếu tải thất bại
                                    });
                            userLoadingTasks.add(userTask);
                        }
                    }

                    // 4. Chờ tất cả Task tải User hoàn thành
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
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi truy vấn swipes: " + e.getMessage()));
    }

    public interface MatchedUsersWithIdCallback {
        void onSuccess(List<MatchedUser> matchedUsers);
        void onFailure(String error);
    }

    // Trong SwipeService.java

// ... (Định nghĩa MatchedUsersWithIdCallback giữ nguyên)

    public void getMyMatches(MatchedUsersWithIdCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;

        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        // 🔥 Vấn đề: Firestore KHÔNG hỗ trợ truy vấn OR trên hai trường khác nhau.
        // Giải pháp: Chạy hai truy vấn song song và hợp nhất kết quả.

        // Truy vấn 1: Tìm nơi ID người dùng hiện tại là user1
        Query query1 = db.collection("matching")
                .whereEqualTo("user1", currentUserId);

        // Truy vấn 2: Tìm nơi ID người dùng hiện tại là user2
        Query query2 = db.collection("matching")
                .whereEqualTo("user2", currentUserId);

        // Chạy song song cả hai truy vấn và đợi tất cả hoàn thành
        Task<List<QuerySnapshot>> allQueriesTask = Tasks.whenAllSuccess(query1.get(), query2.get());

        allQueriesTask.addOnSuccessListener(listSnapshots -> {
            // Map để lưu trữ Match ID và Partner ID để xử lý duy nhất
            Map<String, String> partnerIdByMatchId = new HashMap<>(); // Key: MatchId, Value: PartnerId

            for (QuerySnapshot snapshot : listSnapshots) {
                for (DocumentSnapshot doc : snapshot.getDocuments()) {
                    String matchId = doc.getId();
                    String userId1 = doc.getString("user1");
                    String userId2 = doc.getString("user2");

                    // Xác định ID của người match còn lại
                    String partnerId = null;
                    if (currentUserId.equals(userId1)) {
                        partnerId = userId2;
                    } else if (currentUserId.equals(userId2)) {
                        partnerId = userId1;
                    }

                    if (partnerId != null) {
                        // Dùng MatchId làm Key để đảm bảo không trùng lặp nếu có lỗi ghi
                        partnerIdByMatchId.put(matchId, partnerId);
                    }
                }
            }

            if (partnerIdByMatchId.isEmpty()) {
                callback.onSuccess(new ArrayList<>());
                return;
            }

            List<MatchedUser> result = new ArrayList<>();
            List<Task<?>> userTasks = new ArrayList<>();

            // Tải thông tin chi tiết của tất cả người match
            for (Map.Entry<String, String> entry : partnerIdByMatchId.entrySet()) {
                String matchId = entry.getKey();
                String partnerId = entry.getValue();

                // Lấy task truy vấn thông tin user
                Task<DocumentSnapshot> userTask = db.collection("users").document(partnerId).get();

                // Tiếp tục Task để tạo MatchedUser
                userTasks.add(userTask.continueWith(task -> {
                    if (task.isSuccessful()) {
                        DocumentSnapshot userDoc = task.getResult();
                        User user = userDoc.toObject(User.class);
                        if (user != null) {
                            // Thêm đối tượng MatchedUser vào danh sách kết quả
                            result.add(new MatchedUser(user, matchId));
                        }
                    }
                    return null;
                }));
            }

            // ⏳ Chờ tất cả task tải User hoàn thành
            Tasks.whenAllComplete(userTasks)
                    .addOnSuccessListener(t -> callback.onSuccess(result))
                    .addOnFailureListener(e -> callback.onFailure(e.getMessage()));

        }).addOnFailureListener(e -> callback.onFailure("Lỗi khi truy vấn match: " + e.getMessage()));
    }


}

