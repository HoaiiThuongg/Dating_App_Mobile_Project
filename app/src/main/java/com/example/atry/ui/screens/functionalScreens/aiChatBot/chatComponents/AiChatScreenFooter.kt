package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.greenGradientBrush
import com.example.atry.viewmodel.functional.AiViewModel
import com.example.atry.viewmodel.functional.ChatViewModel

@Composable
fun AiChatScreenFooter(
    viewModel: AiViewModel = viewModel(),
    modifier: Modifier = Modifier
) {
    var text by remember { mutableStateOf("") }
    val botAnswer by viewModel.botAnswer.observeAsState("hihi")

    Column(
        modifier = Modifier.padding(20.dp),
        verticalArrangement = Arrangement.spacedBy(10.dp),
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        // Hiển thị câu trả lời của bot
        if (botAnswer.isNotEmpty()) {
            Text(
                text = "Bot: $botAnswer",
                color = Color.Black,
                modifier = Modifier.fillMaxWidth()
            )
        }

        Row(
            verticalAlignment = Alignment.CenterVertically
        ) {
            TextField(
                value = text,
                onValueChange = { text = it },
                placeholder = { Text("Gõ tin nhắn đi nào ~~", color = Color.Gray) },
                textStyle = TextStyle(color = Color.Black),
                shape = RoundedCornerShape(50),
                colors = TextFieldDefaults.colors(
                    focusedContainerColor = Color(0xFFD9D9D9),
                    unfocusedContainerColor = Color(0xFFD9D9D9),
                    cursorColor = Color.Black,
                    focusedIndicatorColor = Color.Transparent,
                    unfocusedIndicatorColor = Color.Transparent
                ),
                modifier = modifier
                    .weight(1f)
                    .border(1.dp, Color.Black, RoundedCornerShape(50))
            )

            IconButton(
                onClick = {
                    if (text.isNotBlank()) {
                        viewModel.sendQuestion(text, CurrentUser.user?.userId?:"")
                        text = "" // reset textfield
                    }
                },
                modifier = Modifier
                    .size(48.dp)
                    .clip(CircleShape)
                    .background(Color.Green)
            ) {
                Icon(
                    imageVector = Icons.Filled.Send,
                    contentDescription = "Gửi tin nhắn",
                    tint = Color.White
                )
            }
        }
    }
}
