package com.example.atry.viewmodel

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel

class WarningCardViewModel: ViewModel() {
    var isWarningVisible by mutableStateOf(false)
        private set

    fun showWarning() {
        isWarningVisible = true
    }

    fun hideWarning() {
        isWarningVisible = false
    }
}