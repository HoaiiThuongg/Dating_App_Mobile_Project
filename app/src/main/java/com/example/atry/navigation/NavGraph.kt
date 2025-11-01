package com.example.atry.navigation

import android.content.Intent
import android.net.Uri
import android.util.Log
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.platform.LocalFocusManager
import androidx.navigation.NavController
import androidx.navigation.NavType
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.currentBackStackEntryAsState
import androidx.navigation.compose.rememberNavController
import androidx.navigation.navArgument
import com.example.atry.MainActivity
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
import com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.MatchedDetailedProfile
import com.example.atry.viewmodel.functional.ChatViewModelFactory
import com.google.firebase.auth.FirebaseAuth
import com.google.gson.Gson
import kotlinx.coroutines.delay
import kotlin.jvm.java


@Composable
fun NavGraph(initialIntent: Intent?,
             activity: MainActivity) {
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

    val deepLinkUri = activity.intent.data

    val PLACEHOLDER_EMAIL = ""
    LaunchedEffect(initialIntent) {
        initialIntent?.data?.let { uri -> // LẤY TRỰC TIẾP data (URI) TỪ INTENT
            handleDeepLinkNavigation(
                navController = navController,
                deepLinkUri = uri, // TRUYỀN URI ĐÃ TRÍCH XUẤT
                auth = FirebaseAuth.getInstance(),
                email = PLACEHOLDER_EMAIL
            )
        }
    }

    // Khởi chạy Effect để lắng nghe Intent mới (từ onNewIntent)
    LaunchedEffect(Unit) {
        // Lắng nghe sự thay đổi của currentLink
        while (true) {
            val linkString = MainActivity.DeepLinkHandler.currentLink // Lấy giá trị dưới dạng String
            if (linkString != null) {

                // ************ ĐÃ SỬA LỖI TRUYỀN KIỂU DỮ LIỆU ************
                // Chuyển String thành đối tượng Uri
                val linkUri = try {
                    Uri.parse(linkString)
                } catch (e: Exception) {
                    Log.e("NavGraph", "Lỗi parse URI từ DeepLinkHandler: ${e.message}")
                    null
                }
                // *******************************************************

                if (linkUri != null) {
                    handleDeepLinkNavigation(
                        navController = navController,
                        deepLinkUri = linkUri, // TRUYỀN URI đã được parse
                        auth = FirebaseAuth.getInstance(),
                        email = PLACEHOLDER_EMAIL
                    )
                }
                MainActivity.DeepLinkHandler.currentLink = null // Reset sau khi xử lý
            }
            delay(100)
        }
    }




    NavHost(
        navController = navController,
        startDestination = "splash"
    ) {
//        composable("draft") {
//            IcebreakerSection("Hà Nội")
//        }

        composable("splash") {
            SplashScreen()
        }

        composable("main") {
            MainScaffold("main_home", "Humble", R.drawable.humble_logo)
        }
        composable("home") {
            MainScaffold("home", "Humble", R.drawable.humble_logo)
        }
        composable("profile") {
            MainScaffold("profile", "Hồ sơ", R.drawable.humble_logo)
        }

        composable("message") {
            MainScaffold("message", "Nhắn tin", R.drawable.messagelove)
        }
        composable("likeYou") {
            MainScaffold("likeYou", "Thích bạn", R.drawable.like)
        }


        composable("settings") {
            ScaffoldWithBackButton("settings", "Cài đặt", R.drawable.humble_logo,"profile"){
                SettingsScreen()
            }
        }
        composable("editProfile") {
            ScaffoldWithBackButton("edit", "Sửa hồ sơ", R.drawable.humble_logo,"profile"){
                EditProfileScreen()
            }
        }
        composable("support")  {
            ScaffoldWithBackButton("support", "Hỗ trợ", R.drawable.humble_logo,"profile"){
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
        composable(
            route = "matched_detailed_profile/{userJson}",
            arguments = listOf(navArgument("userJson") { type = NavType.StringType })
        ) { backStackEntry ->
            val userJson = backStackEntry.arguments?.getString("userJson")
            val user = Gson().fromJson(userJson, User::class.java)

            MatchedDetailedProfile(user = user)
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
suspend fun handleDeepLinkNavigation(
    navController: NavController,
    deepLinkUri: Uri?,
    auth: FirebaseAuth,
    email: String // Giữ tham số email ở đây
) {
    if (deepLinkUri == null) return
    Log.d("NavGraph", "Deeplink URI: $deepLinkUri")
    Log.d("NavGraph", "Query params: oobCode=${deepLinkUri.getQueryParameter("oobCode")}, email=${deepLinkUri.getQueryParameter("email")}")

    val path = deepLinkUri.path
    if (path == "/setpassword") {

        // *******************************************************************
        // ĐIỀU CHỈNH QUAN TRỌNG: SỬ DỤNG getQueryParameter AN TOÀN HƠN
        // *******************************************************************
        val oobCode = deepLinkUri.getQueryParameter("oobCode")
        val finalEmail = deepLinkUri.getQueryParameter("email")
        val emailToUse = finalEmail ?: email


        Log.d("Auth_Params", "Email: $emailToUse, OobCode: $oobCode")

        if (oobCode.isNullOrEmpty() || emailToUse.isNullOrEmpty()) {
            Log.e("Auth", "Deeplink bị thiếu tham số oobCode hoặc email.")
            navController.navigate("login")
            return
        }

        try {
            // Bước 2: Hoàn tất đăng nhập/tạo tài khoản
            // Chúng ta không cần kiểm tra isSignInWithEmailLink vì code đã được try-catch
            auth.signInWithEmailLink(emailToUse, oobCode)
                .addOnCompleteListener { task ->
                    if (task.isSuccessful) {
                        Log.i("Auth", "Xác thực link Firebase thành công. Tài khoản đã được tạo.")
                        // Thành công: Điều hướng sang màn hình đặt mật khẩu.
                        navController.navigate("passwordInput/$emailToUse") {
                            popUpTo(navController.graph.startDestinationId) {
                                inclusive = true
                            }
                        }
                    } else {
                        // Thất bại: Mã đã hết hạn, đã sử dụng, hoặc bị Firebase từ chối.
                        Log.e("Auth", "Xác thực link thất bại (addOnCompleteListener): ${task.exception?.message}")
                        navController.navigate("login")
                    }
                }
        } catch (e: IllegalArgumentException) {
            // Bắt lỗi khi oobCode bị lỗi cú pháp/rỗng nặng
            Log.e("Auth", "Xác thực link thất bại (IllegalArgumentException): Mã không hợp lệ/hết hạn. ${e.message}")
            navController.navigate("login")
        } catch (e: Exception) {
            // Bắt các lỗi khác
            Log.e("Auth", "Lỗi không xác định khi xử lý Deeplink: ${e.message}")
            navController.navigate("login")
        }
    }
}