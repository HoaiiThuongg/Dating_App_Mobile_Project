package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.UserProfile
import com.example.atry.backend.UserService
import com.google.firebase.auth.FirebaseAuth // Cần FirebaseAuth để lấy ID người dùng hiện tại
import kotlinx.coroutines.flow.asStateFlow

// Thêm matchedUser để thông báo UI hiển thị thẻ Match
data class LikedByState(
    val isLoading: Boolean = true,
    val users: List<User> = emptyList(),
    val error: String? = null,
    val matchedUser: User? = null // Người dùng vừa match
)

class LikeYouViewModel (
    private val swipeService: SwipeService = SwipeService(),
    private val auth: FirebaseAuth = FirebaseAuth.getInstance() // Thêm Auth để lấy currentUserId
) : ViewModel() {

    private val _state = MutableStateFlow(LikedByState())
    val state: StateFlow<LikedByState> = _state.asStateFlow() // Dùng asStateFlow

    init {
        viewModelScope.launch {
            loadUsersWhoLikedMe()
        }
    }
    private val userService = UserService()

    private val _userProfile = MutableLiveData<UserProfile?>()
    val userProfile: LiveData<UserProfile?> = _userProfile

    fun getUserProfileById(userId: String) {
        userService.getUserProfileById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: UserProfile) {
                Log.d("QR", "✅ Lấy được profile với phone: ${user.phone}")
                _userProfile.postValue(user)
            }

            override fun onFailure(errorMessage: String) {
                Log.e("QR", "❌ Lỗi: $errorMessage")
                _userProfile.postValue(null)
            }
        })
    }
    // Đặt matchedUser về null sau khi UI đã hiển thị thông báo Match
    fun clearMatchStatus() {
        _state.value = _state.value.copy(matchedUser = null)
    }

    /**
     * Thực hiện hành động vuốt (LIKE/PASSED) và xử lý logic Match/Cập nhật UI
     * @param targetUser Người dùng bị vuốt.
     * @param type Loại vuốt (RIGHT, LEFT, SUPER).
     */
    fun swipe(targetUser: User, type: SwipeService.SwipeType) {
        val targetUserId = targetUser.userId ?: return

        // Cập nhật UI ngay lập tức: Xóa người dùng vừa vuốt khỏi danh sách
        _state.value = _state.value.copy(
            users = _state.value.users.filter { it.userId != targetUserId }
        )

        swipeService.swipeType(targetUserId, type, object : SwipeService.SwipeCallback {
            override fun onSuccess(message: String) {
                Log.d("Swipe", "Success: $message")

                if (message.contains("match")) {
                    // Cập nhật trạng thái MatchedUser
                    _state.value = _state.value.copy(
                        matchedUser = targetUser
                    )
                }
            }
            override fun onFailure(error: String) {
                Log.e("SwipeError", error)
            }
        })
    }

    fun loadUsersWhoLikedMe() {
        _state.value = _state.value.copy(isLoading = true, error = null)

        swipeService.getUsersWhoLikedMe(object : SwipeService.LoadUsersCallback {
            override fun onSuccess(users: List<User>, lastVisible: DocumentSnapshot?) {
                viewModelScope.launch {
                    _state.value = _state.value.copy(
                        users = users.reversed(), // Đảo ngược để người mới nhất lên trên
                        isLoading = false
                    )
                }
            }

            override fun onFailure(error: String) {
                viewModelScope.launch {
                    _state.value = _state.value.copy(
                        error = error,
                        isLoading = false
                    )
                }
            }
        })
    }

    // Xóa hàm match riêng biệt vì logic Match đã được tích hợp trong swipeType (checkForMatch)
    // và chỉ cần xử lý kết quả trả về.
}