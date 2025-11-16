package com.example.atry.ui.components.buttons

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.interaction.collectIsPressedAsState
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.redGradientBrush

@Composable
fun CustomLinearButton(
    text: String,
    onClick: () -> Unit,
    bgrColors: List<Color>,
    textColor: Color
) {
    val interactionSource = remember { MutableInteractionSource() }
    val isPressed by interactionSource.collectIsPressedAsState()

    val brush = if (isPressed) {
        Brush.linearGradient(
            colors = bgrColors.map { it.copy(alpha = 0.7f) }
        )
    } else {
        Brush.linearGradient(
            colors = bgrColors
        )
    }

    Box(
        modifier = Modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp)
            .height(50.dp)
            .clip(RoundedCornerShape(50))
            .background(brush) // 🩵 gradient background nè
            .clickable { onClick() },
        contentAlignment = Alignment.Center
    ) {
        Text(
            text = text,
            style = TextStyle(
                color = textColor,
                fontSize = 16.sp,
                fontWeight = FontWeight.Bold
            )
        )
    }
}

@Composable
fun RedLinearBorderButton(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    val interactionSource = remember { MutableInteractionSource() }
    val isHovered by interactionSource.collectIsPressedAsState()

    val bgrColor = if(isHovered) Color.White.copy(alpha = 0.2f) else  Color.Transparent
    val textBrush = if(isHovered)  Brush.linearGradient(listOf(Color.White, Color.White)) else redGradientBrush

    Box(
        modifier = modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp)
            .height(50.dp)
            .clickable(
                interactionSource = interactionSource,
                indication = null
            ) { onClick() }
            .background(
                color = bgrColor,
                shape = RoundedCornerShape(50)
            )
            .border(
                width = 2.dp,
                brush = redGradientBrush,
                shape = RoundedCornerShape(50)
            ),
        contentAlignment = Alignment.Center
    ) {
        Text(
            text = text,
            style = TextStyle(
                brush = textBrush,
                fontSize = 16.sp,
                fontWeight = FontWeight.Bold
            )
        )
    }
}