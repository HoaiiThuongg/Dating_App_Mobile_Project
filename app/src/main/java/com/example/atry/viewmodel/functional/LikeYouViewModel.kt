package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.launch
import androidx.compose.runtime.State
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.viewModelScope

data class LikedByState(
    val isLoading: Boolean = true, // Mặc định là đang tải khi khởi tạo
    val users: List<User> = emptyList(),
    val error: String? = null
)
class LikeYouViewModel (
    private val swipeService: SwipeService = SwipeService()
) : ViewModel() {

    private val _state = MutableStateFlow(LikedByState())
    val state: StateFlow<LikedByState> = _state

    init {
        // Khởi chạy tác vụ trong Coroutine Scope
        viewModelScope.launch {
            loadUsersWhoLikedMe()
        }
    }

    fun loadUsersWhoLikedMe() {
        // Cập nhật trạng thái Loading và xóa lỗi cũ
        _state.value = _state.value.copy(isLoading = true, error = null)

        swipeService.getUsersWhoLikedMe(object : SwipeService.LoadUsersCallback {
            override fun onSuccess(users: List<User>, lastVisible: DocumentSnapshot?) {
                viewModelScope.launch {
                    // Cập nhật trạng thái thành công
                    _state.value = _state.value.copy(
                        users = users,
                        isLoading = false
                    )
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    // Cập nhật trạng thái thất bại
                    _state.value = _state.value.copy(
                        error = error,
                        isLoading = false
                    )
                }
            }
        })
    }

    fun match(idA:String,idB:String){
        swipeService.saveMatch(idA,idB, object : SwipeService.SwipeCallback {
            override fun onSuccess(message: String) {
                Log.d("Match", message)
            }

            override fun onFailure(errorMessage: String) {
                Log.e("MatchError", errorMessage)
            }
        })
    }

}
