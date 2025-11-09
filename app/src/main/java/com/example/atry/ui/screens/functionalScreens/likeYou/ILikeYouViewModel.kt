package com.example.atry.ui.screens.functionalScreens.likeYou

import androidx.lifecycle.LiveData
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.viewmodel.functional.LikedByState
import kotlinx.coroutines.flow.StateFlow

interface ILikeYouViewModel {
    /**
     * Trạng thái (State) của UI, Composable sẽ lắng nghe
     */
    val state: StateFlow<LikedByState>
    
    /**
     * User profile LiveData
     */
    val userProfile: LiveData<UserProfile?>
    
    /**
     * Thực hiện hành động vuốt (LIKE/PASSED) và xử lý logic Match/Cập nhật UI
     */
    fun swipe(targetUser: User, type: SwipeService.SwipeType)
    
    /**
     * Lấy user profile theo ID
     */
    fun getUserProfileById(userId: String)
}







