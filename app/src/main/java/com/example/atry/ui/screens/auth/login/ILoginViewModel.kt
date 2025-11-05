package com.example.atry.ui.screens.auth.login

import kotlinx.coroutines.flow.StateFlow

data class LoginState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null,
    val message: String? = null
)

interface ILoginViewModel {
    /**
     * Trạng thái (State) của UI, Composable sẽ lắng nghe
     */
    val state: StateFlow<LoginState>

    /**
     * Hàm được gọi khi người dùng nhấn Đăng nhập
     */
    fun login(email: String, password: String)

    /**
     * Hàm để reset trạng thái (hữu ích cho test)
     */
    fun resetState()
}