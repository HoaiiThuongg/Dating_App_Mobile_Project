package com.example.atry.ui.screens.functionalScreens.chat

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.runtime.*
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenHeader
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.ChatScreenFooter
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.UserChatBox
import com.example.atry.ui.screens.functionalScreens.chat.chatComponents.PartnerChatBox

@Preview
@Composable
fun ChatScreen() {
    var text by remember { mutableStateOf("") }
    Column(modifier = Modifier
        .fillMaxSize()
        .background(MaterialTheme.colorScheme.surface),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        //patner avatar and name
        ChatScreenHeader()
        //main screen
        Column(
            modifier = Modifier
                .weight(1f)
                .padding(10.dp),
            verticalArrangement = Arrangement.spacedBy(5.dp)
            ) {
            UserChatBox()
           PartnerChatBox()
        }
        //texting
        ChatScreenFooter()
    }
}