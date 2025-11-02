package com.example.atry.backend;

public class MatchedUser {
    public User user;
    public String matchId;

    public MatchedUser() {
    }

    public MatchedUser(User user, String matchId) {
        this.user = user;
        this.matchId = matchId;
    }
}
