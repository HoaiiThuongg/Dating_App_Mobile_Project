package com.example.atry.ui.screens.functionalScreens.chat

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.ime
import androidx.compose.foundation.layout.imePadding
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.safeDrawing
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenHeader
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenFooter
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.UserChatBox
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.PartnerChatBox
import com.example.atry.data.singleton.ThemeSingleton
import com.example.atry.viewmodel.functional.ChatViewModel
import com.google.accompanist.systemuicontroller.rememberSystemUiController
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalDensity
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.PartnerGameCard
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.UserGameCard
import com.example.atry.viewmodel.functional.ChatItem

@Composable
fun ChatScreen(
    factory: ViewModelProvider.Factory,
) {
    val viewModel: ChatViewModel = viewModel(factory = factory)

    val messages = viewModel.messages
    val systemUiController = rememberSystemUiController()
    val isDark = ThemeSingleton.isDark.value

    val listState = rememberLazyListState()
    val isImeVisible = WindowInsets.ime.getBottom(LocalDensity.current) > 0
    
    val uiState by viewModel.uiState.collectAsState()
    val matchedUser = uiState.matchedUser
    val context = LocalContext.current


    LaunchedEffect(viewModel.chatItems.size, isImeVisible) {
        if (viewModel.chatItems.isNotEmpty()) {
            listState.animateScrollToItem(viewModel.chatItems.lastIndex)
        }
    }


    LaunchedEffect(systemUiController, isDark) {
        systemUiController.setStatusBarColor(
            color = if(isDark) Color.Black else Color.White,
            darkIcons = !isDark
        )
    }

    Box(
        modifier = Modifier
            .fillMaxSize()
            .windowInsetsPadding(WindowInsets.safeDrawing),
    ) {
        Scaffold(
            modifier = Modifier.fillMaxSize(),
            contentWindowInsets = WindowInsets(0.dp)
        ) { paddingValues ->
            Column(
                modifier = Modifier
                    .fillMaxSize()
                    .background(MaterialTheme.colorScheme.surface),
                verticalArrangement = Arrangement.SpaceBetween
            ) {
                ChatScreenHeader(modifier = Modifier.padding(paddingValues))
                //main screen
//                if(messages.isEmpty()) {
//                    Text("empty")
//                }
                LazyColumn(
                    state = listState,
                    modifier = Modifier
                        .weight(1f)
                        .padding(horizontal = 15.dp, vertical = 15.dp)
                        .padding(paddingValues),
                    reverseLayout = false,
                    verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.Bottom)
                ) {
                    items(viewModel.chatItems) { item ->
                        when (item) {
                            is ChatItem.MessageItem -> {
                                val message = item.message
                                if (message.senderId == CurrentUser.user?.userId) {
                                    UserChatBox(text = message.content)
                                } else {
                                    PartnerChatBox(text = message.content)
                                }
                            }
                            is ChatItem.GameCardItem -> {
                                val gameCard = item.card
                                if (gameCard.startBy == CurrentUser.user?.userId) {
                                    UserGameCard(
                                        gameCard = item.card,
                                        viewModel=viewModel,
                                        otherUser = matchedUser?.user
                                    )

                                } else {
                                    PartnerGameCard(
                                        gameCard = item.card,
                                        viewModel=viewModel,
                                        otherUser = matchedUser?.user
                                    )
                                }
                            }
                        }
                    }
                }

                //texting
                ChatScreenFooter(
                    matchedUser=matchedUser,
                    Modifier.verticalScroll(rememberScrollState())
                        .imePadding(),
                    chatViewModel=viewModel
                )
            }
        }
    }
}