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
fun EmailScreenPreview() {
    EmailScreen(navController = rememberNavController())
}

@Composable
fun EmailScreen(
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
        // Back button (gắn testTag trực tiếp lên IconButton)
        IconButton(
            onClick = { /* handle back */ },
            modifier = Modifier.testTag("back_button")
        ) {
            Icon(
                imageVector =
                    Icons.AutoMirrored.Filled.ArrowBack,
                    contentDescription = "Back" ,
                )
        }

        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ) {

            // Tiêu đề (bọc trong Box có testTag)
            Box(modifier = Modifier.testTag("email_title")) {
                InputTitle("Nhập email")
            }

            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ) {
                GrayBorderTextField(
                    label = "Nhập tên đăng nhập",
                    onDone = {},
                    modifier = Modifier
                        .fillMaxWidth()
                        .testTag("email_field")
                )

                Text(
                    "Chúng tớ sẽ gửi mã xác minh đến email của cậu",
                    color = Color.Gray,
                    fontSize = 16.sp,
                    modifier = Modifier.testTag("email_description")
                )
            }
        }

        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 8.dp)
                .testTag("continue_button_box"),
            contentAlignment = Alignment.Center
        ) {
            RedLinearBorderButton(
                text = "Tiếp tục",
                onClick = { navController.navigate("otp") }
            )
        }
    }
}
