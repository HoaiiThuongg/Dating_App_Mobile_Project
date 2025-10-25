package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.greenGradientBrush

@Composable
@Preview
fun AiChatScreenFooter(modifier: Modifier=Modifier){
    var text by remember { mutableStateOf("") }

    // footer
    Column(
        modifier = Modifier.padding(20.dp),
        verticalArrangement = Arrangement.spacedBy(10.dp, alignment = Alignment.CenterVertically),

        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Button(
            colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
            onClick = { navController.navigate("chat") },
            modifier = Modifier
                .background(
                    greenGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .border(
                    1.dp, color = Color.Black,
                    shape = RoundedCornerShape(20.dp)
                )
        ) {
            Text("Trò chuyện với người ta", color = Color.White)
        }


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
            modifier = modifier
                .fillMaxWidth()
                .border(1.dp, Color.Black, RoundedCornerShape(50)) // viền bo góc đồng bộ
        )
    }


}