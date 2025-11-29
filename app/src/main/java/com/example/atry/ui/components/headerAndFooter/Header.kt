package com.example.atry.ui.components.headerAndFooter

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.ui.theme.dynamicGradientBrush
import com.example.atry.viewmodel.composal.NotificationViewModel

@Composable
fun Header(screenName: String,
           iconRes: Int,onOpenNav:()->Unit,
           onOpenNotification:()->Unit,
           notificationViewModel: NotificationViewModel= viewModel()
) {

    val notifications by notificationViewModel.notifications.collectAsState()

    // Tính số notification chưa đọc
    val unreadCount = notifications.count { !it.isRead }
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .background(
                color = MaterialTheme.colorScheme.surface
            )
            .padding(15.dp, 50.dp,15.dp,25.dp)
        ,
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically

    ) {
        IconButton(
            onClick = {onOpenNav() },
            modifier = Modifier
                .size(32.dp)
        ) {
            Icon(
                painter = painterResource(id = R.drawable.menu),
                contentDescription = "navigation",
                tint = MaterialTheme.colorScheme.onSurface,
                modifier = Modifier.size(30.dp)
            )
        }
        Row(
            horizontalArrangement = Arrangement.spacedBy(7.dp),
            verticalAlignment = Alignment.CenterVertically

        ) {
            Text(
                text = screenName,
                fontWeight = FontWeight.Bold,
                style = TextStyle(
                    fontSize = 32.sp,
                    brush = dynamicGradientBrush()
                )
            )

            Image(
                painter = painterResource(id = iconRes),
                contentDescription = null,
                modifier = Modifier
                    .size(32.dp)
                    .testTag("notification_icon"),
                contentScale = ContentScale.Crop
            )
        }


        // noti icon
        Box(modifier = Modifier
            .size(32.dp)
            .testTag("notification_icon")) {
            IconButton(
                onClick = { onOpenNotification() },
                modifier = Modifier.size(32.dp)
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.bell),
                    contentDescription = "notifications",
                    tint = MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.size(30.dp)
                )
            }

            // Hiển thị dot nếu có thông báo chưa đọc
            if (unreadCount > 0) {
                Box(
                    modifier = Modifier
                        .align(Alignment.TopEnd)
                        .background(Color.Red, shape = CircleShape)
                        .size(20.dp), // kích thước dot
                    contentAlignment = Alignment.Center
                ) {
                    Text(
                        text = if (unreadCount > 99) "99+" else unreadCount.toString(),
                        color = Color.White,
                        fontSize = 10.sp,
                        fontWeight = FontWeight.Bold,
                        modifier = Modifier.testTag("notification_badge_text")
                    )
                }
            }
        }
    }
}
