package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import com.example.atry.ui.theme.lightPink
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.ui.theme.strongPurple

@Composable
fun  EditProfileNavBar(
    isPublicInfoOpen: Boolean,
    openPublicInfo:()-> Unit,
    closePublicInfo:()-> Unit
) {
    val selectedBrush = Brush.verticalGradient(listOf(lightPink, Color.White))
    val unselectedBrush = Brush.verticalGradient(listOf(Color(0xFFD9D9D9), Color.White))

    Row(
        modifier = Modifier
            .fillMaxWidth()
    ) {
        Box(
            modifier = Modifier
                .weight(1f)
                .height(50.dp)
                .clip(
                    RoundedCornerShape(topStart = 20.dp, topEnd = 0.dp)
                )
                .background(if (isPublicInfoOpen) selectedBrush else unselectedBrush)
                .clickable { openPublicInfo() },
            contentAlignment = Alignment.Center
        ) {
            Text(
                "Hiển thị",
                color = if (isPublicInfoOpen) strongPurple else Color.Black,
                fontWeight = FontWeight.Bold
            )
        }
        Box(
            modifier = Modifier
                .weight(1f)
                .height(50.dp)
                .clip(
                    RoundedCornerShape(topStart = 0.dp, topEnd = 20.dp)
                )
                .background(if (!isPublicInfoOpen) selectedBrush else unselectedBrush)
                .clickable { closePublicInfo() },
            contentAlignment = Alignment.Center
        ) {
            Text(
                "Thông tin",
                color = if (!isPublicInfoOpen) strongPurple else Color.Black,
                fontWeight = FontWeight.Bold
            )
        }
    }
}