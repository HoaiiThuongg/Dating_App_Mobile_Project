package com.example.atry.ui.screens.functionalScreens.settings.settingComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun InformationBar(title:String,content:String) {
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 1.dp,
                color = Color.Black,
                shape = androidx.compose.foundation.shape.RoundedCornerShape(30.dp)
            )
            .padding(10.dp) // padding bên trong viền
    ) {
        Row(
            horizontalArrangement = Arrangement.SpaceBetween,
            modifier = Modifier
                .padding(2.dp)
                .fillMaxWidth()
        ) {
            Text(title, fontSize = 16.sp, fontWeight = FontWeight.Bold)
            Text(
                content, fontSize = 16.sp,
                style = TextStyle(
                    fontSize = 12.sp, brush = Brush.linearGradient(
                        colors = listOf(
                            Color(0xFF7500DB),
                            Color(0xFFFF4187)
                        ), // gradient từ trái → phải
                        start = Offset(0f, 0f),
                        end = Offset(1000f, 0f)
                    )
                )
            )
        }
    }
}