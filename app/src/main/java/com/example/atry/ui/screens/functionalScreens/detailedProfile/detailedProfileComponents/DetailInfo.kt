package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.material.icons.filled.LocationOn
import androidx.compose.material.icons.filled.NightsStay
import androidx.compose.material.icons.filled.Person
import androidx.compose.material.icons.outlined.Female
import androidx.compose.material.icons.outlined.Male
import androidx.compose.material.icons.outlined.Transgender
import androidx.compose.material3.Divider
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.ui.theme.purpleGradientBrush

@Composable
fun DetailInfo(user: User,userProfile: UserProfile?) {
    val age = if (userProfile?.age == null) "Giấu tuổi" else userProfile.age.toString()

    val genderIcon: @Composable () -> Unit = {
        when (user.gender) {
            "Nam" -> Icon(
                imageVector = Icons.Outlined.Male,
                contentDescription = "Nam",
                tint = Color(0xFF2196F3), // xanh dương
                modifier = Modifier.size(22.dp)
            )

            "Nữ" -> Icon(
                imageVector = Icons.Outlined.Female,
                contentDescription = "Nữ",
                tint = Color(0xFFE91E63), // hồng
                modifier = Modifier.size(22.dp)
            )

            else -> Icon(
                imageVector = Icons.Outlined.Transgender,
                contentDescription = "Giới tính khác",
                tint = MaterialTheme.colorScheme.onBackground,
                modifier = Modifier.size(22.dp)
            )
        }
    }

    Column(
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Spacer(modifier = Modifier.width(6.dp))

        Row(verticalAlignment = Alignment.CenterVertically) {
            Text(
                text = user.name,
                fontSize = 32.sp,
                fontWeight = FontWeight.Bold,
                color = MaterialTheme.colorScheme.onBackground
            )
            Spacer(modifier = Modifier.width(6.dp))
            Text(
                text = age,
                fontSize = 28.sp,
                fontWeight = FontWeight.Bold,
                color = Color(0xFFE91E63)
            )
            Spacer(modifier = Modifier.width(4.dp))
            genderIcon()
        }
        Spacer(modifier = Modifier.width(3.dp))

        InfoDetailBox("Nơi ở", userProfile?.location ?: "Bí ẩn", Icons.Default.LocationOn)

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Cung hoàng đạo", userProfile?.zodiacSign ?: "Bí ẩn",Icons.Default.NightsStay)
        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Tiểu sử", userProfile?.bio ?: "Chưa muốn chia sẻ",Icons.Default.Person)

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        InfoDetailBox("Quan điểm sống", userProfile?.lifestyle ?: "Chưa muốn chia sẻ",Icons.Default.Favorite)

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        TagsField("Sở thích", userProfile?.interests)

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        TagsField("Gu người yêu", userProfile?.partnerPreferences)

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        TagsField("Tôn giáo", userProfile?.religions)
    }
}