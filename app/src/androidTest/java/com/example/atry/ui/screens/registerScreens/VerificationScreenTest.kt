package com.example.atry.ui.screens.registerScreens

import android.content.Context
import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.*
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.ComposeNavigator
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.testing.TestNavHostController
import androidx.test.core.app.ApplicationProvider
import org.junit.Assert.assertEquals
import org.junit.Rule
import org.junit.Test

class VerificationScreenInstrumentedTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Kiểm tra các thành phần hiển thị (title, otp field, description, nút)
     */
    @Test
    fun verificationScreen_displaysAllComponents() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)
        composeRule.setContent {
            // cần add ComposeNavigator cho TestNavHostController để NavHost hoạt động
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "verification") {
                composable("verification") { VerificationScreen(navController = navController) }
                composable("password") { Text("PASSWORD_SCREEN", modifier = Modifier.testTag("password_screen")) }
            }
        }

        // Kiểm tra hiển thị của các node / text
        composeRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeRule.onNodeWithTag("verification_title").assertIsDisplayed()
        composeRule.onNodeWithTag("otp_field").assertExists().assertIsDisplayed()
        composeRule.onNodeWithTag("otp_description").assertIsDisplayed()
        composeRule.onNodeWithText("Gửi lại").assertIsDisplayed()
        composeRule.onNodeWithText("Tiếp tục").assertIsDisplayed()
    }

    /**
     * Kiểm tra nhập mã OTP và điều hướng tới "password" sau khi nhấn Tiếp tục
     */
    @Test
    fun verificationScreen_inputOtp_and_navigatesToPassword() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)
        composeRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "verification") {
                composable("verification") { VerificationScreen(navController = navController) }
                composable("password") { Text("PASSWORD_SCREEN", modifier = Modifier.testTag("password_screen")) }
            }
        }

        // Nhập OTP vào text field
        composeRule.onNodeWithTag("otp_field").performTextInput("123456")

        // Xác nhận text đã nhập hiển thị
        composeRule.onNodeWithText("123456").assertIsDisplayed()

        // Nhấn nút Tiếp tục
        composeRule.onNodeWithText("Tiếp tục").performClick()

        // Đợi state ổn định và assert route hiện tại là "password"
        composeRule.runOnIdle {
            assertEquals("password", navController.currentBackStackEntry?.destination?.route)
        }

        // (tùy chọn) assert màn hình password xuất hiện
        composeRule.onNodeWithTag("password_screen").assertIsDisplayed()
    }
}
