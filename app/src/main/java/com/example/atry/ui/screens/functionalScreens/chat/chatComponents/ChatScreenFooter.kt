package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import android.util.Log
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Lightbulb
import androidx.compose.material.icons.filled.QuestionAnswer
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.backend.MatchedUser
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatViewModel
import com.example.atry.viewmodel.functional.GeminiViewModel
import com.example.atry.viewmodel.functional.SendViewModel

@Composable
fun ChatScreenFooter(
    matchedUser: MatchedUser?,
    modifier: Modifier = Modifier,
    viewModel: SendViewModel = viewModel(),
    chatViewModel: ChatViewModel = viewModel(),
    geminiViewModel: GeminiViewModel = viewModel()
) {
    val state by chatViewModel.uiState.collectAsState()
    val input by viewModel.messageInput.collectAsState() // Input field content
    val partnersLastMessage by chatViewModel.lastPartnerMessageContent.observeAsState()

    val suggestionText by geminiViewModel.suggestionInput.collectAsState()

    LaunchedEffect(suggestionText) {
        suggestionText?.let {
            viewModel.updateMessageInput(it)
        }
    }

    // Khởi tạo chat (giữ nguyên)
    LaunchedEffect(Unit) {
        viewModel.startChat(
            matchId = matchedUser?.matchId ?: "",
            receiverId = matchedUser?.user?.userId ?: ""
        )
    }

    Column(
        modifier = Modifier.padding(bottom = 20.dp),
        verticalArrangement = Arrangement.spacedBy(10.dp),
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Button(
            colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
            onClick = { navController.navigate("chatWithAi") },
            modifier = Modifier
                .background(
                    brush = Brush.verticalGradient(
                        colors = listOf(Color(0xFFBE55BF), Color(0xFFFF9DD3))
                    ),
                    shape = RoundedCornerShape(20.dp)
                )
        ) {
            Text("Chat bot giúp đỡ giao tiếp", color = Color.White)
        }

        Row(
            modifier = modifier
                .fillMaxWidth()
                .padding(horizontal = 8.dp, vertical = 8.dp),
            verticalAlignment = Alignment.Bottom,
        ) {
            Box(
                modifier = Modifier
                    .weight(1f)
                    .clip(RoundedCornerShape(30.dp))
                    .background(Color(0xFFD9D9D9))
                    .heightIn(min = 48.dp, max = 150.dp)
                    .padding(horizontal = 8.dp, vertical = 4.dp)
            ) {
                BasicTextField(
                    value = input,
                    onValueChange = viewModel::updateMessageInput,
                    modifier = Modifier
                        .fillMaxWidth()
                        .clip(RoundedCornerShape(30.dp))
                        .verticalScroll(rememberScrollState())
                        .heightIn(min = 48.dp),
                    textStyle = TextStyle(
                        color = Color.Black,
                        fontSize = 16.sp
                    ),
                    decorationBox = { innerTextField ->
                        Row(
                            Modifier.padding(horizontal = 16.dp, vertical = 10.dp),
                            verticalAlignment = Alignment.CenterVertically
                        ) {
                            Box(Modifier.weight(1f)) {
                                if (input.isEmpty() && suggestionText.isNullOrBlank()) {
                                    Text("Gõ tin nhắn...", color = Color.Gray)
                                } else if (input.isEmpty() && suggestionText == "Đang suy nghĩ...") {
                                    Text("Đang suy nghĩ...", color = Color.Gray) // Có thể dùng màu xám
                                }
                                innerTextField()
                            }
                        }
                    }
                )
            }
            Spacer(Modifier.width(5.dp))
            IconButton(
                onClick = {
                    val prompt = partnersLastMessage?.takeIf { it.isNotBlank() }
                        ?: "Chúng tôi mới bắt đầu chat. Hãy tạo 1 câu hỏi Icebreaker chung chung, vui vẻ."
                    geminiViewModel.loadIcebreakers(commonInterests = prompt)
                },
                modifier = Modifier
                    .size(48.dp)
                    .clip(CircleShape)
                    .background(Color(0xFFFFEB3B))
            ) {
                Icon(
                    Icons.Filled.Lightbulb,
                    contentDescription = "Gợi ý từ AI",
                    tint = Color.Black)
            }
            Spacer(Modifier.width(5.dp))
            IconButton(
                onClick = {
                    chatViewModel.createGameCard()
                },
                modifier = Modifier
                    .size(48.dp)
                    .clip(CircleShape)
                    .background(Color(0xFFE91E63))
            ) {
                Icon(Icons.Filled.QuestionAnswer, contentDescription = "Gửi GameCard", tint = Color.White)
            }
            Spacer(Modifier.width(5.dp))
            IconButton(
                onClick = {
                    geminiViewModel.clearSuggestionInput()
                    viewModel.sendMessage(state.matchedUser?.matchId ?: "")
                },
                enabled = input.isNotBlank(),
                modifier = Modifier
                    .size(48.dp)
                    .clip(CircleShape)
                    .background(if (input.isNotBlank()) Color(0xFFE91E63) else Color.LightGray)
            ) {
                Icon(Icons.Filled.Send, contentDescription = "Gửi tin nhắn", tint = Color.White)
            }
        }
    }
}