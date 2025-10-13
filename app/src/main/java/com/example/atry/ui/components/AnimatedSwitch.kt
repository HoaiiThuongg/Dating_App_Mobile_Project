package com.example.atry.ui.components

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
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.WbSunny
import androidx.compose.material3.Icon
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.unit.dp

@Composable
fun AnimatedSwitch(
    isOn: Boolean,
    onToggle: () -> Unit,
    onIcon: ImageVector,
    offIcon: ImageVector,
    onColor: Color,
    offColor: Color
) {
    val transition = updateTransition(targetState = isOn, label = "switchTransition")

    // ⚙️ Animation vị trí nút trượt
    val offsetX by transition.animateDp(label = "offsetAnim", transitionSpec = { tween(400) }) { on ->
        if (on) 32.dp else 0.dp
    }

    // 🎨 Animation màu nền
    val backgroundColor by transition.animateColor(label = "backgroundAnim", transitionSpec = { tween(400) }) { on ->
        if (on) onColor else offColor
    }

    // 🌙 Icon và màu
    val icon = if (isOn) onIcon else offIcon
    val iconColor = if (isOn) Color(0xFFFFE066) else Color(0xFFFFA500)

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
            Icon(
                imageVector = icon,
                contentDescription = null,
                tint = iconColor,
                modifier = Modifier.size(18.dp)
            )
        }
    }
}
