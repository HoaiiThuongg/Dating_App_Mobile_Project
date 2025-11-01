package com.example.atry.ui.components.notificationDrawer

import android.net.Uri
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
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
import com.example.atry.backend.Notification
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.composal.NotificationViewModel
import com.google.gson.Gson

@Composable
fun NotificationCard(
    notification: Notification,
    imageRes: Int,
    onClick:()->Unit,
    viewModel: NotificationViewModel
) {
    val user = remember { mutableStateOf<User?>(null) }

    LaunchedEffect(notification.partnerId) {
        viewModel.getUserByIdOnce(notification.partnerId) { fetchedUser ->
            user.value = fetchedUser
        }
    }

    Box(
        modifier = Modifier
            .fillMaxWidth()
            .background(Color.White, RoundedCornerShape(16.dp))
            .clickable {
                onClick()

                val currentId = CurrentUser.user?.userId ?: return@clickable
                val loadedUser = user.value ?: return@clickable

                val userJson = Uri.encode(Gson().toJson(loadedUser))

                viewModel.checkMatch(currentId, notification.partnerId) { matched ->
                    if (matched) {
                        navController.navigate("matched_detailed_profile/$userJson")
                    } else {
                        navController.navigate("detailed_profile/$userJson")
                    }
                }
            }
            .padding(5.dp, 10.dp, 10.dp, 5.dp)
    ) {
        Row(
            modifier = Modifier.padding(5.dp),
            verticalAlignment = Alignment.CenterVertically,
            horizontalArrangement = Arrangement.Start
        ) {
            Image(
                painter = painterResource(id = imageRes),
                contentDescription = null,
                contentScale = ContentScale.Crop,
                modifier = Modifier.size(50.dp).clip(CircleShape)
            )

            Spacer(modifier = Modifier.width(10.dp))

            Column(
                verticalArrangement = Arrangement.Center,
                modifier = Modifier.weight(1f)
            ) {
                Text(notification.title, color = Color.Black, fontSize = 20.sp, fontWeight = FontWeight.Bold)
                Text(notification.content, color = Color.Black, fontSize = 16.sp)
                Text(
                    android.text.format.DateFormat.format("dd/MM/yyyy", notification.timestamp).toString(),
                    color = Color.LightGray, fontSize = 13.sp
                )
            }
        }

        if (!notification.isRead) {
            Box(
                modifier = Modifier.size(10.dp)
                    .background(Color.Red, shape = CircleShape)
                    .align(Alignment.TopEnd)
            )
        }
    }

}
