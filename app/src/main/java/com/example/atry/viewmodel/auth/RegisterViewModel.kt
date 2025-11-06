package com.example.atry.viewmodel.auth

import ImageItem
import android.app.Application
import android.content.Context
import android.net.Uri
import android.util.Log
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.CloudinaryService
import com.example.atry.backend.EmailLinkAuthService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.backend.UserService
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import java.io.File
import java.io.FileOutputStream

data class RegisterState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null,
    val message: String? = null
)

class RegisterViewModel(application: Application) : AndroidViewModel(application), 
    com.example.atry.ui.screens.auth.register.IRegisterViewModel {

    override var email: String = ""
    private val context = application.applicationContext
    private val prefs = context.getSharedPreferences("app_prefs", Context.MODE_PRIVATE)
    private val cloudinaryService = CloudinaryService()

    private val _state = MutableStateFlow(RegisterState())
    override val state: StateFlow<RegisterState> = _state

    private val authService = EmailLinkAuthService(application.applicationContext)

    //gửi link xác thực email tới Firebase backend
    override fun sendEmailToBE() {
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
    private val firebaseAuth = FirebaseAuth.getInstance()

    override fun handleSignInLink(link: String?) {
        if (link == null) return
        val email = prefs.getString("emailForSignIn", null) ?: return

        if (firebaseAuth.isSignInWithEmailLink(link)) {
            firebaseAuth.signInWithEmailLink(email, link)
                .addOnCompleteListener { task ->
                    if (task.isSuccessful) {
                        // Email xác thực ok → lưu email để chuyển sang màn password
                        _state.value = RegisterState(isSuccess = true, message = email)
                    } else {
                        _state.value = RegisterState(error = task.exception?.message)
                    }
                }
        }
    }

    override fun registerWithEmailPassword(email: String, password: String) {

        _state.value = RegisterState(isLoading = true)

        authService.registerWithEmailPassword(email, password, object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                viewModelScope.launch {
                    _state.value = RegisterState(
                        isLoading = false,
                        isSuccess = true,
                        message = message
                    )
                }
            }

            override fun onFailure(error: String) {
                _state.value = RegisterState(isLoading = false, error = error)
            }

            override fun onEmailSent(message: String) {}
        })
    }



    override fun setPasswordForCurrentUser(password: String) {
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