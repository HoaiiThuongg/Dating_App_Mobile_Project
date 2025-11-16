package com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Edit
import androidx.compose.material.icons.filled.Settings
import androidx.compose.material.icons.filled.Support
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.innerNavController
import com.example.atry.navigation.navController

@Composable
fun ProfileActionButton() {
    Row(
        horizontalArrangement = Arrangement.spacedBy(32.dp),
        verticalAlignment = Alignment.Top
    ) {
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
        ) {
            Box(
                modifier = Modifier
                    .background(Color.DarkGray, CircleShape)
                    .size(50.dp)
                    .clip(RoundedCornerShape(50))
                    .clickable() {
                        navController.navigate("settings")
                    }
                    .padding(10.dp),
                contentAlignment = Alignment.Center
            ) {
                Icon(
                    Icons.Default.Settings,
                    contentDescription = null,
                    tint = Color.White,
                    modifier = Modifier.fillMaxSize()
                )
            }
            Spacer(Modifier.height(6.dp))
            Text(stringResource(id = R.string.settings), fontSize = 12.sp, color = MaterialTheme.colorScheme.onSurface)
        }
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
        ) {
            Box(
                modifier = Modifier
                    .background(Color.DarkGray, CircleShape)
                    .size(100.dp)
                    .clip(RoundedCornerShape(50))
                    .clickable {
                        navController.navigate("editProfile")}
                    .padding(20.dp)
                ,
                contentAlignment = Alignment.Center
            ) {
                Icon(
                    Icons.Default.Edit,
                    contentDescription = null,
                    tint = Color.White,
                    modifier = Modifier.fillMaxSize()
                )
            }
            Spacer(Modifier.height(6.dp))
            Text(stringResource(id = R.string.edit_profile), fontSize = 12.sp, color = MaterialTheme.colorScheme.onSurface)
        }
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
        ) {
            Box(
                modifier = Modifier
                    .background(Color.DarkGray, CircleShape)
                    .size(50.dp)
                    .clip(RoundedCornerShape(50))
                    .clickable() {
                        navController.navigate("support")
                    }
                    .padding(10.dp),
                contentAlignment = Alignment.Center
            ) {
                Icon(
                    Icons.Default.Support,
                    contentDescription = null,
                    tint = Color.White,
                    modifier = Modifier.fillMaxSize()
                )
            }
            Spacer(Modifier.height(6.dp))
            Text(stringResource(id = R.string.support), fontSize = 12.sp, color = MaterialTheme.colorScheme.onSurface)
        }
    }
}