package com.example.atry.ui.screens.functionalScreens.home

import com.example.atry.ui.screens.functionalScreens.home.homeComponents.SwipeCard
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
import com.example.atry.backend.SwipeService
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.nothingToLoad.NothingToLoad
import com.example.atry.viewmodel.functional.HomeViewModel

@Composable
fun HomeScreen(
    viewModel: HomeViewModel = viewModel()
) {
    val users = viewModel.users
    val currentIndex by viewModel.currentIndex.collectAsState()
    val isLoading = viewModel.isLoading

    if(CurrentUser.userProfile == null) {
        viewModel.setUserInfo()
    }

    Column(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        Box(
            modifier = Modifier
                .weight(1f)
                .padding(10.dp,10.dp,10.dp,0.dp)
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

            if (users.isNotEmpty() || currentIndex <= users.size) {
                // Chỉ hiển thị stack từ currentIndex trở đi
                for (i in users.size - 1 downTo currentIndex) {
                    val user = users[i]
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        user = user,
                        onSwipeLeft = { viewModel.swipe(user.userId ?: "", SwipeService.SwipeType.LEFT)},
                        onSwipeRight ={ viewModel.swipe(user.userId ?: "", SwipeService.SwipeType.RIGHT) }
                    )
                }
            }
        }
    }
}
