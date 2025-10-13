package com.example.atry.ui.theme

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.darkColorScheme
import androidx.compose.material3.lightColorScheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import androidx.lifecycle.viewmodel.compose.viewModel

private val DarkColorScheme = darkColorScheme(
    background = DarkBackground,
    surface  = DarkSurface,
    onBackground = DarkTextAndIcon,
    onSurface = DarkOnSurface,
    surfaceContainer = DarkSurfaceContainer,
    surfaceVariant = DarkSurfaceVariant,
    scrim = Color(0xFF353535)
)

private val LightColorScheme = lightColorScheme(
    background = LightBackground,
    surface  = LightSurface,
    onBackground = LightTextAndIcon,
    onSurface = LightOnSurface,
    surfaceContainer = LightSurfaceContainer,
    surfaceVariant = LightSurfaceVariant,
    scrim = Color(0xFFC4C4C4)
)

@Composable
fun TryTheme(
    darkTheme: Boolean = isSystemInDarkTheme(), // Tự nhận dark mode của hệ thống
    content: @Composable () -> Unit
) {
    val colorScheme = if (ThemeSingleton.isDark.value) DarkColorScheme else LightColorScheme

    MaterialTheme(
        colorScheme = colorScheme,
        typography = Typography,
        content = content
    )
}