package com.example.atry.ui.screens.auth.forgetPassword

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear

@Composable
@Preview
fun ForgetPassword() {
    var email by remember { mutableStateOf("") }
    var password by remember { mutableStateOf("") }

    AuthFormContainer(
        title = "Quên mật khẩu",
        subtitle = "Nhập email của bạn",
        topContent = {},
        bottomContent = {
            UnderlineTextField(
                value = email,
                onValueChange = { email = it },
                label = "Email"
            )
            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("login") },
                Color.Black
            )
            CustomLinearButton(
                "Tếp theo", { navController.navigate("login") },
                redOrangeLinear, Color.White
            )
        }
    )
}