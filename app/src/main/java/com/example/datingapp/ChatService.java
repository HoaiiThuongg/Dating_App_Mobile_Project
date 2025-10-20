package com.example.datingapp;

import android.util.Log;

import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.*;
import java.util.*;

public class ChatService {
    private static final String TAG = "ChatService";
    private final FirebaseFirestore db;
    private final FirebaseAuth auth;

    public ChatService() {
        db = FirebaseFirestore.getInstance();
        auth = FirebaseAuth.getInstance();
    }

    public void sendMessage(String matchId, String receiverId, String content, ChatCallback callback) {
        String senderId = auth.getCurrentUser().getUid();

        Map<String, Object> message = new HashMap<>();
        message.put("senderId", senderId);
        message.put("receiverId", receiverId);
        message.put("text", content);
        message.put("timestamp", FieldValue.serverTimestamp());
        message.put("type", "text");

        db.collection("matches")
                .document(matchId)
                .collection("messages")
                .add(message)
                .addOnSuccessListener(doc -> callback.onSuccess("Tin nhắn đã được gửi"))
                .addOnFailureListener(e -> {
                    Log.e(TAG, "Lỗi khi gửi tin nhắn", e);
                    callback.onFailure("Lỗi: " + e.getMessage());
                });
    }

    public ListenerRegistration listenForMessages(String matchId, MessageListener listener) {
        return db.collection("matches")
                .document(matchId)
                .collection("messages")
                .orderBy("timestamp", Query.Direction.ASCENDING)
                .addSnapshotListener((snapshots, e) -> {
                    if (e != null) {
                        Log.e(TAG, "Lỗi khi nghe tin nhắn: ", e);
                        return;
                    }

                    if (snapshots != null) {
                        List<Message> messageList = new ArrayList<>();
                        for (DocumentSnapshot doc : snapshots.getDocuments()) {
                            Message msg = doc.toObject(Message.class);
                            messageList.add(msg);
                        }
                        listener.onMessagesReceived(messageList);
                    }
                });
    }

    public String getMatchId(String user1, String userBId) {
        return user1.compareTo(userBId) < 0 ?
                user1 + "_" + userBId : userBId + "_" + user1;
    }

    public void getMatchedUsers(MatchedUsersCallback callback) {
        String currentUserId = auth.getCurrentUser().getUid();

        // tao 2 task truy vân cho nhanh
        Task<QuerySnapshot> task1 = db.collection("matching")
                .whereEqualTo("user1", currentUserId)
                .get();
        Task<QuerySnapshot> task2 = db.collection("matching")
                .whereEqualTo("user2", currentUserId)
                .get();
        Tasks.whenAllSuccess(task1, task2).addOnSuccessListener(results -> {
            List<String> matchedUserIds = new ArrayList<>();
            QuerySnapshot querySnapshot1 = (QuerySnapshot) results.get(0);
            for (DocumentSnapshot doc : querySnapshot1.getDocuments()) {
                String user2 = doc.getString("user2");
                if (user2 != null) {
                    matchedUserIds.add(user2);
                }
            }
            QuerySnapshot querySnapshot2 = (QuerySnapshot) results.get(1);
            for (DocumentSnapshot doc : querySnapshot2.getDocuments()) {
                String user1 = doc.getString("user1");
                if (user1 != null) {
                    matchedUserIds.add(user1);
                }
            }
            callback.onSuccess(matchedUserIds);
        }).addOnFailureListener(e -> {
            Log.e(TAG, "Lỗi khi truy vấn matching", e);
            callback.onFailure(e.getMessage());
        });
    }

    // khi dùng:getMatchedUsers(new MatchedUsersCallback() {
    //    @Override
    //    public void onSuccess(List<String> matchedUserIds) {
    //        // ✅ matchedUserIds đã có dữ liệu ở đây
    //        Log.d("MATCHES", "Matched users: " + matchedUserIds);
    //
    //        // Ví dụ: hiển thị lên RecyclerView hoặc TextView
    //        showMatchedUsers(matchedUserIds);
    //    }
    //
    //    @Override
    //    public void onFailure(String errorMessage) {
    //        Log.e("MATCHES", "Lỗi: " + errorMessage);
    //        Toast.makeText(MainActivity.this, "Lỗi: " + errorMessage, Toast.LENGTH_SHORT).show();
    //    }
    //});


    public interface MatchedUsersCallback {
        void onSuccess(List<String> matchedUserIds);
        void onFailure(String error);
    }
    public interface ChatCallback {
        void onSuccess(String message);
        void onFailure(String error);
    }

    public interface MessageListener {
        void onMessagesReceived(List<Message> messages);
    }
}
