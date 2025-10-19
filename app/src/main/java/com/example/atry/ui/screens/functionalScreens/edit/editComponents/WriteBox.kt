package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowForward
import androidx.compose.material3.Icon
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.components.GrayBorderTextField

@Composable

fun WriteBox(title: String, hint: String) {
    Column (
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ){
        Text(title, fontWeight = FontWeight.Bold, fontSize = 16.sp)
        Text(hint, fontSize = 14.sp, color = Color.Gray)
    }

//    OutlinedTextField(
//        value = "",
//        onValueChange = {},
//        placeholder = { Text("Giới thiệu về bản than...") },
//        trailingIcon = {
//            Icon(Icons.Default.ArrowForward, contentDescription = null)
//        },
//        modifier = Modifier.fillMaxWidth()
//    )
    GrayBorderTextField("Giới thiệu về bản thân...")
}