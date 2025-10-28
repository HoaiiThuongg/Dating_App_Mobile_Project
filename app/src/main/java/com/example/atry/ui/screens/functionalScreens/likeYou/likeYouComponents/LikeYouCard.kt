package com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents

import android.net.Uri
import android.text.style.BackgroundColorSpan
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.backend.User
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.LikeYouViewModel
import com.google.gson.Gson

@Composable
fun LikeYouCard(
    user: User,
    onMatching: () -> Unit,
    viewModel: LikeYouViewModel = viewModel()
) {

    viewModel.getUserProfileById(user.userId)

    val profile = viewModel.userProfile.observeAsState()
    val gson = Gson()
    val imageUrl = user.defaultImage

    Box(
        modifier = Modifier
            .border(
                width = 2.dp,
                brush = Brush.linearGradient(
                    colors = listOf(Color(0xFFFF7487),Color(0xFFF33A75)),
                            start = Offset(0f, 0f),
                            end = Offset(400f, 400f)
                ),
                shape = RoundedCornerShape(20.dp)
            )
            .clip(RoundedCornerShape(20.dp))
            .fillMaxWidth()
            .background(Color.Gray)
            .aspectRatio(1f)
            .clickable {
                val userJson = gson.toJson(user)
                navController.navigate("detailed_profile/${Uri.encode(userJson)}")            }

    ) {

        Image(
            painter = rememberAsyncImagePainter(model = imageUrl),
            contentDescription = "Ảnh người thích bạn",
            modifier = Modifier
                .fillMaxSize()
                .clip(RoundedCornerShape(20.dp)),
        contentScale = ContentScale.Crop
        )
        Box(
            modifier = Modifier
                .fillMaxSize()
                .background(
                    brush = Brush.verticalGradient(   // gradient dọc
                        colors = listOf(
                            Color(0x00000000),
                            Color(0xFF000000)
                        )
                    ),
                    shape = RoundedCornerShape(20.dp)
                )
        ){

        }

        Row(
            horizontalArrangement = Arrangement.SpaceBetween,
            modifier = Modifier
                .fillMaxWidth()
                .align(Alignment.BottomStart)
                .padding( 10.dp)
        ) {
            Column {
                Text(user.name, color = Color.White)
//                Text(user.age.toString() + " tuổi", color = Color.White)
            }

            MatchingHeart(size = 32.dp, onToggled = {onMatching()})
        }

    }
}