package com.example.atry.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.example.atry.R
import com.example.atry.ui.components.qr.CameraPermissionContent
import com.example.atry.ui.components.qr.UserQrScreen
import com.example.atry.ui.screens.auth.EmailInputScreen
import com.example.atry.ui.screens.auth.ForgetPassword
import com.example.atry.ui.screens.auth.HobbiesInput
import com.example.atry.ui.screens.auth.InfoInput1
import com.example.atry.ui.screens.auth.InfoInput2
import com.example.atry.ui.screens.auth.Login
import com.example.atry.ui.screens.auth.OtpInputScreen
import com.example.atry.ui.screens.auth.PicturesInput
import com.example.atry.ui.screens.auth.SplashScreen
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
            SplashScreen()
        }

        composable("login") {
            LoginScreen()
        }
        composable("main") {
            MainScaffold("main_home", "Humble", R.drawable.humble_logo)
        }
        composable("main_home") {
            MainScaffold("home", "Humble", R.drawable.humble_logo)
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


        //register
        composable("registerEmailInput") { EmailInputScreen() }
        composable("registerOtpInput") { OtpInputScreen() }
        composable("registerInfoInput1") { InfoInput1() }
        composable("registerInfoInput2") { InfoInput2() }
        composable("registerHobbiesInput") { HobbiesInput() }
        composable("picturesInput") { PicturesInput() }

        //login
        composable("login") { Login() }

        //forget
        composable("forgetPasswordEmail") { ForgetPassword() }


        composable("user_qr") {UserQrScreen("1")  }
        composable("cam_scan_qr") {CameraPermissionContent()  }


    }
}
