package com.example.atry.ui.components.tutorials

import androidx.compose.animation.AnimatedContent
import androidx.compose.animation.ExperimentalAnimationApi
import androidx.compose.animation.fadeIn
import androidx.compose.animation.fadeOut
import androidx.compose.animation.slideInHorizontally
import androidx.compose.animation.slideOutHorizontally
import androidx.compose.animation.with
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.dynamicGradientBrush
import com.example.atry.ui.theme.purpleGradientBrush
import com.example.atry.ui.theme.redPinkGradientBrush

@OptIn(ExperimentalAnimationApi::class)
@Composable
fun SwipeTutorial(onClose:()->Unit) {
    var currentPage by remember { mutableStateOf(0) }

    // Danh sách các trang hướng dẫn
    val tutorialPages = listOf<@Composable () -> Unit>(
        { SwipeTutorialPage1 { currentPage++ } },
        { SwipeTutorialPage2 { currentPage-- } }
    )

    Box(
        modifier = Modifier
            .fillMaxSize(),
        contentAlignment = Alignment.Center
    ) {
        // Nền mờ
        Box(
            modifier = Modifier
                .fillMaxSize()
                .background(Color(0xFF353535).copy(alpha = 0.6f))
        )
        // Hộp chính
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(20.dp)
                .background(MaterialTheme.colorScheme.surface, shape = RoundedCornerShape(20.dp))
                .border(
                    width = 3.dp,
                    brush = purpleGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .padding(20.dp)
        ) {
            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement = Arrangement.spacedBy(10.dp)
            ) {
                // --- Header ---
                Box(
                    modifier = Modifier.fillMaxWidth(),
                    contentAlignment = Alignment.Center
                ) {
                    Text(
                        text = "Hướng dẫn",
                        fontWeight = FontWeight.Bold,
                        style = TextStyle(
                            brush = dynamicGradientBrush(),
                            fontSize = 32.sp
                        )
                    )

                    IconButton(
                        onClick = { onClose()},
                        modifier = Modifier
                            .size(32.dp)
                            .align(Alignment.CenterEnd)
                    ) {
                        Icon(
                            imageVector = Icons.Default.Close,
                            contentDescription = "Close",
                            modifier = Modifier
                                .size(32.dp)
                                .graphicsLayer(alpha = 0.99f)
                                .drawWithCache {
                                    onDrawWithContent {
                                        drawContent()
                                        drawRect(
                                            brush = redPinkGradientBrush,
                                            size = this.size,
                                            blendMode = BlendMode.SrcAtop
                                        )
                                    }
                                },
                            tint = Color.White
                        )
                    }
                }

                // --- Animation giữa các trang ---
                AnimatedContent(
                    targetState = currentPage,
                    transitionSpec = {
                        if (targetState > initialState) {
                            slideInHorizontally(initialOffsetX = { it }) + fadeIn() with
                                    slideOutHorizontally(targetOffsetX = { -it }) + fadeOut()
                        } else {
                            slideInHorizontally(initialOffsetX = { -it }) + fadeIn() with
                                    slideOutHorizontally(targetOffsetX = { it }) + fadeOut()
                        }
                    },
                    label = "pageTransition"
                ) { targetPage ->
                    tutorialPages[targetPage]()
                }

            }
        }
    }
}
