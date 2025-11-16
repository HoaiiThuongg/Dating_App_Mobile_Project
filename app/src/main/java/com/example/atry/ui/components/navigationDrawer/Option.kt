package com.example.atry.ui.components.navigationDrawer

import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp

@Composable
fun Option(
    option:String,
    action:()-> Unit
) {
    Row (
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 2.dp,
                color = Color.White,
                shape = RoundedCornerShape(
                    20.dp
                )
            )
            .padding(10.dp)
            .clickable { action() },
        verticalAlignment = Alignment.CenterVertically
    ) {
        Text(option, color = Color.White)
    }
}