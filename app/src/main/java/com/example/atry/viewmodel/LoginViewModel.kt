package com.example.atry.viewmodel

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.data_fe.model.LoginRequest
import com.example.atry.data_fe.repository.fakeBE.AuthRepository
import kotlinx.coroutines.launch
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

class LoginViewModel(
    private val repository: AuthRepository = AuthRepository() // fake repo
) : ViewModel() {

    private val _uiState = MutableStateFlow(LoginRequest())
    val uiState: StateFlow<LoginRequest> = _uiState.asStateFlow()

    fun onEmailChange(newEmail: String) {
        _uiState.value = _uiState.value.copy(email = newEmail)
    }

    fun onPasswordChange(newPass: String) {
        _uiState.value = _uiState.value.copy(password = newPass)
    }

    fun login() {
        val current = _uiState.value
        viewModelScope.launch {
            _uiState.value = current.copy(isLoading = true, error = null)
            val result = repository.login(current.email, current.password)
            result
                .onSuccess {
                    _uiState.value = _uiState.value.copy(isLoading = false, isSuccess = true)
                }
                .onFailure {
                    _uiState.value = _uiState.value.copy(isLoading = false, error = it.message)
                }
        }
    }
}