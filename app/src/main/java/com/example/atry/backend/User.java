package com.example.atry.backend;

public class User {
    private String userId;
    private String name;
    private String email;

    private String defaultImage;

    private String gender;


    public User() {}

    public User(String userId, String name, String email, String defaultImage, String gender) {
        this.userId = userId;
        this.name = name;
        this.email = email;
        this.defaultImage = defaultImage;
        this.gender = gender;
    }

    // --- Getter / Setter ---
    public String getUserId() { return userId; }
    public void setUserId(String userId) { this.userId = userId; }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public String getEmail() {
        return email;
    }

    public String getGender() {
        return gender;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getDefaultImage() {
        return defaultImage;
    }

    public void setDefaultImage(String defaultImage) {
        this.defaultImage = defaultImage;
    }

}
