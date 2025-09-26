package com.example.atry.ui.screens.functionalScreens

import SwipeCard
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.State
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.ui.components.general.Header
import com.example.atry.ui.components.general.Footer
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.NavController
import com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents.LikeYouCard
import com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents.LikedNumberAnnouncement
import com.example.atry.ui.viewmodel.LikeYouViewModel

@Composable
fun LikeYouScreen(viewModel: LikeYouViewModel = viewModel()) {
    val partnerProfiles = viewModel.partner_profiles.collectAsState().value

    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White)
    ) {
        // Header
        Header("Thích bạn", R.drawable.like)

        // Text thông báo
        LikedNumberAnnouncement()

        // Grid chiếm hết phần còn lại màn hình
        LazyVerticalGrid(
            columns = GridCells.Fixed(2),
            modifier = Modifier
                .weight(1f) // quan trọng để grid co giãn và scroll trong khoảng trống
                .padding(20.dp),
            verticalArrangement = Arrangement.spacedBy(15.dp),
            horizontalArrangement = Arrangement.spacedBy(15.dp)
        ) {
            items(partnerProfiles.reversed()) { profile ->
                    LikeYouCard(profile = profile)

                }
            }

        // Footer
        var selected  by remember { mutableStateOf("likeYou") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}
