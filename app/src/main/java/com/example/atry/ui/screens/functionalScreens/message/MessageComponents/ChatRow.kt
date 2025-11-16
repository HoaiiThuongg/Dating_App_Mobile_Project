package com.example.atry.ui.screens.functionalScreens.message.MessageComponents

import android.net.Uri
import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.Message
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatItem
import com.example.atry.viewmodel.functional.MessageViewModel
import com.google.gson.Gson
import java.text.SimpleDateFormat
import java.util.Locale
import androidx.compose.ui.text.style.TextOverflow
import com.example.atry.viewmodel.functional.MessageItem

@Composable
fun ChatRow(
    chatItem: MessageItem, // Thay vì truyền matchedUser + lastMessage riêng lẻ
    viewModel: MessageViewModel = viewModel()
) {
    val fontWeight = if (chatItem.isRead) FontWeight.Normal else FontWeight.Bold
    val textColor = if (chatItem.isRead) Color(0xFFC4C4C4) else Color.Red

    val imageUrl = chatItem.user.user.defaultImage
        ?: "https://res.cloudinary.com/dosnqohav/image/upload/v1760214495/ugoo3xchm0nru92na1kh.jpg"

    Row(
        modifier = Modifier
            .fillMaxWidth()
            .clickable {
                val matchedUserJson = Uri.encode(Gson().toJson(chatItem.user))
                navController.navigate("chat/$matchedUserJson")

                // Cập nhật local isRead
                chatItem.lastMessage?.isRead = true
                viewModel.markChatAsRead(chatItem.user.matchId)
            }
            .padding(vertical = 8.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
        Image(
            painter = rememberAsyncImagePainter(model = imageUrl),
            contentDescription = "Avatar",
            modifier = Modifier
                .size(50.dp)
                .clip(CircleShape),
            contentScale = ContentScale.Crop
        )

        Spacer(modifier = Modifier.width(8.dp))

        Column(modifier = Modifier.weight(1f)) {
            Text(
                text = chatItem.user.user.name,
                fontWeight = FontWeight.Bold,
                fontSize = 16.sp,
                color = MaterialTheme.colorScheme.onBackground
            )
            Text(
                text = chatItem.lastMessage?.content ?: "Chưa có tin nhắn",
                fontWeight = fontWeight,
                fontSize = 14.sp,
                color = textColor,
                maxLines = 1,
                overflow = TextOverflow.Ellipsis
            )
        }

        Text(
            text = chatItem.lastMessage?.timestamp?.let {
                SimpleDateFormat("HH:mm", Locale.getDefault()).format(it)
            } ?: "",
            fontSize = 14.sp,
            fontWeight = FontWeight.SemiBold,
            color = Color.Gray
        )
    }
}
