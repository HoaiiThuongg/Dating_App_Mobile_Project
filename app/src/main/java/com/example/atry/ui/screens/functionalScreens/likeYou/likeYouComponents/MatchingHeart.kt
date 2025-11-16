package com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents

import androidx.compose.animation.animateColorAsState
import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.Spring
import androidx.compose.animation.core.animateFloatAsState
import androidx.compose.animation.core.tween
import androidx.compose.animation.core.spring
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.size
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.material.icons.outlined.FavoriteBorder
import androidx.compose.material3.Icon
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.scale
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import kotlinx.coroutines.launch

@Composable
fun MatchingHeart(
    modifier: Modifier = Modifier,
    size: Dp = 48.dp,
    initialLiked: Boolean = false,
    onToggled: (liked: Boolean) -> Unit = {}
) {
    var liked by remember { mutableStateOf(initialLiked) }
    val scope = rememberCoroutineScope()

    val scaleAnim = remember { Animatable(1f) }

    val fillColor by animateColorAsState(
        targetValue = if (liked) Color(0xFFFF4D8E) else Color(0xFFFF4D8E),
        animationSpec = tween(durationMillis = 220)
    ) // đang bug

    val fillAlpha by animateFloatAsState(
        targetValue = if (liked) 1f else 0f,
        animationSpec = tween(220)
    )

    Box(
        modifier = modifier
            .size(size)
            .scale(scaleAnim.value) // apply bouncing scale
            .clickable {
                // toggle state, play bounce animation and call action
                liked = !liked
                scope.launch {
                    // quick pop
                    scaleAnim.animateTo(
                        targetValue = 1.25f,
                        animationSpec = spring(dampingRatio = Spring.DampingRatioMediumBouncy, stiffness = Spring.StiffnessMedium)
                    )
                    // settle back
                    scaleAnim.animateTo(
                        targetValue = 1f,
                        animationSpec = spring(dampingRatio = Spring.DampingRatioNoBouncy, stiffness = Spring.StiffnessLow)
                    )
                }
                onToggled(liked)
            },
        contentAlignment = Alignment.Center
    ) {
        // Filled heart (underneath) - we animate color + alpha
        Icon(
            imageVector = Icons.Filled.Favorite,
            contentDescription = if (liked) "Liked" else "Not liked",
            tint = Color(0xFFFF4D8E),
            modifier = Modifier.matchParentSize()
        )

        // White outline on top
        Icon(
            imageVector = Icons.Outlined.FavoriteBorder,
            contentDescription = "Outline heart",
            tint = Color.White,
            modifier = Modifier.matchParentSize()
        )
    }
}
