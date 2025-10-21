package com.example.atry.backend;

import java.util.Date;

public class User {
    private String userId;
    private String name;
    private int age;
    private String bio;
    private String gender;
    private String interests;
    private String profileImageUrl;
    private Date lastUpdated;

    public User() {
    }

    public User(String userId, String name, int age, String bio, String gender, String interests, String profileImageUrl) {
        this.userId = userId;
        this.name = name;
        this.age = age;
        this.bio = bio;
        this.gender = gender;
        this.interests = interests;
        this.profileImageUrl = profileImageUrl;
        this.lastUpdated = new Date();
    }

    public String getUserId() {
        return userId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getBio() {
        return bio;
    }

    public void setBio(String bio) {
        this.bio = bio;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getInterests() {
        return interests;
    }

    public void setInterests(String interests) {
        this.interests = interests;
    }

    public String getProfileImageUrl() {
        return profileImageUrl;
    }

    public void setProfileImageUrl(String profileImageUrl) {
        this.profileImageUrl = profileImageUrl;
    }

    public Date getLastUpdated() {
        return lastUpdated;
    }

    public void setLastUpdated(Date lastUpdated) {
        this.lastUpdated = lastUpdated;
    }
}