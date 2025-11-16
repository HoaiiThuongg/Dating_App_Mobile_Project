package com.example.atry.backend;

import android.util.Log;

import com.google.firebase.Timestamp;
import com.google.firebase.firestore.*;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MessageService {
    private final FirebaseFirestore db = FirebaseFirestore.getInstance();
    private ListenerRegistration messageListener;
    private boolean isInitialLoad = true;
    private long lastMessageTimestamp = 0;

    private CollectionReference getMessagesCollectionRef(String matchId) {
        return db.collection("matches")
                .document(matchId)
                .collection("messages");
    }

    // --- Lấy messages ban đầu ---
    public void getInitialMessages(String matchId, LoadMessagesCallback callback) {
        getMessagesCollectionRef(matchId)
                .orderBy("timestamp", Query.Direction.DESCENDING)
                .limit(50)
                .get()
                .addOnSuccessListener(queryDocumentSnapshots -> {
                    List<Message> messages = new ArrayList<>();
                    for (DocumentSnapshot doc : queryDocumentSnapshots.getDocuments()) {
                        Message msg = doc.toObject(Message.class);
                        if (msg != null) {
                            msg.setMessageId(doc.getId());
                            messages.add(msg);

                            Timestamp ts = doc.getTimestamp("timestamp");
                            if (ts != null) {
                                lastMessageTimestamp = Math.max(lastMessageTimestamp, ts.toDate().getTime());
                            }
                        }
                    }
                    Collections.reverse(messages);
                    isInitialLoad = false;
                    callback.onSuccess(messages);
                })
                .addOnFailureListener(callback::onError);
    }

    // --- Lắng nghe tin nhắn mới ---
    public void listenForNewMessages(String matchId, LoadMessagesCallback callback) {
        Query query = getMessagesCollectionRef(matchId)
                .orderBy("timestamp", Query.Direction.ASCENDING);

        messageListener = query.addSnapshotListener((snapshots, error) -> {
            if (error != null) {
                callback.onError(error);
                return;
            }

            if (snapshots != null && !isInitialLoad) {
                List<Message> newMessages = new ArrayList<>();
                for (DocumentChange dc : snapshots.getDocumentChanges()) {
                    Timestamp ts = dc.getDocument().getTimestamp("timestamp");
                    if (dc.getType() == DocumentChange.Type.ADDED && ts != null) {
                        long currentTs = ts.toDate().getTime();
                        if (currentTs > lastMessageTimestamp) {
                            Message newMsg = dc.getDocument().toObject(Message.class);
                            newMsg.setMessageId(dc.getDocument().getId());
                            newMessages.add(newMsg);
                            lastMessageTimestamp = currentTs;
                        }
                    }
                }
                if (!newMessages.isEmpty()) callback.onSuccess(newMessages);
            }
        });
    }

    // --- Load thêm message (pagination) ---
    public void loadMoreMessages(String matchId, DocumentSnapshot lastDoc, int limit, LoadMessagesCallback callback) {
        if (lastDoc == null) {
            callback.onError(new IllegalArgumentException("lastDoc cannot be null"));
            return;
        }

        getMessagesCollectionRef(matchId)
                .orderBy("timestamp", Query.Direction.DESCENDING)
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

                    if (callback instanceof LoadMessagesWithPaginationCallback) {
                        ((LoadMessagesWithPaginationCallback) callback).onSuccess(messages, newLastDoc);
                    } else {
                        callback.onSuccess(messages);
                    }
                })
                .addOnFailureListener(callback::onError);
    }

    //---listen
    public interface ReadByCallback {
        void onReadByUpdated(List<String> readBy);
    }

    public ListenerRegistration listenReadBy(String matchId, ReadByCallback callback) {
        return db.collection("matches")
                .document(matchId)
                .addSnapshotListener((snapshot, e) -> {
                    if (snapshot != null && snapshot.exists()) {
                        List<String> readBy = (List<String>) snapshot.get("readBy");
                        if (readBy == null) readBy = new ArrayList<>();
                        callback.onReadByUpdated(readBy);
                    } else {
                        callback.onReadByUpdated(new ArrayList<>());
                    }
                });
    }



    // --- Hủy listener ---
    public void cleanup() {
        if (messageListener != null) {
            messageListener.remove();
            messageListener = null;
        }
    }

    // --- Đánh dấu tin nhắn đã đọc bởi user ---
    public void markMatchAsRead(String matchId, String userId) {
        FirebaseFirestore db = FirebaseFirestore.getInstance();

        // Truy cập node matches/matchId
        DocumentReference matchRef = db.collection("matches").document(matchId);

        matchRef.get().addOnSuccessListener(documentSnapshot -> {
            if (documentSnapshot.exists()) {
                List<String> readBy = (List<String>) documentSnapshot.get("readBy");
                if (readBy == null) {
                    readBy = new ArrayList<>();
                }
                if (!readBy.contains(userId)) {
                    readBy.add(userId);
                    matchRef.update("readBy", readBy)
                            .addOnSuccessListener(aVoid -> Log.d("Firestore", "Updated readBy in match"))
                            .addOnFailureListener(e -> Log.e("Firestore", "Error updating readBy in match", e));
                }
            }
        }).addOnFailureListener(e -> Log.e("Firestore", "Error getting match document", e));
    }



    // --- Lấy số tin nhắn chưa đọc của user ---
    public void getUnreadCount(String matchId, String userId, UnreadCountCallback callback) {
        getMessagesCollectionRef(matchId)
                .whereNotIn("readBy", Collections.singletonList(userId))
                .get()
                .addOnSuccessListener(query -> callback.onResult(query.size()))
                .addOnFailureListener(e -> Log.e("MessageService", "Failed getUnreadCount", e));
    }

    // --- Lắng nghe tin nhắn cuối cùng ---
    private boolean isInitialListen = true;

    public ListenerRegistration listenForLastMessage(String matchId, LastMessageListener listener) {

        return getMessagesCollectionRef(matchId)
                .orderBy("timestamp", Query.Direction.DESCENDING)
                .limit(1)
                .addSnapshotListener((snapshots, e) -> {
                    if (e != null || snapshots == null || snapshots.isEmpty()) return;

                    DocumentSnapshot doc = snapshots.getDocuments().get(0);
                    Message lastMessage = doc.toObject(Message.class);

                    if (lastMessage != null) {
                        lastMessage.setMessageId(doc.getId());
                        listener.onLastMessageReceived(lastMessage);
                    }
                });
    }



    public void isMessageRead(String matchId, String userId, ReadCheckCallback callback) {
        DocumentReference matchRef = db.collection("matches").document(matchId);

        matchRef.get().addOnSuccessListener(documentSnapshot -> {
            if (documentSnapshot.exists()) {
                List<String> readBy = (List<String>) documentSnapshot.get("readBy");
                boolean hasRead = readBy != null && readBy.contains(userId);
                callback.onResult(hasRead);
            } else {
                callback.onResult(false);
            }
        }).addOnFailureListener(e -> {
            callback.onResult(false);
        });
    }


    // --- Interfaces ---

    public interface ReadCheckCallback {
        void onResult(boolean hasRead);
    }
    public interface LoadMessagesCallback {
        void onSuccess(List<Message> messages);
        void onError(Exception e);
    }

    public interface LoadMessagesWithPaginationCallback extends LoadMessagesCallback {
        void onSuccess(List<Message> messages, DocumentSnapshot lastDoc);
    }

    public interface LastMessageListener {
        void onLastMessageReceived(Message lastMessage);
    }

    public interface UnreadCountCallback {
        void onResult(int count);
    }
}
