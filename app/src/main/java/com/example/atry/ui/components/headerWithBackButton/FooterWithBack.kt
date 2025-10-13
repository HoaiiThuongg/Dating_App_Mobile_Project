package com.example.atry.ui.components.headerWithBackButton

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.navigation.innerNavController
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.TryTheme
import com.example.atry.ui.theme.purpleHighlight

@Composable
fun FooterWithBack(selected: String, onSelect: (String) -> Unit) {
    TryTheme {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .background(
                    color = MaterialTheme.colorScheme.surface
                )
                .padding(horizontal = 30.dp, vertical = 10.dp)
            ,
            verticalAlignment = Alignment.CenterVertically,
            horizontalArrangement = Arrangement.SpaceBetween
        ) {

            IconButton(
                onClick = {
                    onSelect("home")
                    navController.navigate("main")
                }
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.humble_logo),
                    contentDescription = "Home",
                    tint = Color.Unspecified,
                    modifier = Modifier.size(30.dp)
                )
            }

            // LIKE YOU
            IconButton(
                onClick = {
                    onSelect("likeYou")
                    navController.navigate("main_likeYou")
                }
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.heart),
                    contentDescription = "LikeYou",
                    tint = if (selected == "likeYou") purpleHighlight else MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.size(30.dp)
                )
            }

            // MESSAGE
            IconButton(
                onClick = {
                    onSelect("message")
                    navController.navigate("main_message")
                }
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.chat),
                    contentDescription = "Message",
                    tint = if (selected == "message") purpleHighlight else MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.size(30.dp)
                )
            }

            // PROFILE
            IconButton(
                onClick = {
                    onSelect("profile")
                    navController.navigate("main_profile")
                }
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.profile),
                    contentDescription = "Profile",
                    tint = if (selected == "profile") purpleHighlight else MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.size(30.dp)
                )
            }
        }
    }
}
