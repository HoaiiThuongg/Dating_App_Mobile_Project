package com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile

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
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.components.alert.Alert
import com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents.DetailInfo
import com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents.DetailedProfileImage
import com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents.ActionButtons
import com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents.DetailedProfileHeader
import com.example.atry.data.singleton.ThemeSingleton
import com.example.atry.viewmodel.composal.AlertViewModel
import com.example.atry.viewmodel.functional.DetailedProfileViewModel
import com.example.atry.viewmodel.functional.MatchDetailViewModel
import com.google.accompanist.systemuicontroller.rememberSystemUiController

@Composable
fun MatchedDetailedProfile(
    user: User,
    viewModel: DetailedProfileViewModel = viewModel(),
    matchDetailViewModel: MatchDetailViewModel = viewModel(),
    alertViewModel: AlertViewModel
){
    val bgrColor = if (!ThemeSingleton.isDark.value) {
        Brush.verticalGradient(
            colors = listOf(Color(0xFFFF9AB4), Color(0xFFFFFFFF), Color(0xFFFF97C0))
//            , start = Offset(0f, 0f),
//            end = Offset(1000f, 1000f)
        )
    } else {
        Brush.verticalGradient(
            colors = listOf(Color(0xFF8F0024), Color(0xFF262626), Color(0xFFC0638B))
//            , start = Offset(0f, 0f),
//            end = Offset(1000f, 1000f)
        )
    }

    val headerColor = if(!ThemeSingleton.isDark.value) {
        Color(0xFFFF7E9E)
    } else {
        Color(0xFF8F0024)
    }
    val systemUiController = rememberSystemUiController()

    LaunchedEffect(systemUiController) {
        systemUiController.setStatusBarColor(
            color = headerColor,
        )
    }

    val scrollState = rememberScrollState()
    LaunchedEffect(user.userId) {
        viewModel.getUserProfileById(user.userId)
    }
    val userProfile by viewModel.user.observeAsState()

    val daysMatched by matchDetailViewModel.daysMatched.observeAsState(0)

    // Tính số ngày match khi mở màn hình
    LaunchedEffect(matchDetailViewModel) {
        matchDetailViewModel.fetchDaysMatched(CurrentUser.user?.userId?:"",user.userId)
    }
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(headerColor)
            .windowInsetsPadding(WindowInsets.navigationBars)
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
        ) {
            DetailedProfileHeader(user, daysMatched)
            Column(
                modifier = Modifier
                    .background(bgrColor)
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
                    onBrokeUpAction = {
                        matchDetailViewModel.unmatchUser(
                            CurrentUser.user?.userId ?: "",
                            user.userId
                        )
                    },
                    name = user.name,
                    alertViewModel
                )
            }
        }
        if(alertViewModel.isAlertVisible) {
            Alert(alertViewModel.alert,{
                alertViewModel.hideAlert()
                navController.navigate("likeYou")
            })
        }
    }
}