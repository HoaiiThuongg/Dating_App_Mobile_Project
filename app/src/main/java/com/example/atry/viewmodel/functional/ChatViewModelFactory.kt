package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewmodel.CreationExtras
import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.createSavedStateHandle
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.MessageService
import com.example.atry.backend.UserService

class ChatViewModelFactory(
    private val messageService: MessageService,
    private val userService: UserService,
    private val matchedUser: MatchedUser
) : ViewModelProvider.Factory {

    @Suppress("UNCHECKED_CAST")
    override fun <T : ViewModel> create(modelClass: Class<T>, extras: CreationExtras): T {
        if (modelClass.isAssignableFrom(ChatViewModel::class.java)) {
            // 1. Lấy SavedStateHandle từ extras (do NavHost cung cấp)
            val savedStateHandle = extras.createSavedStateHandle()

            // 2. Khởi tạo ViewModel với cả SavedStateHandle và Service
            return ChatViewModel(
                savedStateHandle = savedStateHandle,
                messageService = messageService,
                userService = userService,
                matchedUser = matchedUser
            ) as T
        }
        throw IllegalArgumentException("Unknown ViewModel class")
    }
}