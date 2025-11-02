package com.example.atry;

import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import androidx.annotation.NonNull;

import java.util.HashMap;
import java.util.Map;

/**
 * Custom Unity Activity để nhận/gửi data giữa Android app và Unity game
 *
 * Flow:
 * 1. ChatActivity gọi launchGame() với matchId, userId, opponentId
 * 2. onCreate() nhận data và gửi cho Unity qua UnitySendMessage
 * 3. Unity xác định Host/Client
 * 4. Host tạo room → gọi onJoinCodeCreated() → Lưu Firebase
 * 5. Client lắng nghe Firebase → Nhận joinCode → Gửi cho Unity
 * 6. Cả 2 connect và chơi game
 */
public class CustomUnityPlayerActivity extends UnityPlayerActivity {

    private static final String TAG = "UnityActivity";

    private String matchId;
    private String userId;
    private String opponentId;

    private DatabaseReference firebaseDatabase;
    private ValueEventListener joinCodeListener;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Log.d(TAG, "CustomUnityPlayerActivity created");

        // Khởi tạo Firebase
        firebaseDatabase = FirebaseDatabase.getInstance().getReference();

        // Lấy data từ Intent
        if (getIntent() != null) {
            matchId = getIntent().getStringExtra("MATCH_ID");
            userId = getIntent().getStringExtra("USER_ID");
            opponentId = getIntent().getStringExtra("OPPONENT_ID");

            Log.d(TAG, "Match ID: " + matchId);
            Log.d(TAG, "User ID: " + userId);
            Log.d(TAG, "Opponent ID: " + opponentId);

            // Validate data
            if (matchId == null || userId == null || opponentId == null) {
                Log.e(TAG, "Missing required data!");
                Toast.makeText(this, "Lỗi: Thiếu thông tin!", Toast.LENGTH_SHORT).show();
                finish();
                return;
            }

            // Đợi Unity khởi tạo xong (2 giây), sau đó gửi data
            new android.os.Handler().postDelayed(() -> {
                sendMatchInfoToUnity();
                listenForJoinCode();
            }, 2000);
        }
    }

    /**
     * Gửi thông tin match cho Unity
     * Unity sẽ nhận qua AndroidBridge.OnMatchInfoReceived()
     */
    private void sendMatchInfoToUnity() {
        try {
            // Tạo JSON
            String json = String.format(
                "{\"matchId\":\"%s\",\"userId\":\"%s\",\"opponentId\":\"%s\"}",
                matchId, userId, opponentId
            );

            Log.d(TAG, "Sending to Unity: " + json);

            // Gửi cho Unity GameObject "NetworkManager", method "OnMatchInfoReceived"
            UnityPlayer.UnitySendMessage("NetworkManager", "OnMatchInfoReceived", json);

            Toast.makeText(this, "Đang kết nối...", Toast.LENGTH_SHORT).show();
        } catch (Exception e) {
            Log.e(TAG, "Error sending data to Unity: " + e.getMessage());
        }
    }

    /**
     * Client lắng nghe Firebase để nhận join code từ Host
     */
    private void listenForJoinCode() {
        DatabaseReference sessionRef = firebaseDatabase
            .child("game_sessions")
            .child(matchId);

        joinCodeListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                if (snapshot.exists() && snapshot.hasChild("joinCode")) {
                    String joinCode = snapshot.child("joinCode").getValue(String.class);

                    if (joinCode != null && !joinCode.isEmpty()) {
                        Log.d(TAG, "Got join code from Firebase: " + joinCode);

                        // Gửi join code cho Unity
                        UnityPlayer.UnitySendMessage(
                            "NetworkManager",
                            "OnJoinCodeFromFirebase",
                            joinCode
                        );

                        // Không cần lắng nghe nữa
                        sessionRef.removeEventListener(this);
                    }
                }
            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.e(TAG, "Firebase error: " + error.getMessage());
                Toast.makeText(
                    CustomUnityPlayerActivity.this,
                    "Lỗi kết nối Firebase",
                    Toast.LENGTH_SHORT
                ).show();
            }
        };

        sessionRef.addValueEventListener(joinCodeListener);
        Log.d(TAG, "Listening for join code on Firebase...");
    }

    /**
     * Được gọi từ Unity khi Host tạo xong join code
     * Lưu join code vào Firebase để Client có thể đọc
     */
    public void onJoinCodeCreated(String matchId, String joinCode) {
        Log.d(TAG, "Unity created join code: " + joinCode + " for match: " + matchId);

        DatabaseReference sessionRef = firebaseDatabase
            .child("game_sessions")
            .child(matchId);

        Map<String, Object> sessionData = new HashMap<>();
        sessionData.put("joinCode", joinCode);
        sessionData.put("hostId", userId);
        sessionData.put("status", "waiting");
        sessionData.put("timestamp", System.currentTimeMillis());

        sessionRef.setValue(sessionData)
            .addOnSuccessListener(aVoid -> {
                Log.d(TAG, "Join code saved to Firebase successfully");
                runOnUiThread(() ->
                    Toast.makeText(this, "Đang đợi đối phương...", Toast.LENGTH_SHORT).show()
                );
            })
            .addOnFailureListener(e -> {
                Log.e(TAG, "Failed to save join code: " + e.getMessage());
                runOnUiThread(() ->
                    Toast.makeText(this, "Lỗi lưu dữ liệu", Toast.LENGTH_SHORT).show()
                );
            });
    }

    /**
     * Được gọi từ Unity khi game kết thúc
     */
    public void onGameEnded() {
        Log.d(TAG, "Game ended, cleaning up...");

        // Update Firebase
        if (matchId != null) {
            firebaseDatabase
                .child("game_sessions")
                .child(matchId)
                .child("status")
                .setValue("ended");
        }

        // Đóng activity và quay về chat
        runOnUiThread(this::finish);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();

        // Remove Firebase listener
        if (joinCodeListener != null && matchId != null) {
            firebaseDatabase
                .child("game_sessions")
                .child(matchId)
                .removeEventListener(joinCodeListener);
        }

        Log.d(TAG, "CustomUnityPlayerActivity destroyed");
    }
}
