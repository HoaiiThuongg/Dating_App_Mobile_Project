package com.example.datingapp;

import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.Query;
import com.google.firebase.firestore.QueryDocumentSnapshot;
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
    public void loadProfilesPaginated(int limit,DocumentSnapshot lastDoc, SwipeService.LoadUsersCallback callback) {
        String currentUserId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (currentUserId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }
        Query query = db.collection("users")
                .whereNotEqualTo("userId", currentUserId)
                .orderBy("createdAt") ///  sắp xếp theo cj?
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

    private void saveMatch(String userA, String userB, SwipeCallback callback) {
        Map<String, Object> matchData = new HashMap<>();
        matchData.put("users", List.of(userA, userB));
        matchData.put("timestamp", System.currentTimeMillis());

        db.collection("matches")
                .document(userA + "_" + userB)
                .set(matchData)
                .addOnSuccessListener(aVoid ->
                        callback.onSuccess("🎉 Bạn đã match với người dùng này!"))
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
}

