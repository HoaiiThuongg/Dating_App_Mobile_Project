package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import com.example.atry.ui.screens.functionalScreens.message.IMessageViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Fake MessageViewModel cho testing
 * Implements the same interface as MessageViewModel
 */
class FakeMessageViewModel : ViewModel(), IMessageViewModel {
    private val _state = MutableStateFlow(MatchState())
    override val state: StateFlow<MatchState> = _state.asStateFlow()

    private val _chatList = MutableStateFlow<List<MessageItem>>(emptyList())
    override val chatList: StateFlow<List<MessageItem>> = _chatList.asStateFlow()

    /**
     * Helper function để test có thể set state trực tiếp
     */
    fun pushState(newState: MatchState) {
        _state.value = newState
    }

    /**
     * Helper function để test có thể set chatList trực tiếp
     */
    fun pushChatList(newChatList: List<MessageItem>) {
        _chatList.value = newChatList
    }
    
    override fun markChatAsRead(matchId: String) {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
}

