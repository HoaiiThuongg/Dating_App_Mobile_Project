package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

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
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.greenAiColor

@Preview
@Composable
fun AiUserChatBox(){
    Box(
        modifier = Modifier
            .fillMaxWidth() // chiếm hết ngang để căn được bên phải
            .padding(8.dp),
        contentAlignment = Alignment.CenterEnd // dính sang phải
    ) {
        Box(
            modifier = Modifier
                .background(
                    color = greenAiColor, // xanh dương nhạt
                    shape = RoundedCornerShape(
                        topStart = 30.dp,
                        topEnd = 30.dp,
                        bottomEnd = 10.dp,
                        bottomStart = 30.dp
                    )
                )
                .padding(horizontal = 20.dp, vertical = 8.dp)
        ) {
            Text(
                text = "Giúp tôi tán đổ cô ấy",
                color = Color.White,
                fontSize = 16.sp
            )
        }
    }
}