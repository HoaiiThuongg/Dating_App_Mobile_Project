package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable

fun SelectionBox(title: String, hint: String) {
    Column (
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ){
        Text(title, fontWeight = FontWeight.Bold, fontSize = 16.sp)
        Text(hint, fontSize = 14.sp, color = Color.Gray)
    }

    FlowRow(
        horizontalArrangement = Arrangement.spacedBy(8.dp),
        verticalArrangement = Arrangement.spacedBy(8.dp),
        modifier = Modifier
            .border(
                width = 2.dp,                  // độ dày viền
                color = Color(0xFF777777),           // màu viền
                shape = RoundedCornerShape(20.dp) // bo góc tròn
            )
            .padding(12.dp)
            .fillMaxWidth()
    ) {
        listOf("Giàu", "Đẹp trai").forEach {
            Chip(text = it)
        }
    }
}
