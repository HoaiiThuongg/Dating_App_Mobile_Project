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

class PasswordScreenTest {
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun passwordScreen_displaysAllComponents() {
        composeTestRule.setContent {
            // Thiết lập PasswordScreen (giả sử nhận navController nhưng ta có thể dùng navController rỗng hoặc nhớ điều hướng)
            val navController = rememberNavController()
            PasswordScreen(navController = navController)
        }
        // Kiểm tra các phần tử hiển thị đúng
        composeTestRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeTestRule.onNodeWithText("Nhập mật khẩu đi").assertIsDisplayed()
        composeTestRule.onNodeWithTag("password_field").assertIsDisplayed()
        composeTestRule.onNodeWithTag("password_description").assertIsDisplayed()
    }

    @Test
    fun passwordScreen_allowsTextInput() {
        composeTestRule.setContent {
            val navController = rememberNavController()
            PasswordScreen(navController = navController)
        }
        // Nhập văn bản vào ô "Nhập tên đăng nhập"
        composeTestRule.onNodeWithTag("password_field")
            .performTextInput("123456789")
        // Xác nhận rằng văn bản vừa nhập xuất hiện
        composeTestRule.onNodeWithText("123456789").assertIsDisplayed()
    }

    @Test
    fun passwordScreen_navigatesToOtpOnContinueClick() {
        // Chuẩn bị NavController cho kiểm thử
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)
        composeTestRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())
            NavHost(navController = navController, startDestination = "password") {
                composable("password") { PasswordScreen(navController = navController) }
                composable("password_description")    { Text("Mật khẩu", modifier = Modifier.testTag("passScreen")) }
            }
        }

        composeTestRule.onNodeWithText("Xong").performClick()
        assert(navController.currentBackStackEntry?.destination?.route == "password_description")
    }
}