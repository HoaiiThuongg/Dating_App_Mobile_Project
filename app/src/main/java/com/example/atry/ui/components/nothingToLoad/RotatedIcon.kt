package com.example.atry.ui.components.nothingToLoad

import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.EaseInOut
import androidx.compose.animation.core.LinearEasing
import androidx.compose.animation.core.tween
import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.layout.size
import androidx.compose.runtime.*
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import com.example.atry.R
import kotlinx.coroutines.launch
import kotlin.math.sin

@Composable
fun RotatedIcon(
    size : Float = 150f,
    id :Int=R.drawable.humble_logo
) {
    var isAnimating by remember { mutableStateOf(false) }
    val scope = rememberCoroutineScope()

    val rotation = remember { Animatable(0f) }
    val offsetX = remember { Animatable(0f) }
    val offsetY = remember { Animatable(0f) }

    Image(
        painter = painterResource(id = id),
        contentDescription = null,
        modifier = Modifier
            .size(size.dp)
            .graphicsLayer(
                rotationZ = rotation.value,
                translationX = offsetX.value,
                translationY = offsetY.value
            )
            .clickable(
                indication = null,
                interactionSource = remember { MutableInteractionSource() }
            ) {
                if (!isAnimating) {
                    isAnimating = true
                    scope.launch {
                        when ((1..5).random()) {
                            1 -> { // xoay
                                rotation.animateTo(
                                    targetValue = rotation.value + 360f,
                                    animationSpec = tween(800, easing = LinearEasing)
                                )
                            }

                            2 -> { // trái phải
                                offsetX.animateTo(40f, tween(100))
                                offsetX.animateTo(-40f, tween(100))
                                offsetX.animateTo(20f, tween(100))
                                offsetX.animateTo(-10f, tween(100))
                                offsetX.animateTo(0f, tween(100))
                            }

                            3 -> { // lên xuống
                                offsetY.animateTo(-40f, tween(150, easing = EaseInOut))
                                offsetY.animateTo(40f, tween(150, easing = EaseInOut))
                                offsetY.animateTo(-20f, tween(150, easing = EaseInOut))
                                offsetY.animateTo(0f, tween(150, easing = EaseInOut))
                            }

                            4 -> { // zik zak sang trái
                                for (i in 0..10) {
                                    val angle = i / 10f * Math.PI
                                    offsetX.snapTo((-sin(angle) * 60).toFloat())
                                    offsetY.snapTo((sin(angle * 2) * 20).toFloat())
                                    kotlinx.coroutines.delay(40)
                                }
                                offsetX.animateTo(0f, tween(200))
                                offsetY.animateTo(0f, tween(200))
                            }

                            5 -> { // zik zak sang phải
                                for (i in 0..10) {
                                    val angle = i / 10f * Math.PI
                                    offsetX.snapTo((sin(angle) * 60).toFloat())
                                    offsetY.snapTo((sin(angle * 2) * 20).toFloat())
                                    kotlinx.coroutines.delay(40)
                                }
                                offsetX.animateTo(0f, tween(200))
                                offsetY.animateTo(0f, tween(200))
                            }
                        }
                        isAnimating = false
                    }
                }
            }
    )
}
