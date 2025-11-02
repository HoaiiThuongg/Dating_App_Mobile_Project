package com.example.atry;

import android.app.Activity;
import android.content.Intent;
import android.util.Log;

/**
 * Helper class để launch Unity game từ Chat Activity
 *
 * Usage trong ChatActivity:
 * UnityBridge.launchGame(this, matchId, currentUserId, opponentUserId);
 */
public class UnityBridge {

    private static final String TAG = "UnityBridge";

    /**
     * Launch Unity game với thông tin match
     *
     * @param activity Activity gọi (ChatActivity)
     * @param matchId ID của match (để sync trên Firebase)
     * @param userId ID của user hiện tại
     * @param opponentId ID của đối phương
     */
    public static void launchGame(Activity activity, String matchId, String userId, String opponentId) {
        if (activity == null) {
            Log.e(TAG, "Activity is null!");
            return;
        }

        if (matchId == null || userId == null || opponentId == null) {
            Log.e(TAG, "Missing required parameters!");
            return;
        }

        Log.d(TAG, String.format(
            "Launching game - Match: %s, User: %s, Opponent: %s",
            matchId, userId, opponentId
        ));

        Intent intent = new Intent(activity, CustomUnityPlayerActivity.class);
        intent.putExtra("MATCH_ID", matchId);
        intent.putExtra("USER_ID", userId);
        intent.putExtra("OPPONENT_ID", opponentId);

        // Optional: Flags để Unity activity nằm trong task riêng
        // intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);

        activity.startActivity(intent);
    }

    /**
     * Launch game và đợi kết quả
     * Dùng startActivityForResult nếu cần biết kết quả game
     */
    public static void launchGameForResult(Activity activity, String matchId,
                                          String userId, String opponentId, int requestCode) {
        if (activity == null) {
            Log.e(TAG, "Activity is null!");
            return;
        }

        Intent intent = new Intent(activity, CustomUnityPlayerActivity.class);
        intent.putExtra("MATCH_ID", matchId);
        intent.putExtra("USER_ID", userId);
        intent.putExtra("OPPONENT_ID", opponentId);

        activity.startActivityForResult(intent, requestCode);
    }
}
