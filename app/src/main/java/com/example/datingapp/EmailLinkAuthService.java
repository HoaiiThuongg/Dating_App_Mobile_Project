package com.example.datingapp;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;

import com.google.firebase.auth.ActionCodeSettings;
import com.google.firebase.auth.AuthCredential;
import com.google.firebase.auth.EmailAuthProvider;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;

public class EmailLinkAuthService {

    private final FirebaseAuth mAuth;
    private final Context mContext;
    private final SharedPreferences prefs;

    //1. Đăng kí tài khoản bằng email: Gửi link xác thực (có thể gửi lai) -> kiểm tra -> tạo tài khoản với mật khẩu
        // trình tự: sendVerifyEmail-> handleVerifyEmail -> setPassword (hàm gửi lại link xác thực resendSignInLink)
    //2. Đặt lại mật khẩu: Gửi link reset mật khẩu qua email
        // trình tự: sendPasswordResetEmail -> handlePasswordResetEmail -> confirmPasswordReset
    //3. Đăng nhập tài khoản bằng mail và mật khẩu: loginWithEmailPassword
    public EmailLinkAuthService(Context context) {
        this.mContext = context.getApplicationContext();
        mAuth = FirebaseAuth.getInstance();
        prefs = context.getSharedPreferences("prefs", Context.MODE_PRIVATE);
    }

    public interface AuthCallback {
        void onSuccess(String message);
        void onFailure(String error);
        void onEmailSent(String message);
    }
    public void sendVerifyEmail(String email, AuthCallback callback) {
        if (!isValidEmail(email)) {
            callback.onFailure("Email không hợp lệ");
            return;
        }
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

    public void resendVerifyEmail (AuthCallback callback) {
        String email = prefs.getString("emailForSignIn", null);
        if (email == null) {
            callback.onFailure("Không tìm thấy email để gửi lại link");
            return;
        }
        sendVerifyEmail(email, callback);
    }

    public void handleVerifyEmail(Uri data, AuthCallback callback) {
        String oobCode = data.getQueryParameter("oobCode");
        if (oobCode != null) {
            FirebaseAuth.getInstance()
                    .applyActionCode(oobCode)
                    .addOnCompleteListener(task -> {
                        if (task.isSuccessful()) {
                            // mới thêm chưa test
                            String email = prefs.getString("emailForSignIn", null);
                            if(email != null) {
                                AuthCredential credential =
                                        EmailAuthProvider.getCredentialWithLink(email, data.toString());
                                mAuth.signInWithCredential(credential);
                            }
                            //
                            callback.onSuccess("Xác thực email thành công");
                        }
                        else {
                            callback.onFailure("Xác thực thất bại: " +
                                    task.getException().getMessage());
                        }
                    });
        }
        else {
            callback.onFailure("Không tìm thấy oobCode trong link!");
        }
    }
    public void setPassword(String password, AuthCallback callback) {
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

    public void sendPasswordResetEmail(String email, EmailLinkAuthService.AuthCallback callback) {
        ActionCodeSettings actionCodeSettings = ActionCodeSettings.newBuilder()
                .setUrl("https://dating-app-6b66a.firebaseapp.com")
                .setHandleCodeInApp(true)
                .setAndroidPackageName(
                        mContext.getPackageName(), true, null)
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

    public void resendPasswordResetEmail(String email, AuthCallback callback) {
        mAuth.sendPasswordResetEmail(email)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Đã gửi lại link đặt lại mật khẩu đến " + email +
                                ". Vui lòng kiểm tra hộp thư.");
                    } else {
                        String message = "Gửi lại link thất bại.";
                        if (task.getException() != null) {
                            message += " Lý do: " + task.getException().getMessage();
                        }
                        callback.onFailure(message);
                    }
                });
    }


    public void handlePasswordResetEmail(Uri data, AuthCallback callback) {
        String oobCode = data.getQueryParameter("oobCode");
        if (oobCode == null) {
            callback.onFailure("Không tìm thấy mã xác thực (oobCode) trong link!");
            return;
        }
        mAuth.verifyPasswordResetCode(oobCode)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        // Nếu hợp lệ, lưu oobCode để dùng cho bước đặt lại mật khẩu
                        prefs.edit().putString("resetOobCode", oobCode).apply();
                        callback.onSuccess("Link hợp lệ. Vui lòng nhập mật khẩu mới.");
                    } else {

                        callback.onFailure("Link không hợp lệ hoặc đã hết hạn: " + task.getException().getMessage());
                    }
                });
    }

    public void confirmPasswordReset(String newPassword, AuthCallback callback) {
        String oobCode = prefs.getString("resetOobCode", null);
        if (oobCode == null) {
            callback.onFailure("Chưa có mã xác thực reset mật khẩu. Hãy mở lại link trong email.");
            return;
        }
        mAuth.confirmPasswordReset(oobCode, newPassword)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        prefs.edit().remove("resetOobCode").apply();
                        callback.onSuccess("Đặt lại mật khẩu thành công.");
                    } else {
                        callback.onFailure("Đạt lại mật khẩu thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }


    private boolean isValidEmail(String email) {
        return email != null && android.util.Patterns.EMAIL_ADDRESS.matcher(email).matches();
    }


    public boolean isUserLoggedIn() {
        return mAuth.getCurrentUser() != null;
    }

    public FirebaseUser getCurrentUser() {
        return mAuth.getCurrentUser();
    }

    public void signOut() {
        // Cleanup preferences khi sign out
        prefs.edit()
                .remove("emailForSignIn")
                .remove("resetOobCode")
                .apply();
        mAuth.signOut();
    }
}
