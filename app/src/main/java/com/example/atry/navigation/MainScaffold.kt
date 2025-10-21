package com.example.atry.navigation

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.imePadding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.components.alert.WarningCard
import com.example.atry.ui.components.headerAndFooter.HeaderWithNavDrawer
import com.example.atry.ui.components.tutorials.SwipeTutorial
import com.example.atry.ui.screens.functionalScreens.LikeYouScreen
import com.example.atry.ui.screens.functionalScreens.MessageScreen
import com.example.atry.ui.screens.functionalScreens.MyProfileScreen
import com.example.atry.ui.screens.functionalScreens.home.HomeScreen
import com.example.atry.viewmodel.WarningCardViewModel

@Composable
fun MainScaffold(
    screenName:String,
    screenHeaderTitle: String,
    iconRes: Int,
    viewModel: WarningCardViewModel = viewModel()
) {
    innerNavController = rememberNavController()
    var selected by remember { mutableStateOf(screenName) }
    if(selected=="main_home") selected = "home"

    var showSwipeTutorial by remember { mutableStateOf(screenName=="main_home") }

    Box(
        modifier = Modifier
            .fillMaxSize()
            .imePadding()
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