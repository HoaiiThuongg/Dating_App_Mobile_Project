package com.example.atry.navigation

import android.content.Intent
import android.util.Log
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.navigationBars
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import com.example.atry.MainActivity
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.VoiceCallViewModel

@Composable
fun AppRoot(initialIntent: Intent?,
            activity: MainActivity, voiceVM: VoiceCallViewModel = viewModel()) {
    val incoming by voiceVM.incomingCallFrom.collectAsState()
    LaunchedEffect(CurrentUser.user?.userId) {
        voiceVM.startCheckingIncomingCall(CurrentUser.user?.userId ?: "")
    }

    Box(modifier = Modifier
        .windowInsetsPadding(WindowInsets.navigationBars)
        .fillMaxSize()) {
        NavGraph(
            initialIntent,
            activity
        ) // app chính

//        // Overlay: dialog / card nổi trên app
//        if (incoming != null) {
//            Log.d("incoming:","yes")
//            IncomingCallDialog(
//                callerId = incoming!!,
//                onAccept = { caller ->
//                    voiceVM.acceptCall(caller.)
//                },
//                onDecline = { voiceVM.declineCall(incoming.toString()) }
//            )
//        }
//    }
    }
}
