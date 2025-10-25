package com.example.atry.backend;

import java.util.Date;

public class Message {
    private String messageId;
    private String senderId;
    private String matchId;
    private String content;
    private Date createAt;
    private String type;

    public Message() {}

    public Message(String senderId, String matchId, String content, String type) {
        this.senderId = senderId;
        this.matchId = matchId;
        this.content = content;
        this.type = type;
        this.createAt = new Date();
    }

    public String getMessageId() {
        return messageId;
    }

    public String getSenderId() { return senderId; }
    public String getMatchId() { return matchId; }
    public String getContent() { return content; }
    public String getType() { return type; }

    public void setMessageId(String messageId) {
        this.messageId = messageId;
    }

    public Date getCreateAt() {
        return createAt;
    }
}
