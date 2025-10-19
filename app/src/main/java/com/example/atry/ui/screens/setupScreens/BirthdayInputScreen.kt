package com.example.atry.ui.screens.setupScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.components.GrayBorderTextField
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun BirthdayInputScreenPreview() {
    BirthdayInputScreen(navController = rememberNavController())
}

@Composable
fun BirthdayInputScreen(
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
        // Back button
        IconButton(
            onClick = { navController.popBackStack() },
            modifier = Modifier.testTag("back_button")
        ) {
            Icon(
                imageVector = Icons.Filled.ArrowBack,
                contentDescription = "Back"
            )
        }

        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ) {
            // Title
            Box(modifier = Modifier.testTag("birthday_title")) {
                InputTitle("Nhập ngày sinh")
            }

            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ) {
                // TextField — chú ý: GrayBorderTextField phải dùng modifier truyền vào
                GrayBorderTextField(
                    label = "Nhập ngày sinh",
                    onDone = { /* xử lý nếu cần */ },
                    modifier = Modifier
                        .fillMaxWidth()
                        .testTag("birthday_field")
                )

                Text(
                    "Nhập ngày sinh của bạn.",
                    color = Color.Gray,
                    fontSize = 16.sp,
                    modifier = Modifier.testTag("birthday_description")
                )
            }
        }

        // Continue button
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 8.dp)
                .testTag("continue_button_box"),
            contentAlignment = Alignment.Center
        ) {
            RedLinearBorderButton(
                text = "Tiếp tục",
                onClick = { navController.navigate("gender") }
            )
        }
    }
}
