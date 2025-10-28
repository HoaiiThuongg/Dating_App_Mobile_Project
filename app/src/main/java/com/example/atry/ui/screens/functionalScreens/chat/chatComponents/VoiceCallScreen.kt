package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.size
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.CallEnd
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController

@Composable
fun VoiceCallScreen(
    token: String,
    navController: NavController? = null // để điều hướng khi kết thúc
) {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.Black),
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.Center
    ) {
        Text(
            text = "Đang kết nối cuộc gọi...",
            color = Color.White,
            fontSize = 20.sp
        )
        Text(
            text = "Token: ${token.take(15)}...", // chỉ show 1 phần token
            color = Color.Gray,
            fontSize = 12.sp
        )

        Spacer(modifier = Modifier.height(60.dp))

        // 🔴 Nút kết thúc cuộc gọi
        Icon(
            imageVector = Icons.Filled.CallEnd,
            contentDescription = "Kết thúc cuộc gọi",
            tint = Color.Red,
            modifier = Modifier
                .size(70.dp)
                .clickable {
                    // Khi bấm thì quay lại màn chat
                    navController?.popBackStack()
                }
        )

        Spacer(modifier = Modifier.height(16.dp))
        Text(
            text = "Kết thúc",
            color = Color.Red,
            fontSize = 14.sp
        )
    }
}

