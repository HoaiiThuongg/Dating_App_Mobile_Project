package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.Message
import com.example.atry.backend.MessageService
import com.example.atry.backend.SwipeService
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import com.example.atry.ui.screens.functionalScreens.message.IMessageViewModel

// Data class mới, gắn isRead với từng user
data class MessageItem(
    val user: MatchedUser,
    val lastMessage: Message?,
    var isRead: Boolean = true
)

data class MatchState(
    val isLoading: Boolean = false,
    val matchedUsers: List<MatchedUser> = emptyList(),
    val error: String? = null
)

class MessageViewModel(

) : ViewModel(), IMessageViewModel {
    private val swipeService: SwipeService = SwipeService()
    private val messageService: MessageService = MessageService()
    private val _state = MutableStateFlow(MatchState())
    override val state: StateFlow<MatchState> = _state.asStateFlow()

    private val _chatList = MutableStateFlow<List<MessageItem>>(emptyList())
    override val chatList: StateFlow<List<MessageItem>> = _chatList.asStateFlow()

    private val listeners = mutableListOf<ListenerRegistration>()

    init {
        viewModelScope.launch { loadMyMatches() }
    }

    fun loadMyMatches() {
        _state.value = _state.value.copy(isLoading = true, error = null)

        swipeService.getMyMatches(object : SwipeService.MatchedUsersWithIdCallback {
            override fun onSuccess(matchedUsers: List<MatchedUser>) {
                viewModelScope.launch {
                    _state.value = _state.value.copy(
                        matchedUsers = matchedUsers,
                        isLoading = false
                    )

                    // Thêm tất cả match chưa chat vào chatList
                    _chatList.value = matchedUsers.map { matchedUser ->
                        MessageItem(
                            user = matchedUser,
                            lastMessage = null,
                            isRead = true // chưa có tin nhắn thì mặc định là read
                        )
                    }

                    observeChats()
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    _state.value = _state.value.copy(
                        error = error,
                        isLoading = false
                    )
                }
            }
        })
    }


    private fun observeChats() {
        _state.value.matchedUsers.forEach { user ->
            val listener = messageService.listenForLastMessage(user.matchId,
                object : MessageService.LastMessageListener {
                    override fun onLastMessageReceived(lastMessage: Message) {

                        // Lắng nghe readBy realtime
                        messageService.listenReadBy(user.matchId) { readByList ->

                            val myId = CurrentUser.user?.userId

                            val chatItem = MessageItem(
                                user = user,
                                lastMessage = lastMessage,
                                isRead = readByList.contains(myId)
                            )

                            _chatList.update { currentList ->
                                val filtered = currentList.filterNot { it.user.matchId == user.matchId }
                                (filtered + chatItem).sortedByDescending { it.lastMessage?.timestamp }
                            }
                        }
                    }
                })

            listeners.add(listener)
        }
    }


    // Khi nhấn chat → đánh dấu đã đọc
    override fun markChatAsRead(matchId: String) {
        _chatList.update { currentList ->
            currentList.map { chatItem ->
                if (chatItem.user.matchId == matchId) chatItem.copy(isRead = true)
                else chatItem
            }
        }

        // Gọi service để update Firestore
        messageService.markMatchAsRead(matchId, CurrentUser.user?.userId)
    }

    override fun onCleared() {
        super.onCleared()
        listeners.forEach { it.remove() }
    }
}
