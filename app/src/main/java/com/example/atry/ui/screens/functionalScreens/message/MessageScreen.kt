package com.example.atry.ui.screens.functionalScreens

import android.net.Uri
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.nothingToLoad.NothingToLoad
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.ChatRow
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.MatchedPeople
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.functional.MessageViewModel
import com.google.gson.Gson

@Composable
fun MessageScreen(viewModel: MessageViewModel = viewModel()) {
    val state by viewModel.state.collectAsState()
    val chatList by viewModel.chatList.collectAsState()

    val isLoading = state.isLoading
    val matchedUsers = state.matchedUsers

    Column(modifier = Modifier.fillMaxSize()) {

        if (isLoading) {
            HeartLoading()
        } else if (matchedUsers.isEmpty()) {
            NothingToLoad(stringResource(id= R.string.no_matches_yet),stringResource(id= R.string.go_match_now))
        } else {
            MatchedPeople(
                matchedUsers = matchedUsers,
                chatList = chatList,
                messageViewModel = viewModel,
                onAvatarClick = { matchedUser, chatItem ->
                    val json = Uri.encode(
                        Gson().toJson(
                            chatItem?.user ?: matchedUser.user
                        )
                    )
                    navController.navigate("chat/$json")

                }
            )

            Column(modifier = Modifier.fillMaxSize().padding(horizontal = 16.dp)) {
                Spacer(modifier = Modifier.height(16.dp))

                Text(
                    text = stringResource(id = R.string.messages),
                    color = primaryPurple,
                    fontWeight = androidx.compose.ui.text.font.FontWeight.Bold,
                    fontSize = 24.sp
                )

                val listState = rememberLazyListState()

                LazyColumn(
                    state = listState,
                    modifier = Modifier
                        .fillMaxWidth() ,verticalArrangement = Arrangement.spacedBy(12.dp)
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
}
