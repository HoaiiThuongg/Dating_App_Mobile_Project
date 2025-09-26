package com.example.atry.navigation

import Draft
import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.screens.functionalScreens.DevelopingScreen
import com.example.atry.ui.screens.functionalScreens.DonateScreen
import com.example.atry.ui.screens.functionalScreens.EditProfileScreen
import com.example.atry.ui.screens.functionalScreens.home.HomeScreen
import com.example.atry.ui.screens.functionalScreens.LikeYouScreen
import com.example.atry.ui.screens.functionalScreens.MessageScreen
import com.example.atry.ui.screens.functionalScreens.MyProfileScreen
import com.example.atry.ui.screens.functionalScreens.SettingsScreen
import com.example.atry.ui.screens.functionalScreens.chat.ChatScreen
import com.example.atry.ui.screens.functionalScreens.detailedProfile.DetailScreen
import com.example.atry.ui.screens.loginScreens.LoginScreen
import com.example.atry.ui.screens.registerScreens.EmailScreen
import com.example.atry.ui.screens.registerScreens.PasswordScreen
import com.example.atry.ui.screens.registerScreens.VerificationScreen
import com.example.atry.ui.screens.setupScreens.BirthdayInputScreen
import com.example.atry.ui.screens.setupScreens.GenderSelectedScreen
import com.example.atry.ui.screens.setupScreens.HobbySelectedScreen
import com.example.atry.ui.screens.setupScreens.NameInputScreen
import com.example.atry.ui.screens.setupScreens.UploadProfilePhotoScreen
import com.example.atry.ui.screens.splashScreens.MainSplashScreen
import com.example.atry.ui.viewmodel.PartnerProfile


@Composable
fun NavGraph() {
    navController = rememberNavController()
    NavHost(
        navController = navController,
        startDestination = "splash"
    ) {
        composable("splash") {
            MainSplashScreen()
        }

        composable("login") {
            LoginScreen()
        }

        composable("home") {
            HomeScreen()
        }

        composable("likeYou") {
            LikeYouScreen()
        }

        composable("message") {
            MessageScreen()
        }

        composable("profile") {
            MyProfileScreen()
        }

        composable("likeYouDetail") { DetailScreen() }

        composable("settings") { SettingsScreen() }

        composable("editProfile") { EditProfileScreen() }

        composable("donate") { DevelopingScreen() }
        composable("chat") { ChatScreen() }


        composable("password") { PasswordScreen() }
        composable("otp") { VerificationScreen() }
        composable("name") { NameInputScreen() }
        composable("birthday") { BirthdayInputScreen() }
        composable("gender") { GenderSelectedScreen() }
        composable("hobby") { HobbySelectedScreen() }
        composable("uploadPhoto") { UploadProfilePhotoScreen() }

        composable("register") {
            EmailScreen()
        }

    }
}
