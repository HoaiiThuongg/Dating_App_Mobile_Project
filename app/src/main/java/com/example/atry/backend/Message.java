package com.example.atry.backend;

import com.google.firebase.firestore.ServerTimestamp;
import java.util.Date;
import java.util.List;

public class Message {
    private String messageId;
    private String senderId;
    private String matchId;
    private String content;
    private String type;
    private boolean isRead = false;  // trạng thái đọc

    private List<String> readBy;
    @ServerTimestamp
    private Date timestamp;          // để sort, kiểm tra tin nhắn mới

    public Message() {}

    public Message(String messageId, String senderId, String matchId, String content, String type, boolean isRead, List<String> readBy, Date timestamp) {
        this.messageId = messageId;
        this.senderId = senderId;
        this.matchId = matchId;
        this.content = content;
        this.type = type;
        this.isRead = isRead;
        this.readBy = readBy;
        this.timestamp = timestamp;
    }

    public Message(String senderId, String content) {
        this.senderId = senderId;
        this.content = content;
    }


    // --- Getter / Setter ---
    public String getMessageId() { return messageId; }
    public void setMessageId(String messageId) { this.messageId = messageId; }

    public String getSenderId() { return senderId; }
    public void setSenderId(String senderId) { this.senderId = senderId; }

    public String getMatchId() { return matchId; }
    public void setMatchId(String matchId) { this.matchId = matchId; }

    public String getContent() { return content; }
    public void setContent(String content) { this.content = content; }

    public String getType() { return type; }
    public void setType(String type) { this.type = type; }

    public boolean isRead() { return isRead; }
    public void setRead(boolean read) { isRead = read; }

    public Date getTimestamp() { return timestamp; }
    public void setTimestamp(Date timestamp) { this.timestamp = timestamp; }

    public List<String> getReadBy() {
        return readBy;
    }

    public void setReadBy(List<String> readBy) {
        this.readBy = readBy;
    }
}
