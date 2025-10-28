package com.example.atry.navigation

import android.content.Intent
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import com.example.atry.MainActivity
import com.example.atry.viewmodel.functional.VoiceCallViewModel

@Composable
fun AppRoot(initialIntent: Intent?,
            activity: MainActivity, voiceVM: VoiceCallViewModel = viewModel()) {
    val incoming by voiceVM.incomingCallFrom.collectAsState()

    Box(modifier = Modifier.fillMaxSize()) {
        NavGraph(initialIntent,
            activity) // app chính

        // Overlay: dialog / card nổi trên app
        if (incoming != null) {
            IncomingCallDialog(
                callerId = incoming!!,
                onAccept = { caller ->
                    voiceVM.acceptCall(caller)
                },
                onDecline = { voiceVM.declineCall() }
            )
        }
    }
}
