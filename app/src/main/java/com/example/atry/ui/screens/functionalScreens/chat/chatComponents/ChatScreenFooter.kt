package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp

@Composable
@Preview
fun ChatScreenFooter(){
    var text by remember { mutableStateOf("") }

    // footer
    Box(
        modifier = Modifier.padding(20.dp)
    ) {
        TextField(
            value = text,
            onValueChange = { text = it },
            placeholder = {
                Text(
                    "Gõ tin nhắn đi nào ~~",
                    style = TextStyle(color = Color.Gray)
                )
            },
            textStyle = TextStyle(color = Color.Black),
            shape = RoundedCornerShape(50), // bo góc container cùng border
            colors = TextFieldDefaults.colors(
                focusedContainerColor = Color(0xFFD9D9D9), // nền xám nhạt
                unfocusedContainerColor = Color(0xFFD9D9D9),
                disabledContainerColor = Color(0xFFD9D9D9),
                cursorColor = Color.Black,
                focusedTextColor = Color.Black,
                unfocusedTextColor = Color.Black,
                focusedIndicatorColor = Color.Transparent, // bỏ gạch chân
                unfocusedIndicatorColor = Color.Transparent
            ),
            modifier = Modifier
                .fillMaxWidth()
                .border(1.dp, Color.Black, RoundedCornerShape(50)) // viền bo góc đồng bộ
        )
    }


}