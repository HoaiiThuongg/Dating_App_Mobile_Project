package com.example.atry.viewmodel

import androidx.lifecycle.ViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.viewModelScope
import com.example.atry.data_fe.model.LikeYouInfoDTO
import com.example.atry.data_fe.repository.fakeBE.LikeYouRepository
import kotlinx.coroutines.launch

class LikeYouViewModel : ViewModel() {
    private val _partner_profiles = MutableStateFlow<List<LikeYouInfoDTO>>(emptyList())
    val partner_profiles: StateFlow<List<LikeYouInfoDTO>> = _partner_profiles

    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex

    private val currentUserId = 1L // fake current user
    var isLoading by mutableStateOf(false)
        private set

    init {
        loadProfiles()
    }

    private fun loadProfiles() {
        viewModelScope.launch {
            isLoading = true
            try {
                val userProfile = LikeYouRepository.getPeopleWhoLikeYou(currentUserId)
                _partner_profiles.value = userProfile
            } catch (e: Exception) {
                e.printStackTrace()
            } finally {
                isLoading = false
            }
        }
    }

    fun matching(userId1: Long, userId2: Long) {
        viewModelScope.launch {
            isLoading = true
            try {
                val result = LikeYouRepository.matching(userId1, userId2)
                println("Matching saved: $result")
                // tăng currentIndex để UI tự next profile
                _currentIndex.value = (_currentIndex.value + 1).coerceAtMost(_partner_profiles.value.size - 1)
            } catch (e: Exception) {
                println("Error: ${e.message}")
            } finally {
                isLoading = false
            }
        }
    }
}
