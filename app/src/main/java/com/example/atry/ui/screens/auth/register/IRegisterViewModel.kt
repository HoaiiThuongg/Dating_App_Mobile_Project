package com.example.atry.ui.screens.auth.register

import kotlinx.coroutines.flow.StateFlow
import com.example.atry.viewmodel.auth.RegisterState

interface IRegisterViewModel {
    /**
     * Trạng thái (State) của UI, Composable sẽ lắng nghe
     */
    val state: StateFlow<RegisterState>
    
    /**
     * Email của người dùng
     */
    var email: String

    /**
     * Hàm được gọi khi người dùng nhấn gửi email
     */
    fun sendEmailToBE()
    
    /**
     * Hàm để set password cho user hiện tại
     */
    fun setPasswordForCurrentUser(password: String)
    
    /**
     * Hàm để xử lý sign in link
     */
    fun handleSignInLink(link: String?)
    
    /**
     * Hàm để đăng ký với email và password
     */
    fun registerWithEmailPassword(email: String, password: String)
}

