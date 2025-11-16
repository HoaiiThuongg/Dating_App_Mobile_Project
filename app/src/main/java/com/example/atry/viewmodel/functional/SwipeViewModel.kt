package com.example.atry.viewmodel.functional
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.google.firebase.firestore.DocumentSnapshot
import kotlinx.coroutines.launch

class SwipeViewModel : ViewModel() {

    private val swipeService = SwipeService()

    // State list cho Composable hiển thị
    val users = mutableStateListOf<User>()
    val isLoading = mutableStateOf(false)
    val errorMessage = mutableStateOf<String?>(null)

    private var lastDoc: DocumentSnapshot? = null

    fun loadMoreUsers(limit: Int = 10) {
        isLoading.value = true
        swipeService.loadProfilesPaginated(limit, lastDoc,
            object : SwipeService.LoadUsersCallback {
                override fun onSuccess(usersList: List<User>, lastVisible: DocumentSnapshot) {
                    users.addAll(usersList)
                    lastDoc = lastVisible
                    isLoading.value = false
                }

                override fun onFailure(error: String) {
                    errorMessage.value = error
                    isLoading.value = false
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
                errorMessage.value = message // Có thể hiển thị toast hoặc snackbar
            }

            override fun onFailure(error: String) {
                errorMessage.value = error
            }
        })
    }
}