package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.backend.Message
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.theme.greenAiColor
import com.example.atry.viewmodel.functional.AiViewModel
import androidx.compose.foundation.text.selection.SelectionContainer

@Composable
fun AiChatList(messages: List<Message>,viewModel: AiViewModel) {
    val isLoading by viewModel.isLoading.collectAsState()
    val listState = rememberLazyListState()
    LaunchedEffect(messages.size) {
        if (messages.isNotEmpty()) {
            listState.animateScrollToItem(messages.lastIndex)
        }
    }

    Box(modifier = Modifier.fillMaxSize()) {
        LazyColumn(
            state = listState,
            modifier = Modifier
                .fillMaxSize()
                .padding(10.dp,10.dp,10.dp,30.dp),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {
            items(messages) { msg ->
                if (msg.senderId == CurrentUser.user?.userId) {
                    UserMessageBox(msg.content)
                } else if (msg.senderId == "bot") {
                    BotMessageBox(msg.content)
                }
            }
        }

        if (isLoading) {
            Text(
                text = "Đang nhập tin...",
                modifier = Modifier
                    .align(Alignment.BottomStart)
                    .padding(10.dp),
                color = Color.Gray
            )
        }
    }
}

@Composable
fun UserMessageBox(content: String) {
    Box(
        modifier = Modifier
            .padding(start=50.dp)
            .fillMaxWidth() // chiếm hết ngang để căn được bên phải
            .padding(8.dp),
        contentAlignment = Alignment.CenterEnd // dính sang phải
    ) {
        Box(
            modifier = Modifier
                .background(
                    color = greenAiColor, // xanh dương nhạt
                    shape = RoundedCornerShape(
                        topStart = 30.dp,
                        topEnd = 30.dp,
                        bottomEnd = 10.dp,
                        bottomStart = 30.dp
                    )
                )
                .padding(horizontal = 20.dp, vertical = 8.dp)
        ) {
            SelectionContainer {
                Text(text = content, color = Color.White)
            }
        }
    }
}

@Composable
fun BotMessageBox(content: String) {
    Row(
        modifier = Modifier.fillMaxWidth(),
        horizontalArrangement = Arrangement.spacedBy(5.dp, Alignment.CenterHorizontally)

    ) {
        Image(
            painter = painterResource(id = R.drawable.bot),
            contentDescription = "parter avatar",
            modifier = Modifier
                .size(40.dp)
                .clip(RoundedCornerShape(20.dp))
                .background(Color.LightGray)
                .align(Alignment.Bottom),
            contentScale = ContentScale.Crop
        )

        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(end = 50.dp), // chiếm hết ngang để căn được bên phải
            contentAlignment = Alignment.CenterStart // dính sang phải
        ) {
            Box(
                modifier = Modifier
                    .background(
                        color = Color(0xFFEEEFF1),
                        shape = RoundedCornerShape(
                            topStart = 30.dp,
                            topEnd = 30.dp,
                            bottomEnd = 30.dp,
                            bottomStart = 10.dp
                        )
                    )
                    .padding(horizontal = 20.dp, vertical = 8.dp)
            ) {
                SelectionContainer {
                    Text(text = content, color = Color.Black)
                }
            }
        }
    }
}