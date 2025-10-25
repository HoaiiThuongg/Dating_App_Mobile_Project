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
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatBox
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatScreenFooter
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiChatScreenHeader
import com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents.AiUserChatBox

@Preview
@Composable
fun AiChatScreen() {
    var text by remember { mutableStateOf("") }

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
                    .background(MaterialTheme.colorScheme.surface)
                    .windowInsetsPadding(WindowInsets.navigationBars),
                verticalArrangement = Arrangement.SpaceBetween
            ) {
                //patner avatar and name
                AiChatScreenHeader(Modifier.padding(paddingValues))
                //main screen
                Column(
                    modifier = Modifier
                        .weight(1f)
                        .padding(10.dp),
                    verticalArrangement = Arrangement.spacedBy(5.dp)
                ) {
                    AiUserChatBox()
                    AiChatBox()
                }
                //texting
                AiChatScreenFooter(
                    Modifier.verticalScroll(rememberScrollState())
                        .imePadding())
            }
        }
    }
}