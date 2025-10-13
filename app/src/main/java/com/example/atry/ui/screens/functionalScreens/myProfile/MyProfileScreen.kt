package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.Canvas
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.unit.dp
import androidx.compose.ui.graphics.Path
import androidx.compose.ui.tooling.preview.Preview
import com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents.DatingButton
import com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents.MyProfileContent
import com.example.atry.ui.theme.DarkGradientProfileContainer
import com.example.atry.ui.theme.LightGradientProfileContainer
import com.example.atry.ui.theme.ThemeSingleton

@Composable
@Preview
fun MyProfileScreen() {

    Column(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    ) {

        val profileContainerColor =
            if(ThemeSingleton.isDark.value) DarkGradientProfileContainer
            else LightGradientProfileContainer

        // Main content
        Column(
            modifier = Modifier
                .weight(1f)
                .fillMaxWidth(),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
            ) {
                // Nền cong
                Canvas(
                    modifier = Modifier
                        .fillMaxWidth()
                        .height(550.dp)
                ) {
                    val width = size.width
                    val height = size.height

                    val path = Path().apply {
                        moveTo(0f, 0f)
                        lineTo(0f, height * 0.85f)
                        quadraticBezierTo(
                            width / 2, height,
                            width, height * 0.85f
                        )
                        lineTo(width, 0f)
                        close()
                    }

                    drawPath(
                        path = path,
                        brush = Brush.verticalGradient(
                            colors = profileContainerColor,
                            startY = 0f,
                            endY = height
                        )
                    )
                }

                MyProfileContent()

            }
// Nút hẹn hò
            DatingButton()
        }

    }
}


