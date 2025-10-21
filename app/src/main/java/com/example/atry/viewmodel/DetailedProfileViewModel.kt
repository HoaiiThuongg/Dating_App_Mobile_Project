package com.example.atry.viewmodel

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data_fe.model.DetailProfileDTO
import com.example.atry.data_fe.repository.fakeBE.DetailProfileRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class DetailProfileViewModel : ViewModel() {

    private val _profile = MutableStateFlow<DetailProfileDTO?>(null)
    val profile: StateFlow<DetailProfileDTO?> = _profile

    var isLoading by mutableStateOf(false)
        private set
    init {
        loadProfile(1L)
    }
    fun loadProfile(userId: Long) {
        viewModelScope.launch {
            isLoading = true
            try {
                val result = DetailProfileRepository.getProfileDetail(userId)
                _profile.value = result
            } catch (e: Exception) {
                e.printStackTrace()
            } finally {
                isLoading = false
            }
        }
    }
}
