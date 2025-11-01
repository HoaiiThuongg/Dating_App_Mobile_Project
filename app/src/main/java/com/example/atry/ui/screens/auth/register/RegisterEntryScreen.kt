package com.example.atry.ui.screens.auth.register

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.tooling.preview.Preview
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.MainActivity
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.auth.RegisterViewModel

@Composable
@Preview
fun RegisterEntryScreen(
    viewModel: RegisterViewModel = viewModel()) {
    val context = LocalContext.current
    val deepLink = remember { MainActivity.currentLink }

    LaunchedEffect(deepLink) {
        if (deepLink != null) {
            viewModel.handleSignInLink(deepLink) // deepLink là Uri
            MainActivity.currentLink = null // reset sau khi xử lý
        }
    }
    val state by viewModel.state.collectAsState()

    LaunchedEffect(state.isSuccess) {
        if (state.isSuccess) {
            navController.navigate("setPassword") {
                popUpTo("login") { inclusive = true }
            }
        }
    }
}
