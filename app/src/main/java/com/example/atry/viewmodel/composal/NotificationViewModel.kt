package com.example.atry.viewmodel.composal

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.Notification
import com.example.atry.backend.NotificationService
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.backend.UserService
import com.google.firebase.firestore.ListenerRegistration
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow

class NotificationViewModel: ViewModel() {
    private val service = NotificationService()

    private val _notifications = MutableStateFlow<List<Notification>>(emptyList())
    val notifications: StateFlow<List<Notification>> = _notifications

    private val receivedIds = mutableSetOf<String>()
    private var listener: ListenerRegistration? = null

    init {
        loadNotifications()
        listenRealtime()
    }

    fun loadNotifications() {
        service.getNotificationList(object : NotificationService.NotificationCallback {
            override fun onSuccess(notificationsList: List<Notification>) {
                notificationsList.forEach { receivedIds.add(it.id) }
                _notifications.value = notificationsList.sortedByDescending { it.timestamp }
            }
            override fun onFailure(error: String) {}
        })
    }

    fun listenRealtime() {
        listener = service.listenNotifications(object : NotificationService.NotificationCallback {
            override fun onSuccess(notificationsList: List<Notification>) {
                val current = _notifications.value.toMutableList()
                notificationsList.forEach { n ->
                    if (!receivedIds.contains(n.id)) {
                        current.add(n)
                        receivedIds.add(n.id)
                    }
                }
                _notifications.value = current.sortedByDescending { it.timestamp }
            }

            override fun onFailure(error: String) {}
        })
    }
    fun markNotificationAsRead(notificationId: String) {
        service.markAsRead(notificationId, object : NotificationService.NotificationCallback {
            override fun onSuccess(notifications: List<Notification>) {
                // Cập nhật state local luôn để UI dot đỏ biến mất
                val updated = _notifications.value.map { n ->
                    if (n.id == notificationId) n.apply { isRead = true } else n
                }
                _notifications.value = updated
            }

            override fun onFailure(error: String) {
                // Có thể log hoặc show toast
                println("Lỗi khi đánh dấu đã đọc: $error")
            }
        })
    }


    override fun onCleared() {
        super.onCleared()
        listener?.remove()
    }

    private val userService = UserService()

    private val _user = MutableLiveData<User?>()
    val user: LiveData<User?> = _user
    fun getuserById(userId: String) {
        userService.getUserById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: User) {
                Log.d("noti",  "Lấy được profile với phone: ${user.userId}")
                _user.postValue(user)
            }

            override fun onFailure(errorMessage: String) {
                Log.e("noti", "Lỗi: $errorMessage")
                _user.postValue(null)
            }
        })
    }
    fun getUserByIdOnce(userId: String, callback: (User?) -> Unit) {
        userService.getUserById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: User) {
                callback(user)
            }

            override fun onFailure(errorMessage: String) {
                callback(null)
            }
        })
    }

    private val swipeService = SwipeService()

    private val _isMatched = MutableStateFlow(false)
    val isMatched: StateFlow<Boolean> = _isMatched

    fun checkMatch(userAId: String, userBId: String, onResult: (Boolean) -> Unit) {
        swipeService.isMatched(userAId, userBId, object : SwipeService.MatchCallback {
            override fun onResult(matched: Boolean) {
                onResult(matched)
            }
            override fun onError(error: String) {
                onResult(false)
            }
        })
    }

}
