package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.ui.theme.redGradientBrush

@Composable
fun ActionButtons(
    onDislike: () -> Unit,
    onLike: () -> Unit
) = Row(
    horizontalArrangement = Arrangement.SpaceEvenly,
    verticalAlignment = Alignment.CenterVertically,
    modifier = Modifier
        .fillMaxWidth()
        .padding(vertical = 20.dp)
) {
    IconButton(
        onClick = onDislike,
        modifier = Modifier
            .size(80.dp)
            .background(Color(0xFF2E2E2E), shape = CircleShape)
    ) {
        Icon(
            imageVector =Icons.Default.Close,
            contentDescription = "Dislike",
            tint = Color.White,
            modifier = Modifier.size(36.dp)
        )
    }

    IconButton(
        onClick = onLike,
        modifier = Modifier
            .size(80.dp)
            .background(
                brush = redGradientBrush,
                shape = CircleShape
            )
    ) {
        Icon(
            imageVector =Icons.Filled.Favorite, // đổi sang icon tim
            contentDescription = "Like",
            tint = Color.White,
            modifier = Modifier.size(36.dp)
        )
    }
}
