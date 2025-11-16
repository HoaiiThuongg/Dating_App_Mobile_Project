package com.example.atry.ui.screens.functionalScreens.home.homeComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp

@Composable
fun InfoBox(title: String? ,
            content: String? ) {
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 2.dp,
                brush = Brush.linearGradient(
                    colors = listOf(Color(0xFFBE55BF),Color(0xFFFF9DD3)),
                    start = Offset(0f, 0f),
                    end = Offset(400f, 400f)
                ),
                shape = RoundedCornerShape(20.dp)
            )
            .background(Color.White, RoundedCornerShape(20.dp))
            .padding(15.dp)
    ) {
        Text(title?:"tiêu đề", color = Color.Black, fontWeight = FontWeight.Bold)
        Spacer(Modifier.height(4.dp))
        Text(content?:"lỗi", color = Color.Gray)
    }
}