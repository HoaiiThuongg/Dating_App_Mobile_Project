package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.runtime.Composable
import androidx.compose.runtime.State
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.nothingToLoad.NothingToLoad
import com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents.LikeYouCard
import com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents.LikedNumberAnnouncement
import com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents.MatchSuccessfullyCard
import com.example.atry.viewmodel.functional.LikeYouViewModel
import com.example.atry.viewmodel.functional.LikedByState

@Composable
fun LikeYouScreen(viewModel: LikeYouViewModel = viewModel()) {
    val state by viewModel.state.collectAsState()
    var showMatchSuccessfullyCard by remember { mutableStateOf(false) }
    val users = state.users
    val matchedUser = state.matchedUser

    Column(
        modifier = Modifier
            .fillMaxSize()
    ) {
        Box(
            modifier = Modifier
                .weight(1f),
            contentAlignment = Alignment.Center
        ) {
            if (state.isLoading) {
                HeartLoading() // vòng loading
            } else if(users.isEmpty()) {
                NothingToLoad(
                    "Bạn không có ai thích cả",
                    "Hãy đăng thêm thông tin lên hồ sơ của bạn để được mọi người biết tới nhé"
                )
            }
            Column(
                modifier = Modifier
                    .fillMaxSize()
            ) {
                LikedNumberAnnouncement(users.size)

                LazyVerticalGrid(
                    columns = GridCells.Fixed(2),
                    modifier = Modifier
                        .weight(1f) // quan trọng để grid co giãn và scroll trong khoảng trống
                        .padding(20.dp),
                    verticalArrangement = Arrangement.spacedBy(15.dp),
                    horizontalArrangement = Arrangement.spacedBy(15.dp)
                ) {
                    items(users.reversed()) { profile ->
                        LikeYouCard(
                            user = profile,
                            onMatching = {
                                viewModel.swipe(profile, SwipeService.SwipeType.RIGHT)
                                showMatchSuccessfullyCard=true
                            }
                        )
                    }
                }
            }
            if (showMatchSuccessfullyCard) {
                MatchSuccessfullyCard(matchedUser=matchedUser, onClose = {showMatchSuccessfullyCard=false})
            }
        }
    }
}