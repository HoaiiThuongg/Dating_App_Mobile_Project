package com.example.atry.viewmodel.functional

import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewmodel.CreationExtras
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.MessageService
import com.example.atry.backend.UserService
import com.example.atry.viewmodel.functional.ChatViewModel

/**
 * Fake ChatViewModelFactory cho testing
 */
class FakeChatViewModelFactory(
    private val matchedUser: MatchedUser
) : ViewModelProvider.Factory {

    @Suppress("UNCHECKED_CAST")
    override fun <T : ViewModel> create(modelClass: Class<T>, extras: CreationExtras): T {
        if (modelClass.isAssignableFrom(ChatViewModel::class.java)) {
            val savedStateHandle = extras.createSavedStateHandle()
            // Tạo fake services hoặc mock services
            val messageService = MessageService()
            val userService = UserService()
            
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

