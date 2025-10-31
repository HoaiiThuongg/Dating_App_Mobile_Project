package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.compose.runtime.mutableStateListOf
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.AiService.FastAPI
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.MessageService
import com.example.atry.backend.Message
import com.example.atry.backend.UserService
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch


// BƯỚC 1: Sử dụng StateFlow để quản lý trạng thái UI có thể theo dõi
data class ChatUiState(
    val isLoading: Boolean = false,
    val errorMessage: String? = null,
    val matchedUser: MatchedUser? = null
)

class ChatViewModel(
    savedStateHandle: SavedStateHandle,
    private val messageService: MessageService ,
    private val userService: UserService,
    private val matchedUser: MatchedUser
) : ViewModel() {

    private val matchId = matchedUser.matchId
    private val _uiState = MutableStateFlow(ChatUiState(isLoading = true))
    val uiState: StateFlow<ChatUiState> = _uiState.asStateFlow()


    // Danh sách tin nhắn observable (dùng cho Compose LazyColumn)
    val messages = mutableStateListOf<Message>()

    private var lastDoc: DocumentSnapshot? = null

    init {
        // Luôn gọi trong Coroutine Scope
        viewModelScope.launch {
            loadMatchedUser()
            loadInitialMessages()
            listenNewMessages()
        }
    }
    private fun loadMatchedUser() {
        _uiState.update {
            it.copy(matchedUser = matchedUser)
        }    }
    private fun loadInitialMessages() {
        messageService.getInitialMessages(matchId, object : MessageService.LoadMessagesCallback {
            override fun onSuccess(messagesList: List<Message>) {
                messages.addAll(messagesList)

                _uiState.update { it.copy(isLoading = false, errorMessage = null) }
            }

            override fun onError(e: Exception) {
                _uiState.update {
                    it.copy(
                        errorMessage = e.message,
                        isLoading = false
                    )
                }
                Log.d("ChatViewModel", e.message.toString())

            }
        })
    }

    private fun listenNewMessages() {
        // Listener không cần lastDoc và không bật loading
        messageService.listenForLastMessage(matchId, object : MessageService.LastMessageListener {
            override fun onLastMessageReceived(lastMessage: Message) {
                val messageExists = messages.any { it.messageId == lastMessage.messageId }

                if (!messageExists) {
                    // Thêm vào nếu đây là tin nhắn hoàn toàn mới
                    messages.add(lastMessage)
                }
            }
        })
    }

    fun loadMoreMessages(limit: Int = 20) {
        // 🔥 PHÂN TRANG BỊ VÔ HIỆU HÓA:
        // Chúng ta không có lastDoc và không có hàm để tải thêm tin nhắn.
        _uiState.value = _uiState.value.copy(errorMessage = "Không thể tải thêm tin nhắn do cấu trúc backend không hỗ trợ phân trang.", isLoading = false)
        // Dừng tại đây
        return
    }


    override fun onCleared() {
        super.onCleared()
        messageService.cleanup()
    }




}