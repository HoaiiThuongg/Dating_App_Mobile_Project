package com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.data.singleton.ThemeSingleton
import com.example.atry.viewmodel.functional.MyProfileViewModel

@Composable
fun UserInformation(
    myProfileViewModel: MyProfileViewModel= viewModel()
) {
    val highlightColor =
        if (ThemeSingleton.isDark.value) Color.Black
        else Color(0xFFE270C9)
    val imageUrl = CurrentUser.user?.defaultImage
    val matchCount by myProfileViewModel.matchCount.observeAsState()

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
    }
    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(5.dp, Alignment.CenterVertically)
    ) {
        // Tên + tuổi
        Text(
            CurrentUser.user?.name + ", "+ CurrentUser.userProfile?.age + " " + stringResource(id = R.string.age),
            fontSize = 22.sp,
            fontWeight = FontWeight.Bold,
            color = MaterialTheme.colorScheme.onBackground
        )
        Text("${matchCount ?: 0} "+stringResource(id = R.string.connect), fontSize = 14.sp, color = MaterialTheme.colorScheme.onBackground)
    }

}