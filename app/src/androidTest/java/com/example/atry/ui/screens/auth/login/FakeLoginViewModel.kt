package com.example.atry.viewmodel.auth

import com.example.atry.ui.screens.auth.login.ILoginViewModel
import com.example.atry.ui.screens.auth.login.LoginState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow

/**
 * Đây là ViewModel Giả, dùng cho Test.
 * Nó implement cùng Interface với ViewModel Thật.
 */
class FakeLoginViewModel : ILoginViewModel {

    // Chúng ta dùng MutableStateFlow để Test có thể "đẩy" trạng thái vào
    private val _state = MutableStateFlow(LoginState())
    override val state = _state.asStateFlow()

    // Biến để kiểm tra xem hàm login có được gọi không
    var loginCalled = false
    var lastEmailUsed = ""
    var lastPasswordUsed = ""

    /**
     * Khi hàm login() giả này được gọi, chúng ta chỉ đánh dấu
     * là nó đã được gọi, chứ không gọi Firebase.
     */
    override fun login(email: String, password: String) {
        loginCalled = true
        lastEmailUsed = email
        lastPasswordUsed = password
        // Bạn cũng có thể giả lập logic ở đây, ví dụ:
        // if (email == "bad@user.com") {
        //     _state.value = LoginState(error = "Tài khoản giả bị khóa")
        // }
        _state.value = LoginState(isLoading = true)
    }

    override fun resetState() {
        _state.value = LoginState()
    }

    /**
     * Hàm này dành riêng cho Test,
     * cho phép chúng ta ép UI phải hiển thị một trạng thái nhất định.
     */
    fun pushState(newState: LoginState) {
        _state.value = newState
    }
}