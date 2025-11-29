package com.example.atry.ui.screens.auth.login

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.tooling.preview.Preview
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.nothingToLoad.RotatedIcon
import com.example.atry.ui.components.textfield.UnderlineTextField
// THAY ĐỔI: Thêm import này
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.viewmodel.composal.AlertViewModel

// THAY ĐỔI: Thêm import này
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.LoginViewModel

@Composable
@Preview
fun Login(
    viewModel: ILoginViewModel = viewModel<LoginViewModel>(),
    alertViewModel: AlertViewModel = viewModel()
) {
    val state by viewModel.state.collectAsState()
    var email by remember { mutableStateOf("") }
    var password by remember { mutableStateOf("") }

    AuthFormContainer(
        title = "Đăng nhập",
        subtitle = "Nhập email và mật khẩu",
        topContent = {
            RotatedIcon()
        },
        bottomContent = {
            UnderlineTextField(
                value = email,
                onValueChange = { email = it },
                imeAction = ImeAction.Next,
                label = "Email",
                modifier = Modifier.testTag("login:email_input"),
                enabled = !state.isLoading
            )
            UnderlineTextField(
                value = password,
                onValueChange = { password = it },
                imeAction = ImeAction.Done,
                label = "Mật khẩu",
                isPassword = true,
                modifier = Modifier.testTag("login:password_input"),
                enabled = !state.isLoading
            )
            CustomLinearButton(
                "Đăng nhập",
                {
                    alertViewModel.showAlert()
                    viewModel.login(email, password)
                },
                redOrangeLinear,
                Color.White,
                modifier = Modifier.testTag("login:login_button"),
                // Thêm logic: Vô hiệu hóa nút khi đang tải
                enabled = !state.isLoading
            )
            CustomBorderButton(
                "Đăng kí",
                { navController.navigate("authEntry") },
                Color.Black,
                modifier = Modifier.testTag("login:register_button")
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