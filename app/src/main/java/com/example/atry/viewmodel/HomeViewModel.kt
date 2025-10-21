package com.example.atry.viewmodel

import android.util.Log
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data_fe.model.HomeMatchingProfileDTO
import com.example.atry.data_fe.repository.fakeBE.HomeRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class HomeViewModel : ViewModel() {
    private val _profiles = MutableStateFlow<List<HomeMatchingProfileDTO>>(emptyList())
    val profiles: StateFlow<List<HomeMatchingProfileDTO>> = _profiles

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
                val userProfile = HomeRepository.getProfileById(currentUserId)
                _profiles.value = userProfile
                Log.d("HomeVM", "Loaded users: $userProfile")
            } catch (e: Exception) {
                e.printStackTrace()
                Log.e("HomeVM", "Failed to load users", e)
            } finally {
                isLoading = false
            }
        }
    }

    fun swipe(userSwipingId: Long, userTargetId: Long, action: String) {
        viewModelScope.launch {
            isLoading = true
            try {
                val result = HomeRepository.swipe(userSwipingId, userTargetId, action)
                println("Swipe saved: $result")
                // tăng currentIndex khi swipe xong
                _currentIndex.value = (_currentIndex.value + 1).coerceAtMost(_profiles.value.size - 1)
            } catch (e: Exception) {
                println("Error: ${e.message}")
            } finally {
                isLoading = false
            }
        }
    }
}
