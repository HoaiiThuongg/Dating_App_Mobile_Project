package com.example.atry.ui.screens.functionalScreens.message

import com.example.atry.viewmodel.functional.MatchState
import com.example.atry.viewmodel.functional.MessageItem
import kotlinx.coroutines.flow.StateFlow

interface IMessageViewModel {
    /**
     * Trạng thái (State) của UI, Composable sẽ lắng nghe
     */
    val state: StateFlow<MatchState>
    
    /**
     * Danh sách chat items
     */
    val chatList: StateFlow<List<MessageItem>>
    
    /**
     * Đánh dấu chat là đã đọc
     */
    fun markChatAsRead(matchId: String)
}







