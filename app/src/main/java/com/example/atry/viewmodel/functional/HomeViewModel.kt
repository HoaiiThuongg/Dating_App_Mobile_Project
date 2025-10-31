package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.compose.runtime.mutableStateListOf
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.backend.UserService
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.firestore.DocumentSnapshot
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class HomeViewModel : ViewModel() {
    private val db = FirebaseFirestore.getInstance()
    private val mAuth = FirebaseAuth.getInstance()
    private val swipeService = SwipeService()
    private val _users = MutableStateFlow<List<User>>(emptyList())
    val users = mutableStateListOf<User>()

    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex

    var isLoading: Boolean = false
        private set

    init {
        loadMoreUsers()
    }
    private val userService = UserService()
    private val _profileCache = MutableStateFlow<Map<String, UserProfile?>>(emptyMap())
    val profileCache: StateFlow<Map<String, UserProfile?>> = _profileCache

    private val _userProfile = MutableLiveData<UserProfile?>()
    val userProfile: LiveData<UserProfile?> = _userProfile

    fun loadProfiles() {
        viewModelScope.launch {
            isLoading = true
            val currentUser = mAuth.currentUser


        }
    }

    private var lastDoc: DocumentSnapshot? = null

    var hasMore: Boolean = true

    fun loadMoreUsers(limit: Int = 10) {
        isLoading = true
        swipeService.loadProfilesPaginated(limit, lastDoc,
            object : SwipeService.LoadUsersCallback {
                override fun onSuccess(usersList: List<User>, lastVisible: DocumentSnapshot?) {
                    if (usersList.isEmpty()) {
                        hasMore = false
                        isLoading=false
                    }
                    users.addAll(usersList)
                    //  Chỉ cập nhật lastDoc nếu có
                    if (lastVisible != null) {
                        lastDoc = lastVisible
                        isLoading = false
                    }
                    // Nếu không có user mới nữa → đánh dấu hết data
                    if (usersList.isEmpty() || lastVisible == null) {
                        hasMore = false // nhớ khai báo biến này để check load tiếp
                        isLoading = false
                    }
                    isLoading = false
                }
                override fun onFailure(error: String) {
                    isLoading = false
                }
            })
    }

    fun swipe(targetUserId: String, type: SwipeService.SwipeType) {
        swipeService.swipeType(targetUserId, type, object : SwipeService.SwipeCallback {
            override fun onSuccess(message: String) {
                // Nếu muốn, remove user đầu tiên khỏi list khi swipe
                if (users.isNotEmpty()) {
                    users.removeAt(0)
                }
            }

            override fun onFailure(error: String) {
            }
        })
    }

    fun getUserProfileById(userId: String) {
        profileCache.value[userId]?.let { return }

        userService.getUserProfileById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: UserProfile) {
                _profileCache.value = _profileCache.value + (userId to user)
            }

            override fun onFailure(errorMessage: String) {
                _profileCache.value = _profileCache.value + (userId to null)
            }
        })
    }

}