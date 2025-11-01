package com.example.atry.ui.components.notificationDrawer

import android.net.Uri
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.Notifications
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.backend.Notification
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.redGradientBrush
import com.example.atry.viewmodel.composal.NotificationViewModel
import com.google.gson.Gson

@Composable
fun NotificationContent(
    modifier: Modifier = Modifier,
    viewModel: NotificationViewModel = viewModel(),
    onCloseNotification: () -> Unit
) {
    val notifications by viewModel.notifications.collectAsState()

    Column(
        modifier = modifier
            .fillMaxHeight()
            .width(320.dp)
            .background(
                color = MaterialTheme.colorScheme.surfaceVariant,
                shape = RoundedCornerShape(
                    topStart = 20.dp,
                    topEnd = 0.dp,
                    bottomEnd = 0.dp,
                    bottomStart = 20.dp
                )
            )
            .padding(20.dp, 45.dp, 20.dp, 20.dp),
        verticalArrangement = Arrangement.spacedBy(15.dp)
    ) {
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            IconButton(
                onClick = { onCloseNotification() },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Close,
                    contentDescription = "Close",
                    modifier = Modifier.size(32.dp),
                    tint = Color.White
                )
            }

            IconButton(
                onClick = { /* có thể dùng để mark all read */ },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Notifications,
                    contentDescription = "Notifications",
                    modifier = Modifier.size(32.dp),
                    tint = Color.White
                )
            }
        }

        Spacer(modifier = Modifier.size(10.dp))

        if (notifications.isEmpty()) {
            Text(
                text = "Chưa có thông báo mới",
                color = Color.Gray,
                fontSize = 14.sp
            )
        } else {
            notifications.forEach { n: Notification ->
                NotificationCard(
                    notification=n,
                    imageRes = R.drawable.humble_logo,
                    onClick = {
                        if (!n.isRead) {
                            viewModel.markNotificationAsRead(n.id)
                        }
                    },
                    viewModel = viewModel
                )
            }

        }
    }
}
