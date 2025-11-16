package com.example.atry.ui.screens.functionalScreens.detailedProfile

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.navigationBars
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.backend.SwipeService
import com.example.atry.backend.User
import com.example.atry.navigation.navController
import com.example.atry.ui.components.alert.MatchSuccessfullyCard
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailInfo
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailedProfileImage
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.ActionButtons
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailedProfileHeader
import com.example.atry.viewmodel.composal.AlertViewModel
import com.example.atry.viewmodel.functional.DetailedProfileViewModel

@Composable
fun DetailScreen(
    user: User,
    viewModel: DetailedProfileViewModel = viewModel(),
    alertViewModel: AlertViewModel
){
    val scrollState = rememberScrollState()
    LaunchedEffect(user.userId) {
        viewModel.getUserProfileById(user.userId)
    }
    val userProfile by viewModel.user.observeAsState()

    Box(
        modifier = Modifier
        .fillMaxSize()
        .background(MaterialTheme.colorScheme.surface)
        .windowInsetsPadding(WindowInsets.navigationBars)
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
        ) {
            DetailedProfileHeader(user)
            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .weight(1f)
                    .padding(horizontal = 20.dp)
                    .verticalScroll(scrollState),
                verticalArrangement = Arrangement.spacedBy(10.dp),
                horizontalAlignment = Alignment.CenterHorizontally,

                ) {

                DetailedProfileImage(user, userProfile)

                DetailInfo(user, userProfile)

                ActionButtons(
                    onLike = {
                        viewModel.swipe(
                            user.userId,
                            SwipeService.SwipeType.RIGHT
                        )
                    },
                    user = user,
                    alertViewModel = alertViewModel
                )
            }
        }

        if(alertViewModel.isMatchSuccessfullyCard) {
            MatchSuccessfullyCard(alertViewModel.matchedUser,
                onClose = {
                    alertViewModel.hideMatchSuccessfullyCard()
                    navController.navigate("likeYou")
                }
            )
        }
    }
}