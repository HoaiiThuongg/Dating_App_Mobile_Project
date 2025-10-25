package com.example.atry.backend;

import static android.content.ContentValues.TAG;

import android.util.Log;

import com.google.firebase.firestore.DocumentChange;
import com.google.firebase.firestore.DocumentSnapshot;
import com.google.firebase.firestore.FirebaseFirestore;
import com.google.firebase.firestore.ListenerRegistration;
import com.google.firebase.firestore.Query;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import com.google.firebase.firestore.*;
import java.util.*;

public class MessageService {
    private final FirebaseFirestore db = FirebaseFirestore.getInstance();
    private ListenerRegistration messageListener;

    private boolean isInitialLoad = true;
    private long lastMessageTimestamp = 0;

    public void getInitialMessages(String matchId, LoadMessagesCallback callback) {
        db.collection("messages")
                .whereEqualTo("matchId", matchId)
                .orderBy("date", Query.Direction.DESCENDING)
                .limit(50)
                .get()
                .addOnSuccessListener(queryDocumentSnapshots -> {
                    List<Message> messages = new ArrayList<>();
                    for (DocumentSnapshot doc : queryDocumentSnapshots.getDocuments()) {
                        Message msg = doc.toObject(Message.class);
                        if (msg != null) {
                            msg.setMessageId(doc.getId());
                            messages.add(msg);
                            if (msg.getCreateAt() != null && msg.getCreateAt().getTime() > lastMessageTimestamp) {
                                lastMessageTimestamp = msg.getCreateAt().getTime();
                            }
                        }
                    }
                    Collections.reverse(messages);
                    isInitialLoad = false;
                    callback.onSuccess(messages);
                })
                .addOnFailureListener(callback::onError);
    }

    // Mới chỉ lấy những tin nhắn mới, chưa tính đến trường hợp ng dùng sửa xóa tin nhắn
    public void listenForNewMessages(String matchId, LoadMessagesCallback callback) {
        // Chỉ lắng nghe tin nhắn mới hơn tin nhắn cuối cùng
        Query query = db.collection("messages")
                .whereEqualTo("matchId", matchId)
                .orderBy("date", Query.Direction.ASCENDING);

        // Nếu đã có tin nhắn, chỉ lấy tin nhắn mới hơn
        if (lastMessageTimestamp > 0) {
            query = query.startAfter(new Date(lastMessageTimestamp));
        }

        messageListener = query.addSnapshotListener((snapshots, error) -> {
            if (error != null) {
                callback.onError(error);
                return;
            }

            if (snapshots != null && !snapshots.isEmpty() && !isInitialLoad) {
                List<Message> newMessages = new ArrayList<>();
                for (DocumentChange dc : snapshots.getDocumentChanges()) {
                    if (dc.getType() == DocumentChange.Type.ADDED) {
                        Message newMsg = dc.getDocument().toObject(Message.class);
                        newMsg.setMessageId(dc.getDocument().getId());
                        newMessages.add(newMsg);

                        // Cập nhật timestamp
                        if (newMsg.getCreateAt() != null) {
                            lastMessageTimestamp = Math.max(lastMessageTimestamp,
                                    newMsg.getCreateAt().getTime());
                        }
                    }
                }
                if (!newMessages.isEmpty()) {
                    callback.onSuccess(newMessages);
                }
            }
        });
    }

    public void loadMoreMessages(String matchId, DocumentSnapshot lastDoc, int limit, LoadMessagesCallback callback) {
        if (lastDoc == null) {
            callback.onError(new IllegalArgumentException("lastDoc cannot be null"));
            return;
        }

        db.collection("messages")
                .whereEqualTo("matchId", matchId)
                .orderBy("createdAt", Query.Direction.DESCENDING)
                .startAfter(lastDoc)
                .limit(limit)
                .get()
                .addOnSuccessListener(queryDocumentSnapshots -> {
                    List<Message> messages = new ArrayList<>();
                    DocumentSnapshot newLastDoc = null;

                    for (DocumentSnapshot doc : queryDocumentSnapshots.getDocuments()) {
                        Message msg = doc.toObject(Message.class);
                        if (msg != null) {
                            msg.setMessageId(doc.getId());
                            messages.add(msg);
                            newLastDoc = doc;
                        }
                    }

                    Collections.reverse(messages);

                    // Trả về cả lastDoc mới để tiếp tục pagination
                    if (callback instanceof LoadMessagesWithPaginationCallback) {
                        ((LoadMessagesWithPaginationCallback) callback).onSuccess(messages, newLastDoc);
                    } else {
                        callback.onSuccess(messages);
                    }
                })
                .addOnFailureListener(callback::onError);
    }

    // Lưu ý: hủy listener khi rời màn hình chat (chồng chéo)
    public void cleanup() {
        if (messageListener != null) {
            messageListener.remove();
            messageListener = null;
        }
    }

    public interface LoadMessagesCallback {
        void onSuccess(List<Message> messages);
        void onError(Exception e);
    }

    public interface LoadMessagesWithPaginationCallback extends LoadMessagesCallback {
        void onSuccess(List<Message> messages, DocumentSnapshot lastDoc);
    }


    //--------------new code-----------------
    public interface LastMessageListener {
        void onLastMessageReceived(Message lastMessage);
    }

    // 🔥 SỬA: Truy vấn collection "messages" chung và filter bằng matchId
    // Giả định trường timestamp của Message là "sentAt" hoặc "createdAt"
    public ListenerRegistration listenForLastMessage(String matchId, LastMessageListener listener) {
        return db.collection("messages")
                .whereEqualTo("matchId", matchId) // Lọc theo match ID
                .orderBy("date", Query.Direction.DESCENDING) // Tin nhắn mới nhất trước
                .limit(1)
                .addSnapshotListener((snapshots, e) -> {
                    if (e != null) {
                        Log.e(TAG, "Lỗi khi lắng nghe tin nhắn cuối cùng", e);
                        return;
                    }

                    if (snapshots != null && !snapshots.isEmpty()) {
                        DocumentSnapshot doc = snapshots.getDocuments().get(0);
                        Message lastMessage = doc.toObject(Message.class);
                        if (lastMessage != null) {
                            lastMessage.setMessageId(doc.getId());
                            listener.onLastMessageReceived(lastMessage);
                        }
                    }
                });
    }

}

    /*public void getMessagesByMatchId(String matchId, LoadMessagesCallback callback) {
        db.collection("messages")
                .whereEqualTo("matchId", matchId)
                .orderBy("date", Query.Direction.ASCENDING)
                .get()
                .addOnSuccessListener(querySnapshot -> {
                    List<Message> messages = new ArrayList<>();
                    for (DocumentSnapshot doc : querySnapshot.getDocuments()) {
                        Message msg = doc.toObject(Message.class);
                        messages.add(msg);
                    }
                    callback.onSuccess(messages);
                })
                .addOnFailureListener(e -> {
                    callback.onFailure("Lỗi khi tải tin nhắn: " + e.getMessage());
                });
    }*/
