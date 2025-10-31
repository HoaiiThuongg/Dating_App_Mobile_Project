package com.example.atry.backend;

import java.sql.Time;
import java.util.Date;
import java.util.List;

public class UserProfile {
    private String userId;               // liên kết với bảng User
    private String bio;
    private List<String> interests;      // sở thích
    private List<String> partnerPreferences; // gu người yêu
    private List<String> religions;      // tôn giáo

    private List<String> images;
    private String lifestyle;            // quan điểm sống
    private Date dob;               // ngày sinh
    private String phone;
    private String location;
    public UserProfile() {}

    public UserProfile(String userId, String bio, List<String> interests, List<String> partnerPreferences, List<String> religions, List<String> images, String lifestyle, Date dob, String phone, String location) {
        this.userId = userId;
        this.bio = bio;
        this.interests = interests;
        this.partnerPreferences = partnerPreferences;
        this.religions = religions;
        this.images = images;
        this.lifestyle = lifestyle;
        this.dob = dob;
        this.phone = phone;
        this.location = location;
    }

    public String getUserId() { return userId; }
    public void setUserId(String userId) { this.userId = userId; }

    public String getBio() { return bio; }
    public void setBio(String bio) { this.bio = bio; }


    public List<String> getInterests() { return interests; }
    public void setInterests(List<String> interests) { this.interests = interests; }

    public List<String> getPartnerPreferences() { return partnerPreferences; }
    public void setPartnerPreferences(List<String> partnerPreferences) { this.partnerPreferences = partnerPreferences; }

    public List<String> getReligions() { return religions; }
    public void setReligions(List<String> religions) { this.religions = religions; }

    public String getLifestyle() { return lifestyle; }
    public void setLifestyle(String lifestyle) { this.lifestyle = lifestyle; }

    public Date getDob() {
        return dob;
    }

    public String getPhone() {
        return phone;
    }

    public String getLocation() {
        return location;
    }


    public void setDob(Date dob) {
        this.dob = dob;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public void setLocation(String location) {
        this.location = location;
    }

    // Tuổi tính từ dob
    public int getAge() {
        if (dob == null) return 0;
        Date now = new Date();
        int age = now.getYear() - dob.getYear();
        if (now.getMonth() < dob.getMonth() || (now.getMonth() == dob.getMonth() && now.getDate() < dob.getDate())) {
            age--;
        }
        return age;
    }

    public List<String> getImages() {
        return images;
    }

    public void setImages(List<String> images) {
        this.images = images;
    }

    // Tính cung hoàng đạo từ dob
    public String getZodiacSign() {
        if (dob == null) return "";
        int day = dob.getDate();
        int month = dob.getMonth() + 1; // Month từ 0
        switch(month) {
            case 1: return day <= 19 ? "Ma Kết" : "Bảo Bình";
            case 2: return day <= 18 ? "Bảo Bình" : "Song Ngư";
            case 3: return day <= 20 ? "Song Ngư" : "Bạch Dương";
            case 4: return day <= 19 ? "Bạch Dương" : "Kim Ngưu";
            case 5: return day <= 20 ? "Kim Ngưu" : "Song Tử";
            case 6: return day <= 20 ? "Song Tử" : "Cự Giải";
            case 7: return day <= 22 ? "Cự Giải" : "Sư Tử";
            case 8: return day <= 22 ? "Sư Tử" : "Xử Nữ";
            case 9: return day <= 22 ? "Xử Nữ" : "Thiên Bình";
            case 10: return day <= 22 ? "Thiên Bình" : "Bọ Cạp";
            case 11: return day <= 21 ? "Bọ Cạp" : "Nhân Mã";
            case 12: return day <= 21 ? "Nhân Mã" : "Ma Kết";
            default: return "";
        }
    }


}
