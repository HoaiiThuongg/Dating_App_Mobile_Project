package com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.theme.ThemeSingleton
import java.io.File

@Composable
@Preview
fun UserInformation() {
    val highlightColor =
        if (ThemeSingleton.isDark.value) Color.Black
        else Color(0xFFE270C9)
    val imageUrl = CurrentUser.user?.profileImageUrl
        ?: "https://res.cloudinary.com/dosnqohav/image/upload/v1760214495/ugoo3xchm0nru92na1kh.jpg"

    Box(contentAlignment = Alignment.Center) {
        Box(
            modifier = Modifier
                .size(160.dp)
                .background(
                    color = highlightColor,
                    shape = CircleShape
                ),
            contentAlignment = Alignment.Center
        ) {
            Image(
                painter = rememberAsyncImagePainter(model = imageUrl),
                contentDescription = "avatar",
                modifier = Modifier
                    .size(155.dp)
                    .clip(CircleShape),
                contentScale = ContentScale.Crop
            )
        }

        // Thanh % hoàn thiện
//        Box(
//            modifier = Modifier
//                .align(Alignment.BottomCenter)
//                .offset(y = 16.dp)
//                .clip(RoundedCornerShape(50))
//                .background(color = highlightColor)
//                .padding(horizontal = 12.dp, vertical = 4.dp)
//        ) {
//            Text(
//                "78% Hoàn thiện hồ sơ",
//                color = Color.White,
//                fontSize = 12.sp,
//                fontWeight = FontWeight.Bold
//            )
//        }
    }
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(5.dp, Alignment.CenterVertically)
    ) {
        // Tên + tuổi
        Text(
            CurrentUser.user?.name + ", "+ CurrentUser.user?.age,
            fontSize = 22.sp,
            fontWeight = FontWeight.Bold,
            color = MaterialTheme.colorScheme.onBackground
        )
        Text("23 kết nối", fontSize = 14.sp, color = MaterialTheme.colorScheme.onBackground)
    }

}