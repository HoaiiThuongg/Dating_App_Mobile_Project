package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.functional.ChatViewModel

@Composable
@Preview
fun UserChatBox(
    text:String="hihi"
){
    Box(
        modifier = Modifier
            .fillMaxWidth(), // chiếm hết ngang để căn được bên phải
        contentAlignment = Alignment.CenterEnd // dính sang phải
    ) {
        Box(
            modifier = Modifier
                .background(
                    color = primaryPurple,
                    shape = RoundedCornerShape(
                        topStart = 30.dp,
                        topEnd = 30.dp,
                        bottomEnd = 10.dp,
                        bottomStart = 30.dp
                    )
                )
                .padding(horizontal = 20.dp, vertical = 8.dp)
        ) {
            Text(
                text = text,
                color = Color.White,
                fontSize = 16.sp
            )
        }
    }
}