package com.example.atry.ui.components

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.redLinear

@Composable
fun UnsuccessfulNotification() {
    Column(
        modifier = Modifier
            .clip(RoundedCornerShape(20.dp)) // bo góc 20dp
            .background(
                brush = Brush.linearGradient( // tạo màu gradient
                    colors = redLinear,
                    start = Offset(0f, 0f), // bắt đầu từ trên trái
                    end = Offset(400f, 400f) // kết thúc ở dưới phải
                )
            )
            .size(250.dp, 300.dp)
            .padding(10.dp),
        verticalArrangement = Arrangement.spacedBy(30.dp),
        horizontalAlignment = Alignment.CenterHorizontally

    ) {
        IconButton(
            onClick = { /* TODO: xử lý sự kiện đóng */ },
            modifier = Modifier
                .size(32.dp)
                .align(Alignment.End)
        ) {
            Icon(
                imageVector = Icons.Default.Close,
                contentDescription = "Close",
                tint = Color.White
            )
        }
        Column(
            verticalArrangement = Arrangement.spacedBy(5.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {

            Text(
                "Ghép đôi thành công",
                color = Color.White, fontSize = 20.sp,
                textAlign = TextAlign.Center
            )
            Text(
                "Giờ đây 2 bạn có thể kết  nối, trò chuyện,tìm hiểu nhau",
                color = Color.White,
                fontSize = 12.sp,
                textAlign = TextAlign.Center
            )
        }
    }
}