package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.nothingToLoad.NothingToLoad
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.ChatRow
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.MatchedPeople
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.functional.MessageViewModel

@Composable
fun MessageScreen(viewModel: MessageViewModel = viewModel()) {
    val state by viewModel.state.collectAsState()
    val chatList by viewModel.chatList.collectAsState()

    val isLoading = state.isLoading
    val matchedUsers = state.matchedUsers

    Column(modifier = Modifier.fillMaxSize().padding(16.dp)) {

        if (isLoading) {
            HeartLoading()
        } else if (matchedUsers.isEmpty()) {
            NothingToLoad("Bạn chưa kết nối với ai", "Hãy đi ghép đôi với mọi người nào")
        } else {
            MatchedPeople(matchedUsers)

            Spacer(modifier = Modifier.height(16.dp))

            Text(
                text = "Tin nhắn",
                color = primaryPurple,
                fontWeight = androidx.compose.ui.text.font.FontWeight.Bold,
                fontSize = 20.sp
            )

            val listState = rememberLazyListState()

            LazyColumn(
                state = listState,
                modifier = Modifier.fillMaxWidth(),
                verticalArrangement = Arrangement.spacedBy(12.dp)
            ) {
                items(chatList.size) { index ->
                    val chatItem = chatList[index]
                    ChatRow(chatItem = chatItem, viewModel = viewModel)
                }
            }

            // Khi chatList thay đổi, scroll xuống đầu danh sách nếu muốn (tùy UI)
            LaunchedEffect(chatList) {
                if (chatList.isNotEmpty()) {
                    listState.animateScrollToItem(0) // item đầu luôn là tin nhắn mới nhất
                }
            }
        }
    }
}
