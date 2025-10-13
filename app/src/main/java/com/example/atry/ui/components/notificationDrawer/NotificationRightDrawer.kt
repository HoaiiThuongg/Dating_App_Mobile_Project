package com.example.atry.ui.components.notificationDrawer

import androidx.compose.animation.AnimatedVisibility
import androidx.compose.animation.slideInHorizontally
import androidx.compose.animation.slideOutHorizontally
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier

@Composable
fun NotificationRightDrawer(isNotificationDrawerOpen:Boolean,closeNotification:()->Unit) {
    AnimatedVisibility(
        visible = isNotificationDrawerOpen,
        enter = slideInHorizontally(initialOffsetX = { it }),
        exit = slideOutHorizontally(targetOffsetX = { it })
    ) {
        Box(
            modifier = Modifier
                .fillMaxSize()
        ) {
            NotificationContent(Modifier.align(Alignment.CenterEnd),closeNotification)
        }
    }
}
