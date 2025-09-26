package com.example.atry.ui.theme

import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color

val Purple80 = Color(0xFFD0BCFF)
val PurpleGrey80 = Color(0xFFCCC2DC)
val Pink80 = Color(0xFFEFB8C8)

val Purple40 = Color(0xFF6650a4)
val PurpleGrey40 = Color(0xFF625b71)
val Pink40 = Color(0xFF7D5260)

val RedLinear = listOf(Color(0xFFFF7487), Color(0xFFF33A75))
val PurpleLinear = listOf(Color(0xFFEF278E), Color(0xFF60004E))
val primaryPurple = Color(0xFFBE55BF)
val redGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF7487), // tại 41%
        1.0f to Color(0xFFF33A75)   // tại 100%
    )
)

val purpleGradientBrush = Brush.linearGradient(
    colorStops = arrayOf(
        0.41f to Color(0xFFFF3697), // tại 41%
        1.0f to Color(0xFFFF7BD3)   // tại 100%
    )
)

