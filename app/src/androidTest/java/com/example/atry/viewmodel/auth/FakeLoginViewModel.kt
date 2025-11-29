package com.example.atry.viewmodel.auth

import com.example.atry.ui.screens.auth.login.ILoginViewModel
import com.example.atry.ui.screens.auth.login.LoginState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Fake ViewModel cho Login screen testing.
 * Implements ILoginViewModel interface để có thể inject vào Login screen.
 * 
 * File này nằm trong androidTest source set và import từ main source set.
 */
class FakeLoginViewModel : ILoginViewModel {

    private val _state: MutableStateFlow<LoginState> = MutableStateFlow(LoginState())
    
    override val state: StateFlow<LoginState> = _state.asStateFlow()

    var loginCalled: Boolean = false
    var lastEmailUsed: String = ""
    var lastPasswordUsed: String = ""

    override fun login(email: String, password: String) {
        loginCalled = true
        lastEmailUsed = email
        lastPasswordUsed = password
        _state.value = LoginState(isLoading = true)
    }

    override fun resetState() {
        _state.value = LoginState()
    }

    /**
     * Helper function để test có thể set state trực tiếp
     */
    fun pushState(newState: LoginState) {
        _state.value = newState
    }
}
