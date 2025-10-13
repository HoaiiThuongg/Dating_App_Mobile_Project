package com.example.atry.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.atry.R
import com.example.atry.ui.components.qr.CameraPermissionContent
import com.example.atry.ui.components.qr.UserQrScreen
import com.example.atry.ui.screens.functionalScreens.DevelopingScreen
import com.example.atry.ui.screens.functionalScreens.EditProfileScreen
import com.example.atry.ui.screens.functionalScreens.SettingsScreen
import com.example.atry.ui.screens.functionalScreens.SupportScreen
import com.example.atry.ui.screens.functionalScreens.aiChatBot.AiChatScreen
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
        composable("main") {
            MainScaffold("main_home", "Humble", R.drawable.humble_logo)
        }

        composable("main_profile") {
            MainScaffold("profile", "Humble", R.drawable.humble_logo)
        }

        composable("main_message") {
            MainScaffold("message", "Humble", R.drawable.humble_logo)
        }
        composable("main_likeYou") {
            MainScaffold("likeYou", "Humble", R.drawable.humble_logo)
        }


        composable("settings") {
            ScaffoldWithBackButton("settings", "Cài đặt", R.drawable.humble_logo,"main_profile"){
                SettingsScreen()
            }
        }
        composable("editProfile") {
            ScaffoldWithBackButton("edit", "Sửa hồ sơ", R.drawable.humble_logo,"main_profile"){
                EditProfileScreen()
            }
        }
        composable("support")  {
            ScaffoldWithBackButton("support", "Hỗ trợ", R.drawable.humble_logo,"main_profile"){
                SupportScreen()
            }
        }
        composable("detailed_profile") { DetailScreen() }

        composable("donate") { DevelopingScreen() }

        composable("chat") { ChatScreen() }
        composable("chatWithAi") { AiChatScreen() }


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

        composable("user_qr") {UserQrScreen("1")  }
        composable("cam_scan_qr") {CameraPermissionContent()  }


    }
}
