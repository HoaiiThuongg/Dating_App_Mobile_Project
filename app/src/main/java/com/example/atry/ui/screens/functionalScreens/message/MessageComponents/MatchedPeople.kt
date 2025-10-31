package com.example.atry.ui.screens.functionalScreens.message.MessageComponents

import android.net.Uri
import androidx.compose.foundation.horizontalScroll
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.rememberScrollState
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.backend.MatchedUser
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatItem
import com.example.atry.viewmodel.functional.MessageViewModel
import com.google.gson.Gson
import kotlinx.coroutines.flow.StateFlow

@Composable
fun MatchedPeople(
    matchedUsers: List<MatchedUser>,
    chatList: List<ChatItem>,
    messageViewModel: MessageViewModel,
    onAvatarClick: (MatchedUser, ChatItem?) -> Unit
) {

    if (matchedUsers.isEmpty()) return

    Column(verticalArrangement = Arrangement.spacedBy(10.dp)) {
        Text("Đã ghép đôi", fontSize = 16.sp, color = MaterialTheme.colorScheme.onBackground)

        Row(
            horizontalArrangement = Arrangement.spacedBy(30.dp),
            modifier = Modifier
                .fillMaxWidth()
                .horizontalScroll(rememberScrollState())
        ) {
            chatList.forEach { chat ->

                OnlineAvatar(
                    chat
                )
            }
        }
    }
}
