package com.example.atry.ui.screens.functionalScreens.message.MessageComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.viewmodel.ConnectedPeople

@Composable
fun OnlineAvatar(connectedPeople: ConnectedPeople) {
    Column(
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ){
        Box(
            modifier = Modifier
                .size(60.dp)
        ){
            Image(
                painter = painterResource(id=R.drawable.ava1),
                contentDescription = "avatar",
                contentScale = ContentScale.Crop,
                modifier = Modifier
                    .fillMaxSize()
                    .clip(CircleShape)
            )
            Box(
                modifier = Modifier
                    .size(20.dp) // width + height = 30.dp
                    .background(Color.Green, CircleShape)
                    .align(Alignment.BottomEnd)
            )

        }
        Text(connectedPeople.name, color = MaterialTheme.colorScheme.onSurface)
    }
}