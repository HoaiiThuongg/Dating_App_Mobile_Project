package com.example.atry.backend;

// Notification.java
public class Notification {
    private String title;
    private String content;
    private long timestamp;
    private boolean read;

    // Cần có constructor mặc định cho Firestore
    public Notification() {}

    public Notification(String title, String content, long timestamp, boolean read) {
        this.title = title;
        this.content = content;
        this.timestamp = timestamp;
        this.read = read;
    }

    // Getters and Setters
    public String getTitle() { return title; }
    public void setTitle(String title) { this.title = title; }

    public String getContent() { return content; }
    public void setContent(String content) { this.content = content; }

    public long getTimestamp() { return timestamp; }
    public void setTimestamp(long timestamp) { this.timestamp = timestamp; }

    public boolean isRead() { return read; }
    public void setRead(boolean read) { this.read = read; }
}