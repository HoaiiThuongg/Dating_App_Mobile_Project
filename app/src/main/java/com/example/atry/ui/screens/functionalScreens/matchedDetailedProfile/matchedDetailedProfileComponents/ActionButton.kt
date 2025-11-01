package com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.redGradientBrush

@Composable
fun ActionButtons(
    onBrokeUpAction: () -> Unit
) = Row(
    horizontalArrangement = Arrangement.SpaceEvenly,
    verticalAlignment = Alignment.CenterVertically,
    modifier = Modifier
        .fillMaxWidth()
        .padding(vertical = 20.dp)
) {
    Button(
        onClick = onBrokeUpAction,
        modifier = Modifier
            .fillMaxWidth() // Chiếm toàn bộ chiều rộng có sẵn
            .padding(horizontal = 24.dp, vertical = 8.dp), // Khoảng cách với viền màn hình (nếu có)
        shape = RoundedCornerShape(50), // 🚨 Bo góc cực tròn (hình viên thuốc)
        colors = ButtonDefaults.buttonColors(
            containerColor = Color(0xFF333333), // 🚨 Màu nền đen/xám đậm
            contentColor = Color.White // Màu chữ trắng
        )
    ) {
        Text(
            text = "Chia tay",
            fontSize = 20.sp, // Kích thước chữ
            fontWeight = FontWeight.Bold, // Chữ đậm
            modifier = Modifier.padding(vertical = 8.dp) // Padding bên trong chữ để nút cao hơn
        )
    }
}
