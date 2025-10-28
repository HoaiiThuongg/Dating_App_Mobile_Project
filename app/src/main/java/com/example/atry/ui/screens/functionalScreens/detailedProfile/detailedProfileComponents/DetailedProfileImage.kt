package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.animation.core.animateFloat
import androidx.compose.animation.core.tween
import androidx.compose.animation.core.updateTransition
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.KeyboardArrowLeft
import androidx.compose.material.icons.filled.KeyboardArrowRight
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import coil.compose.rememberAsyncImagePainter
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
@Composable
fun DetailedProfileImage(
    user: User,
    userProfile: UserProfile?
) {
    // ✅ lấy list ảnh từ userProfile
    val source = userProfile?.images ?: emptyList()
    val imageUrl = user.defaultImage

    // ✅ tạo list mới một lần
    val images = remember(source, imageUrl) {
        (source + imageUrl).distinct()
    }

    // index hiện tại
    var currentIndex by remember { mutableStateOf(0) }

    // ✅ transition dựa trên index
    val transition = updateTransition(targetState = currentIndex, label = "imageSlide")

    val alpha by transition.animateFloat(label = "alpha") { state ->
        if (state == currentIndex) 1f else 0f
    }

    val offsetX by transition.animateFloat(label = "offsetX") { state ->
        state * -50f // càng index cao càng dịch trái
    }


    Box(
        modifier = Modifier
            .fillMaxWidth()
            .height(400.dp)
            .background(Color.White, RoundedCornerShape(20.dp))
            .clip(RoundedCornerShape(20.dp))
    ) {
        // ==============================
        // Ảnh có fade + slide animation ⚡
        // ==============================
        Image(
            painter = rememberAsyncImagePainter(model = images[currentIndex]),
            contentDescription = null,
            contentScale = ContentScale.Crop,
            modifier = Modifier
                .fillMaxSize()
                .graphicsLayer(
                    alpha = alpha,
                    translationX = offsetX
                )
        )

        // ==============================
        // Nút sang trái/phải
        // ==============================
        Row(
            modifier = Modifier
                .align(Alignment.Center)
                .fillMaxWidth()
                .padding(horizontal = 5.dp),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            IconButton(
                onClick = {
                    if (currentIndex > 0) currentIndex-- else currentIndex = images.size - 1
                },
                modifier = Modifier
                    .padding(3.dp)
                    .clip(CircleShape)
                    .background(Color.Black.copy(alpha = 0.5f))
            ) {
                Icon(
                    Icons.Default.KeyboardArrowLeft,
                    contentDescription = null,
                    tint = Color.White,
                    modifier = Modifier.size(40.dp)
                )
            }

            IconButton(
                onClick = {
                    if (currentIndex == images.size - 1) currentIndex = 0 else currentIndex++
                },
                modifier = Modifier
                    .padding(3.dp)
                    .clip(CircleShape)
                    .background(Color.Black.copy(alpha = 0.5f))
            ) {
                Icon(
                    Icons.Default.KeyboardArrowRight,
                    contentDescription = null,
                    tint = Color.White,
                    modifier = Modifier.size(40.dp)
                )
            }
        }

        // ==============================
        // Dot indicator 🍡
        // ==============================
        Row(
            modifier = Modifier
                .align(Alignment.BottomCenter)
                .padding(12.dp),
            horizontalArrangement = Arrangement.Center
        ) {
            images.forEachIndexed { index, _ ->
                Box(
                    modifier = Modifier
                        .padding(horizontal = 4.dp)
                        .size(if (index == currentIndex) 12.dp else 8.dp)
                        .clip(CircleShape)
                        .background(if (index == currentIndex) Color.White else Color.Gray)
                )
            }
        }
    }
}
