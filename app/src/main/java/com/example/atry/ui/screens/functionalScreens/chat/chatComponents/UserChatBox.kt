package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun UserChatBox(){
    Box(
        modifier = Modifier
            .fillMaxWidth() // chiếm hết ngang để căn được bên phải
            .padding(8.dp),
        contentAlignment = Alignment.CenterEnd // dính sang phải
    ) {
        Box(
            modifier = Modifier
                .background(
                    color = Color(0xFF4FC3F7), // xanh dương nhạt
                    shape = RoundedCornerShape(
                        topStart = 50.dp,
                        topEnd = 50.dp,
                        bottomEnd = 0.dp,
                        bottomStart = 50.dp
                    )
                )
                .padding(horizontal = 15.dp, vertical = 8.dp)
        ) {
            Text(
                text = "hello xin chào bà thơ",
                color = Color.White,
                fontSize = 16.sp
            )
        }
    }
}