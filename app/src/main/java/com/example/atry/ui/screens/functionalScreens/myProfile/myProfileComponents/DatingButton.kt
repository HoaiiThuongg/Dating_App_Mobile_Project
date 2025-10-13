package com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.DarkGradientProfileContainer
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.primaryPurple

@Composable
fun DatingButton() {
    val colors =
        if(ThemeSingleton.isDark.value) DarkGradientProfileContainer
        else listOf(Color(0xFFE270C9), primaryPurple)
    Button(
        onClick = { navController.navigate("home") },
        modifier = Modifier
            .fillMaxWidth(0.6f)
            .height(50.dp)
            .border(
                width = 2.dp,
                brush = Brush.linearGradient(
                    colors = colors,
                    start = Offset(0f, 0f),
                    end = Offset(400f, 400f)
                ),
                shape = RoundedCornerShape(20.dp)
            )
            .clip(RoundedCornerShape(20.dp)),
        colors = ButtonDefaults.buttonColors(
            containerColor = Color.White
        ),
        elevation = ButtonDefaults.buttonElevation(6.dp)
    ) {
        Text(
            "Hẹn hò thôi",
            fontSize = 16.sp,
            fontWeight = FontWeight.Bold,
            color = MaterialTheme.colorScheme.surfaceVariant
        )
    }
}