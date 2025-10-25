package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.bumptech.glide.Glide.init
import com.example.atry.backend.ChatService
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.Message
import com.example.atry.backend.MessageService
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

data class MatchState(
    val isLoading: Boolean = false,
    val matchedUsers: List<MatchedUser> = emptyList(),
    val error: String? = null
)

class MessageViewModel(
    private val swipeService: SwipeService = SwipeService(),
    private val messageService: MessageService = MessageService()
) : ViewModel() {
    private val _lastMessages = MutableStateFlow<Map<String, Message?>>(emptyMap())
    val lastMessages = _lastMessages.asStateFlow()

    private var lastMessageListener: ListenerRegistration? = null

    private val _state = MutableStateFlow(MatchState())
    val state: StateFlow<MatchState> = _state

    init {
        // Khởi chạy tác vụ trong Coroutine Scope
        viewModelScope.launch {
            loadMyMatches()
        }
    }

    fun loadMyMatches() {
        // Cập nhật trạng thái Loading và xóa lỗi cũ
        _state.value = _state.value.copy(isLoading = true, error = null)

        swipeService.getMyMatches(object : SwipeService.MatchedUsersWithIdCallback {
            override fun onSuccess(matchedUsers: List<MatchedUser>) {
                viewModelScope.launch {
                    _state.value = _state.value.copy(
                        matchedUsers = matchedUsers, // Gán List<MatchedUser>
                        isLoading = false
                    )
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    // Cập nhật trạng thái thất bại
                    _state.value = _state.value.copy(
                        error = error,
                        isLoading = false
                    )
                }
            }
        })
    }


    fun observeLastMessage(matchId: String) {
        messageService.listenForLastMessage(
            matchId,
            object : MessageService.LastMessageListener {
                override fun onLastMessageReceived(lastMessage: Message) {

                    _lastMessages.update { currentMap ->
                        val mutableMap = currentMap.toMutableMap()
                        mutableMap[matchId] = lastMessage
                        mutableMap
                    }

                }
            })
    }

    override fun onCleared() {
        super.onCleared()
        lastMessageListener?.remove()
    }
}