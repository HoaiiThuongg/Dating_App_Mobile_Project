package com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.navigation.navController

@Composable
fun DetailedProfileHeader(
    user: User,
    daysMatched:Long
) {
    Box(
        modifier = Modifier
            .padding(20.dp,50.dp,20.dp,20.dp)
    ){
        IconButton(
            onClick = { navController.popBackStack()},
            modifier = Modifier
                .size(32.dp)
                .align(Alignment.CenterStart)
        ) {
            Icon(
                painter = painterResource(id = R.drawable.back),
                contentDescription = "notifications",
                tint = MaterialTheme.colorScheme.onSurface,
                modifier = Modifier.size(30.dp)
            )
        }
        Column(
            modifier = Modifier
                .fillMaxWidth(),
            verticalArrangement = Arrangement.spacedBy(5.dp),
            horizontalAlignment = Alignment.CenterHorizontally,
        ) {
            Text(
                "Trang cá nhân của",
                color = MaterialTheme.colorScheme.onBackground,
                fontSize = 16.sp
            )
            Text(
                user.name,
                color = MaterialTheme.colorScheme.onBackground,
                fontSize = 24.sp,
                fontWeight = FontWeight.Bold
            )
            Text(
                "Đã kết nối được $daysMatched ngày",
                color = Color(0xFF800064),
                fontSize = 16.sp
            )
        }
    }
}