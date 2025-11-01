package com.example.atry.ui.screens.auth.register

import com.example.atry.ui.screens.auth.AuthFormContainer

import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.MainActivity
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.RegisterViewModel
import com.example.atry.viewmodel.composal.AlertViewModel

@Composable
fun PasswordInputScreen(
    email:String,
    viewModel: RegisterViewModel =  viewModel(),
    alertViewModel: AlertViewModel= viewModel()
) {
    var password by remember { mutableStateOf("") }
    val state by viewModel.state.collectAsState()

    val deepLink = remember { MainActivity.currentLink }

    LaunchedEffect(deepLink) {
        if (deepLink != null) {
            viewModel.handleSignInLink(deepLink)
            MainActivity.currentLink = null
        }
    }


    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập mật khẩu",
        topContent = {},
        bottomContent = {
            Text("Nhập mật khau")
            Spacer(modifier = Modifier.size(20.dp))
            UnderlineTextField(
                value = password,
                onValueChange = { password = it },
                label = "Email"
            )
            Spacer(modifier = Modifier.size(20.dp))
            CustomLinearButton(
                "Tếp theo",
                {
                    viewModel.setPasswordForCurrentUser(password)
                    alertViewModel.showAlert()
                },
                redOrangeLinear, Color.White
            )

        },
        alertMessage = when {
            state.isLoading -> "Đang xác thực..."
            state.isSuccess -> state.message ?: "Đã gửi link xác thực thành công!"
            state.error != null -> "Lỗi: ${state.error}"
            else -> "Sai dạng email"
        },

        onAlertAction = {
            if (state.isSuccess) {
                navController.navigate("registerInfoInput1")
            } else {
                alertViewModel.hideAlert()
            }
        }
    )

    LaunchedEffect(state.isSuccess) {
        if (state.isSuccess) {
            navController.navigate("registerInfoInput1") {
                popUpTo("registerInfoInput1") {
                    inclusive = true
                }
            }
        }
    }
}