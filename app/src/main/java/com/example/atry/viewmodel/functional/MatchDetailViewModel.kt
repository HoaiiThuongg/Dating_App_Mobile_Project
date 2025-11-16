package com.example.atry.viewmodel.functional

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.SwipeService
import com.google.firebase.Timestamp

class MatchDetailViewModel : ViewModel() {

    private val _daysMatched = MutableLiveData<Long>()
    val daysMatched: LiveData<Long> get() = _daysMatched

    private val _unmatchStatus = MutableLiveData<String>()
    val unmatchStatus: LiveData<String> get() = _unmatchStatus

    val swipeService = SwipeService()

    // --- Hàm gọi unmatchUser ---

    fun fetchDaysMatched(userId: String, partnerId: String) {
        swipeService.getDaysMatched(userId, partnerId, object : SwipeService.DaysMatchedCallback {
            override fun onSuccess(days: Long) {
                _daysMatched.postValue(days)
            }

            override fun onFailure(error: String) {
                _daysMatched.postValue(0)
            }
        })
    }

    fun unmatchUser(currentUserId: String, partnerId: String) {
        swipeService.unmatchUser(currentUserId, partnerId, object : SwipeService.UnmatchCallback {
            override fun onSuccess(message: String) {
                _unmatchStatus.postValue(message)
            }

            override fun onFailure(error: String) {
                _unmatchStatus.postValue("Lỗi: $error")
            }
        })
    }

}
