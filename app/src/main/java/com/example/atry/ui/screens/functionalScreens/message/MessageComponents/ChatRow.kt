package com.example.atry.ui.screens.functionalScreens.message.MessageComponents

import android.net.Uri
import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.backend.MatchedUser
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.MessageViewModel
import com.google.gson.Gson

@Composable
fun ChatRow(
    matchedUser: MatchedUser,
    viewModel: MessageViewModel = viewModel()
) {
    val lastMessages by viewModel.lastMessages.collectAsState()
    val imageUrl = CurrentUser.user?.profileImageUrl
        ?: "https://res.cloudinary.com/dosnqohav/image/upload/v1760214495/ugoo3xchm0nru92na1kh.jpg"
    LaunchedEffect(matchedUser.matchId) {
        viewModel.observeLastMessage(matchedUser.matchId)
    }
    val lastMsg = lastMessages[matchedUser.matchId]
    val matchID = matchedUser.matchId
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .clickable {
                val matchedUserJson = Uri.encode(Gson().toJson(matchedUser))
                navController.navigate("chat/${matchedUserJson}")
                       },
        verticalAlignment = Alignment.CenterVertically
    ) {
        // Avatar
        Image(
            painter = rememberAsyncImagePainter(model = imageUrl),
            contentDescription = "Avatar",
            modifier = Modifier
                .size(50.dp)
                .clip(CircleShape),
            contentScale = ContentScale.Crop
        )

        Spacer(modifier = Modifier.width(8.dp))

        // Nội dung tin nhắn
        Column(
            modifier = Modifier.weight(1f)
        ) {
            Text(
                text = matchedUser.user.name,
                fontWeight = FontWeight.Bold,
                fontSize = 16.sp,
                color = MaterialTheme.colorScheme.onSurface
            )
            Text(
                text = lastMsg?.content ?: "Chưa có tin nhắn",
                fontSize = 14.sp,
                color = Color.Gray
            )
        }

        // Thời gian
        Text(
            text = "10:03",
            fontSize = 14.sp,
            fontWeight = FontWeight.SemiBold,
            color = Color.Gray
        )
    }

}