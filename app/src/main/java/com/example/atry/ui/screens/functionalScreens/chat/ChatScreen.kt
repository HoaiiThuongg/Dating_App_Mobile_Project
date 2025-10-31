package com.example.atry.ui.screens.functionalScreens.chat

import android.util.Log
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.ime
import androidx.compose.foundation.layout.imePadding
import androidx.compose.foundation.layout.navigationBars
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
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenHeader
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenFooter
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.UserChatBox
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.PartnerChatBox
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.viewmodel.functional.ChatViewModel
import com.google.accompanist.systemuicontroller.rememberSystemUiController
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.material3.Text
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalDensity
import com.example.atry.data.singleton.CurrentUser

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


    LaunchedEffect(messages.size, isImeVisible) {
        if (messages.isNotEmpty()) {
            listState.animateScrollToItem(messages.lastIndex)
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
                ChatScreenHeader(modifier = Modifier.padding(paddingValues), context = context)
                //main screen
                if(messages.isEmpty()) {
                    Text("empty")
                }
                LazyColumn(
                    state = listState,
                    modifier = Modifier
                        .weight(1f) // Chiếm hết không gian còn lại
                        .padding(horizontal = 15.dp, vertical = 15.dp)
                        .padding(paddingValues),
                    // Sắp xếp các tin nhắn từ trên xuống (cũ nhất ở trên)
                    reverseLayout = false,
                    verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.Bottom) // Gắn vào phía dưới
                ) {
                    items(messages) { message ->
                        if (message.senderId == CurrentUser.user?.userId) {
                            UserChatBox(text=message.content)
                        } else {
                            PartnerChatBox(text=message.content)
                        }
                        Log.d("message.senderId and current id",message.senderId + " "+ CurrentUser.user?.userId)

                    }

                }
                //texting
                ChatScreenFooter(
                    matchedUser=matchedUser,
                    Modifier.verticalScroll(rememberScrollState())
                        .imePadding()
                )
            }
        }
    }
}