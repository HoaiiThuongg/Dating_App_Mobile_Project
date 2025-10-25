package com.example.atry.viewmodel.composal

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import com.example.atry.ui.components.alert.Alert

class AlertViewModel: ViewModel() {

    var isAlertVisible by mutableStateOf(false)
        private set

    fun showAlert() {
        isAlertVisible = true
    }

    fun hideAlert() {
        isAlertVisible = false
    }

    @Composable
    fun showAlertCard(
        message:String,
        action:()->Unit
    ){
        Alert(message, action)
    }
}