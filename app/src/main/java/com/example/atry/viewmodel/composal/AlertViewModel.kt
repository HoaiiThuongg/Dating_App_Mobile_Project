package com.example.atry.viewmodel.composal

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.User
import com.example.atry.ui.components.alert.Alert

class AlertViewModel: ViewModel() {

    var matchedUser: User? = null
    var isAlertVisible by mutableStateOf(false)
        private set

    var alert = ""

    var isMatchSuccessfullyCard by mutableStateOf(false)
        private set

    fun showAlert() {
        isAlertVisible = true
    }
    fun showAlert(alert:String) {
        isAlertVisible = true
        this.alert=alert
    }

    fun hideAlert() {
        isAlertVisible = false
        this.alert=""
    }

    fun showMatchSuccessfullyCard(matchedUser: User) {
        this.matchedUser = matchedUser
        isMatchSuccessfullyCard = true
    }

    fun hideMatchSuccessfullyCard() {
        this.matchedUser = null
        isMatchSuccessfullyCard = false
    }
}