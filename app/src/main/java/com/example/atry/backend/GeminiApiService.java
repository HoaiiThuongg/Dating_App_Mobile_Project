package com.example.atry.backend;


import android.util.Log;

import org.json.JSONArray;
import org.json.JSONObject;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

/**
 * Service để gọi Gemini API và tạo câu hỏi Icebreaker.
 * Lớp này phải được gọi trong một Coroutine (ví dụ: Dispatchers.IO)
 * từ Kotlin ViewModel vì nó thực hiện tác vụ mạng.
 */
public class GeminiApiService {

    // 🔥 KHÔNG thay đổi giá trị này. Canvas sẽ tự động cung cấp key.
    private final String apiKey = "AIzaSyCBAAF0wVYgn6IFKoX_NZuH4TWXIB6uJDA";
    private final String apiUrl = "https://generativelanguage.googleapis.com/v1beta/models/gemini-2.5-flash-preview-09-2025:generateContent?key=" + apiKey;

    /**
     * Gọi Gemini API để sinh ra 3 câu hỏi Icebreaker dựa trên sở thích chung.
     * PHẢI được gọi trên một luồng nền (background thread).
     * @param commonInterests Sở thích chung của cặp đôi (ví dụ: "Du lịch, nấu ăn").
     * @return Danh sách các câu hỏi Icebreaker.
     */
    public List<String> generateIcebreakers(String commonInterests) {

        final String systemInstruction = "Bạn là chuyên gia hẹn hò. Hãy tạo ra MỘT CÂU HỎI MỞ ĐẦU (icebreaker) CỰC KỲ NGẮN và thú vị cho một cuộc hẹn hò video. Câu hỏi phải liên quan đến sở thích chung, thân thiện, và khuyến khích tương tác ngay lập tức. Bạn phải trả lời bằng định dạng JSON.";
        final String userQuery = "Hãy gợi ý 3 câu hỏi Icebreaker cho một cặp đôi có sở thích chung là: " + commonInterests + ". Mỗi câu hỏi phải nằm trong một đối tượng riêng biệt.";

        // 1. Xây dựng Payload JSON
        JSONObject payload = buildPayload(systemInstruction, userQuery);

        HttpURLConnection connection = null;
        try {
            URL url = new URL(apiUrl);
            connection = (HttpURLConnection) url.openConnection();
            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/json");
            connection.setDoOutput(true);
            connection.setConnectTimeout(10000);
            connection.setReadTimeout(10000);

            // Gửi Payload
            try (OutputStreamWriter writer = new OutputStreamWriter(connection.getOutputStream())) {
                writer.write(payload.toString());
            }

            int responseCode = connection.getResponseCode();
            if (responseCode == HttpURLConnection.HTTP_OK) {
                // Xử lý Response
                try (BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()))) {
                    StringBuilder response = new StringBuilder();
                    String line;
                    while ((line = reader.readLine()) != null) {
                        response.append(line);
                    }
                    return parseResponse(response.toString());
                }
            } else {
                try (BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getErrorStream()))) {
                    String errorStream = reader.readLine();
                    Log.e("GeminiApi", "Lỗi API, mã: " + responseCode + ". Chi tiết: " + errorStream);
                }
                return new ArrayList<>();
            }
        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi kết nối Gemini API: " + e.getMessage());
            return new ArrayList<>();
        } finally {
            if (connection != null) {
                connection.disconnect();
            }
        }
    }

    private JSONObject buildPayload(String systemInstruction, String userQuery) {
        try {
            JSONObject systemPart = new JSONObject().put("text", systemInstruction);
            JSONArray systemParts = new JSONArray().put(systemPart);
            JSONObject systemInstructionJson = new JSONObject().put("parts", systemParts);

            JSONObject userPart = new JSONObject().put("text", userQuery);
            JSONArray userParts = new JSONArray().put(userPart);
            JSONObject contents = new JSONObject().put("parts", userParts);

            // Response Schema (để đảm bảo đầu ra là JSON Array chứa các Object có field 'question')
            JSONObject questionProp = new JSONObject().put("type", "STRING");
            JSONObject properties = new JSONObject().put("question", questionProp);
            JSONArray propertyOrdering = new JSONArray().put("question");
            JSONObject itemSchema = new JSONObject()
                    .put("type", "OBJECT")
                    .put("properties", properties)
                    .put("propertyOrdering", propertyOrdering);

            JSONObject responseSchema = new JSONObject()
                    .put("type", "ARRAY")
                    .put("items", itemSchema);

            JSONObject generationConfig = new JSONObject()
                    .put("responseMimeType", "application/json")
                    .put("responseSchema", responseSchema);

            return new JSONObject()
                    .put("systemInstruction", systemInstructionJson)
                    .put("contents", new JSONArray().put(contents))
                    .put("generationConfig", generationConfig);

        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi xây dựng Payload JSON: " + e.getMessage());
            return new JSONObject();
        }
    }

    private List<String> parseResponse(String responseString) {
        List<String> questions = new ArrayList<>();
        try {
            JSONObject responseJson = new JSONObject(responseString);

            // Trích xuất nội dung text (đã là JSON String) từ candidate
            String textPart = responseJson
                    .getJSONArray("candidates")
                    .getJSONObject(0)
                    .getJSONObject("content")
                    .getJSONArray("parts")
                    .getJSONObject(0)
                    .getString("text");

            // Parse JSON array chứa câu hỏi
            JSONArray jsonArray = new JSONArray(textPart);
            for (int i = 0; i < jsonArray.length(); i++) {
                JSONObject questionObject = jsonArray.getJSONObject(i);
                questions.add(questionObject.getString("question"));
            }
        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi phân tích cú pháp JSON: " + e.getMessage());
        }
        return questions;
    }
}
