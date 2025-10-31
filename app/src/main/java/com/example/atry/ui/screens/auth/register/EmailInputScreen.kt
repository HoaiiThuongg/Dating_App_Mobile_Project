package com.example.atry.ui.screens.auth.register

import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.MainActivity
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.nothingToLoad.RotatedIcon
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.composal.AlertViewModel
import com.example.atry.viewmodel.auth.RegisterViewModel

@Preview
@Composable
fun EmailInputScreen(
    viewModel: RegisterViewModel =  viewModel(),
    alertViewModel: AlertViewModel=viewModel()
) {
    val context = LocalContext.current
    val deepLink = remember { MainActivity.DeepLinkHandler.currentLink }

        LaunchedEffect(deepLink) {
            if (deepLink != null) {
                viewModel.handleSignInLink(deepLink)
                MainActivity.DeepLinkHandler.currentLink = null // reset
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

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập email của bạn",
        topContent = {
            RotatedIcon()
        },
        bottomContent = {
            Text("Nhập Email", fontSize = 24.sp, color = Color.Black)
            Spacer(modifier = Modifier.size(30.dp))
            UnderlineTextField(
                value = viewModel.email,
                onValueChange = { viewModel.email = it },
                label = "Email",
                imeAction = ImeAction.Done
            )
            Spacer(modifier = Modifier.size(20.dp))
            CustomLinearButton(
                "Tếp theo",
                {
                    viewModel.sendEmailToBE()
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
                alertViewModel.hideAlert() // chuyển trang khi login thành công
            } else {
                alertViewModel.hideAlert()
            }
        }
    )

//    LaunchedEffect(state.isSuccess) {
//        if (state.isSuccess) {
//            navController.navigate("registerOtpInput") {
//                popUpTo("register") { inclusive = true } // tùy chọn, remove khỏi back stack
//            }
//        }
//    }
}
