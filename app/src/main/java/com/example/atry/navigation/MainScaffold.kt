package com.example.atry.navigation

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.imePadding
import androidx.compose.foundation.layout.navigationBars
import androidx.compose.foundation.layout.statusBars
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.components.alert.WarningCard
import com.example.atry.ui.components.headerAndFooter.HeaderWithNavDrawer
import com.example.atry.ui.components.tutorials.SwipeTutorial
import com.example.atry.ui.screens.functionalScreens.LikeYouScreen
import com.example.atry.ui.screens.functionalScreens.MessageScreen
import com.example.atry.ui.screens.functionalScreens.MyProfileScreen
import com.example.atry.ui.screens.functionalScreens.home.HomeScreen
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.viewmodel.composal.WarningCardViewModel
import com.example.atry.viewmodel.functional.VoiceCallViewModel
import com.google.accompanist.systemuicontroller.rememberSystemUiController

@Composable
fun MainScaffold(
    screenName:String,
    screenHeaderTitle: String,
    iconRes: Int,
    viewModel: WarningCardViewModel = viewModel(),
    voiceCallViewModel: VoiceCallViewModel = viewModel()
) {
    innerNavController = rememberNavController()
    var selected by remember { mutableStateOf(screenName) }
    if(selected=="main_home") selected = "home"

    var showSwipeTutorial by remember { mutableStateOf(screenName=="main_home") }

    val systemUiController = rememberSystemUiController()
    val isDark = ThemeSingleton.isDark.value // <-- Đọc giá trị State ở đây
    val incomingCallFrom by voiceCallViewModel.incomingCallFrom.collectAsState()
    val navController = rememberNavController()

    // Giả sử user hiện tại là "userB"
    LaunchedEffect(Unit) {
        voiceCallViewModel.startCheckingIncomingCall(CurrentUser.user?.userId?:"")
    }

    // 👉 Khi có cuộc gọi đến -> điều hướng sang màn Incoming
    LaunchedEffect(incomingCallFrom) {
        incomingCallFrom?.let { callerId ->
            navController.navigate("incoming_call/$callerId")
        }
    }

    LaunchedEffect(systemUiController, isDark) { // <-- THÊM 'isDark' VÀO DANH SÁCH KEYS
        systemUiController.setStatusBarColor(
            color = Color.Transparent,
            // Dùng giá trị mới nhất của isDark
            darkIcons = !isDark
        )
    }
    Box(
        modifier = Modifier
            .fillMaxSize()
            .imePadding()
            .windowInsetsPadding(WindowInsets.navigationBars)

    ) {
        Column(
            modifier = Modifier.fillMaxSize()
        ) {

            HeaderWithNavDrawer(selected,screenHeaderTitle, iconRes) {
                NavHost(
                    navController = innerNavController,
                    startDestination = selected
                ) {
                    composable("home") { HomeScreen() }
                    composable ("likeYou" ){ LikeYouScreen() }
                    composable("message") { MessageScreen() }
                    composable("profile") { MyProfileScreen() }
                }
            }
        }

        if(showSwipeTutorial){
            SwipeTutorial({showSwipeTutorial=false})
        }

        if(viewModel.isWarningVisible) {
            WarningCard()
        }

    }

}