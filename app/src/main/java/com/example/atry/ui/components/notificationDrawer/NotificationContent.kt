package com.example.atry.ui.components.notificationDrawer

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
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.ui.theme.redGradientBrush

@Composable
fun NotificationContent(modifier: Modifier,onCloseNotification:()->Unit){
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
//            .border(
//                width = 2.dp,
//                color = Color.White,
//                shape = RoundedCornerShape(
//                    topStart = 20.dp,
//                    topEnd = 0.dp,
//                    bottomEnd = 0.dp,
//                    bottomStart = 20.dp
//                )
//            )
            .padding(20.dp),
        verticalArrangement = Arrangement.spacedBy(15.dp)
    ) {
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            IconButton(
                onClick = {onCloseNotification() },
                modifier = Modifier
                    .size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Close,
                    contentDescription = "Close",
                    modifier = Modifier
                        .size(32.dp)
                        .graphicsLayer(alpha = 0.99f)
                        .drawWithCache {
                            onDrawWithContent {
                                drawContent()
                                drawRect(
                                    brush = redGradientBrush,
                                    size = this.size,
                                    blendMode = BlendMode.SrcAtop
                                )
                            }
                        },
                    tint = Color.White
                )
            }
            IconButton(
                onClick = { },
                modifier = Modifier
                    .size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Notifications,
                    contentDescription = "Close",
                    modifier = Modifier
                        .size(32.dp)
                        .graphicsLayer(alpha = 0.99f)
                        .drawWithCache {
                            onDrawWithContent {
                                drawContent()
                                drawRect(
                                    brush = redGradientBrush,
                                    size = this.size,
                                    blendMode = BlendMode.SrcAtop
                                )
                            }
                        },
                    tint = Color.White
                )
            }
        }
        Spacer(modifier= Modifier.size(10.dp))
        NotificationCard(
            name = "Justin Bieber",
            message = "vừa thích bạn",
            date = "23/02/2025",
            imageRes = R.drawable.ava1
        )
        NotificationCard(
            name = "Justin Bieber",
            message = "vừa thích bạn",
            date = "23/02/2025",
            imageRes = R.drawable.ava1
        )
    }
}