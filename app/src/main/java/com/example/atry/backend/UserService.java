package com.example.atry.backend;

import com.google.firebase.Timestamp;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.SetOptions;
import com.google.firebase.firestore.FieldValue;
import java.util.Collections;
import java.util.Date;

public class UserService {
    private final FirebaseAuth mAuth;
    private final FirebaseFirestore db;
    private static final String TAG = "UserService";

    public interface UserCallback {
        default void onSuccess(String message) {}     // cho updateUserInfoLabel, updateField
        default void onSuccess(User user) {}         // cho getUser, updateUser
        default void onSuccess(UserProfile profile) {} // cho getUserProfile, updateUserProfile
        void onFailure(String errorMessage);
    }

    public UserService() {
        mAuth = FirebaseAuth.getInstance();
        db = FirebaseFirestore.getInstance();
    }

    // ===================== USER CƠ BẢN =====================
    private String getUserId() {
        FirebaseUser firebaseUser = mAuth.getCurrentUser();
        return firebaseUser != null ? firebaseUser.getUid() : null;
    }

    public void getUserInfo(UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }
        db.collection("users").document(userId)
                .get()
                .addOnSuccessListener(doc -> {
                    if (doc.exists()) {
                        User user = doc.toObject(User.class);
                        if (user != null) { user.setUserId(userId); callback.onSuccess(user); }
                        else callback.onFailure("Không thể đọc dữ liệu người dùng");
                    } else callback.onFailure("Không tìm thấy thông tin người dùng trong Firestore");
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi lấy dữ liệu: " + e.getMessage()));
    }

    public void updateUser(User user, UserCallback callback) {
        db.collection("users").document(user.getUserId())
                .set(user, SetOptions.merge())
                .addOnSuccessListener(aVoid -> callback.onSuccess(user))
                .addOnFailureListener(e -> callback.onFailure("Cập nhật thất bại: " + e.getMessage()));
    }

    public void getUserById(String userId, UserCallback callback) {
        db.collection("users")
                .document(userId)
                .get()
                .addOnSuccessListener(documentSnapshot -> {
                    if (documentSnapshot.exists()) {
                        User user = documentSnapshot.toObject(User.class);
                        callback.onSuccess(user);
                    } else {
                        callback.onFailure("Không tìm thấy user");
                    }
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi tải user: " + e.getMessage()));
    }

    public void getUserProfileById(String userId, UserCallback callback) {
        db.collection("userProfiles")
                .document(userId)
                .get()
                .addOnSuccessListener(documentSnapshot -> {
                    if (!documentSnapshot.exists()) {
                        callback.onFailure("Không tìm thấy user profile");
                        return;
                    }

                    UserProfile profile = documentSnapshot.toObject(UserProfile.class);

                    if (profile == null) {
                        callback.onFailure("Parse profile bị lỗi");
                        return;
                    }
                    profile.setUserId(userId);
                    callback.onSuccess(profile);
                })
                .addOnFailureListener(e ->
                        callback.onFailure("Lỗi khi tải user profile: " + e.getMessage())
                );
    }




    // ===================== USER PROFILE MỞ RỘNG =====================
    public void getUserProfile(UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }
        db.collection("userProfiles").document(userId)
                .get()
                .addOnSuccessListener(doc -> {
                    if (doc.exists()) {
                        UserProfile profile = doc.toObject(UserProfile.class);
                        if (profile != null) callback.onSuccess(profile);
                        else callback.onFailure("Không thể đọc UserProfile object");
                    } else callback.onFailure("Profile không tồn tại");
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi lấy profile: " + e.getMessage()));
    }

    public void updateUserProfile(UserProfile profile, UserCallback callback) {
        db.collection("userProfiles").document(profile.getUserId())
                .set(profile, SetOptions.merge())
                .addOnSuccessListener(aVoid -> callback.onSuccess(profile))
                .addOnFailureListener(e -> callback.onFailure("Cập nhật profile thất bại: " + e.getMessage()));
    }

    // ===================== CÁC HÀM UPDATE FIELD RIÊNG =====================
    public void updateUserField(String field, Object value, UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }

        db.collection("users").document(userId)
                .set(Collections.singletonMap(field, value), SetOptions.merge()) // <- merge tự tạo field nếu chưa tồn tại
                .addOnSuccessListener(aVoid -> callback.onSuccess("Cập nhật " + field + " thành công"))
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi cập nhật " + field + ": " + e.getMessage()));
    }

    public void updateProfileField(String field, Object value, UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }

        db.collection("userProfiles").document(userId)
                .set(Collections.singletonMap(field, value), SetOptions.merge()) // <- merge tự tạo field nếu chưa tồn tại
                .addOnSuccessListener(aVoid -> callback.onSuccess("Cập nhật " + field + " thành công"))
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi cập nhật " + field + ": " + e.getMessage()));
    }

    public void updateProfileDateTime(String field, Date value, UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }
        Timestamp timestamp = new Timestamp(value);

        db.collection("userProfiles").document(userId)
                .set(Collections.singletonMap(field, timestamp), SetOptions.merge())
                .addOnSuccessListener(aVoid -> callback.onSuccess("Cập nhật " + field + " thành công"))
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi cập nhật " + field + ": " + e.getMessage()));
    }

    // ===================== CẬP NHẬT LIST USERPROFILE =====================

    // Thêm 1 item vào list field
    public void addToProfileList(String field, String value, UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }

        // Truy vấn document trước
        db.collection("userProfiles").document(userId)
                .get()
                .addOnSuccessListener(doc -> {
                    if (doc.exists()) {
                        // Nếu field chưa tồn tại hoặc không phải array, tạo mới
                        if (!doc.contains(field)) {
                            db.collection("userProfiles").document(userId)
                                    .set(Collections.singletonMap(field, Collections.singletonList(value)), SetOptions.merge())
                                    .addOnSuccessListener(aVoid -> callback.onSuccess("Thêm " + field + " thành công"))
                                    .addOnFailureListener(e -> callback.onFailure("Lỗi khi thêm " + field + ": " + e.getMessage()));
                        } else {
                            // Nếu field đã tồn tại, dùng arrayUnion
                            db.collection("userProfiles").document(userId)
                                    .update(field, FieldValue.arrayUnion(value))
                                    .addOnSuccessListener(aVoid -> callback.onSuccess("Thêm " + field + " thành công"))
                                    .addOnFailureListener(e -> callback.onFailure("Lỗi khi thêm " + field + ": " + e.getMessage()));
                        }
                    } else {
                        // Document chưa có => tạo document mới với array
                        db.collection("userProfiles").document(userId)
                                .set(Collections.singletonMap(field, Collections.singletonList(value)), SetOptions.merge())
                                .addOnSuccessListener(aVoid -> callback.onSuccess("Thêm " + field + " thành công"))
                                .addOnFailureListener(e -> callback.onFailure("Lỗi khi thêm " + field + ": " + e.getMessage()));
                    }
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi kiểm tra userProfile: " + e.getMessage()));
    }

    // Xóa 1 item khỏi list field
    // Xóa 1 item khỏi list field, tự tạo field nếu chưa tồn tại
    public void removeFromProfileList(String field, String value, UserCallback callback) {
        String userId = getUserId();
        if (userId == null) { callback.onFailure("Người dùng chưa đăng nhập"); return; }

        db.collection("userProfiles").document(userId)
                .get()
                .addOnSuccessListener(doc -> {
                    if (doc.exists()) {
                        // Nếu field chưa tồn tại hoặc không phải array, tạo array rỗng trước
                        if (!doc.contains(field)) {
                            db.collection("userProfiles").document(userId)
                                    .set(Collections.singletonMap(field, Collections.emptyList()), SetOptions.merge())
                                    .addOnSuccessListener(aVoid -> callback.onSuccess("Field " + field + " chưa tồn tại, đã tạo rỗng"))
                                    .addOnFailureListener(e -> callback.onFailure("Lỗi khi tạo field " + field + ": " + e.getMessage()));
                        } else {
                            // Nếu field đã tồn tại, dùng arrayRemove
                            db.collection("userProfiles").document(userId)
                                    .update(field, FieldValue.arrayRemove(value))
                                    .addOnSuccessListener(aVoid -> callback.onSuccess("Xóa " + field + " thành công"))
                                    .addOnFailureListener(e -> callback.onFailure("Lỗi khi xóa " + field + ": " + e.getMessage()));
                        }
                    } else {
                        // Document chưa có => tạo document mới với array rỗng
                        db.collection("userProfiles").document(userId)
                                .set(Collections.singletonMap(field, Collections.emptyList()), SetOptions.merge())
                                .addOnSuccessListener(aVoid -> callback.onSuccess("Document mới, field " + field + " tạo rỗng"))
                                .addOnFailureListener(e -> callback.onFailure("Lỗi khi tạo document mới: " + e.getMessage()));
                    }
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi khi kiểm tra userProfile: " + e.getMessage()));
    }


    public void signOut() { mAuth.signOut(); }
}
