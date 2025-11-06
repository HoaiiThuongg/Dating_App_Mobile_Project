package com.example.atry.viewmodel.functional

import androidx.lifecycle.ViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Fake LikeYouViewModel cho testing
 */
class FakeLikeYouViewModel : ViewModel() {
    private val _state = MutableStateFlow(
        LikedByState(
            isLoading = false,
            users = emptyList(),
            matchedUser = null
        )
    )
    val state: StateFlow<LikedByState> = _state.asStateFlow()

    /**
     * Helper function để test có thể set state trực tiếp
     */
    fun pushState(newState: LikedByState) {
        _state.value = newState
    }
}

