package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Call
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.primaryPurple
import androidx.compose.material.icons.filled.VideoCall
import androidx.compose.material.icons.filled.Videocam
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.ChatViewModel
import com.example.atry.viewmodel.functional.VoiceCallViewModel

@Composable
fun ChatScreenHeader(
    modifier: Modifier = Modifier,
    viewModel: ChatViewModel = viewModel(),
    voiceCallViewModel: VoiceCallViewModel = viewModel()
) {
    val chatState by viewModel.uiState.collectAsState()
    val matchedUser = chatState.matchedUser

    val voiceCallState by voiceCallViewModel.uiState.collectAsState()
    val incomingFrom by voiceCallViewModel.incomingCallFrom.collectAsState()

    val userName = matchedUser?.user?.name ?: "Vô danh"

    // ✅ Mỗi vài giây kiểm tra xem có cuộc gọi đến không
    LaunchedEffect(Unit) {
        voiceCallViewModel.startCheckingIncomingCall(CurrentUser.user?.userId ?: "")
    }

    Row(
        modifier = modifier
            .fillMaxWidth()
            .padding(10.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically
    ) {
        IconButton(onClick = { navController.navigate("main_message") }) {
            Image(
                painter = painterResource(id = R.drawable.grayarrow),
                contentDescription = "Quay lại",
            )
        }

        Column(
            verticalArrangement = Arrangement.spacedBy(7.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
//            Image(
//                painter = rememberAsyncImagePainter(model = imageUrl),
//                contentDescription = null,
//                modifier = Modifier
//                    .size(32.dp)
//                    .clip(RoundedCornerShape(20.dp))
//                    .background(Color.LightGray),
//                contentScale = ContentScale.Crop
//            )
            Text(
                text = userName,
                fontWeight = FontWeight.Bold,
                color = MaterialTheme.colorScheme.onBackground,
                fontSize = 16.sp
            )
        }

        Row(
            horizontalArrangement = Arrangement.spacedBy(15.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            IconButton(
                onClick = {
                    val channelName = "dating_channel_${matchedUser?.user?.userId ?: "default"}"
                    val uid = (matchedUser?.user?.userId?.hashCode() ?: 1234) and 0x7FFFFFFF
                    voiceCallViewModel.fetchToken(channelName, uid)
                },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Call,
                    contentDescription = "Voice Call",
                    tint = primaryPurple
                )
            }

            IconButton(
                onClick = { /* TODO: Video call sau */ },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Filled.Videocam,
                    contentDescription = "Video Call",
                    tint = primaryPurple
                )
            }
        }
    }

    // ✅ Khi có token -> chuyển sang màn gọi
    when (voiceCallState) {
        is VoiceCallViewModel.UiState.Success -> {
            val token = (voiceCallState as VoiceCallViewModel.UiState.Success).data.token
            LaunchedEffect(token) {
                navController.navigate("voice_call?token=$token")
            }
        }
        is VoiceCallViewModel.UiState.Error -> {
            Text(
                text = "Lỗi: ${(voiceCallState as VoiceCallViewModel.UiState.Error).message}",
                color = Color.Red,
                modifier = Modifier.padding(8.dp)
            )
        }
        is VoiceCallViewModel.UiState.Loading -> {
            Text("🔄 Đang tạo token...", color = Color.Gray, modifier = Modifier.padding(8.dp))
        }
        else -> {}
    }

    // ✅ Nếu có người gọi đến
    incomingFrom?.let { callerId ->
        LaunchedEffect(callerId) {
            navController.navigate("incoming_call?callerId=$callerId")
        }
    }
}