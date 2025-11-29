package com.example.atry.viewmodel.functional

import androidx.compose.runtime.mutableStateListOf
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.backend.UserService
import com.example.atry.data.singleton.CurrentUser
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.firestore.DocumentSnapshot
import com.google.firebase.firestore.FirebaseFirestore
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlinx.coroutines.delay


open class HomeViewModel : ViewModel() {
    private val db = FirebaseFirestore.getInstance()
    private val mAuth = FirebaseAuth.getInstance()
    private val swipeService = SwipeService()
    private val _users = MutableStateFlow<List<User>>(emptyList())
    val users = mutableStateListOf<User>()
    val usersBuff = mutableStateListOf<User>()


    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex

    var isLoading: Boolean = false
        private set

    protected fun setLoading(loading: Boolean) {
        isLoading = loading
    }

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

    open fun loadMoreUsers(limit: Int = 20) {
        if (isLoading) return

        isLoading = true
        viewModelScope.launch {
            // Fallback timeout
            val timeoutJob = launch {
                delay(10000)
                if (isLoading) {
                    isLoading = false
                    hasMore = false
                }
            }

            swipeService.loadProfilesPaginated(limit, lastDoc,
                object : SwipeService.LoadUsersCallback {
                    override fun onSuccess(usersList: List<User>, lastVisible: DocumentSnapshot?) {
                        timeoutJob.cancel() // huỷ timeout

                        if (usersList.isNotEmpty()) {
                            users.addAll(usersList)
                            lastVisible?.let { lastDoc = it }
                        }

                        hasMore = usersList.isNotEmpty() && lastVisible != null
                        isLoading = false
                    }

                    override fun onFailure(error: String) {
                        timeoutJob.cancel() // huỷ timeout
                        isLoading = false
                        hasMore = false
                    }
                }
            )
        }
    }


    fun swipe(targetUserId: String, type: SwipeService.SwipeType) {
        swipeService.swipeType(targetUserId, type, object : SwipeService.SwipeCallback {
            override fun onSuccess(message: String) {
                if (users.isNotEmpty()) {
                    users.removeAt(0)
                }
                if(users.size <= 5 && usersBuff.size<=10) {
                    loadMoreUsers(10)
                }
                if (users.isEmpty()&& usersBuff.isNotEmpty()) {
                    users.addAll(usersBuff)    // Thêm các phần tử vào list hiện tại
                    usersBuff.clear()          // Xóa buffer
                }
            }

            override fun onFailure(error: String) {
            }
        })
    }
    fun loadMore(limit: Int = 10) {
        isLoading = true
        swipeService.loadProfilesPaginated(limit, lastDoc,
            object : SwipeService.LoadUsersCallback {
                override fun onSuccess(usersList: List<User>, lastVisible: DocumentSnapshot?) {
                    if (usersList.isEmpty()) {
                        hasMore = false
                    } else {
                        // add vào buffer
                        usersBuff.addAll(usersList)

                        // nếu users trống, add buffer ngay
                        if (users.isEmpty()) {
                            users.addAll(usersBuff)
                            usersBuff.clear()
                        }
                    }
                    lastDoc = lastVisible ?: lastDoc
                }
                override fun onFailure(error: String) {
                    isLoading = false
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
    fun setUserInfo(){
        val user = FirebaseAuth.getInstance().currentUser
        val userId = user?.uid

        if (userId != null) {
            FirebaseFirestore.getInstance().collection("users")
                .document(userId)
                .get()
                .addOnSuccessListener { doc ->
                    CurrentUser.user = doc.toObject(User::class.java)
                }

            FirebaseFirestore.getInstance().collection("userProfiles")
                .document(userId)
                .get()
                .addOnSuccessListener { doc ->
                    if (doc.exists()) {
                        CurrentUser.userProfile = doc.toObject(UserProfile::class.java)
                    } else {
                        // ⭐ Tạo luôn profile trống cho user mới
                        val newProfile = UserProfile(userId)
                        FirebaseFirestore.getInstance()
                            .collection("userProfiles")
                            .document(userId)
                            .set(newProfile)

                        CurrentUser.userProfile = newProfile
                    }
                }

        }
    }
}
