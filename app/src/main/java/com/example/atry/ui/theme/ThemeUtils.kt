package com.example.atry.ui.theme

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Brush

@Composable
fun dynamicGradientBrush(): Brush {
    val isDark = ThemeSingleton.isDark.value
    return if (isDark) logoGradientBrush else purplePinkGradientBrush
}