package com.example.atry.ui.screens.registerScreens

import android.content.Context
import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.navigation.compose.ComposeNavigator
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.navigation.testing.TestNavHostController
import androidx.test.core.app.ApplicationProvider
import org.junit.Assert.*
import org.junit.Rule
import org.junit.Test

class EmailScreenTest {
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun emailScreen_displaysAllComponents() {
        composeTestRule.setContent {
            // Thiết lập EmailScreen (giả sử nhận navController nhưng ta có thể dùng navController rỗng hoặc nhớ điều hướng)
            val navController = rememberNavController()
            EmailScreen(navController = navController)
        }
        // Kiểm tra các phần tử hiển thị đúng
        composeTestRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeTestRule.onNodeWithText("Nhập email").assertIsDisplayed()
        composeTestRule.onNodeWithTag("email_field").assertIsDisplayed()
        composeTestRule.onNodeWithText("Nhập tên đăng nhập").assertIsDisplayed()
        composeTestRule.onNodeWithText("Chúng tớ sẽ gửi mã xác minh đến email của cậu").assertIsDisplayed()
        composeTestRule.onNodeWithText("Tiếp tục").assertIsDisplayed()
    }

    @Test
    fun emailScreen_allowsTextInput() {
        composeTestRule.setContent {
            val navController = rememberNavController()
            EmailScreen(navController = navController)
        }
        // Nhập văn bản vào ô "Nhập tên đăng nhập"
        composeTestRule.onNodeWithTag("email_field")
            .performTextInput("user@example.com")
        // Xác nhận rằng văn bản vừa nhập xuất hiện
        composeTestRule.onNodeWithText("user@example.com").assertIsDisplayed()
    }

    @Test
    fun emailScreen_navigatesToOtpOnContinueClick() {
        // Chuẩn bị NavController cho kiểm thử
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)
        composeTestRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())
            NavHost(navController = navController, startDestination = "email") {
                composable("email") { EmailScreen(navController = navController) }
                composable("otp")    { Text("Màn hình OTP", modifier = Modifier.testTag("OtpScreen")) }
            }
        }
        // Thực hiện nhấn nút “Tiếp tục”
        composeTestRule.onNodeWithText("Tiếp tục").performClick()
        // Xác nhận route hiện tại là "otp"
        assert(navController.currentBackStackEntry?.destination?.route == "otp")
    }


}