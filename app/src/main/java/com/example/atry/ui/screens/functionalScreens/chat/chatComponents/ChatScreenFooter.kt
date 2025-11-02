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
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.filled.Send
import androidx.compose.material.icons.filled.Lightbulb
import androidx.compose.material.icons.filled.QuestionAnswer
import androidx.compose.material.icons.filled.Send
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
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
import com.example.atry.backend.GameCard
import com.example.atry.backend.MatchedUser
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatViewModel
import com.example.atry.viewmodel.functional.SendViewModel

@Composable
fun ChatScreenFooter(
    matchedUser: MatchedUser?,
    modifier: Modifier = Modifier,
    viewModel: SendViewModel = viewModel(),
    chatViewModel: ChatViewModel = viewModel()
) {
    val state by chatViewModel.uiState.collectAsState()
    val input by viewModel.messageInput.collectAsState() // lấy value từ StateFlow
    val messages = viewModel.messages
    val scrollState = rememberScrollState()

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
        // Nút chơi Unity Game
        UnityGameButton(matchedUser = matchedUser)

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
            verticalAlignment = Alignment.CenterVertically,
            horizontalArrangement = Arrangement.spacedBy(8.dp)
        ) {
            Box(
                modifier = Modifier
                    .weight(1f)
                    .clip(RoundedCornerShape(30.dp))
                    .background(Color(0xFFD9D9D9))
                    .heightIn(min = 48.dp, max = 150.dp) // max 150.dp, bé có thể chỉnh
                    .verticalScroll(scrollState)
                    .padding(horizontal = 8.dp, vertical = 4.dp)
            ) {
                BasicTextField(
                    value = input,
                    onValueChange = viewModel::updateMessageInput,
                    modifier = Modifier
                        .clip(RoundedCornerShape(30.dp))
                        .background(Color(0xFFD9D9D9))
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
                                if (input.isEmpty()) {
                                    Text("Gõ tin nhắn đi nào !", color = Color.Black)
                                }
                                innerTextField()
                            }
                        }
                    }
                )
            }

            // Nút gợi ý AI
            IconButton(
                onClick = { viewModel.askChatBot("default") },
                modifier = Modifier
                    .size(40.dp)
                    .clip(CircleShape)
                    .background(Color(0xFFFFEB3B))
            ) {
                Icon(Icons.Filled.Lightbulb, contentDescription = "Gợi ý từ AI", tint = Color.Black)
            }

            // Nút tạo GameCard
            IconButton(
                onClick = {
                    val question = input.trim()
                    val card = GameCard().apply {
                        id = null
                        title = "Bạn thích gì"
                        startBy = CurrentUser.user?.userId ?: ""
                        setQuestion(question)
                        ans1 = "Mình thích bạn"
                        ans2 = "Mình thích bản thân"
                        pickedByAns1 = emptyList()
                        pickedByAns2 = emptyList()
                    }
                    chatViewModel.createGameCard()
                },
//                enabled = input.isNotBlank(),
                modifier = Modifier
                    .size(40.dp)
                    .clip(CircleShape)
                    .background(if (input.isNotBlank()) Color(0xFFE91E63) else Color.LightGray)
            ) {
                Icon(Icons.Filled.QuestionAnswer, contentDescription = "Gửi GameCard", tint = Color.White)
            }

            // Nút gửi tin nhắn
            IconButton(
                onClick = { viewModel.sendMessage(state.matchedUser?.matchId ?: "") },
                enabled = input.isNotBlank(),
                modifier = Modifier
                    .size(40.dp)
                    .clip(CircleShape)
                    .background(if (input.isNotBlank()) Color(0xFFE91E63) else Color.LightGray)
            ) {
                Icon(Icons.Filled.Send, contentDescription = "Gửi tin nhắn", tint = Color.White)
            }
        }
    }
}
