package com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Divider
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile

@Composable
fun DetailInfo(user: User,userProfile: UserProfile?) {
    val age = if (userProfile?.age == null) "Giấu tuổi" else userProfile.age.toString()

    Column(
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Row(verticalAlignment = Alignment.CenterVertically) {
            Text(
                text = user.name,
                fontSize = 22.sp,
                fontWeight = FontWeight.Bold,
                color = MaterialTheme.colorScheme.onBackground
            )
            Spacer(modifier = Modifier.width(6.dp))
            Text(
                text = age,
                fontSize = 22.sp,
                fontWeight = FontWeight.Bold,
                color = Color(0xFFE91E63) // hồng
            )
        }


        InfoDetailBox("Cung hoa", userProfile?.location ?: "Bí ẩn")

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Cung hoàng đạo", userProfile?.zodiacSign ?: "Bí ẩn")
        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Tiểu sử", userProfile?.bio ?: "Chưa muốn chia sẻ")

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Quan điểm sống", userProfile?.lifestyle ?: "Chưa muốn chia sẻ")
    }
}