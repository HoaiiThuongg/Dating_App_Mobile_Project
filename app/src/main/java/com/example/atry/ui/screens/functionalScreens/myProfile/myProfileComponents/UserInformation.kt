package com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R

@Composable
fun UserInformation() {
    Box(contentAlignment = Alignment.Center) {
        Box(
            modifier = Modifier
                .size(160.dp)
                .background(
                    brush = Brush.linearGradient(
                        listOf(Color.Magenta, Color(0xFF6200EE))
                    ),
                    shape = CircleShape
                ),
            contentAlignment = Alignment.Center
        ) {
            Image(
                painter = painterResource(id = R.drawable.ava1),
                contentDescription = null,
                modifier = Modifier
                    .size(150.dp)
                    .clip(CircleShape),
                contentScale = ContentScale.Crop
            )
        }

        // Thanh % hoàn thiện
        Box(
            modifier = Modifier
                .align(Alignment.BottomCenter)
                .offset(y = 16.dp)
                .clip(RoundedCornerShape(50))
                .background(
                    brush = Brush.horizontalGradient(
                        listOf(Color(0xFF7B61FF), Color(0xFFFF4081))
                    )
                )
                .padding(horizontal = 12.dp, vertical = 4.dp)
        ) {
            Text(
                "78% Hoàn thiện hồ sơ",
                color = Color.White,
                fontSize = 12.sp,
                fontWeight = FontWeight.Bold
            )
        }
    }

    // Tên + tuổi
    Text("Nguyễn Ngọc Linh, 19", fontSize = 22.sp, fontWeight = FontWeight.Bold)
    Text("23 kết nối", fontSize = 14.sp, color = Color.Gray)
}