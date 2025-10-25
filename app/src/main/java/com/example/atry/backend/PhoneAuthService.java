package com.example.atry.backend;

import android.app.Activity;
import android.util.Log;

import androidx.annotation.NonNull;

import com.google.firebase.FirebaseException;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.auth.PhoneAuthCredential;
import com.google.firebase.auth.PhoneAuthOptions;
import com.google.firebase.auth.PhoneAuthProvider;
import com.google.firebase.auth.PhoneAuthProvider.ForceResendingToken;
import com.google.firebase.firestore.FieldValue;
import com.google.firebase.firestore.FirebaseFirestore;

import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.FieldValue;


public class PhoneAuthService {

    private final FirebaseAuth mAuth;
    private final Activity activity;
    private String verificationId;
    private ForceResendingToken resendToken;
    private static final String TAG = "Dating App";

    public PhoneAuthService(Activity activity) {
        this.activity = activity;
        mAuth = FirebaseAuth.getInstance();
    }

    public interface AuthCallback {
        void onSuccess(String message);
        void onFailure(String error);
        void onCodeSent(String verificationId);
    }

    public void sendOTPVerification(String phoneNumber, AuthCallback callback) {
        PhoneAuthOptions options = PhoneAuthOptions.newBuilder(mAuth)
                .setPhoneNumber(phoneNumber)
                .setTimeout(60L, TimeUnit.SECONDS)
                .setActivity(activity)
                .setCallbacks(new PhoneAuthProvider.OnVerificationStateChangedCallbacks() {
                    @Override
                    public void onVerificationCompleted(@NonNull PhoneAuthCredential credential) {
                        // Tự động xác thực (trong một số trường hợp)
                        signInWithCredential(credential, callback);
                    }

                    @Override
                    public void onVerificationFailed(@NonNull FirebaseException e) {
                        callback.onFailure(e.getMessage());
                    }

                    @Override
                    public void onCodeSent(@NonNull String verificationId,
                                           @NonNull ForceResendingToken token) {
                        PhoneAuthService.this.verificationId = verificationId;
                        resendToken = token;
                        callback.onCodeSent(verificationId);
                        callback.onSuccess("Mã OTP đã được gửi");
                    }
                })
                .build();

        PhoneAuthProvider.verifyPhoneNumber(options);
    }

    public void verifyOTP(String OTP, AuthCallback callback) {
        if (verificationId == null) {
            callback.onFailure("Chưa có mã xác thực. Vui lòng gửi OTP trước.");
            return;
        }
        PhoneAuthCredential credential = PhoneAuthProvider.getCredential(verificationId, OTP);
        signInWithCredential(credential, callback);
    }

    public void resendVerificationOTP(String phoneNumber, AuthCallback callback) {
        if (resendToken == null) {
            sendOTPVerification(phoneNumber, callback);
            return;
        }

        PhoneAuthOptions options = PhoneAuthOptions.newBuilder(mAuth)
                .setPhoneNumber(phoneNumber)
                .setTimeout(60L, TimeUnit.SECONDS)
                .setActivity(activity)
                .setForceResendingToken(resendToken)
                .setCallbacks(new PhoneAuthProvider.OnVerificationStateChangedCallbacks() {
                    @Override
                    public void onVerificationCompleted(@NonNull PhoneAuthCredential credential) {
                        signInWithCredential(credential, callback);
                    }

                    @Override
                    public void onVerificationFailed(@NonNull FirebaseException e) {
                        callback.onFailure(e.getMessage());
                    }

                    @Override
                    public void onCodeSent(@NonNull String verificationId,
                                           @NonNull ForceResendingToken token) {
                        PhoneAuthService.this.verificationId = verificationId;
                        resendToken = token;
                        callback.onCodeSent(verificationId);
                        callback.onSuccess("Mã OTP đã được gửi lại");
                    }
                })
                .build();

        PhoneAuthProvider.verifyPhoneNumber(options);
    }

    private void signInWithCredential(PhoneAuthCredential credential, AuthCallback callback) {
        mAuth.signInWithCredential(credential)
                .addOnCompleteListener(activity, task -> {
                    if (task.isSuccessful()) {
                        callback.onSuccess("Xác thực thành công");
                        FirebaseUser firebaseUser = mAuth.getCurrentUser();
                        if (firebaseUser != null) {
                            saveUserToFirestore(mAuth.getCurrentUser(), mAuth.getCurrentUser().getPhoneNumber());
                        }
                        else {
                            Log.e(TAG, "User chưa đăng nhập, không thể lưu dữ liệu");
                        }
                    } else {
                        callback.onFailure(task.getException() != null ?
                                task.getException().getMessage() : "Xác thực thất bại");
                    }
                });
    }

    private void saveUserToFirestore(FirebaseUser user, String phoneNumber) {
        FirebaseFirestore db = FirebaseFirestore.getInstance();

        Map<String, Object> userData = new HashMap<>();
        userData.put("phoneNumber", phoneNumber);
        userData.put("uid", user.getUid());
        userData.put("createdAt", FieldValue.serverTimestamp());

        db.collection("users").document(user.getUid())
                .set(userData)
                .addOnSuccessListener(aVoid -> Log.d(TAG, "User đã lưu vào Firestore"))
                .addOnFailureListener(e -> Log.e(TAG, "Lỗi khi lưu vào Firestore", e));
    }

    public String getCurrentUserPhone() {
        if (mAuth.getCurrentUser() != null) {
            return mAuth.getCurrentUser().getPhoneNumber();
        }
        return "";
    }


}


