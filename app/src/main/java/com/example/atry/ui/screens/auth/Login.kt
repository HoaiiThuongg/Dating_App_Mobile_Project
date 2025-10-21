package com.example.atry.ui.screens.auth

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.AlertViewModel
import com.example.atry.viewmodel.LoginViewModel

@Composable
@Preview
fun Login(
    viewModel: LoginViewModel = viewModel(),
    alertViewModel: AlertViewModel=viewModel()
) {
//    var email by remember { mutableStateOf("") }
//    var password by remember { mutableStateOf("") }
    val state by viewModel.uiState.collectAsState()

    AuthFormContainer(
        title = "Đăng nhập",
        subtitle = "Nhập email và mật khẩu",
        topContent = {},
        bottomContent = {
            UnderlineTextField(
                value = state.email,
                onValueChange = { viewModel.onEmailChange(it)},
                label = "Email"
            )
            UnderlineTextField(
                value = state.password,
                onValueChange = { viewModel.onPasswordChange(it) },
                label = "Mật khẩu",
                isPassword = true
            )
            CustomBorderButton(
                "Đăng kí",
                { navController.navigate("registerEmailInput")},
                Color.Black
            )
            CustomLinearButton("Đăng nhập",
                {
                    alertViewModel.showAlert()
                    viewModel.login()
                },
                redOrangeLinear,
                Color.White
            )
        },
        alertMessage = when {
            state.isLoading -> "Đang xác thực..."
            state.isSuccess -> " Chúc mừng bạn đăng nhập thành công!"
            state.error != null -> " ${state.error}"
            else -> "error"
        },

        onAlertAction = {
            if (state.isSuccess) {
                navController.navigate("main")
            } else {
                alertViewModel.hideAlert()
            }
        }
    )
    LaunchedEffect(state.isSuccess) {
        if (state.isSuccess) {
            navController.navigate("main") {
                popUpTo("home") { inclusive = true } // tùy chọn, remove khỏi back stack
            }
        }
    }
}