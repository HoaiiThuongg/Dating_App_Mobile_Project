package com.example.atry.viewmodel

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data_fe.repository.fakeBE.AuthRepository
import kotlinx.coroutines.launch

class RegisterViewModel: ViewModel() {
    var email by mutableStateOf("")
    var otp by mutableStateOf("")
    var name by mutableStateOf("")
    var password by mutableStateOf("")
    var interests = mutableStateListOf<String>()
    var imageUri by mutableStateOf<String?>(null)
    var message by mutableStateOf("")

    var uiState by mutableStateOf(RegisterUiState())
    private val repository: AuthRepository = AuthRepository() // fake repo

    fun sendEmailToBE() {
        uiState = RegisterUiState(isLoading = true)
        viewModelScope.launch {
            val result = repository.sendEmail(email)
            uiState = if (result.isSuccess) {
                RegisterUiState(isSuccess = true)
            } else {
                RegisterUiState(error = result.exceptionOrNull()?.message)
            }
        }
    }

    fun verifyOtp() {
        uiState = RegisterUiState(isLoading = true)
        viewModelScope.launch {
            val result = repository.verifyOtp(otp)
            uiState = if (result.isSuccess) {
                RegisterUiState(isSuccess = true)
            } else {
                RegisterUiState(error = result.exceptionOrNull()?.message)
            }
        }
    }

    fun submitRegister() {
        uiState = RegisterUiState(isLoading = true)
        viewModelScope.launch {
            val result = repository.submitRegister(name, password, interests, imageUri, message)
            uiState = if (result.isSuccess) {
                RegisterUiState(isSuccess = true)
            } else {
                RegisterUiState(error = result.exceptionOrNull()?.message)
            }
        }
    }
}

data class RegisterUiState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null
)
