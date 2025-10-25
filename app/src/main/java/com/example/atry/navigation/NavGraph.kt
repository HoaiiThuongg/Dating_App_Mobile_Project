package com.example.atry.navigation

import android.util.Log
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.platform.LocalFocusManager
import androidx.navigation.NavType
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.currentBackStackEntryAsState
import androidx.navigation.compose.rememberNavController
import androidx.navigation.navArgument
import com.example.atry.R
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.MessageService
import com.example.atry.backend.User
import com.example.atry.backend.UserService
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.components.qr.CameraPermissionContent
import com.example.atry.ui.components.qr.UserQrScreen
import com.example.atry.ui.screens.auth.register.EmailInputScreen
import com.example.atry.ui.screens.auth.forgetPassword.ForgetPassword
import com.example.atry.ui.screens.auth.register.HobbiesInput
import com.example.atry.ui.screens.auth.register.InfoInput1
import com.example.atry.ui.screens.auth.register.InfoInput2
import com.example.atry.ui.screens.auth.login.Login
import com.example.atry.ui.screens.auth.forgetPassword.OtpInputScreen
import com.example.atry.ui.screens.auth.register.PicturesInput
import com.example.atry.ui.screens.auth.register.RegisterEntryScreen
import com.example.atry.ui.screens.auth.SplashScreen
import com.example.atry.ui.screens.auth.register.PasswordInputScreen
import com.example.atry.ui.screens.functionalScreens.DevelopingScreen
import com.example.atry.ui.screens.functionalScreens.EditProfileScreen
import com.example.atry.ui.screens.functionalScreens.SettingsScreen
import com.example.atry.ui.screens.functionalScreens.SupportScreen
import com.example.atry.ui.screens.functionalScreens.aiChatBot.AiChatScreen
import com.example.atry.ui.screens.functionalScreens.chat.ChatScreen
import com.example.atry.ui.screens.functionalScreens.detailedProfile.DetailScreen
import com.example.atry.viewmodel.functional.ChatViewModelFactory
import com.google.gson.Gson
import kotlin.jvm.java


@Composable
fun NavGraph() {
    navController = rememberNavController()
    val focusManager = LocalFocusManager.current

    // Lắng nghe sự thay đổi của trang hiện tại
    val navBackStackEntry by navController.currentBackStackEntryAsState()

    // Sử dụng DisposableEffect để chạy code mỗi khi trang thay đổi
    DisposableEffect(navBackStackEntry) {
        // Ẩn bàn phím mỗi khi route thay đổi (chuyển trang)
        focusManager.clearFocus()

        onDispose {
            // Không làm gì khi Composable bị hủy
        }
    }

    NavHost(
        navController = navController,
        startDestination = "splash"
    ) {
        composable("splash") {
            SplashScreen()
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
        composable(
            route = "detailed_profile/{userJson}",
            arguments = listOf(navArgument("userJson") { type = NavType.StringType })
        ) { backStackEntry ->
            val userJson = backStackEntry.arguments?.getString("userJson")
            val user = Gson().fromJson(userJson, User::class.java)

            DetailScreen(user = user)
        }
        composable("donate") { DevelopingScreen() }

        composable(
            // 🔥 SỬA A: Argument trong Route phải khớp với navArgument
            route = "chat/{matchedUserJson}",
            arguments = listOf(
                navArgument("matchedUserJson") { type = NavType.StringType }
            )
        ) { backStackEntry ->

            val messageService = remember { MessageService() }
            val userService = remember { UserService() }

            // 🔥 SỬA A: Lấy argument bằng tên đúng là "matchedUserJson"
            val userJson = backStackEntry.arguments?.getString("matchedUserJson") ?: return@composable

            // 🔥 SỬA B: Giải mã JSON thành MatchedUser (Giả định MatchedUser là lớp đúng)
            val matchedUser = remember {
                // Dùng try-catch để an toàn hơn khi giải mã
                try {
                    Gson().fromJson(userJson, MatchedUser::class.java)
                } catch (e: Exception) {
                    // Xử lý lỗi giải mã (ví dụ: Log lỗi và return)
                    Log.e("NavGraph", "Lỗi giải mã JSON MatchedUser: ${e.message}")
                }
            }

            val factory = remember {
                ChatViewModelFactory(
                    messageService = messageService,
                    userService = userService,
                    matchedUser = matchedUser as MatchedUser // Truyền MatchedUser đã được giải mã
                )
            }
            ChatScreen(factory = factory)
        }

        composable("chatWithAi") { AiChatScreen() }

        //register
        composable("authEntry") {
            RegisterEntryScreen()
        }

        composable("registerEmailInput") { EmailInputScreen() }
        composable("registerOtpInput") { OtpInputScreen() }
        composable("registerInfoInput1") { InfoInput1() }
        composable("registerInfoInput2") { InfoInput2() }
        composable("registerHobbiesInput") { HobbiesInput() }
        composable("picturesInput") { PicturesInput() }
// Trong NavHost Composable của bạn
        composable(
            route = "passwordInput/{email}",
            arguments = listOf(navArgument("email") { type = NavType.StringType })
        ) { backStackEntry ->
            val email = backStackEntry.arguments?.getString("email")
            // Giả sử PasswordInputField nhận email để xác định tài khoản
            email?.let { PasswordInputScreen(it) }
        }
        //login
        composable("login") { Login() }

        //forget
        composable("forgetPasswordEmail") { ForgetPassword() }


        composable("user_qr") {UserQrScreen(CurrentUser.user?.userId?: "1")  }
        composable("cam_scan_qr") {CameraPermissionContent()  }


    }
}
