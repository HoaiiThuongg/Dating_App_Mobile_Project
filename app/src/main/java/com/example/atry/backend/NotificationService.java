package com.example.atry.backend;

import android.util.Log;

import com.google.firebase.Timestamp;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.*;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class NotificationService {
    private final FirebaseFirestore db;
    private final FirebaseAuth auth;

    public interface NotificationCallback {
        void onSuccess(List<Notification> notifications);
        void onFailure(String error);
    }

    public interface UnreadCountCallback {
        void onSuccess(int count);
        void onFailure(String error);
    }

    public NotificationService() {
        db = FirebaseFirestore.getInstance();
        auth = FirebaseAuth.getInstance();
    }

    private Query notificationsRef() {
        String userId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (userId == null) return null;
        return db.collection("notifications")
                .document(userId)
                .collection("userNotifications")
                .orderBy("timestamp", Query.Direction.DESCENDING);
    }

    // 1. Load tất cả notification (limit có thể thêm nếu muốn)
    public void getNotificationList(NotificationCallback callback) {
        Query query = notificationsRef();
        if (query == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }
        query.get().addOnSuccessListener(snapshot -> {
            List<Notification> list = new ArrayList<>();
            for (DocumentSnapshot doc : snapshot.getDocuments()) {
                Notification n = doc.toObject(Notification.class);
                if (n != null) {
                    n.setId(doc.getId());
                    list.add(n);
                }
            }
            callback.onSuccess(list);
        }).addOnFailureListener(e -> callback.onFailure("Lỗi tải notification: " + e.getMessage()));
    }

    // 2. Nghe realtime
    public ListenerRegistration listenNotifications(NotificationCallback listener) {
        Query query = notificationsRef();
        if (query == null) return null;

        Set<String> receivedIds = new HashSet<>(); // tránh trùng

        return query.addSnapshotListener((snapshots, e) -> {
            if (e != null) {
                return;
            }
            if (snapshots != null) {
                List<Notification> newNotifications = new ArrayList<>();
                for (DocumentSnapshot doc : snapshots.getDocuments()) {
                    String id = doc.getId();
                    if (!receivedIds.contains(id)) {
                        Notification n = doc.toObject(Notification.class);
                        if (n != null) {
                            n.setId(id);
                            newNotifications.add(n);
                            receivedIds.add(id);
                        }
                    }
                }
                if (!newNotifications.isEmpty()) {
                    listener.onSuccess(newNotifications);
                }
            }
        });
    }

    // 3. Tính số notification chưa đọc
    public void getUnreadCount(UnreadCountCallback callback) {
        Query query = notificationsRef();
        if (query == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }
        query.whereEqualTo("read", false)
                .get()
                .addOnSuccessListener(snapshot -> callback.onSuccess(snapshot.size()))
                .addOnFailureListener(e -> callback.onFailure("Lỗi đếm chưa đọc: " + e.getMessage()));
    }

    // 4. Đánh dấu 1 notification đã đọc
    public void markAsRead(String notificationId, NotificationCallback callback) {
        String userId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (userId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        db.collection("notifications")
                .document(userId)
                .collection("userNotifications")
                .document(notificationId)
                .update("read", true)
                .addOnSuccessListener(aVoid -> callback.onSuccess(Collections.emptyList()))
                .addOnFailureListener(e -> callback.onFailure("Lỗi đánh dấu đã đọc: " + e.getMessage()));
    }

    // 5. Đánh dấu tất cả notification đã đọc
    public void markAllAsRead(NotificationCallback callback) {
        String userId = auth.getCurrentUser() != null ? auth.getCurrentUser().getUid() : null;
        if (userId == null) {
            callback.onFailure("Người dùng chưa đăng nhập");
            return;
        }

        db.collection("notifications")
                .document(userId)
                .collection("userNotifications")
                .whereEqualTo("read", false)
                .get()
                .addOnSuccessListener(snapshot -> {
                    WriteBatch batch = db.batch();
                    for (DocumentSnapshot doc : snapshot.getDocuments()) {
                        batch.update(doc.getReference(), "read", true);
                    }
                    batch.commit()
                            .addOnSuccessListener(aVoid -> callback.onSuccess(Collections.emptyList()))
                            .addOnFailureListener(e -> callback.onFailure("Lỗi đánh dấu tất cả đã đọc: " + e.getMessage()));
                })
                .addOnFailureListener(e -> callback.onFailure("Lỗi tải notifications: " + e.getMessage()));
    }

}
