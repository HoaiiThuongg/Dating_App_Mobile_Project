package com.example.atry.viewmodel.functional

import androidx.compose.runtime.mutableStateListOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
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

    fun loadProfiles() {
        viewModelScope.launch {
            isLoading = true
            val currentUser = mAuth.currentUser

            db.collection("users")
                .limit(1)
                .get()
                .addOnSuccessListener { result ->
                    val list = result.documents.mapNotNull { doc ->
                        val user = doc.toObject(User::class.java)
                        if (user != null && doc.id != currentUser?.uid) {
                            user.apply { userId = doc.id }
                        } else null
                    }

                    _users.value = list.shuffled() // random chút cho vui
                    isLoading = false
                }
                .addOnFailureListener {
                    isLoading = false
                }
        }
    }

    private var lastDoc: DocumentSnapshot? = null

    fun loadMoreUsers(limit: Int = 1) {
        isLoading = true
        swipeService.loadProfilesPaginated(limit, lastDoc,
            object : SwipeService.LoadUsersCallback {
                override fun onSuccess(usersList: List<User>, lastVisible: DocumentSnapshot) {
                    users.addAll(usersList)
                    lastDoc = lastVisible
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
}