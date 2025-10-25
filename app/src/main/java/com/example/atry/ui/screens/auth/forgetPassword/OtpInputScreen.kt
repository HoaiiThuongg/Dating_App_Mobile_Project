package com.example.atry.ui.screens.auth.forgetPassword

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear

@Composable
@Preview
fun OtpInputScreen(
//    email: String, onNext: () -> Unit, onResend: () -> Unit
) {
    var otp by remember { mutableStateOf("") }

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập mã OTP",
        topContent = {
            Column(
                modifier =
                    Modifier
                        .width(300.dp)
                        .clip(RoundedCornerShape(20.dp))
                        .background(Color.White)
                        .padding(40.dp),
                verticalArrangement = Arrangement.spacedBy(50.dp)
            ) {
                Text("Hãy nhập OTP được gửi tới gmail")

                UnderlineTextField(
                    value = "",
                    onValueChange = { },
                    label = "otp"
                )
            }
        },
        bottomContent = {
            Text("Đã gửi mã tới email abc@gmsil.com")
            Spacer(modifier = Modifier.size(20.dp))

            CustomLinearButton(
                "Tếp theo", { navController.navigate("registerInfoInput1") },
                redOrangeLinear, Color.White
            )

        }
    )
}
