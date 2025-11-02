package com.example.atry.backend;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;

import com.google.firebase.Firebase;
import com.google.firebase.auth.ActionCodeSettings;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;

public class EmailLinkAuthService {

    private final Context mContext;
    private final SharedPreferences prefs;

    private static final String PREF_EMAIL_FOR_SIGN_UP = "emailForSignUp";
    private static final String PREF_NEEDS_PASSWORD_SETUP = "needsPasswordSetup";
    private static final String PREF_PENDING_USER_EMAIL = "pendingUserEmail";
    private static final String PREF_RESET_OOB_CODE = "resetOobCode";


    //1. Đăng kí tài khoản bằng email: Gửi link xác thực (có thể gửi lai) -> kiểm tra -> tạo tài khoản với mật khẩu
    // trình tự: sendVerifyEmail-> handleVerifyEmail -> setPassword (hàm gửi lại link xác thực resendSignInLink)
    //2. Đặt lại mật khẩu: Gửi link reset mật khẩu qua email
    // trình tự: sendPasswordResetEmail -> handlePasswordResetEmail -> confirmPasswordReset
    //3. Đăng nhập tài khoản bằng mail và mật khẩu: loginWithEmailPassword
    public EmailLinkAuthService(Context context) {
        this.mContext = context.getApplicationContext();
        prefs = context.getSharedPreferences("prefs", Context.MODE_PRIVATE);
    }

    public interface AuthCallback {
        void onSuccess(String message);
        void onFailure(String error);
        void onEmailSent(String message);
    }

