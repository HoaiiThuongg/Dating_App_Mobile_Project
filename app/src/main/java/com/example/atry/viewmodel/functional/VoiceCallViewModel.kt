package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data.AgoraTokenResponse
import com.example.atry.data.RetrofitClient
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.isActive
import kotlinx.coroutines.launch
import retrofit2.HttpException
import java.io.IOException

class VoiceCallViewModel : ViewModel() {

    // Trạng thái UI
    sealed class UiState {
        object Idle : UiState()
        object Loading : UiState()
        data class Success(val data: AgoraTokenResponse) : UiState()
        data class Error(val message: String) : UiState()
    }

    private val _uiState = MutableStateFlow<UiState>(UiState.Idle)
    val uiState: StateFlow<UiState> = _uiState

    private val _incomingCallFrom = MutableStateFlow<String?>(null)
    val incomingCallFrom: StateFlow<String?> = _incomingCallFrom

    // Hàm gọi đi
    fun startCall(fromUser: String, toUser: String) {
        viewModelScope.launch(Dispatchers.IO) {
            try {
                RetrofitClient.api.startCall(fromUser, toUser)
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
    }

    // Lấy token Agora khi bắt đầu call
    fun fetchToken(channelName: String, uid: Int) {
        viewModelScope.launch(Dispatchers.IO) {
            _uiState.value = UiState.Loading
            try {
                val response = RetrofitClient.api.getToken(channelName, uid)
                _uiState.value = UiState.Success(response)
            } catch (e: HttpException) {
                _uiState.value = UiState.Error("Lỗi server: ${e.code()}")
            } catch (e: IOException) {
                _uiState.value = UiState.Error("Lỗi kết nối mạng")
            } catch (e: Exception) {
                _uiState.value = UiState.Error("Lỗi không xác định: ${e.message}")
            }
        }
    }
    private var checking = true

    // Kiểm tra xem có ai gọi đến không (loop 3s/lần)
    fun startCheckingIncomingCall(userId: String) {
        if (!checking) return // tránh tạo thêm loop
        checking = false

        viewModelScope.launch(Dispatchers.IO) {
            while (isActive) { // isActive auto stop khi VM destroyed
                try {
                    val res = RetrofitClient.api.checkIncomingCall(userId)
                    val status = res["status"]
                    if (status == "incoming") {
                        _incomingCallFrom.value = res["fromUser"]
                    } else {
                        _incomingCallFrom.value = null
                    }
                } catch (e: Exception) {
                    e.printStackTrace()
                }
                delay(3000)
            }
        }
    }

    // Khi người dùng nhấn “Accept”
    fun acceptCall(callerId: String) {
        viewModelScope.launch(Dispatchers.IO) {
            try {
                RetrofitClient.api.acceptCall(callerId)
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
    }

    // Khi người dùng nhấn “Decline”
    fun declineCall() {
        viewModelScope.launch(Dispatchers.IO) {
            try {
                RetrofitClient.api.declineCall()
            } catch (e: Exception) {
                e.printStackTrace()
            }
        }
    }
}
