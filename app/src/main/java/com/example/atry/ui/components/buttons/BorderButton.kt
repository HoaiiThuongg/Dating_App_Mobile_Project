package com.example.atry.ui.components.buttons

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.background
import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.interaction.collectIsPressedAsState
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.redGradientBrush
import androidx.compose.ui.text.TextStyle

@Composable
fun CustomBorderButton(
    text: String,
    onClick: () -> Unit,
    borderColor: Color
) {
    val interactionSource = remember { MutableInteractionSource() }
    val isHovered by interactionSource.collectIsPressedAsState()

    val bgrColor = if(isHovered) Color.White.copy(alpha = 0.2f) else  Color.Transparent
    val textBrush = if(isHovered) redGradientBrush else  Brush.linearGradient(listOf(borderColor, borderColor))

    Button(
        onClick = onClick,
        interactionSource = interactionSource,
        colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
        border = BorderStroke(1.dp, textBrush),
        shape = RoundedCornerShape(50),
        modifier = Modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp)
            .height(50.dp)
            .background(bgrColor, RoundedCornerShape(50))
    ) {
        Text(
            text = text,
            style = TextStyle(
                brush = textBrush,
                fontSize = 16.sp
            )
        )
    }
}

@Composable
fun WhiteBorderButton(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    val interactionSource = remember { MutableInteractionSource() }
    val isHovered by interactionSource.collectIsPressedAsState()

    val bgrColor = if(isHovered) Color.White.copy(alpha = 0.2f) else  Color.Transparent
    val textBrush = if(isHovered) redGradientBrush else  Brush.linearGradient(listOf(Color.White, Color.White))

    Button(
        onClick = onClick,
        interactionSource = interactionSource,
        colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
        border = BorderStroke(2.dp, Color.White),
        shape = RoundedCornerShape(50),
        modifier = modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp)
            .height(50.dp)
            .background(bgrColor, RoundedCornerShape(50))
    ) {
        Text(
            text = text,
            style = TextStyle(
                brush = textBrush,
                fontSize = 16.sp
            )
        )
    }
}