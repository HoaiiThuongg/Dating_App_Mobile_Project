package com.example.atry.ui.screens.functionalScreens.home

import SwipeCard
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.NothingToLoad
import com.example.atry.ui.viewmodel.HomeViewModel

@Composable
fun HomeScreen(viewModel: HomeViewModel = viewModel()) {
    val profiles by viewModel.profiles.collectAsState()
    val currentIndex by viewModel.currentIndex.collectAsState()
    val isLoading = viewModel.isLoading

    Column(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        Box(
            modifier = Modifier
                .weight(1f)
                .padding(horizontal = 10.dp)
                .fillMaxWidth(),
            contentAlignment = Alignment.Center
        ) {
            if (isLoading) {
                HeartLoading() // vòng loading
            } else {
                NothingToLoad (
                    "Hết đối tượng để hiển thị rồi",
                    "Bạn có thể điều chỉnh filter để tìm nhiều đối tượng hơn"
                )
            }

            if (profiles.isNotEmpty() || currentIndex <= profiles.size) {
                // Chỉ hiển thị stack từ currentIndex trở đi
                for (i in profiles.size - 1 downTo currentIndex) {
                    val profile = profiles[i]
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        profile = profile ?: return,
                        onSwipeLeft = { viewModel.swipe(1, profile.user_id, "DISLIKE") },
                        onSwipeRight = { viewModel.swipe(1, profile.user_id, "LIKE") }
                    )
                }
            }
        }
    }
}
