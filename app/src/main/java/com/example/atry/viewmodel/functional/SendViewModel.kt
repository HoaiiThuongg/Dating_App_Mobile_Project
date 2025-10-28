package com.example.atry.viewmodel.functional

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import com.example.atry.backend.ChatService
import com.example.atry.backend.Message // Cần tạo lớp Message Kotlin
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update

// Giả định lớp dữ liệu
data class SendUiState(
    val isLoading: Boolean = true,
    val errorMessage: String? = null,
    val isSending: Boolean = false,
    val receiverId: String
)

class SendViewModel() : ViewModel() {

    private val  chatService = ChatService()
    private val _uiState = MutableStateFlow(SendUiState(receiverId = ""))
    val uiState: StateFlow<SendUiState> = _uiState.asStateFlow()

    var messageInput by mutableStateOf("")
        private set

    val messages = mutableStateListOf<Message>()
    private var messageListenerRegistration: ListenerRegistration? = null

    private fun startListeningForMessages(matchId:String) {
        _uiState.update { it.copy(isLoading = true, errorMessage = null) }

        // Bắt đầu lắng nghe và lưu ListenerRegistration
        messageListenerRegistration = chatService.listenForMessages(matchId, object : ChatService.MessageListener {
            override fun onMessagesReceived(messageList: List<Message>) {
                messages.clear()
                messages.addAll(messageList)

                // Tắt loading sau khi nhận được tin nhắn đầu tiên (hoặc list rỗng)
                _uiState.update { it.copy(isLoading = false) }
            }
        })
    }
    fun startChat(matchId: String, receiverId: String) {
        _uiState.update { it.copy(receiverId = receiverId) }
        startListeningForMessages(matchId)
    }

    fun updateMessageInput(newText: String) {
        messageInput = newText
    }

    fun sendMessage(matchId:String) {
        if (messageInput.isBlank()) return

        val content = messageInput.trim()
        _uiState.update { it.copy(isSending = true) }

        chatService.sendMessage(matchId, _uiState.value.receiverId, content, object : ChatService.ChatCallback {
            override fun onSuccess(message: String) {
                // Tin nhắn đã gửi, UI sẽ được cập nhật tự động nhờ Listener
                messageInput = ""
                _uiState.update { it.copy(isSending = false, errorMessage = null) }
            }

            override fun onFailure(error: String) {
                _uiState.update { it.copy(isSending = false, errorMessage = error) }
            }
        })
    }

    override fun onCleared() {
        super.onCleared()
        // Dừng lắng nghe khi ViewModel bị hủy
        messageListenerRegistration?.remove()
    }
}