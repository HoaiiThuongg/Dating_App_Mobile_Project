package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.backend.UserService

class DetailedProfileViewModel: ViewModel() {

    private val userService = UserService()

    private val _user = MutableLiveData<UserProfile?>()
    val user: LiveData<UserProfile?> = _user

    fun getUserProfileById(userId: String) {
        userService.getUserProfileById(userId, object : UserService.UserCallback {
            override fun onSuccess(user: UserProfile) {
                Log.d("Detail", "Lấy được profile với phone: ${user.phone}")
                _user.postValue(user)
            }

            override fun onFailure(errorMessage: String) {
                Log.e("Detail", "Lỗi: $errorMessage")
                _user.postValue(null)
            }
        })
    }
}
