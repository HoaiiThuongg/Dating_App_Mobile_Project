package com.example.atry.viewmodel.auth

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.User
import com.example.atry.backend.UserService // Giả sử UserService ở đây
import com.example.atry.data.singleton.CurrentUser
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

data class UserUpdateState(
    val isLoading: Boolean = false,
    val isSuccess: Boolean = false,
    val error: String? = null,
    val message: String? = null
)
class UserInfoSetupViewModel (private val userService: UserService) : ViewModel() {
    private val _user = MutableStateFlow<User?>(CurrentUser.user)
    val user: StateFlow<User?> = _user
    private val _updateState = MutableStateFlow(UserUpdateState())
    val updateState: StateFlow<UserUpdateState> = _updateState

    fun updateUserInfo(user: User) {
        // 1. Kích hoạt trạng thái Loading
        _updateState.value = UserUpdateState(isLoading = true)

        userService.updateUserInfo(user, object : UserService.UserCallback {
            override fun onSuccess(message: String) {
                viewModelScope.launch {
                    _updateState.value = UserUpdateState(
                        isSuccess = true,
                        message = message
                    )
                }
            }

            override fun onFailure(errorMessage: String) {
                // 3. Cập nhật trạng thái thất bại
                viewModelScope.launch {
                    _updateState.value = UserUpdateState(
                        error = errorMessage
                    )
                }
            }
        })
    }

    fun updateName(newName: String) {
        CurrentUser.setName(newName)
    }

    fun resetUpdateState() {
        _updateState.value = UserUpdateState()
    }
}