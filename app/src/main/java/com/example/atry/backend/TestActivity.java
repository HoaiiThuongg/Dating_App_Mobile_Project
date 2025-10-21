package com.example.atry.backend;

import android.os.Bundle;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import com.google.firebase.auth.FirebaseUser;

public class TestActivity extends AppCompatActivity {
    private static final String TAG = "EmailLinkTest";
    private EmailLinkAuthService authHelper;
    private TextView messageView;

    private final String testEmail = "linhngocnguyen27222@gmail.com";
    private final String testPassword = "123456";
    private final String imagePath = "/storage/emulated/0/DCIM/Camera/Screenshot 2025-10-06 101154.png";

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        ScrollView scrollView = new ScrollView(this);
        messageView = new TextView(this);
        messageView.setTextSize(16f);
        scrollView.addView(messageView);
        setContentView(scrollView);

        authHelper = new EmailLinkAuthService(this);

        //testEmailLinkRegistration();
        testLoginWithEmailPassword();
        //testUploadImageToCloudinary();

       /* try {
            testUpdateUserInfo();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }*/
        //testLoadProfiles();

    }


    /*private void testUpdateUserInfo() throws IOException {
        appendMessage(" Bắt đầu test updateUserInfo()", Color.BLACK);
        FirebaseUser currentUser = FirebaseAuth.getInstance().getCurrentUser();
        if (currentUser == null) {
            appendMessage("⚠Chưa đăng nhập! Hãy đăng nhập trước khi test.", Color.RED);
            return;
        }

        String userId = currentUser.getUid();
        new Thread(() -> {
            try {
                CloudinaryHelper cloudinaryHelper = new CloudinaryHelper();
                String profileImageUrl = cloudinaryHelper.uploadImage(imagePath);

                if (profileImageUrl == null || profileImageUrl.isEmpty()) {
                    runOnUiThread(() -> appendMessage(" Upload ảnh thất bại (URL rỗng)", Color.RED));
                    return;
                }

                User testUser = new User(
                        userId,
                        "Lin",
                        80,
                        "Tôi ....",
                        "Male",
                        "hmmm",
                        profileImageUrl
                );

                UserService userService = new UserService();
                userService.updateUserInfo(testUser, new UserService.UserCallback() {
                    @Override
                    public void onSuccess(String message) {
                        appendMessage("onSuccess: " + message, Color.GREEN);
                    }

                    @Override
                    public void onFailure(String errorMessage) {
                        appendMessage("onFailure: " + errorMessage, Color.RED);
                    }
                });
            }
            catch (Exception e) {
                runOnUiThread(() -> appendMessage("Lỗi: " + e.getMessage(), Color.RED));
                Log.e(TAG, "Upload hoặc update thất bại", e);
            }
        }).start();
    }*/

    private void testLoginWithEmailPassword () {
                appendMessage("🔹 Bắt đầu test đăng nhập với email và mật khẩu", 0xFF000000);

                authHelper.loginWithEmailPassword(testEmail, testPassword, new EmailLinkAuthService.AuthCallback() {
                    @Override
                    public void onSuccess(String message) {
                        appendMessage("onSuccess: " + message, 0xFF00AA00);
                        appendMessage("Người dùng đã đăng nhập thành công!", 0xFF0000AA);
                    }

                    @Override
                    public void onFailure(String error) {
                        appendMessage("onFailure: " + error, 0xFFAA0000);
                    }

                    @Override
                    public void onEmailSent(String message) {
                        appendMessage("onEmailSent (không dùng ở login): " + message, 0xFF888888);
                    }
                });
            }



            private void appendMessage (String text,int color){
                runOnUiThread(() -> {
                    Spannable spannable = new SpannableString(text + "\n");
                    spannable.setSpan(new ForegroundColorSpan(color), 0, spannable.length(), Spannable.SPAN_EXCLUSIVE_EXCLUSIVE);
                    messageView.append(spannable);
                });
            }



    /*private void testEmailLinkRegistration() {
        appendMessage("Gửi link xác thực đến email: " + testEmail, 0xFF000000);

        authHelper.sendSignInLink(testEmail, new FirebaseEmailLinkAuthHelper.AuthCallback() {
            @Override
            public void onSuccess(String message) {
                appendMessage("onSuccess: " + message, 0xFF00AA00); // xanh lá
            }

            @Override
            public void onFailure(String error) {
                appendMessage("onFailure: " + error, 0xFFAA0000); // đỏ
            }

            @Override
            public void onEmailSent(String message) {
                appendMessage("onEmailSent: " + message, 0xFF0000FF); // xanh dương
                appendMessage("Link đã được gửi tới email thật.", 0xFF000000);

                appendMessage("Bước tiếp theo: click link trong email thật để tiếp tục.", 0xFF000000);
            }
        });
    }
    @Override
    protected void onNewIntent(android.content.Intent intent) {
        super.onNewIntent(intent);

        if (intent != null && intent.getData() != null) {
            String linkFromEmail = intent.getData().toString();
            appendMessage("Nhận link từ email: " + linkFromEmail, 0xFF000000);
            handleEmailLink(linkFromEmail);
        }
    }

    private void handleEmailLink(String link) {
        authHelper.handleSignInLink(link, new FirebaseEmailLinkAuthHelper.AuthCallback() {
            @Override
            public void onSuccess(String message) {
                appendMessage("handleSignInLink onSuccess: " + message, 0xFF00AA00);
                appendMessage("Đặt mật khẩu cho tài khoản", 0xFF000000);
                setUserPassword(testPassword);
            }

            @Override
            public void onFailure(String error) {
                appendMessage("handleSignInLink onFailure: " + error, 0xFFAA0000);
            }

            @Override
            public void onEmailSent(String message) {}
        });
    }

    private void setUserPassword(String password) {
        authHelper.setPasswordForCurrentUser(password, new FirebaseEmailLinkAuthHelper.AuthCallback() {
            @Override
            public void onSuccess(String message) {
                appendMessage("setPasswordForCurrentUser onSuccess: " + message, 0xFF00AA00);

                appendMessage("Thử đăng nhập bằng email + password", 0xFF000000);
                loginUser(testEmail, password);
            }

            @Override
            public void onFailure(String error) {
                appendMessage("setPasswordForCurrentUser onFailure: " + error, 0xFFAA0000);
            }

            @Override
            public void onEmailSent(String message) {}
        });
    }

    private void loginUser(String email, String password) {
        authHelper.loginWithEmailPassword(email, password, new FirebaseEmailLinkAuthHelper.AuthCallback() {
            @Override
            public void onSuccess(String message) {
                appendMessage("loginWithEmailPassword onSuccess: " + message, 0xFF00AA00);
                appendMessage("🎉 Test hoàn tất!", 0xFF0000AA);
            }

            @Override
            public void onFailure(String error) {
                appendMessage("loginWithEmailPassword onFailure: " + error, 0xFFAA0000);
            }

            @Override
            public void onEmailSent(String message) {}
        });
    }}*/
}



/* if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.TIRAMISU) {
            // Android 13+
            if (checkSelfPermission(android.Manifest.permission.READ_MEDIA_IMAGES)
                    != PackageManager.PERMISSION_GRANTED) {
                requestPermissions(new String[]{android.Manifest.permission.READ_MEDIA_IMAGES}, 101);
            }
        } else {
            // Android 12 trở xuống
            if (checkSelfPermission(android.Manifest.permission.READ_EXTERNAL_STORAGE)
                    != PackageManager.PERMISSION_GRANTED) {
                requestPermissions(new String[]{android.Manifest.permission.READ_EXTERNAL_STORAGE}, 102);
            }
        }*/