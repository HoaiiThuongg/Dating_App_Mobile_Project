package com.example.atry.ui.theme

import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color

val primaryPurple = Color(0xFFBE55BF)
val strongPurple = Color(0xFF6E0861)
val purpleHighlight = Color(0xFFEF278E)
val lightPink = Color(0xFFFF80CC)

val greenAiColor = Color(0xFF2A7224)
val grayBlurBackground = Color(0xFF353535).copy(alpha = 0.6f)
val redLinear = listOf(Color(0xFFFF7487), Color(0xFFF33A75))
val logoGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFCC50A7), // tại 41%
        1.0f to Color(0xFFFF9DD3)   // tại 100%
    )
)

val redOrangeLinear = listOf(Color(0xFFFF5787),Color(0xFFFF8D8F) )

val redOrangeLinearBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF5787), // tại 41%
        1.0f to Color(0xFFFF8D8F)   // tại 100%
    )
)

val purplePinkGradientBrush = Brush.linearGradient(
    colors = listOf(Color(0xFF7500DB), Color(0xFFFF4187)), // gradient từ trái → phải
    start = Offset(0f, 0f),
    end = Offset(1000f, 0f)
)
val redGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF7487), // tại 41%
        1.0f to Color(0xFFF33A75)   // tại 100%
    )
)

val redPinkGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF0D4A), // tại 41%
        1.0f to Color(0xFFFF7188)   // tại 100%
    )
)

val greenGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFF009D7E), // tại 41%
        1.0f to Color(0xFF009D2F)   // tại 100%
    )
)

val purpleGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF3697), // tại 41%
        1.0f to Color(0xFFFF7BD3)   // tại 100%
    )
)

val LightBackground = Color.White
val LightTextAndIcon = Color.Black
val LightSurface = Color.White
val LightOnSurface = Color.Black
val LightSurfaceContainer = Color(0xFFF2f2F2)
val LightSurfaceVariant = Color(0xFF190142)
val LightOnContainerHigh = Color(0xFF700043)


// 🌚 Dark mode colors
val DarkBackground = Color(0xFF373737)
val DarkTextAndIcon = Color.White
val DarkSurface = Color.Black
val DarkOnSurface = Color.White
val DarkSurfaceContainer = Color(0xFF4C4C4C)
val DarkSurfaceVariant = Color.Black
val DarkOnContainerHigh = Color.Black
val LightGradientProfileContainer = listOf(Color.White, Color(0xFFFA98BF))
val DarkGradientProfileContainer = listOf(Color(0xFF222222), Color(0xFF2A2A2A))
