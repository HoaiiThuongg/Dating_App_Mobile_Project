package com.example.atry.viewmodel.functional

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.AiService.AiHistoryService
import com.example.atry.backend.AiService.FastAPI
import com.example.atry.backend.ChatService
import com.example.atry.backend.Message // Cần tạo lớp Message Kotlin
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import kotlinx.coroutines.suspendCancellableCoroutine
import kotlin.coroutines.resumeWithException

// Giả định lớp dữ liệu
data class SendUiState(
    val isLoading: Boolean = true,
    val errorMessage: String? = null,
    val isSending: Boolean = false,
    val receiverId: String
)

class SendViewModel : ViewModel() {

    private val chatService = ChatService()
    private val api = FastAPI()

    private val _uiState = MutableStateFlow(SendUiState(receiverId = ""))
    val uiState: StateFlow<SendUiState> = _uiState.asStateFlow()

    private val _messageInput = MutableStateFlow("")
    val messageInput: StateFlow<String> = _messageInput.asStateFlow()

    private val _botAnswer = MutableStateFlow("")
    val botAnswer: StateFlow<String> = _botAnswer.asStateFlow()

    val messages = mutableStateListOf<Message>()
    private var messageListenerRegistration: ListenerRegistration? = null

    private fun startListeningForMessages(matchId: String) {
        _uiState.update { it.copy(isLoading = true, errorMessage = null) }

        messageListenerRegistration = chatService.listenForMessages(matchId, object : ChatService.MessageListener {
            override fun onMessagesReceived(messageList: List<Message>) {
                messages.clear()
                messages.addAll(messageList)
                _uiState.update { it.copy(isLoading = false) }
            }
        })
    }

    fun startChat(matchId: String, receiverId: String) {
        _uiState.update { it.copy(receiverId = receiverId) }
        startListeningForMessages(matchId)
    }

    fun updateMessageInput(newText: String) {
        _messageInput.value = newText
    }

    fun sendMessage(matchId: String) {
        val content = _messageInput.value.trim()
        if (content.isBlank()) return

        _uiState.update { it.copy(isSending = true) }
        chatService.sendMessage(matchId, _uiState.value.receiverId, content, object : ChatService.ChatCallback {
            override fun onSuccess(message: String) {
                _messageInput.value = ""
                _uiState.update { it.copy(isSending = false, errorMessage = null) }
            }

            override fun onFailure(error: String) {
                _uiState.update { it.copy(isSending = false, errorMessage = error) }
            }
        })
    }

    fun askChatBot(sessionId: String = "default", model: String = "gemma3:1b") {
        val lastMsg = messages.lastOrNull { it.senderId != _uiState.value.receiverId }?.content ?: return

        _messageInput.value = "Đang tìm gợi ý..."
        viewModelScope.launch {
            try {
                val suggestion = callChatBotSuspend("Trả lời lại tin nhắn này bằng 1 câu duy nhất: $lastMsg", sessionId, model)
                _botAnswer.value = suggestion
                _messageInput.value = suggestion
            } catch (e: Exception) {
                _botAnswer.value = e.message.toString()
                _messageInput.value = e.message.toString()
            }
        }
    }

    private suspend fun callChatBotSuspend(question: String, sessionId: String, model: String): String =
        kotlinx.coroutines.suspendCancellableCoroutine { cont ->
            api.callChatBot(question, sessionId, model, object : FastAPI.ChatCallback {
                override fun onSuccess(answer: String) {
                    cont.resume(answer) {}
                }

                override fun onFailure(error: String) {
                    cont.resumeWithException(Exception(error))
                }
            })
        }

    override fun onCleared() {
        super.onCleared()
        messageListenerRegistration?.remove()
    }
}
