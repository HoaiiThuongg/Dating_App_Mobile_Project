package com.example.atry.backend;

import com.google.firebase.firestore.ServerTimestamp;

import java.util.Date;
import java.util.List;

public class GameCard {
    private String id;
    private String title;
    private String startBy;
    private String question;
    private String ans1;
    private String ans2;
    private List<String> pickedByAns1;
    private List<String> pickedByAns2;
    @ServerTimestamp
    private Date timestamp;

    public GameCard() {} // required for Firestore

    // getters và setters
    public String getId() { return id; }
    public void setId(String id) { this.id = id; }

    public String getTitle() { return title; }
    public void setTitle(String title) { this.title = title; }

    public String getStartBy() { return startBy; }
    public void setStartBy(String startBy) { this.startBy = startBy; }

    public String getQuestion() { return question; }
    public void setQuestion(String question) { this.question = question; }

    public String getAns1() { return ans1; }
    public void setAns1(String ans1) { this.ans1 = ans1; }

    public String getAns2() { return ans2; }
    public void setAns2(String ans2) { this.ans2 = ans2; }

    public List<String> getPickedByAns1() {
        return pickedByAns1;
    }

    public List<String> getPickedByAns2() {
        return pickedByAns2;
    }

    public void setPickedByAns1(List<String> pickedByAns1) {
        this.pickedByAns1 = pickedByAns1;
    }

    public void setPickedByAns2(List<String> pickedByAns2) {
        this.pickedByAns2 = pickedByAns2;
    }

    public Date getTimestamp() {
        return timestamp;
    }

    public void setTimestamp(Date timestamp) {
        this.timestamp = timestamp;
    }
}
