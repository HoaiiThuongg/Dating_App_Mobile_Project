package com.example.atry.ui.components.general

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp

@Composable
fun GrayBorderButton(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    Button(
        onClick = onClick,
        colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
        border = BorderStroke(1.dp, Color(0xFF6E6D6D)),
        shape = RoundedCornerShape(50),
        modifier = modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp)
            .height(50.dp)
            .background(Color.White.copy(alpha = 0.2f), RoundedCornerShape(50))
    ) {
        Text(text = text, color = Color(0xFF6E6D6D))
    }
}