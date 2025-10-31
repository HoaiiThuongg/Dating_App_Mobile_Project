package com.example.atry.viewmodel.auth

import android.app.Application
import android.net.Uri
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.EmailLinkAuthService
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

data class RegisterState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null,
    val message: String? = null
)

class RegisterViewModel(application: Application) : AndroidViewModel(application) {

    var email: String = ""

    private val _state = MutableStateFlow(RegisterState())
    val state: StateFlow<RegisterState> = _state

    private val authService = EmailLinkAuthService(application.applicationContext)

    //gửi link xác thực email tới Firebase backend
    fun sendEmailToBE() {
        if (email.isBlank()) {
            _state.value = RegisterState(error = "Email không được để trống")
            return
        }

        _state.value = RegisterState(isLoading = true)

        authService.sendVerifyEmail(email, object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(isSuccess = true, message = message)
                }
            }

            override fun onEmailSent(message: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(isSuccess = true, message = message)
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(error = error)
                }
            }
        })
    }

    fun resetState() {
        _state.value = RegisterState()
    }

    fun handleSignInLink(link: String) {
        _state.value = RegisterState(isLoading = true)
        authService.handleVerifyEmail(Uri.parse(link), object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(isSuccess = true, message = message)
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(error = error)
                }
            }

            override fun onEmailSent(message: String) {}
        })
    }

    fun setPasswordForCurrentUser(password: String) {
        authService.setPassword(password, object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                _state.value = RegisterState(isSuccess = true, message = message)
                val userId = FirebaseAuth.getInstance().currentUser?.uid
                if (userId != null) {
                    FirebaseFirestore.getInstance().collection("users")
                        .document(userId)
                        .get()
                        .addOnSuccessListener { doc ->
                            CurrentUser.user = doc.toObject(User::class.java)

                        }
                }
            }

            override fun onFailure(error: String) {
                _state.value = RegisterState(error = error)
            }

            override fun onEmailSent(message: String) {}
        })
    }

}