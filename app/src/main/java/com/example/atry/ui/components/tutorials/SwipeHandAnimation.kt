package com.example.atry.ui.components.tutorials

import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.LinearEasing
import androidx.compose.animation.core.tween
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Icon
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontVariation.width
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.R
import kotlinx.coroutines.delay

@Composable
fun LikeSwipeHandAnimation(modifier: Modifier) {
    val offsetX = remember { Animatable(150f) } // bắt đầu ngoài màn hình
    val alpha = remember { Animatable(0f) }     // ban đầu ẩn

    LaunchedEffect(Unit) {
        while (true) {
            // xuất hiện dần
            alpha.animateTo(1f, tween(300))
            // di chuyển từ phải sang trái ~50.dp
            offsetX.animateTo(
                targetValue = -50f,
                animationSpec = tween(durationMillis = 1000, easing = LinearEasing)
            )
            // mờ dần rồi biến mất
            alpha.animateTo(0f, tween(400))
            // reset lại vị trí
            offsetX.snapTo(150f)
            delay(1500) // nghỉ 1 chút trước khi lặp lại
        }
    }

    Box(
        modifier = modifier.width(100.dp)
    ) {
        Icon(
            painter = painterResource(id = R.drawable.like_hand),
            contentDescription = "Swipe hint",
            tint = Color.White,
            modifier = Modifier
                .size(40.dp)
                .graphicsLayer {
                    translationX = offsetX.value
                    this.alpha = alpha.value
                }
        )
    }
}

@Composable
fun DislikeSwipeHandAnimation(modifier: Modifier) {
    val offsetX = remember { Animatable(0f) } // bắt đầu ngoài màn hình
    val alpha = remember { Animatable(0f) }     // ban đầu ẩn

    LaunchedEffect(Unit) {
        while (true) {
            // xuất hiện dần
            alpha.animateTo(1f, tween(300))
            // di chuyển từ phải sang trái ~50.dp
            offsetX.animateTo(
                targetValue = 150f,
                animationSpec = tween(durationMillis = 1000, easing = LinearEasing)
            )
            // mờ dần rồi biến mất
            alpha.animateTo(0f, tween(400))
            // reset lại vị trí
            offsetX.snapTo(0f)
            delay(1500) // nghỉ 1 chút trước khi lặp lại
        }
    }

    Box(
        modifier = modifier.width(100.dp)
    ) {
        Icon(
            painter = painterResource(id = R.drawable.dislike_hand),
            contentDescription = "Swipe hint",
            tint = Color.White,
            modifier = Modifier
                .size(40.dp)
                .graphicsLayer {
                    translationX = offsetX.value
                    this.alpha = alpha.value
                }
        )
    }
}