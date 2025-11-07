package com.example.atry.viewmodel.functional

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.ui.screens.functionalScreens.likeYou.ILikeYouViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Fake LikeYouViewModel cho testing
 */
class FakeLikeYouViewModel : ViewModel(), ILikeYouViewModel {
    private val _userProfile = MutableLiveData<UserProfile?>()
    override val userProfile: LiveData<UserProfile?> = _userProfile
    private val _state = MutableStateFlow(
        LikedByState(
            isLoading = false,
            users = emptyList(),
            matchedUser = null
        )
    )
    override val state: StateFlow<LikedByState> = _state.asStateFlow()

    /**
     * Helper function để test có thể set state trực tiếp
     */
    fun pushState(newState: LikedByState) {
        _state.value = newState
    }
    
    override fun swipe(targetUser: User, type: SwipeService.SwipeType) {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
    
    override fun getUserProfileById(userId: String) {
        // Fake implementation - không làm gì, test sẽ set userProfile bằng pushUserProfile
    }
    
    /**
     * Helper function để test có thể set userProfile trực tiếp
     */
    fun pushUserProfile(profile: UserProfile?) {
        _userProfile.value = profile
    }
}

