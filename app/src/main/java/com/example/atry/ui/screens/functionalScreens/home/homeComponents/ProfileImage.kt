package com.example.atry.ui.screens.functionalScreens.home.homeComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser

@Composable
fun ProfileImage(
    user: User
) {
    Box(
        modifier = Modifier
            .fillMaxWidth()
    ) {
        val imageUrl = user.defaultImage

        Image(
            painter = rememberAsyncImagePainter(model = imageUrl),
            contentDescription = "Ảnh đối tượng",
            modifier = Modifier
                .fillMaxSize()
                .clip(RoundedCornerShape(16.dp)),
            contentScale = ContentScale.Crop,
            alignment = Alignment.Center
        )
    }

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
}