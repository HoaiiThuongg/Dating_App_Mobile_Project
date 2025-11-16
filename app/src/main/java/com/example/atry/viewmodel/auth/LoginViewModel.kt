package com.example.atry.viewmodel.auth

import android.app.Application
import android.util.Log
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.EmailLinkAuthService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.FirebaseUser
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlin.jvm.java

data class LoginState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null,
    val message: String? = null
)

class LoginViewModel(application: Application) : AndroidViewModel(application) {

    private val _state = MutableStateFlow(LoginState())
    val state: StateFlow<LoginState> = _state

    private val authService = EmailLinkAuthService(application.applicationContext)

    // login với email & password
    fun login(email: String, password: String) {
        _state.value = LoginState(isLoading = true)

        authService.loginWithEmailPassword(email, password, object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                viewModelScope.launch {
                    _state.value = LoginState(isSuccess = true, message = message)
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    _state.value = LoginState(error = "Sai mật khẩu hoặc tên đăng nhập")
                }
            }

            override fun onEmailSent(message: String) {
                // không dùng trong login thường
            }
        })
    }

    fun resetState() {
        _state.value = LoginState()
    }
}
