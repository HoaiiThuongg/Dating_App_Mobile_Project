package com.example.atry.viewmodel.functional

import android.app.Application
import android.util.Log
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data.AgoraTokenResponse
import com.example.atry.data.AcceptCallResponse
import com.example.atry.data.RetrofitClient
import com.example.atry.backend.voiceCall.AgoraRtcManager
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.isActive
import kotlinx.coroutines.launch
import retrofit2.HttpException
import java.io.IOException

class VoiceCallViewModel(application: Application) : AndroidViewModel(application) {

    // 🔹 Trạng thái UI
    sealed class UiState {
        object Idle : UiState()
        object Loading : UiState()
        data class Success(val tokenResponse: AgoraTokenResponse) : UiState()
        data class Error(val message: String) : UiState()
        data class InCall(val channel: String) : UiState()
    }

    private val _uiState = MutableStateFlow<UiState>(UiState.Idle)
    val uiState: StateFlow<UiState> = _uiState

    private val _incomingCallFrom = MutableStateFlow<String?>(null)
    val incomingCallFrom: StateFlow<String?> = _incomingCallFrom

    // 🔹 Quản lý RTC
    private val rtcManager = AgoraRtcManager(application.applicationContext, object :
        AgoraRtcManager.RtcListener {
        override fun onJoinChannelSuccess(uid: Int) {
            Log.d("CALL", "Joined channel with UID: $uid")
        }

        override fun onUserJoined(uid: Int) {
            Log.d("CALL", "Other user joined: $uid")
        }

        override fun onUserOffline(uid: Int) {
            Log.d("CALL", "User offline: $uid")
        }
    })

    // 🔹 Thêm vào VoiceCallViewModel
    fun fetchToken(channelName: String, uid: Int) {
        viewModelScope.launch(Dispatchers.IO) {
            _uiState.value = UiState.Loading
            try {
                // Lấy token từ backend
                val res = RetrofitClient.api.getToken(channelName, uid)

                // Join channel ngay
                rtcManager.joinChannel(res.token, res.channelName, res.uid.toInt())

                // Cập nhật state
                _uiState.value = UiState.Success(res)
                Log.d("Fetch Call","Success")
            } catch (e: HttpException) {
                _uiState.value = UiState.Error("Lỗi server: ${e.code()}")
                Log.d("Fetch CAll","Lỗi server")

            } catch (e: IOException) {
                _uiState.value = UiState.Error("Lỗi kết nối mạng")
                Log.d("Fetch Call","Lỗi kết nối mạn")

            } catch (e: Exception) {
                _uiState.value = UiState.Error(e.message ?: "Unknown error")
                Log.d("Fetch Call","Unknown error")

            }
        }
    }


    private var checkingJob: Job? = null

    // 🔹 Gọi đi
    fun startCall(fromUser: String, toUser: String) {
        viewModelScope.launch(Dispatchers.IO) {
            try {
                Log.d("CALL", "Start call from $fromUser to $toUser")
                RetrofitClient.api.startCall(fromUser, toUser)
            } catch (e: Exception) {
                Log.e("CALL", "Start call failed", e)
            }
        }
    }

    // 🔹 Poll xem có ai gọi đến
    fun startCheckingIncomingCall(userId: String) {
        checkingJob?.cancel()
        checkingJob = viewModelScope.launch(Dispatchers.IO) {
            while (isActive) {
                try {
                    val res = RetrofitClient.api.checkIncomingCall(userId) // Map<String, String>
                    if (res["status"] == "incoming") {
                        _incomingCallFrom.value = res["fromUser"]
                    } else {
                        _incomingCallFrom.value = null
                    }
                } catch (e: Exception) {
                    Log.e("VoiceCall", "Polling failed: ${e.message}")
                }
                delay(1000)
            }
        }
    }


    fun stopCheckingIncomingCall() {
        checkingJob?.cancel()
        checkingJob = null
    }

    // 🔹 Người B nhận cuộc gọi → join channel
    fun acceptCall(callerId: String, calleeId: String) {
        stopCheckingIncomingCall()
        _incomingCallFrom.value = null
        viewModelScope.launch(Dispatchers.IO) {
            try {
                val res: AcceptCallResponse = RetrofitClient.api.acceptCall(callerId, calleeId)

                // 🔹 Người B join channel với tokenCallee
                rtcManager.joinChannel(
                     res.tokenCallee,
                     res.channelName,
                     res.uidCallee.toInt()
                )

                // 🔹 Người B vào trạng thái đang gọi
                _uiState.value = UiState.InCall(res.channelName)
                Log.d("CALL", "Accept call success")

            } catch (e: Exception) {
                Log.e("CALL", "Accept call failed", e)
                _uiState.value = UiState.Error(e.message ?: "Unknown error")
            }
        }
    }

    fun startCheckingCallAccepted(callerId: String) {
        viewModelScope.launch(Dispatchers.IO) {
            while (isActive) {
                try {
                    val res = RetrofitClient.api.checkCallAccepted(callerId)
                    if (res["status"] == "accepted") {
                        // A join channel với tokenCaller
                        joinCall(res["tokenCaller"]!!, res["channelName"]!!, res["uidCaller"]!!.toInt())
                        break
                    }
                    Log.d("Check Accept","Success")
                } catch (e: Exception) {
                    Log.e("Check Accept", "Polling failed: ${e.message}")
                }
                delay(1000)
            }
        }
    }



    fun declineCall(callerId: String, calleeId: String) {
        stopCheckingIncomingCall()
        _incomingCallFrom.value = null
        viewModelScope.launch(Dispatchers.IO) {
            try {
                RetrofitClient.api.declineCall(callerId, calleeId)
            } catch (e: Exception) {
                Log.e("CALL", "Decline call failed", e)
            }
        }
    }

    // 🔹 Người A join channel sau khi tạo call
    fun joinCall(token: String, channelName: String, uid: Int) {
        rtcManager.joinChannel(token, channelName, uid)
        _uiState.value = UiState.InCall(channelName)
    }

    fun leaveCall() {
        rtcManager.leaveChannel()
        _uiState.value = UiState.Idle
    }
}
