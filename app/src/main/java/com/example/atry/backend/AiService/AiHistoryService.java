package com.example.atry.backend.AiService;

import android.util.Log;

import androidx.annotation.NonNull;

import com.example.atry.backend.Message;
import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.Tasks;
import com.google.firebase.firestore.CollectionReference;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.EventListener;
import com.google.firebase.firestore.FieldValue;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.ListenerRegistration;
import com.google.firebase.firestore.Query;
import com.google.firebase.firestore.QuerySnapshot;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class AiHistoryService {
    private static final String TAG = "AiHistoryService";
    private final FirebaseFirestore db;

    public AiHistoryService() {
        db = FirebaseFirestore.getInstance();
    }

    private CollectionReference messagesRef(String userId) {
        return db.collection("aiChatBot").document(userId).collection("messages");
    }

    // Gửi tin nhắn
    public void sendMessage(String userId, String sender, String content, ChatCallback callback) {
        Map<String, Object> message = new HashMap<>();
        message.put("senderId", sender);
        message.put("content", content);
        message.put("timestamp", FieldValue.serverTimestamp());

        messagesRef(userId)
                .add(message)
                .addOnSuccessListener(doc -> callback.onSuccess("Tin nhắn đã gửi"))
                .addOnFailureListener(e -> callback.onFailure("Lỗi: " + e.getMessage()));
    }

    // Lấy lịch sử chat gần đây (limit = 50 mặc định)
    public void getRecentMessages(String userId, int limit, ChatCallbackWithList callback) {
        messagesRef(userId)
                .orderBy("timestamp", Query.Direction.ASCENDING) // sắp xếp theo thời gian
                .limitToLast(limit) // lấy n message gần nhất
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    List<Message> messages = new ArrayList<>();
                    for (DocumentSnapshot doc : querySnapshot.getDocuments()) {
                        Message msg = doc.toObject(Message.class);
                        if (msg != null) {
                            msg.setMessageId(doc.getId()); // lưu luôn messageId nếu cần
                            messages.add(msg);
                        }
                    }
                    callback.onSuccess(messages);
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi load lịch sử: " + e.getMessage()));
    }


    // Nghe tin nhắn realtime
    public ListenerRegistration listenNewMessages(String userId, MessageListener listener) {
        // lưu tạm danh sách messageId đã nhận
        Set<String> receivedMessageIds = new HashSet<>();

        return messagesRef(userId)
                .orderBy("timestamp", Query.Direction.ASCENDING)
                .addSnapshotListener((snapshots, e) -> {
                    if (e != null) {
                        Log.e(TAG, "Lỗi khi nghe tin nhắn bot: ", e);
                        return;
                    }
                    if (snapshots != null) {
                        List<Message> newMessages = new ArrayList<>();
                        for (DocumentSnapshot doc : snapshots.getDocuments()) {
                            String messageId = doc.getId();
                            if (!receivedMessageIds.contains(messageId)) {
                                Message msg = doc.toObject(Message.class);
                                if (msg != null) {
                                    msg.setMessageId(messageId);
                                    newMessages.add(msg);
                                    receivedMessageIds.add(messageId);
                                }
                            }
                        }
                        if (!newMessages.isEmpty()) {
                            listener.onMessagesReceived(newMessages);
                        }
                    }
                });
    }


    // Callback interfaces
    public interface ChatCallback {
        void onSuccess(String msg);
        void onFailure(String error);
    }

    public interface ChatCallbackWithList {
        void onSuccess(List<Message> messages);
        void onFailure(String error);
    }

    public interface MessageListener {
        void onMessagesReceived(List<Message> messages);
    }
}
