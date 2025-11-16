package com.example.atry.viewmodel.functional

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.atry.backend.SwipeService

class MyProfileViewModel: ViewModel() {
    private val swipeService = SwipeService()

    private val _matchCount = MutableLiveData<Int?>(null)
    val matchCount: LiveData<Int?> = _matchCount

    private val _errorMessage = MutableLiveData<String?>(null)
    val errorMessage: LiveData<String?> = _errorMessage

    fun getNumberOfMatches() {
        swipeService.getTotalMatchesCount(object : SwipeService.CountCallback { // <-- Sửa cú pháp Java sang Kotlin

            override fun onSuccess(count: Int) {
                Log.d("MatchCount", "Tổng số Match: $count")
                _matchCount.postValue(count)
                _errorMessage.postValue(null)
            }

            override fun onFailure(error: String) {
                Log.e("MatchCount", "Không thể tải số lượng Match: $error")
                // 3. Cập nhật lỗi LiveData
                _errorMessage.postValue(error)
                _matchCount.postValue(null)
            }
        })
    }

    // Bạn nên gọi hàm này ngay khi ViewModel được khởi tạo
    init {
        getNumberOfMatches()
    }
}