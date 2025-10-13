package com.example.atry.ui.viewmodel

import androidx.lifecycle.ViewModel
import com.example.atry.R
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import android.os.Parcelable
import android.util.Log
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.viewModelScope
import com.example.atry.data.model.LikeYouInfoDTO
import com.example.atry.data.repository.remote.RetrofitClient
import kotlinx.coroutines.launch
import kotlinx.parcelize.Parcelize

class LikeYouViewModel : ViewModel() {
    private val _partner_profiles = MutableStateFlow<List<LikeYouInfoDTO>>(emptyList())
    val partner_profiles: StateFlow<List<LikeYouInfoDTO>> = _partner_profiles.asStateFlow()
    var isLoading by mutableStateOf(false)
        private set
    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex.asStateFlow()
    private val currentUserId = 1L // lấy từ login / shared preferences

    init {
        loadProfiles()
    }

    private fun loadProfiles() {
        viewModelScope.launch {
            isLoading = true
            try {
                val userProfile = RetrofitClient.likeYouService.getPeopleWhoLikeYou(currentUserId)
                _partner_profiles.value = userProfile
            } catch (e: Exception) {
                e.printStackTrace()
            } finally {
                isLoading = false
            }
        }
    }

    fun matching(user_id1 :Long,user_id2 : Long){
        viewModelScope.launch {
            isLoading = true
            try {
                val result = RetrofitClient.likeYouService.matching(user_id1,user_id2)
                println("Matching saved: $result")
            } catch (e: Exception) {
                println("Error: ${e.message}")
            } finally {
                isLoading = false
            }
        }
    }

}
