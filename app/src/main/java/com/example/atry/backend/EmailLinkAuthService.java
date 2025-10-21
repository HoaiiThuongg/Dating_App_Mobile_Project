package com.example.atry.backend;

import android.content.Context;
import android.content.SharedPreferences;
import com.google.firebase.auth.ActionCodeSettings;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;

public class EmailLinkAuthService {

    private final FirebaseAuth mAuth;
    private final Context mContext;
    private final SharedPreferences prefs;

    //1. Đăng kí tài khoản bằng email: Gửi link xác thực (có thể gửi lai) -> kiểm tra -> tạo tài khoản với mật khẩu
        // trình tự: sendSignInLink -> handleSignInLink -> setPasswordForCurrentUser
    //2. Đặt lại mật khẩu: Gửi link reset mật khẩu qua email -> fe chuyển hướng ng dùng đến trang nhập lại mật khẩu nếu thành công -> nhập mật khẩu -> lưu
        // trình tự: sendPasswordResetEmail -> handlePasswordResetEmail -> setPasswordForCurrentUser
    //3. Đăng nhập tài khoản bằng mail và mật khẩu: loginWithEmailPassword
    public EmailLinkAuthService(Context context) {
        this.mContext = context;
        mAuth = FirebaseAuth.getInstance();
        prefs = context.getSharedPreferences("prefs", Context.MODE_PRIVATE);
    }

    public interface AuthCallback {
        void onSuccess(String message);
        void onFailure(String error);
        void onEmailSent(String message);
    }
    public void sendSignInLink(String email, AuthCallback callback) {
        ActionCodeSettings actionCodeSettings = ActionCodeSettings.newBuilder()
                .setUrl("https://dating-app-6b66a.firebaseapp.com")
                .setHandleCodeInApp(true)
                .setAndroidPackageName(mContext.getPackageName(), true, null)
                .build();

        mAuth.sendSignInLinkToEmail(email, actionCodeSettings)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        prefs.edit().putString("emailForSignIn", email).apply();
                        callback.onEmailSent("Đã gửi link xác thực đến email của bạn.");
                    } else {
                        callback.onFailure("Gửi link thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }

    public void resendSignInLink (AuthCallback callback) {
        String email = prefs.getString("emailForSignIn", null);
        if (email == null) {
            callback.onFailure("Không tìm thấy email để gửi lại link");
            return;
        }
        sendSignInLink(email, callback);
    }

    public void handleSignInLink(String link, AuthCallback callback) {
        String email = prefs.getString("emailForSignIn", null);
        if (email == null) {
            callback.onFailure("Không tìm thấy email để đăng nhập");
            return;
        }
        if (!mAuth.isSignInWithEmailLink(link)) {
            callback.onFailure("Link không hợp lệ");
            return;
        }

        mAuth.signInWithEmailLink(email, link)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        // Link hợp lệ user đã đăng nhập tam thời
                        callback.onSuccess("Email đã được xác thực. Vui lòng đặt mật khẩu để hoàn tất tài khoản");
                    }
                    else {
                        callback.onFailure("Xác thực link thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }

    public void setPasswordForCurrentUser(String password, AuthCallback callback) {
        FirebaseUser user = mAuth.getCurrentUser();
        if (user == null) {
            callback.onFailure("Không tìm thấy người dùng. Hãy xác thực email trước.");
            return;
        }
        user.updatePassword(password)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Tài khoản đã được tạo thành công với mật khẩu.");
                    } else {
                        callback.onFailure("Tạo mật khẩu thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }

    public void loginWithEmailPassword(String email, String password, AuthCallback callback) {
        if (email == null || email.trim().isEmpty()) {
            callback.onFailure("Email không được để trống");
            return;
        }

        if (password == null || password.isEmpty()) {
            callback.onFailure("Mật khẩu không được để trống");
            return;
        }

        mAuth.signInWithEmailAndPassword(email, password)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Đăng nhập thành công");
                    } else {
                        callback.onFailure("Đăng nhập thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }

    // Viết thêm FE để xử lý đích đến màn hình reset mật khẩu khi người dùng nhấn vào link
    public void sendPasswordResetEmail(String email, AuthCallback callback) {
        if (email == null || email.trim().isEmpty()) {
            callback.onFailure("Email không được để trống");
            return;
        }

        ActionCodeSettings actionCodeSettings = ActionCodeSettings.newBuilder()
                .setUrl("https://dating-app-6b66a.firebaseapp.com")
                .setHandleCodeInApp(true)
                .setAndroidPackageName(
                        mContext.getPackageName(),
                        true,
                        null)
                .build();

        mAuth.sendPasswordResetEmail(email, actionCodeSettings)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Email reset mật khẩu đã được gửi");
                    } else {
                        callback.onFailure("Gửi email reset mật khẩu thất bại");
                    }
                });
    }


    /*Gửi email → Firebase tạo link reset → gửi vào inbox.
    User click link → app nhận link qua Intent.
    Lấy link này (link = intent.getData().toString()) → truyền vào handlePasswordResetLink(link,
     callback) để xác thực và mở màn hình đặt mật khẩu.*/
    public boolean handlePasswordResetLink(String link, AuthCallback callback) {
        if (!mAuth.isSignInWithEmailLink(link)) {
            callback.onFailure("Link không hợp lệ");
            return false;
        }
        else {
            prefs.edit().putBoolean("passwordResetLinkClicked", true).apply(); // lưu flag click link
            callback.onSuccess("Link reset mật khẩu đã được click, user có thể đặt mật khẩu mới.");
            return true;
        }
    }

    public boolean isUserLoggedIn() {
        return mAuth.getCurrentUser() != null;
    }

    public FirebaseUser getCurrentUser() {
        return mAuth.getCurrentUser();
    }

    public void signOut() {
        mAuth.signOut();
    }
}
