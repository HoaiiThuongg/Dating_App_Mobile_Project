package com.example.atry.viewmodel.auth

import android.app.Application
import android.util.Log
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.EmailLinkAuthService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.screens.auth.login.ILoginViewModel
import com.example.atry.ui.screens.auth.login.LoginState
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.FirebaseUser
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlin.jvm.java

// KHÔNG CẦN 'data class LoginState' ở đây nữa, vì nó đã ở trong ILoginViewModel.kt

// THAY ĐỔI 1: Thêm ", ILoginViewModel"
class LoginViewModel(application: Application) : AndroidViewModel(application), ILoginViewModel {

    private val _state = MutableStateFlow(LoginState())
    // THAY ĐỔI 2: Thêm "override"
    override val state: StateFlow<LoginState> = _state

    private val authService = EmailLinkAuthService(application.applicationContext)

    // login với email & password
    // THAY ĐỔI 3: Thêm "override"
    override fun login(email: String, password: String) {
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

    // THAY ĐỔI 4: Thêm "override"
    override fun resetState() {
        _state.value = LoginState()
    }
}