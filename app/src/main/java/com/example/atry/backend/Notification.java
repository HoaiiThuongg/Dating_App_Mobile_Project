package com.example.atry.backend;

public class Notification {
    private String title;
    private String content;
    private long timestamp;
    private boolean read;
    private String id; // ID của document trên Firestore
    private String partnerId; // thêm partnerId để liên kết người liên quan

    public Notification() {} // Firestore cần

    public Notification(String title, String content, long timestamp, boolean read, String partnerId) {
        this.title = title;
        this.content = content;
        this.timestamp = timestamp;
        this.read = read;
        this.partnerId = partnerId;
    }

    public String getTitle() { return title; }
    public void setTitle(String title) { this.title = title; }

    public String getContent() { return content; }
    public void setContent(String content) { this.content = content; }

    public long getTimestamp() { return timestamp; }
    public void setTimestamp(long timestamp) { this.timestamp = timestamp; }

    public boolean isRead() { return read; }
    public void setRead(boolean read) { this.read = read; }

    public String getId() { return id; }
    public void setId(String id) { this.id = id; }

    public String getPartnerId() { return partnerId; }
    public void setPartnerId(String partnerId) { this.partnerId = partnerId; }
}
