package com.example.atry.backend;

import android.util.Log;

import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.Timestamp;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.FieldPath;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.Query;
import com.google.firebase.firestore.QueryDocumentSnapshot;
import com.google.firebase.firestore.QuerySnapshot;
import com.google.firebase.firestore.SetOptions;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.TimeUnit;

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
    public void loadProfilesPaginated(int limit, DocumentSnapshot lastDoc, LoadUsersCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        Task<QuerySnapshot> likedTask = db.collection("swipes")
                .document(currentUserId)
                .collection("liked")
                .get();

        Task<QuerySnapshot> dislikedTask = db.collection("swipes")
                .document(currentUserId)
                .collection("disliked")
                .get();

        Task<QuerySnapshot> matchedTask = db.collection("users")
                .document(currentUserId)
                .collection("matches")
                .get();

        Tasks.whenAllSuccess(likedTask, dislikedTask, matchedTask)
                .addOnSuccessListener(results -> {

                    Set<String> excludedIds = new HashSet<>();
                    excludedIds.add(currentUserId);

                    for (DocumentSnapshot d : likedTask.getResult()) excludedIds.add(d.getId());
                    for (DocumentSnapshot d : dislikedTask.getResult()) excludedIds.add(d.getId());
                    for (DocumentSnapshot d : matchedTask.getResult()) excludedIds.add(d.getId());

                    Query query = db.collection("users")
                            .orderBy(FieldPath.documentId())
                            .limit(limit);

                    if (lastDoc != null) {
                        query = query.startAfter(lastDoc);
                    }

                    query.get().addOnSuccessListener(snapshot -> {
                        List<User> result = new ArrayList<>();
                        DocumentSnapshot newLastVisible = lastDoc;

                        for (DocumentSnapshot doc : snapshot.getDocuments()) {
                            String uid = doc.getId();
                            if (!excludedIds.contains(uid)) {
                                User user = doc.toObject(User.class);
                                result.add(user);
                                newLastVisible = doc; // chỉ update khi user hợp lệ
                            }
                        }

                        if (result.isEmpty()) {
                            // Nếu snapshot còn data phía sau → thử tiếp
                            if (!snapshot.getDocuments().isEmpty()) {
                                DocumentSnapshot last = snapshot.getDocuments()
                                        .get(snapshot.size() - 1);

                                // gọi lại để load tiếp
                                loadProfilesPaginated(limit, last, callback);
                                return;
                            }

                            // Không còn gì thật sự
                            callback.onSuccess(result, null);
                            return;
                        }


                        Collections.shuffle(result);
                        callback.onSuccess(result, newLastVisible);

                    }).addOnFailureListener(e ->
                            callback.onFailure("Tải user lỗi: " + e.getMessage())
                    );

                }).addOnFailureListener(e ->
                        callback.onFailure("Lỗi khi lấy danh sách swipe/match: " + e.getMessage())
                );
    }




    public void swipeType(String targetUserId, SwipeType swipeType, SwipeCallback callback) {
        String currentUserId = auth.getCurrentUser().getUid();
        if (targetUserId == null) {
            callback.onFailure("ID người dùng không hợp lệ");
            return;
        }

        Map<String, Object> data = new HashMap<>();
        data.put("timestamp", System.currentTimeMillis());

        // 🔥 Dùng biến tạm local trước
        String tempCurrentCollection;
        String tempTargetCollection;

        if (swipeType == SwipeType.RIGHT) {
            tempCurrentCollection = "liked";
            tempTargetCollection = "likedBy";
        } else if (swipeType == SwipeType.LEFT) {
            tempCurrentCollection = "disliked";
            tempTargetCollection = "dislikedBy";
        } else {
            tempCurrentCollection = "liked";
            tempTargetCollection = "likedBy";
            data.put("super", true);
        }

        // ✅ Gán final cho lambda
        final String currentUserSubCollection = tempCurrentCollection;
        final String targetUserSubCollection = tempTargetCollection;

        db.collection("swipes")
                .document(currentUserId)
                .collection(currentUserSubCollection)
                .document(targetUserId)
                .set(data, SetOptions.merge())

                .continueWithTask(task -> {
                    if (!task.isSuccessful()) throw task.getException();
                    return db.collection("swipes")
                            .document(targetUserId)
                            .collection(targetUserSubCollection)
                            .document(currentUserId)
                            .set(data, SetOptions.merge());
                })

                .addOnSuccessListener(aVoid -> {
                    if (swipeType == SwipeType.RIGHT || swipeType == SwipeType.SUPER) {
                        // 1. Lấy tên người dùng hiện tại (currentUserId)
                        db.collection("users").document(currentUserId).get()
                                .addOnSuccessListener(documentSnapshot -> {
                                    String currentUserName = documentSnapshot.getString("name"); // Giả sử trường tên là 'name'
                                    if (currentUserName != null) {
                                        // 2. Gửi thông báo "Bạn được thích" cho targetUserId
                                        String title = "Bạn được thích";
                                        String content = currentUserName + " đã thích bạn";
                                        addNotification(targetUserId, title, content,currentUserId);
                                    }
                                    // 3. Tiếp tục kiểm tra Match
                                    checkForMatch(currentUserId, targetUserId, callback);
                                })
                                .addOnFailureListener(e -> {
                                    Log.e("Firebase", "Lỗi khi lấy tên người dùng hiện tại: " + e.getMessage());
                                    // Vẫn tiếp tục kiểm tra match ngay cả khi không lấy được tên
                                    checkForMatch(currentUserId, targetUserId, callback);
                                });
                    } else {
                        callback.onSuccess("Đã bỏ qua người dùng");
                    }
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi lưu swipe: " + e.getMessage()));
    }



    private void checkForMatch(String currentUserId, String targetUserId, SwipeCallback callback) {

        // Kiểm tra A đã like/super like B chưa
        Task<DocumentSnapshot> currentLikedTask = db.collection("swipes")
                .document(targetUserId)
                .collection("liked")
                .document(currentUserId)
                .get();

        // Kiểm tra B đã like/super like A chưa
        Task<DocumentSnapshot> targetLikedTask = db.collection("swipes")
                .document(currentUserId)
                .collection("liked")
                .document(targetUserId)
                .get();

        Task<DocumentSnapshot> currentSuperTask = db.collection("swipes")
                .document(targetUserId)
                .collection("super liked")
                .document(currentUserId)
                .get();

        Task<DocumentSnapshot> targetSuperTask = db.collection("swipes")
                .document(currentUserId)
                .collection("super liked")
                .document(targetUserId)
                .get();

        Tasks.whenAllSuccess(currentLikedTask, targetLikedTask, currentSuperTask, targetSuperTask)
                .addOnSuccessListener(results -> {
                    boolean currentLiked = ((DocumentSnapshot) results.get(0)).exists();
                    boolean targetLiked = ((DocumentSnapshot) results.get(1)).exists();
                    boolean currentSuper = ((DocumentSnapshot) results.get(2)).exists();
                    boolean targetSuper = ((DocumentSnapshot) results.get(3)).exists();

                    if ((currentLiked || currentSuper) && (targetLiked || targetSuper)) {
                        saveMatch(currentUserId, targetUserId, callback);
                    } else {
                        callback.onSuccess("Đã like người dùng, chưa match");
                    }
                })
                .addOnFailureListener(e ->
                        callback.onFailure("Lỗi khi kiểm tra match: " + e.getMessage()));
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
                .addOnSuccessListener(aVoid -> {
                    // 🔥 Thêm logic thông báo sau khi lưu Match thành công

                    // Lấy tên của User A và User B
                    Task<DocumentSnapshot> taskGetNameA = db.collection("users").document(userA).get();
                    Task<DocumentSnapshot> taskGetNameB = db.collection("users").document(userB).get();

                    Tasks.whenAllSuccess(taskGetNameA, taskGetNameB)
                            .addOnSuccessListener(list -> {
                                String nameA = ((DocumentSnapshot)list.get(0)).getString("name");
                                String nameB = ((DocumentSnapshot)list.get(1)).getString("name");

                                // 1. Tạo thông báo Match
                                String title = "Matched";
                                // Thông báo cho User A
                                String contentA = "Bạn và " + (nameB != null ? nameB : "một người dùng") + " đã match nhau";
                                addNotification(userA, title, contentA,userB);

                                // Thông báo cho User B
                                String contentB = "Bạn và " + (nameA != null ? nameA : "một người dùng") + " đã match nhau";
                                addNotification(userB, title, contentB,userA);
                            })
                            .addOnFailureListener(e -> {
                                Log.e("Firebase", "Không thể lấy tên người dùng để tạo thông báo Match.");
                            });

                    callback.onSuccess("Bạn đã match với người dùng này!");
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi lưu match: " + e.getMessage()));

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

        Task<QuerySnapshot> likedByTask = db.collection("swipes")
                .document(currentUserId)
                .collection("likedBy")
                .get();

        Task<QuerySnapshot> matchedTask = db.collection("users")
                .document(currentUserId)
                .collection("matches")
                .get();

        Tasks.whenAllSuccess(likedByTask, matchedTask)
                .addOnSuccessListener(results -> {
                    QuerySnapshot likedBySnapshot = likedByTask.getResult();
                    QuerySnapshot matchedSnapshot = matchedTask.getResult();

                    Set<String> matchedIds = new HashSet<>();
                    for (DocumentSnapshot d : matchedSnapshot) {
                        matchedIds.add(d.getId());
                    }

                    if (likedBySnapshot.isEmpty()) {
                        callback.onSuccess(new ArrayList<>(), null);
                        return;
                    }

                    List<Task<User>> userLoadingTasks = new ArrayList<>();
                    for (DocumentSnapshot likeDoc : likedBySnapshot.getDocuments()) {
                        String swiperId = likeDoc.getId();
                        if (swiperId != null && !matchedIds.contains(swiperId)) {
                            Task<User> userTask = db.collection("users")
                                    .document(swiperId)
                                    .get()
                                    .continueWith(task -> task.isSuccessful() && task.getResult().exists()
                                            ? task.getResult().toObject(User.class)
                                            : null);
                            userLoadingTasks.add(userTask);
                        }
                    }

                    Tasks.whenAllSuccess(userLoadingTasks)
                            .addOnSuccessListener(uResults -> {
                                List<User> users = new ArrayList<>();
                                for (Object r : uResults) {
                                    if (r instanceof User) users.add((User) r);
                                }
                                callback.onSuccess(users, null);
                            })
                            .addOnFailureListener(e ->
                                    callback.onFailure("Lỗi khi tải thông tin người dùng: " + e.getMessage())
                            );

                })
                .addOnFailureListener(e ->
                        callback.onFailure("Lỗi truy vấn dữ liệu: " + e.getMessage())
                );
    }

    public interface MatchedUsersWithIdCallback {
        void onSuccess(List<MatchedUser> matchedUsers);
        void onFailure(String error);
    }

    // Trong SwipeService.java

    public void getMyMatches(MatchedUsersWithIdCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;

        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

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


    //---------noti
    // Thêm hàm này vào class của bạn
    private void addNotification(String userId, String title, String content, String partnerId) {
        Map<String, Object> notificationData = new HashMap<>();
        notificationData.put("title", title);
        notificationData.put("content", content);
        notificationData.put("timestamp", System.currentTimeMillis());
        notificationData.put("read", false); // Mặc định là chưa đọc
        notificationData.put("partnerId", partnerId); // thêm partnerId

        db.collection("notifications")
                .document(userId)
                .collection("userNotifications")
                .add(notificationData)
                .addOnSuccessListener(documentReference -> {
                    Log.d("Firebase", "Thông báo được thêm thành công cho: " + userId);
                })
                .addOnFailureListener(e -> {
                    Log.e("Firebase", "Lỗi khi thêm thông báo cho " + userId + ": " + e.getMessage());
                });
    }

    //---số người đã match
    // Trong class SwipeService.java

    public interface CountCallback {
        void onSuccess(int count);
        void onFailure(String error);
    }
    public void getTotalMatchesCount(CountCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;

        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        // Truy vấn sub-collection "matches" của người dùng hiện tại
        db.collection("users")
                .document(currentUserId)
                .collection("matches")
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    int totalMatches = querySnapshot.size();
                    callback.onSuccess(totalMatches);
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi đếm số lượng match: " + e.getMessage()));
    }


    //-----xóa match và tính số này matched
    public interface UnmatchCallback {
        void onSuccess(String message);
        void onFailure(String error);
    }

    public interface DaysMatchedCallback {
        void onSuccess(long days);
        void onFailure(String error);
    }

    // Lấy số ngày match
    public void getDaysMatched(String userId, String partnerId, DaysMatchedCallback callback) {
        db.collection("users")
                .document(userId)
                .collection("matches")
                .document(partnerId)
                .get()
                .addOnSuccessListener(documentSnapshot -> {
                    Timestamp matchedAt = documentSnapshot.getTimestamp("matchedAt");
                    long days = 0;
                    if (matchedAt != null) {
                        long nowMillis = System.currentTimeMillis();
                        long matchedMillis = matchedAt.toDate().getTime();
                        days = TimeUnit.MILLISECONDS.toDays(nowMillis - matchedMillis);
                    }
                    callback.onSuccess(days);
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi lấy ngày match: " + e.getMessage()));
    }

    // Unmatch user
    public void unmatchUser(String currentUserId, String partnerId, UnmatchCallback callback) {
        if (currentUserId == null || currentUserId.isEmpty()
                || partnerId == null || partnerId.isEmpty()) {
            callback.onFailure("ID không hợp lệ");
            return;
        }

        // Xóa document partnerId trong matches của currentUser
        // và xóa document currentUserId trong matches của partner
        Tasks.whenAll(
                        db.collection("users").document(currentUserId)
                                .collection("matches").document(partnerId).delete(),
                        db.collection("users").document(partnerId)
                                .collection("matches").document(currentUserId).delete()
                ).addOnSuccessListener(aVoid -> callback.onSuccess("Đã unmatch thành công"))
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi unmatch: " + e.getMessage()));
    }
    public interface MatchCheckCallback {
        void onResult(boolean isMatched);
        void onFailure(String error);
    }

    public interface MatchCallback {
        void onResult(boolean matched); // public abstract by default
        void onError(String error);
    }

    public void isMatched(String userA, String userB, MatchCallback callback) {
        db.collection("users").document(userA)
                .collection("matches").document(userB)
                .get()
                .addOnSuccessListener(doc -> {
                    callback.onResult(doc.exists());
                })
                .addOnFailureListener(e -> {
                    callback.onError(e.getMessage() != null ? e.getMessage() : "Lỗi");
                });
    }


}

