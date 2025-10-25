package com.example.atry.backend;

import static android.content.ContentValues.TAG;

import android.util.Log;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.firestore.FirebaseFirestore;


// 1. Lấy thông tin người dùng:
//  getUserInfo -> load ảnh từ url (cloudinaryHelper)
public class UserService {
    private final FirebaseAuth mAuth;
    private final FirebaseFirestore db;

    public interface UserCallback {
        void onSuccess(String message);
        void onFailure(String errorMessage);
    }

    public UserService() {
        mAuth = FirebaseAuth.getInstance();
        db = FirebaseFirestore.getInstance();
    }

    public void getUserInfo(UserCallback callback) {
        FirebaseUser firebaseUser = mAuth.getCurrentUser();
/*        if (firebaseUser == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }*/
        String userId = firebaseUser.getUid();
        db.collection("users")
                .document(userId)
                .get()
                .addOnSuccessListener(documentSnapshot -> {
                    if (documentSnapshot.exists()) {
                        User user = documentSnapshot.toObject(User.class);
                        if (user != null) {
                            user.setUserId(userId);
                            callback.onSuccess("Lấy thông tin người dùng thành công");
                        }
                        else {
                            callback.onFailure("Không thể đọc dữ liệu người dùng.");
                        }
                    }
                    else {
                        callback.onFailure("Không tìm thấy thông tin người dùng trong Firestore.");
                    }
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Lỗi khi lấy dữ liệu: " + e.getMessage());
                });
    }

    public void updateUserInfo(User user, UserCallback callback) {
        FirebaseUser firebaseUser = mAuth.getCurrentUser();
//        if (firebaseUser == null) {
//            callback.onFailure("Người dùng chưa đăng nhập");
//            return;
//        }
        String userId = firebaseUser.getUid();
        db.collection("users")
                .document(userId)
                .set(user, com.google.firebase.firestore.SetOptions.merge())
                .addOnSuccessListener(aVoid -> {
                    callback.onSuccess("Cập nhật thông tin thành công.");
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Cập nhật thông tin thất bại: " + e.getMessage());
                });
    }
    public void getUserById(String userId, UserCallback callback) {
        db.collection("users")
                .document(userId)
                .get()
                .addOnSuccessListener(documentSnapshot -> {
                    if (documentSnapshot.exists()) {
                        User user = documentSnapshot.toObject(User.class);
                        if (user != null) {
                            // Đảm bảo userId được đặt vào đối tượng User
                            user.setUserId(documentSnapshot.getId());
                            callback.onSuccess("lấy thành công");
                        } else {
                            // Trường hợp tài liệu tồn tại nhưng không thể map thành User
                            callback.onFailure("Could not map document to User object.");
                        }
                    } else {
                        // Trường hợp không tìm thấy tài liệu user
                        callback.onSuccess("fail");
                        // Hoặc callback.onError(new Exception("User not found")); tùy logic
                    }
                })
                .addOnFailureListener(e -> {
                    Log.e(TAG, "Lỗi khi tải thông tin người dùng: " + userId, e);
                    callback.onFailure(e.getMessage());
                });
    }
   /* public void deleteUserAccount (UserCallback callback) {
        FirebaseUser firebaseUser = mAuth.getCurrentUser();
        if (firebaseUser == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }


        String userId = firebaseUser.getUid();

        firebaseUser.delete()
                .addOnSuccessListener(aVoid -> {
                    db.collection("users").document(userId)
                            .delete()
                            .addOnSuccessListener(aVoid2 ->
                                    callback.onSuccess("Xóa tài khoản thành công"))
                            .addOnFailureListener(e ->
                                    callback.onFailure("Xóa dữ liệu Firestore thất bại: "
                                            + e.getMessage()));
                })
                .addOnFailureListener(e -> callback.onFailure("Không thể xóa tài khoản: " + e.getMessage()));
    }*/

    public void signOut() {
        mAuth.signOut();
    }
}
