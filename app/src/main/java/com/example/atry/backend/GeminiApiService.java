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

    private final String apiKey = "AIzaSyCBAAF0wVYgn6IFKoX_NZuH4TWXIB6uJDA";
    private final String apiUrl = "https://generativelanguage.googleapis.com/v1beta/models/gemini-2.5-flash:generateContent?key=" + apiKey;


    /**
     * Icebreaker
     */
    public List<String> generateIcebreakers(String commonInterests) {
        final String systemInstruction = "Bạn là chuyên gia hẹn hò. Hãy tạo ra MỘT CÂU HỎI CHO ĐỐI PHƯƠNG CỰC KỲ NGẮN và thú vị cho một cuộc hẹn hò. Câu hỏi phải thân thiện, và khuyến khích tương tác ngay lập tức. Bạn phải trả lời bằng định dạng JSON.";
        final String userQuery = "Hãy gợi ý câu hỏi hoặc câu đáp trả Icebreaker cho một cặp đôi khi đối phương nói: " + commonInterests ;

        JSONObject payload = buildPayload(systemInstruction, userQuery, 1); // 1: List Schema

        String rawResponse = callApi(payload);
        if (rawResponse != null) {
            return parseResponse(rawResponse);
        }
        return new ArrayList<>();
    }

    /**
     * GameCard
     */
    public String generateGameCard(String commonInterests) {
        final String systemInstruction = "Bạn là chuyên gia tạo câu hỏi trắc nghiệm. Hãy tạo MỘT câu hỏi thú vị, sâu sắc về sở thích hẹn hò/chung của cặp đôi đó. Cần có 2 đáp án (ans1, ans2) và câu hỏi (question). Trả lời bằng JSON.";
        final String userQuery = "Tạo câu hỏi trắc nghiệm về sở thích: " + commonInterests;

        JSONObject payload = buildPayload(systemInstruction, userQuery, 2); // 2: GameCard Schema
        String rawResponse = callApi(payload);

        return parseGameCardResponse(rawResponse);
    }

    /**
     * Simple Chat
     */
    public String simpleChat(String userQuery) {
        final String systemInstruction = "Bạn là trợ lý AI hữu ích.";

        JSONObject payload = buildPayload(systemInstruction, userQuery, 0); // 0: No Schema
        String rawResponse = callApi(payload);

        return parseSimpleTextResponse(rawResponse);
    }

    // ----------------------------------------------------------------------
    // CÁC HÀM HỖ TRỢ XÂY DỰNG VÀ GỌI API
    // ----------------------------------------------------------------------

    /**
     * Hàm gọi API chung, thay thế code lặp lại trong generateIcebreakers.
     */
    private String callApi(JSONObject payload) {
        HttpURLConnection connection = null;
        if (payload == null || payload.length() == 0) {
            Log.e("GeminiApi", "Payload is empty.");
            return null;
        }
        try {
            URL url = new URL(apiUrl);
            connection = (HttpURLConnection) url.openConnection();
            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/json");
            connection.setDoOutput(true);
            connection.setConnectTimeout(10000);
            connection.setReadTimeout(10000);

            try (OutputStreamWriter writer = new OutputStreamWriter(connection.getOutputStream())) {
                writer.write(payload.toString());
            }

            int responseCode = connection.getResponseCode();
            if (responseCode == HttpURLConnection.HTTP_OK) {
                try (BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()))) {
                    StringBuilder response = new StringBuilder();
                    String line;
                    while ((line = reader.readLine()) != null) {
                        response.append(line);
                    }
                    return response.toString();
                }
            } else {
                try (BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getErrorStream()))) {
                    String errorStream = reader.readLine();
                    Log.e("GeminiApi", "Lỗi API, mã: " + responseCode + ". Chi tiết: " + errorStream);
                }
                return null;
            }
        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi kết nối Gemini API: " + e.getMessage());
            return null;
        } finally {
            if (connection != null) {
                connection.disconnect();
            }
        }
    }


    /**
     * Xây dựng Payload JSON cho Gemini với Response Schema tuỳ chọn.
     * @param schemaType 0: No Schema, 1: List Schema (Icebreakers), 2: GameCard Schema
     */
    private JSONObject buildPayload(String systemInstruction, String userQuery, int schemaType) {
        try {
            // 1. Xây dựng System Instruction (FIX: Đảm bảo biến được định nghĩa)
            JSONObject systemPart = new JSONObject().put("text", systemInstruction);
            JSONArray systemParts = new JSONArray().put(systemPart);
            JSONObject systemInstructionJson = new JSONObject().put("parts", systemParts);

            // 2. Xây dựng User Query (FIX: Đảm bảo biến được định nghĩa)
            JSONObject userPart = new JSONObject().put("text", userQuery);
            JSONArray userParts = new JSONArray().put(userPart);
            JSONObject contents = new JSONObject().put("parts", userParts);

            // 3. Xây dựng Generation Config
            JSONObject generationConfig = new JSONObject();

            if (schemaType == 1) { // 1: List Schema (Icebreakers)
                JSONObject responseSchema = buildIcebreakerResponseSchema();
                generationConfig.put("responseMimeType", "application/json");
                generationConfig.put("responseSchema", responseSchema);

            } else if (schemaType == 2) { // 2: GameCard Schema
                JSONObject responseSchema = buildGameCardResponseSchema();
                generationConfig.put("responseMimeType", "application/json");
                generationConfig.put("responseSchema", responseSchema);
            }

            // 4. Xây dựng Payload chính
            JSONObject payload = new JSONObject()
                    .put("systemInstruction", systemInstructionJson)
                    .put("contents", new JSONArray().put(contents));

            // FIX: CHỈ THÊM generationConfig NẾU KHÔNG RỖNG
            if (generationConfig.length() > 0) {
                payload.put("generationConfig", generationConfig);
            }

            return payload;

        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi xây dựng Payload JSON: " + e.getMessage());
            return new JSONObject();
        }
    }

    private JSONObject buildIcebreakerResponseSchema() throws Exception {
        JSONObject questionProp = new JSONObject().put("type", "STRING");
        JSONObject properties = new JSONObject().put("question", questionProp);
        JSONArray propertyOrdering = new JSONArray().put("question");
        JSONObject itemSchema = new JSONObject()
                .put("type", "OBJECT")
                .put("properties", properties)
                .put("propertyOrdering", propertyOrdering);

        return new JSONObject()
                .put("type", "ARRAY")
                .put("items", itemSchema);
    }

    private JSONObject buildGameCardResponseSchema() throws Exception {
        JSONObject properties = new JSONObject()
                .put("question", new JSONObject().put("type", "STRING"))
                .put("ans1", new JSONObject().put("type", "STRING"))
                .put("ans2", new JSONObject().put("type", "STRING"));

        JSONArray propertyOrdering = new JSONArray()
                .put("question")
                .put("ans1")
                .put("ans2");

        return new JSONObject()
                .put("type", "OBJECT")
                .put("properties", properties)
                .put("propertyOrdering", propertyOrdering);
    }

    // ----------------------------------------------------------------------
    // CÁC HÀM HỖ TRỢ PHÂN TÍCH CÚ PHÁP
    // ----------------------------------------------------------------------

    private List<String> parseResponse(String responseString) {
        List<String> questions = new ArrayList<>();
        try {
            // Lấy phần text thô (là JSON string)
            String textPart = new JSONObject(responseString)
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
            Log.e("GeminiApi", "Lỗi phân tích cú pháp JSON (Icebreaker): " + e.getMessage());
        }
        return questions;
    }

    private String parseSimpleTextResponse(String responseString) {
        if (responseString == null) return null;
        try {
            return new JSONObject(responseString)
                    .getJSONArray("candidates")
                    .getJSONObject(0)
                    .getJSONObject("content")
                    .getJSONArray("parts")
                    .getJSONObject(0)
                    .getString("text");
        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi phân tích cú pháp JSON (Simple Text): " + e.getMessage());
            return null;
        }
    }

    private String parseGameCardResponse(String responseString) {
        if (responseString == null) return null;
        try {
            // Lấy phần text thô từ response
            String rawText = new JSONObject(responseString)
                    .getJSONArray("candidates")
                    .getJSONObject(0)
                    .getJSONObject("content")
                    .getJSONArray("parts")
                    .getJSONObject(0)
                    .getString("text");

            // Giả định Gemini trả về JSON có đủ 3 trường: question, ans1, ans2
            JSONObject json = new JSONObject(rawText);

            String question = json.getString("question");
            String ans1 = json.getString("ans1");
            String ans2 = json.getString("ans2");

            // Định dạng lại theo yêu cầu: "câu hỏi | đáp án 1 | đáp án 2"
            return String.format("%s | %s | %s", question, ans1, ans2);

        } catch (Exception e) {
            Log.e("GeminiApi", "Lỗi phân tích cú pháp JSON (GameCard): " + e.getMessage());

            // Nếu lỗi JSON, thử trả về raw text để debug
            return "Lỗi phân tích cú pháp. Vui lòng kiểm tra định dạng JSON.";
        }
    }
}