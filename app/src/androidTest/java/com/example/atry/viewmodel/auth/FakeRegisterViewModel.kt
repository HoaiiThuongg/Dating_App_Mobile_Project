package com.example.atry.viewmodel.auth

import android.app.Application
import androidx.lifecycle.AndroidViewModel
import com.example.atry.ui.screens.auth.register.IRegisterViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Fake RegisterViewModel cho testing
 * Implements IRegisterViewModel interface để có thể inject vào Register screens.
 */
class FakeRegisterViewModel(application: Application) : AndroidViewModel(application), IRegisterViewModel {
    override var email: String = ""
    
    private val _state = MutableStateFlow(RegisterState())
    override val state: StateFlow<RegisterState> = _state.asStateFlow()

    /**
     * Helper function để test có thể set state trực tiếp
     */
    fun pushState(newState: RegisterState) {
        _state.value = newState
    }
    
    override fun sendEmailToBE() {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
    
    override fun setPasswordForCurrentUser(password: String) {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
    
    override fun handleSignInLink(link: String?) {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
    
    override fun registerWithEmailPassword(email: String, password: String) {
        // Fake implementation - không làm gì, test sẽ set state bằng pushState
    }
}

