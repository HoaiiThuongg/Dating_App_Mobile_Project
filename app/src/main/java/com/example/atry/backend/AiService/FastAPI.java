package com.example.atry.backend.AiService;

import android.os.Handler;
import android.os.Looper;
import android.util.Log;

import org.json.JSONObject;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

public class FastAPI {
    private static final String TAG = "FastAPI";

    // Khai báo OkHttpClient và MediaType
    private final OkHttpClient client = new OkHttpClient();
    private final MediaType JSON_MEDIA_TYPE = MediaType.get("application/json; charset=utf-8");

    // Handler để chuyển kết quả về Main Thread (UI Thread)
    private final Handler mainHandler = new Handler(Looper.getMainLooper());

    // --- Interface Callback ---
    public interface ChatCallback {
        void onSuccess(String answer);
        void onFailure(String error);
    }

    /**
     * Gửi yêu cầu Chat đến API FastAPI.
     * * @param question Câu hỏi gửi đến mô hình AI.
     * @param sessionId ID phiên làm việc (session ID).
     * @param model Tên mô hình AI (ví dụ: "llama3").
     * @param callback Callback để xử lý kết quả.
     */
    public void callChatBot(String question, String sessionId, String model,
                            ChatCallback callback) {

        String url = "https://jenell-cloying-kizzy.ngrok-free.dev/chat";

        // 1. Chuẩn bị Request Body (JSON)
        JSONObject jsonBody = new JSONObject();
        try {
            jsonBody.put("question", question);
            jsonBody.put("session_id", sessionId);
            jsonBody.put("model", model);
        } catch (Exception e) {
            Log.e(TAG, "Lỗi tạo JSON Body: " + e.getMessage());
            callback.onFailure("Lỗi client: Không thể tạo yêu cầu JSON.");
            return;
        }

        RequestBody requestBody = RequestBody.create(
                jsonBody.toString(),
                JSON_MEDIA_TYPE
        );

        // 2. Tạo Request
        Request request = new Request.Builder()
                .url(url)
                .post(requestBody)
                .addHeader("Content-Type", "application/json")
                .addHeader("Accept", "application/json")
                .build();

        // 3. Thực hiện lệnh gọi bất đồng bộ
        client.newCall(request).enqueue(new Callback() {

            @Override
            public void onFailure(Call call, IOException e) {
                // Chuyển kết quả về Main Thread
                mainHandler.post(() -> callback.onFailure("Lỗi kết nối mạng: " + e.getMessage()));
                Log.e(TAG, "Lỗi mạng: ", e);
            }

            @Override
            public void onResponse(Call call, Response response) throws IOException {
                // Lấy Response Body. CHỈ ĐƯỢC GỌI .string() MỘT LẦN!
                String responseData = response.body() != null ? response.body().string() : "{}";

                try {
                    if (response.isSuccessful()) {
                        // Trạng thái HTTP 2xx
                        JSONObject json = new JSONObject(responseData);
                        String answer = json.getString("answer");

                        // ✅ Thành công: Chuyển kết quả về Main Thread
                        mainHandler.post(() -> callback.onSuccess(answer));

                    } else {
                        // Trạng thái HTTP 4xx hoặc 5xx
                        String errorMessage = "Lỗi API: Code " + response.code() +
                                ", Body: " + responseData;
                        Log.e(TAG, errorMessage);

                        // ✅ Thất bại: Chuyển kết quả về Main Thread
                        mainHandler.post(() -> callback.onFailure(errorMessage));
                    }
                } catch (Exception e) {
                    // Lỗi phân tích JSON hoặc lỗi khác
                    String parseError = "Lỗi Parse JSON: " + e.getMessage() +
                            ", Raw Data: " + responseData;
                    Log.e(TAG, parseError);

                    // ✅ Lỗi: Chuyển kết quả về Main Thread
                    mainHandler.post(() -> callback.onFailure(parseError));
                } finally {
                    // Đóng response để giải phóng tài nguyên
                    response.close();
                }
            }
        });
    }
}