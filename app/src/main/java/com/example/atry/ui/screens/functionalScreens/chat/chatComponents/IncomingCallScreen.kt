package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Call
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.functional.VoiceCallViewModel

@Composable
fun IncomingCallScreen(
    callerId: String,
    voiceCallViewModel: VoiceCallViewModel = viewModel()
) {
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .fillMaxHeight()
            .background(Color(0xFFF5F5F5)),
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.Center
    ) {
        Text("📞 Có cuộc gọi đến từ:", fontSize = 18.sp, color = Color.Gray)
        Text(callerId, fontSize = 22.sp, fontWeight = FontWeight.Bold, color = primaryPurple)

        Row(
            horizontalArrangement = Arrangement.spacedBy(20.dp),
            modifier = Modifier.padding(top = 20.dp)
        ) {
            IconButton(
                onClick = {
                    // Từ chối cuộc gọi
                    voiceCallViewModel.declineCall()
                    navController.popBackStack()
                },
                modifier = Modifier.size(60.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Call,
                    contentDescription = "Decline",
                    tint = Color.Red,
                    modifier = Modifier.size(50.dp)
                )
            }

            IconButton(
                onClick = {
                    // Nhận cuộc gọi
                    voiceCallViewModel.acceptCall(callerId)
                },
                modifier = Modifier.size(60.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Call,
                    contentDescription = "Accept",
                    tint = Color.Green,
                    modifier = Modifier.size(50.dp)
                )
            }
        }
    }
}
