package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.filled.Send
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatViewModel
import com.example.atry.viewmodel.functional.SendViewModel

@Composable
fun ChatScreenFooter(
    modifier: Modifier=Modifier,
    viewModel: SendViewModel=viewModel(),
    chatViewModel: ChatViewModel=viewModel()
){
    val state by chatViewModel.uiState.collectAsState()

    // footer
    Column(
        modifier = Modifier.padding(20.dp),
        verticalArrangement = Arrangement.spacedBy(10.dp, alignment = Alignment.CenterVertically),

        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Button(
            colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
            onClick = { navController.navigate("chatWithAi") },
            modifier = Modifier
                .background(
                    brush = Brush.verticalGradient(
                        colors = listOf(
                            Color(0xFFBE55BF), // tím
                            Color(0xFFFF9DD3)  // xanh tím
                        )
                    ), shape = RoundedCornerShape(20.dp)
                )
                .border(
                    1.dp, color = Color.Black,
                    shape = RoundedCornerShape(20.dp)
                )
        ) {
            Text("Chat bot giúp đỡ giao tiếp", color = Color.White)
        }


//        Row(
//            horizontalArrangement = Arrangement.SpaceBetween
//        ) {
//            TextField(
//                value = text,
//                onValueChange = { text = it },
//                placeholder = {
//                    Text(
//                        "Gõ tin nhắn đi nào ~~",
//                        style = TextStyle(color = Color.Gray)
//                    )
//                },
//                textStyle = TextStyle(color = Color.Black),
//                shape = RoundedCornerShape(50), // bo góc container cùng border
//                colors = TextFieldDefaults.colors(
//                    focusedContainerColor = Color(0xFFD9D9D9), // nền xám nhạt
//                    unfocusedContainerColor = Color(0xFFD9D9D9),
//                    disabledContainerColor = Color(0xFFD9D9D9),
//                    cursorColor = Color.Black,
//                    focusedTextColor = Color.Black,
//                    unfocusedTextColor = Color.Black,
//                    focusedIndicatorColor = Color.Transparent, // bỏ gạch chân
//                    unfocusedIndicatorColor = Color.Transparent
//                ),
//                modifier = modifier
//                    .fillMaxWidth()
//                    .border(1.dp, Color.Black, RoundedCornerShape(50)) // viền bo góc đồng bộ
//            )
        Row(
            modifier = modifier
                .fillMaxWidth()
                .padding(horizontal = 8.dp, vertical = 8.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            // 1. INPUT FIELD (Gõ tin nhắn đi nào!)
            BasicTextField(
                value = viewModel.messageInput,
                onValueChange = viewModel::updateMessageInput, // Cập nhật ViewModel
                modifier = Modifier
                    .weight(1f)
                    .clip(RoundedCornerShape(30.dp))
                    .background( Color(0xFFD9D9D9))
                    .heightIn(min = 48.dp),
                textStyle = TextStyle(
                    color = MaterialTheme.colorScheme.onSurface,
                    fontSize = 16.sp
                ),
                decorationBox = { innerTextField ->
                    Row(
                        Modifier.padding(horizontal = 16.dp, vertical = 10.dp),
                        verticalAlignment = Alignment.CenterVertically
                    ) {
                        Box(Modifier.weight(1f)) {
                            // Placeholder (Gõ tin nhắn đi nào!)
                            if (viewModel.messageInput.isEmpty()) {
                                Text(
                                    text = "Gõ tin nhắn đi nào !",
                                    color = MaterialTheme.colorScheme.onSurfaceVariant.copy(alpha = 0.6f)
                                )
                            }
                            // Text Field thực tế
                            innerTextField()
                        }
                    }
                }
            )

            Spacer(modifier = Modifier.width(8.dp))

            // 2. SEND BUTTON (Nút Gửi)
            IconButton(
                onClick = {viewModel.sendMessage(state.matchedUser?.matchId?:"")},
                // Nút chỉ hoạt động khi có nội dung
                enabled = viewModel.messageInput.isNotBlank(),
                modifier = Modifier
                    .size(48.dp)
                    .clip(CircleShape)
                    .background(if (viewModel.messageInput.isNotBlank()) Color(0xFFE91E63) else Color.LightGray)
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