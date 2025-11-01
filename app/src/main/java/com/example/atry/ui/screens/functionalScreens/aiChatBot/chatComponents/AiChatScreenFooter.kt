package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp

@Composable
fun AiChatScreenFooter(
    text: String,
    onTextChange: (String) -> Unit,
    onSendClick: () -> Unit
) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(10.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
        TextField(
            value = text,
            onValueChange = onTextChange,
            placeholder = { Text("Gõ tin nhắn đi nào ~~", color = Color.Gray) },
            colors = TextFieldDefaults.colors(
                focusedContainerColor = Color(0xFFD9D9D9),
                unfocusedContainerColor = Color(0xFFD9D9D9),
                cursorColor = Color.Black,
                focusedIndicatorColor = Color.Transparent,
                unfocusedIndicatorColor = Color.Transparent
            ),
            shape = RoundedCornerShape(50),
            modifier = Modifier
                .weight(1f)
                .padding(end = 8.dp)
        )
        IconButton(
            onClick = onSendClick,
            modifier = Modifier
                .size(48.dp)
                .clip(CircleShape)
                .background(Color.Green)
        ) {
            Icon(
                imageVector = Icons.Filled.Send,
                contentDescription = "Send",
                tint = Color.White
            )
        }
    }
}
