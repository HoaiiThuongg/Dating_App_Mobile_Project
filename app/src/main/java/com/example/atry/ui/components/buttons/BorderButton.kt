package com.example.atry.ui.components.buttons

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.text.TextStyle

/**
 * Nút tùy chỉnh có viền
 * Đã được cập nhật để chấp nhận `modifier` và xử lý trạng thái `enabled`.
 */
@Composable
fun CustomBorderButton(
    text: String,
    onClick: () -> Unit,
    borderColor: Color,
    modifier: Modifier = Modifier,
    enabled: Boolean = true
) {
    // THAY ĐỔI 1: Thêm logic alpha cho trạng thái enabled/disabled
    val currentAlpha = if (enabled) 1f else 0.3f
    val interactionSource = remember { MutableInteractionSource() }

    // THAY ĐỔI 2: Tạo brush với độ mờ (alpha) cho cả text và viền
    val textBrush = Brush.linearGradient(listOf(borderColor.copy(alpha = currentAlpha), borderColor.copy(alpha = currentAlpha)))
    val borderBrush = Brush.linearGradient(listOf(borderColor.copy(alpha = currentAlpha), borderColor.copy(alpha = currentAlpha)))

    Box(
        modifier = modifier // Áp dụng modifier ngoài cùng
            .fillMaxWidth()
            .padding(vertical = 8.dp) // Di chuyển padding ra ngoài
            .height(50.dp)
            .clip(RoundedCornerShape(50))
            // THAY ĐỔI 3: Áp dụng 'enabled' cho clickable
            .clickable(
                enabled = enabled,
                interactionSource = interactionSource,
                indication = null, // Tắt hiệu ứng ripple
                onClick = onClick
            )
            .border(
                1.dp,
                // THAY ĐỔI 4: Dùng borderBrush đã áp dụng alpha
                brush = borderBrush,
                RoundedCornerShape(50)
            )
            .background(Color.Transparent),
        contentAlignment = Alignment.Center
    ) {
        Text(
            text = text,
            style = TextStyle(
                brush = textBrush, // Dùng textBrush đã áp dụng alpha
                fontSize = 16.sp
            )
        )
    }
}