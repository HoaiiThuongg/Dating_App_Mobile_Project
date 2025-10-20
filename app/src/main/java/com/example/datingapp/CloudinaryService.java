package com.example.datingapp;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;

import com.cloudinary.Cloudinary;
import com.cloudinary.utils.ObjectUtils;

import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;

public class CloudinaryService {
    private Cloudinary cloudinary;

    public CloudinaryService() {
        Map config = new HashMap();
        config.put("cloud_name", "dosnqohav");
        config.put("api_key", "663186432432511");
        config.put("api_secret", "m6OuOwx9gRrXHa1zQC8Q34JFFK8");
        config.put("secure", true);

        cloudinary = new Cloudinary(config);
    }

    public String uploadImage(String imagePath) throws IOException {
        Map uploadResult = cloudinary.uploader().upload(imagePath, ObjectUtils.emptyMap());
        return (String) uploadResult.get("url");
    }

    public void deleteImage(String publicId) throws IOException {
        cloudinary.uploader().destroy(publicId, ObjectUtils.emptyMap());
    }

    // Lấy public ID từ URL (dùng cho xóa ảnh)
    public String getPublicIdFromUrl(String imageUrl) {
        if (imageUrl == null || imageUrl.isEmpty()) return null;
        String[] parts = imageUrl.split("/");
        String filename = parts[parts.length - 1];
        return "tinder_profiles/" + filename.substring(0, filename.lastIndexOf('.'));
    }
    public Bitmap getImageFromUrl(String imageUrl) throws IOException {
        if (imageUrl == null || imageUrl.isEmpty()) return null;

        URL url = new URL(imageUrl);
        HttpURLConnection connection = (HttpURLConnection) url.openConnection();
        connection.setDoInput(true);
        connection.connect();

        InputStream input = connection.getInputStream();
        Bitmap bitmap = BitmapFactory.decodeStream(input);
        input.close();

        return bitmap;
    }
}