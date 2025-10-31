package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import android.content.Context
import android.util.Log
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Call
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.ChatViewModel
import com.example.atry.viewmodel.functional.VoiceCallViewModel
import com.example.atry.backend.voiceCall.AgoraRtcManager

@Composable
fun ChatScreenHeader(
    modifier: Modifier = Modifier,
    viewModel: ChatViewModel = androidx.lifecycle.viewmodel.compose.viewModel(),
    voiceCallViewModel: VoiceCallViewModel = androidx.lifecycle.viewmodel.compose.viewModel(),
    context: Context
) {
    val chatState by viewModel.uiState.collectAsState()
    val matchedUser = chatState.matchedUser

    val voiceCallState by voiceCallViewModel.uiState.collectAsState()
    val incomingFrom by voiceCallViewModel.incomingCallFrom.collectAsState()

    val userName = matchedUser?.user?.name ?: "Vô danh"
    LaunchedEffect(Unit) {
        voiceCallViewModel.startCheckingIncomingCall(CurrentUser.user?.userId?:"")
    }
    LaunchedEffect(incomingFrom) {
        incomingFrom?.let { callerId ->
            navController.navigate("incoming_call/$callerId")
        }
    }

    // ⚡ TẠO RTC MANAGER
    val rtcManager = remember {
        AgoraRtcManager(context, object : AgoraRtcManager.RtcListener {
            override fun onJoinChannelSuccess(uid: Int) {
                Log.d("AgoraRtc", "Joined channel successfully: UID=$uid")
            }
            override fun onUserJoined(uid: Int) {
                Log.d("AgoraRtc", "User joined: UID=$uid")
            }
            override fun onUserOffline(uid: Int) {
                Log.d("AgoraRtc", "User offline: UID=$uid")
            }
        })
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
                painter = androidx.compose.ui.res.painterResource(id = R.drawable.grayarrow),
                contentDescription = "Quay lại",
            )
        }

        Text(
            text = userName,
            fontSize = 16.sp,
            color = MaterialTheme.colorScheme.onBackground
        )

        Row(
            horizontalArrangement = Arrangement.spacedBy(15.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            IconButton(
                onClick = {
                    val channelName = "dating_channel_${matchedUser?.user?.userId ?: "default"}"
                    val uid = (CurrentUser.user?.userId?.hashCode() ?: 1234) and 0x7FFFFFFF

                    voiceCallViewModel.startCall(CurrentUser.user?.userId?:"",matchedUser?.user?.userId?:"")
                    //  Fetch token từ server
                    voiceCallViewModel.fetchToken(channelName, uid)
                    matchedUser?.user?.userId?.let { calleeId ->
                        voiceCallViewModel.startCheckingCallAccepted(CurrentUser.user?.userId ?: "")
                    }
                },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Call,
                    contentDescription = "Voice Call",
                    tint = primaryPurple
                )
            }
        }
    }

    // ⚡ Khi có token thành công -> join channel ngay
    if (voiceCallState is VoiceCallViewModel.UiState.Success) {
        val res = (voiceCallState as VoiceCallViewModel.UiState.Success).tokenResponse

        LaunchedEffect(res.token) {
            try {
                rtcManager.joinChannel(res.token, res.channelName, res.uid.toInt())
                Log.d("CALL", "Joined Agora channel: ${res.channelName}")
            } catch (e: Exception) {
                Log.e("CALL", "Failed join channel", e)
            }
        }
    }

    // ⚡ Khi thoát ChatScreen, rời kênh để không còn nghe
    DisposableEffect(Unit) {
        onDispose {
            rtcManager.leaveChannel()
        }
    }

    // ⚡ Nếu có cuộc gọi đến
    incomingFrom?.let { callerId ->
        LaunchedEffect(callerId) {
            navController.navigate("incoming_call/$callerId")
        }
    }
}
