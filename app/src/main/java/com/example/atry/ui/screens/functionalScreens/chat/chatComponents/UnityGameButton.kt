package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.SportsEsports
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import com.example.atry.UnityBridge
import com.example.atry.backend.MatchedUser
import com.example.atry.data.singleton.CurrentUser

@Composable
fun UnityGameButton(
    matchedUser: MatchedUser?,
    modifier: Modifier = Modifier
) {
    val context = LocalContext.current
    val currentUser = CurrentUser.user

    Button(
        colors = ButtonDefaults.buttonColors(containerColor = Color.Transparent),
        onClick = {
            if (matchedUser != null && currentUser != null) {
                val activity = context as? android.app.Activity
                if (activity != null) {
                    UnityBridge.launchGame(
                        activity,
                        matchedUser.matchId,
                        currentUser.userId,
                        matchedUser.user.userId
                    )
                }
            }
        },
        modifier = modifier
            .background(
                brush = Brush.horizontalGradient(
                    colors = listOf(Color(0xFF4CAF50), Color(0xFF81C784))
                ),
                shape = RoundedCornerShape(20.dp)
            )
    ) {
        Icon(
            imageVector = Icons.Default.SportsEsports,
            contentDescription = "Chơi game",
            tint = Color.White,
            modifier = Modifier.padding(end = 8.dp)
        )
        Text("Chơi FireBoy & WaterGirl", color = Color.White)
    }
}
