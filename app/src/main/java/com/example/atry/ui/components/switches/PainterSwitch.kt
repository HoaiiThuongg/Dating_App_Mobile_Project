package com.example.atry.ui.components.switches

import androidx.compose.animation.animateColor
import androidx.compose.animation.core.animateDp
import androidx.compose.animation.core.tween
import androidx.compose.animation.core.updateTransition
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Icon
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.unit.dp
import androidx.compose.animation.core.FastOutSlowInEasing

@Composable
fun PainterSwitch(
    isOn: Boolean,
    onToggle: () -> Unit,
    onPainter: Painter,
    offPainter: Painter,
    onColor: Color,
    offColor: Color
) {
    val transition = updateTransition(targetState = isOn, label = "switchTransition")

    val offsetX by transition.animateDp(label = "offsetAnim", transitionSpec = { tween(400, easing = FastOutSlowInEasing) }) { on ->
        if (on) 32.dp else 0.dp
    }

    val backgroundColor by transition.animateColor(label = "backgroundAnim", transitionSpec = { tween(400) }) { on ->
        if (on) onColor else offColor
    }

    val icon = if (isOn) onPainter else offPainter

    Box(
        modifier = Modifier
            .width(70.dp)
            .height(36.dp)
            .clip(RoundedCornerShape(50))
            .background(backgroundColor)
            .clickable { onToggle() }
            .padding(horizontal = 4.dp, vertical = 3.dp),
        contentAlignment = Alignment.CenterStart
    ) {
        Box(
            modifier = Modifier
                .offset(x = offsetX)
                .size(30.dp)
                .clip(CircleShape)
                .background(Color.White)
                .shadow(3.dp, CircleShape),
            contentAlignment = Alignment.Center
        ) {
            androidx.compose.foundation.Image(
                painter = icon,
                contentDescription = null,
                modifier = Modifier
                    .size(20.dp) // icon bên trong nút tròn
            )
        }
    }
}
