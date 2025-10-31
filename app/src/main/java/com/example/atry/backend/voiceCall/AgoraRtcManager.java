package com.example.atry.backend.voiceCall;

import android.content.Context;
import android.util.Log;

import io.agora.rtc2.Constants;
import io.agora.rtc2.IRtcEngineEventHandler;
import io.agora.rtc2.RtcEngine;
import io.agora.rtc2.RtcEngineConfig;
import io.agora.rtc2.ChannelMediaOptions;

public class AgoraRtcManager {

    // 🔥 THAY THẾ bằng ID ứng dụng của bạn
    private String myAppId = "262e0d11e639409a89ba66373dd59e5e";

    private RtcEngine mRtcEngine;
    private Context context;
    private RtcListener listener; // Giao diện để truyền sự kiện về ViewModel

    public interface RtcListener {
        void onJoinChannelSuccess(int uid);
        void onUserJoined(int uid);
        void onUserOffline(int uid);
    }


    // Constructor: Bắt buộc phải truyền Context và Listener từ ViewModel
    public AgoraRtcManager(Context context, RtcListener listener) {
        this.context = context.getApplicationContext(); // Sử dụng Application Context
        this.listener = listener;
        initializeAgoraVoiceSDK(); // Khởi tạo ngay khi Manager được tạo
    }

    // 1. Khai báo Trình xử lý Sự kiện Agora
    private final IRtcEngineEventHandler mRtcEventHandler = new IRtcEngineEventHandler() {
        @Override
        public void onJoinChannelSuccess(String channel, int uid, int elapsed) {
            super.onJoinChannelSuccess(channel, uid, elapsed);
            Log.d("AgoraRtc", "Joined channel: " + channel + " with UID: " + uid);
            // Gọi lại listener để thông báo cho ViewModel
            listener.onJoinChannelSuccess(uid);
        }

        @Override
        public void onUserJoined(int uid, int elapsed) {
            super.onUserJoined(uid, elapsed);
            Log.d("AgoraRtc", "User joined: " + uid);
            listener.onUserJoined(uid);
        }

        @Override
        public void onUserOffline(int uid, int reason) {
            super.onUserOffline(uid, reason);
            Log.d("AgoraRtc", "User offline: " + uid);
            listener.onUserOffline(uid);
        }
        // Thêm các callback khác như onError, onWarning nếu cần
    };

    // 2. Phương thức khởi tạo động cơ
    private void initializeAgoraVoiceSDK() {
        try {
            RtcEngineConfig config = new RtcEngineConfig();
            // Sử dụng Context đã truyền vào
            config.mContext = context;
            config.mAppId = myAppId;
            config.mEventHandler = mRtcEventHandler;

            mRtcEngine = RtcEngine.create(config);

            // Bật chức năng âm thanh (cần cho Voice Call)
            mRtcEngine.enableAudio();

            Log.d("AgoraRtc", "RTC Engine initialized.");
        } catch (Exception e) {
            Log.e("AgoraRtc", "Error initializing RTC engine: " + e.getMessage());
            throw new RuntimeException("Error initializing RTC engine: " + e.getMessage());
        }
    }

    // 3. Phương thức tham gia kênh (Được ViewModel gọi)
    public void joinChannel(String token, String channelName, int userId) {
        if (mRtcEngine == null) {
            Log.e("AgoraRtc", "Engine not initialized. Attempting initialization...");
            initializeAgoraVoiceSDK();
        }

        ChannelMediaOptions options = new ChannelMediaOptions();
        options.clientRoleType = Constants.CLIENT_ROLE_BROADCASTER;
        options.channelProfile = Constants.CHANNEL_PROFILE_COMMUNICATION;
        options.publishCameraTrack = false; // Chỉ bật Voice

        mRtcEngine.joinChannel(token, channelName, userId, options);
    }

    // 4. Phương thức rời kênh (Được ViewModel gọi)
    public void leaveChannel() {
        if (mRtcEngine != null) {
            mRtcEngine.leaveChannel();
            RtcEngine.destroy();
            mRtcEngine = null;
            Log.d("AgoraRtc", "RTC Engine destroyed.");
        }
    }
}
