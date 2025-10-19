package com.example.atry.ui.screens.setupScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
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
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun GenderSelectedScreenPreview() {
    GenderSelectedScreen(navController = rememberNavController())
}

@Composable
fun GenderSelectedScreen(
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
            Box(modifier = Modifier.testTag("gender_title")) {
                InputTitle("Bạn là")
            }

            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ) {
                // Các lựa chọn giới tính — bọc mỗi nút trong Box có testTag để test dễ dàng
                Box(modifier = Modifier
                    .fillMaxWidth()
                    .padding(vertical = 6.dp)
                    .testTag("gender_male_box"),
                    contentAlignment = Alignment.Center
                ) {
                    RedLinearBorderButton("Nam", onClick = { /* hành động chọn Nam */ })
                }

                Box(modifier = Modifier
                    .fillMaxWidth()
                    .padding(vertical = 6.dp)
                    .testTag("gender_female_box"),
                    contentAlignment = Alignment.Center
                ) {
                    RedLinearBorderButton("Nữ", onClick = { /* hành động chọn Nữ */ })
                }

                Box(modifier = Modifier
                    .fillMaxWidth()
                    .padding(vertical = 6.dp)
                    .testTag("gender_unspecified_box"),
                    contentAlignment = Alignment.Center
                ) {
                    RedLinearBorderButton("Không muốn tiết lộ", onClick = { /* hành động */ })
                }
            }
        }

        // Nút Bỏ qua (skip) — điều hướng đến "hobby"
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .testTag("skip_button_box"),
            contentAlignment = Alignment.Center
        ) {
            RedLinearBorderButton("Bỏ qua",
                { navController.navigate("hobby") }
            )
        }
    }
}
