package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.User
import com.example.atry.backend.UserService

class QRViewModel : ViewModel() {

    private val userService = UserService()

    private val _user = MutableLiveData<User?>()
    val user: LiveData<User?> = _user

    fun getUserById(userId: String) {
        userService.getUserById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: User) {
                Log.d("QR", "Lấy được user: ${user.name}")
                _user.postValue(user)
            }

            override fun onFailure(errorMessage: String) {
                Log.e("QR", "Lỗi: $errorMessage")
                _user.postValue(null)
            }
        })
    }
}