    public void registerWithEmailPassword(String email, String password) {
        if (email == null || email.trim().isEmpty()) {
           // callback.onFailure("Email không được để trống");
            return;
        }

        if (password == null || password.isEmpty()) {
           // callback.onFailure("Mật khẩu không được để trống");
            return;
        }

        if (!isValidEmail(email)) {
          //  callback.onFailure("Email không hợp lệ");
            return;
        }

        if (password.length() < 6) {
           // callback.onFailure("Mật khẩu phải có ít nhất 6 ký tự");
            return;
        }

       // Tạo user mới với email và password
        FirebaseManager.getInstance().getAuth()
                .createUserWithEmailAndPassword(email.trim(), password)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        FirebaseUser user = FirebaseManager.getInstance().getCurrentUser();
                        if (user != null) {
                            //callback.onSuccess("Đăng ký tài khoản thành công!");
                            UserService userService = new UserService();
                            userService.addUserToFirestore
                                    (FirebaseManager.getInstance().getCurrentUserId());
                        } else {
                            //callback.onFailure("Tạo tài khoản thành công nhưng không thể lấy thông tin user");
                        }
                    } else {
                        String errorMessage = getFirebaseAuthError(task.getException());
                       // callback.onFailure("Đăng ký thất bại: " + errorMessage);
                    }
                });
    }

    /**
     * Xử lý lỗi Firebase Authentication
     */
    private String getFirebaseAuthError(Exception exception) {
        if (exception == null) return "Lỗi không xác định";

        String errorCode = exception.getMessage();
        if (errorCode == null) return "Lỗi không xác định";

        if (errorCode.contains("EMAIL_EXISTS")) {
            return "Email đã được sử dụng";
        } else if (errorCode.contains("INVALID_EMAIL")) {
            return "Email không hợp lệ";
        } else if (errorCode.contains("WEAK_PASSWORD")) {
            return "Mật khẩu quá yếu";
        } else if (errorCode.contains("USER_NOT_FOUND") || errorCode.contains("INVALID_LOGIN_CREDENTIALS")) {
            return "Email hoặc mật khẩu không đúng";
        } else if (errorCode.contains("WRONG_PASSWORD")) {
            return "Mật khẩu không đúng";
        } else if (errorCode.contains("TOO_MANY_REQUESTS")) {
            return "Quá nhiều yêu cầu. Vui lòng thử lại sau";
        } else {
            return errorCode;
        }
    }


    public void sendVerifyEmail(String email, AuthCallback callback) {
        if (!isValidEmail(email)) {
            callback.onFailure("Email không hợp lệ");
            return;
        }
        String continueUrl = "https://dating-app-6b66a.firebaseapp.com/setpassword?email=" + email;
        //String continueUrl = "https://test-55618.firebaseapp.com/setpassword?email=" + email;


        ActionCodeSettings actionCodeSettings = ActionCodeSettings.newBuilder()
                .setUrl(continueUrl) // Firebase sẽ chuyển hướng đến đây sau khi xác minh mã
                .setHandleCodeInApp(true) // Bật chế độ xử lý liên kết trong ứng dụng
                .setAndroidPackageName(
                        mContext.getPackageName(),
                        true, // Mở Play Store nếu chưa cài app
                        null // Dùng mặc định Play Store URL
                )
                .build();

        FirebaseManager.getInstance().getAuth().sendSignInLinkToEmail(email, actionCodeSettings)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        prefs.edit().putString(PREF_EMAIL_FOR_SIGN_UP, email).apply();
                        callback.onEmailSent("Đã gửi link xác thực đến email của bạn.");
                    } else {
                        callback.onFailure("Gửi link thất bại: " +
                                (task.getException() != null ? task.getException().getMessage() : ""));
                    }
                });
    }

    public void resendVerifyEmail (AuthCallback callback) {
        String email = prefs.getString(PREF_EMAIL_FOR_SIGN_UP, null);
        if (email == null) {
            callback.onFailure("Không tìm thấy email để gửi lại link");
            return;
        }
        sendVerifyEmail(email, callback);
    }

    public void handleVerifyEmail(Uri data, AuthCallback callback) {
        String email = prefs.getString(PREF_EMAIL_FOR_SIGN_UP, null);
        if (email == null) {
            callback.onFailure("Không tìm thấy email đăng ký.");
            return;
        }
        String link = data.toString();
        if (!FirebaseManager.getInstance().getAuth().isSignInWithEmailLink(link)) {
            callback.onFailure("Link không hợp lệ hoặc đã hết hạn.");
            return;
        }

        FirebaseManager.getInstance().getAuth().signInWithEmailLink(email, link)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        if (FirebaseManager.getInstance().getCurrentUser() != null) {
                            prefs.edit()
                                    .putBoolean(PREF_NEEDS_PASSWORD_SETUP, true)
                                    .putString(PREF_PENDING_USER_EMAIL, email)
                                    .apply();
                            callback.onSuccess("Email đã được xác thực. Vui lòng đặt mật khẩu để hoàn tất đăng ký.");
                        }
                    } else {
                        callback.onFailure("Xác thực thất bại: " +
                                task.getException().getMessage());
                    }
                });
    }
    public void setPassword(String password, AuthCallback callback) {
        FirebaseUser user = FirebaseManager.getInstance().getCurrentUser();
        if (user == null) {
            callback.onFailure("Không tìm thấy người dùng. Hãy xác thực email trước.");
            return;
        }
        user.updatePassword(password)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        prefs.edit()
                                .remove(PREF_EMAIL_FOR_SIGN_UP)
                                .remove(PREF_NEEDS_PASSWORD_SETUP)
                                .remove(PREF_PENDING_USER_EMAIL)
                                .apply();
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

        FirebaseManager.getInstance().getAuth().signInWithEmailAndPassword(email, password)
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

        FirebaseManager.getInstance().getAuth().sendPasswordResetEmail(email, actionCodeSettings)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Email reset mật khẩu đã được gửi");
                    } else {
                        callback.onFailure("Gửi email reset mật khẩu thất bại");
                    }
                });
    }

    public void resendPasswordResetEmail(String email, AuthCallback callback) {
        FirebaseManager.getInstance().getAuth().sendPasswordResetEmail(email)
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
        FirebaseManager.getInstance().getAuth().verifyPasswordResetCode(oobCode)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        // Nếu hợp lệ, lưu oobCode để dùng cho bước đặt lại mật khẩu
                        prefs.edit().putString(PREF_RESET_OOB_CODE, oobCode).apply();
                        callback.onSuccess("Link hợp lệ. Vui lòng nhập mật khẩu mới.");
                    } else {

                        callback.onFailure("Link không hợp lệ hoặc đã hết hạn: " + task.getException().getMessage());
                    }
                });
    }

    public void confirmPasswordReset(String newPassword, AuthCallback callback) {
        String oobCode = prefs.getString(PREF_RESET_OOB_CODE, null);
        if (oobCode == null) {
            callback.onFailure("Chưa có mã xác thực reset mật khẩu. Hãy mở lại link trong email.");
            return;
        }
        FirebaseManager.getInstance().getAuth().confirmPasswordReset(oobCode, newPassword)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        prefs.edit().remove(PREF_RESET_OOB_CODE).apply();
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


   public void signOut() {
        // Cleanup preferences khi sign out
        prefs.edit()
                .remove(PREF_EMAIL_FOR_SIGN_UP)
                .remove(PREF_NEEDS_PASSWORD_SETUP)
                .remove(PREF_PENDING_USER_EMAIL)
                .remove(PREF_RESET_OOB_CODE)
                .apply();
        FirebaseManager.getInstance().signOut();
    }
}