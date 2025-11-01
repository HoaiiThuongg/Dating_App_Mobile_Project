package com.example.atry.ui.screens.functionalScreens.aiChatBot

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.imePadding
import androidx.compose.foundation.layout.navigationBars
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.safeDrawing
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.runtime.*
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatBox
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatList
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatScreenFooter
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatScreenHeader
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiUserChatBox
import com.example.atry.viewmodel.functional.AiViewModel

@Composable
fun AiChatScreen(viewModel: AiViewModel = viewModel()) {
    var text by remember { mutableStateOf("") }
    val messages by viewModel.messages.collectAsState()

    Scaffold(
        modifier = Modifier
            .fillMaxSize()
            .background(MaterialTheme.colorScheme.surface)
            .windowInsetsPadding(WindowInsets.safeDrawing),
        bottomBar = {
            AiChatScreenFooter(
                text = text,
                onTextChange = { text = it },
                onSendClick = {
                    if (text.isNotBlank()) {
                        viewModel.sendQuestion(text, CurrentUser.user?.userId ?: "")
                        text = ""
                    }
                }
            )
        }
    ) { paddingValues ->
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(paddingValues)
        ) {
            AiChatScreenHeader() // avatar + tên bot hoặc user
            AiChatList(messages = messages,viewModel)
        }
    }
}
