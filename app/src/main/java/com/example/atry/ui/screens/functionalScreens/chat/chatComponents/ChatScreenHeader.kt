package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import android.content.Context
import android.net.Uri
import android.util.Log
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Call
import androidx.compose.material.icons.filled.Info
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.ChatViewModel
import com.google.gson.Gson

@Composable
fun ChatScreenHeader(
    modifier: Modifier = Modifier,
    viewModel: ChatViewModel = androidx.lifecycle.viewmodel.compose.viewModel()
) {
    val chatState by viewModel.uiState.collectAsState()
    val matchedUser = chatState.matchedUser
    val gson = Gson()
    val userJson = gson.toJson(matchedUser?.user)

    val imageUrl = matchedUser?.user?.defaultImage

    val userName = matchedUser?.user?.name ?: "Vô danh"

    Row(
        modifier = modifier
            .fillMaxWidth()
            .padding(10.dp,10.dp,10.dp,5.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically
    ) {
        IconButton(onClick = { navController.navigate("message") }) {
            Image(
                painter = painterResource(id = R.drawable.grayarrow),
                contentDescription = "Quay lại",
            )
        }

        Column(
            verticalArrangement = Arrangement.spacedBy(7.dp),
            horizontalAlignment = Alignment.CenterHorizontally,
            modifier = Modifier.clickable {
                navController.navigate("matched_detailed_profile/${Uri.encode(userJson)}")
            }
        ) {
            Image(
                painter = rememberAsyncImagePainter(model = imageUrl),
                contentDescription = null,
                modifier = Modifier
                    .size(50.dp)
                    .clip(RoundedCornerShape(20.dp))
                    .background(Color.LightGray),
                contentScale = ContentScale.Crop
            )
            Text(
                text = userName,
                fontSize = 16.sp,
                color = MaterialTheme.colorScheme.onBackground
            )
        }

        Row(
            horizontalArrangement = Arrangement.spacedBy(15.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            IconButton(
                onClick = {
                    navController.navigate("matched_detailed_profile/${Uri.encode(userJson)}")
                },
                modifier = Modifier.size(40.dp)
            ) {
                Icon(
                    imageVector = Icons.Filled.Info,
                    contentDescription = "Voice Call",
                    tint = primaryPurple
                )
            }
        }
    }

}
