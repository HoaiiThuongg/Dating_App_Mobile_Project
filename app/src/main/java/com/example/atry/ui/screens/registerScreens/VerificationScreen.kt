package com.example.atry.ui.screens.registerScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.filled.ArrowBack
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.platform.testTag
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.components.GrayBorderTextField
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun VerificationScreenPreview() {
    VerificationScreen(navController = rememberNavController())
}

@Composable
fun VerificationScreen(
    navController: NavHostController = rememberNavController(),
    modifier: Modifier = Modifier
) {
    Column(
        modifier = modifier
            .fillMaxSize()
            .background(Color.White)
            .padding(24.dp),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        // Back button (gắn testTag)
        IconButton(
            onClick = { navController.popBackStack() },
            modifier = Modifier.testTag("back_button")
        ) {
            Icon(
                imageVector = Icons.AutoMirrored.Filled.ArrowBack,
                contentDescription = "Back"
            )
        }

        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ) {
            // Tiêu đề
            Box(modifier = Modifier.testTag("verification_title")) {
                InputTitle("Nhập otp")
            }

            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ) {
                // TextField OTP (dùng modifier.testTag để test dễ dàng)
                GrayBorderTextField(
                    label = "Nhập mã OTP",
                    onDone = { /* xử lý onDone nếu cần */ },
                    modifier = Modifier.testTag("otp_field")
                )

                // Văn bản mô tả
                Text(
                    "Mở mail của cậu và nhập mã xác minh đi!",
                    color = Color.Gray,
                    fontSize = 16.sp,
                    modifier = Modifier.testTag("otp_description")
                )
            }
        }

        // Nút Gửi lại và Tiếp tục (bọc trong Box có testTag để dễ tìm)
        Column(
            modifier = Modifier.fillMaxWidth(),
            verticalArrangement = Arrangement.spacedBy(12.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Box(modifier = Modifier
                .fillMaxWidth()
                .testTag("resend_button_box"),
                contentAlignment = Alignment.Center
            ) {
                RedLinearBorderButton("Gửi lại", {})
            }

            Box(modifier = Modifier
                .fillMaxWidth()
                .testTag("continue_button_box"),
                contentAlignment = Alignment.Center
            ) {
                RedLinearBorderButton("Tiếp tục",
                    { navController.navigate("password") }
                )
            }
        }
    }
}
