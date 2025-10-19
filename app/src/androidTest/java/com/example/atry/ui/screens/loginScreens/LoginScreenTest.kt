package com.example.atry.ui.screens.loginScreens

import org.junit.Assert.*
import androidx.activity.ComponentActivity
import androidx.compose.ui.Modifier
import androidx.compose.material3.Text
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.*
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import org.junit.Rule
import org.junit.Test

class LoginScreenInstrumentedTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun loginScreen_elementsDisplayed_and_loginNavigatesToMain() {
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    com.example.atry.ui.screens.loginScreens.LoginScreen(
                        navController = navController,
                        modifier = Modifier.testTag("login_root")
                    )
                }
                composable("main") {
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
            }
        }

        // kiểm tra hiển thị các phần tử
        composeRule.onNodeWithTag("username_field").assertIsDisplayed()
        composeRule.onNodeWithTag("password_field").assertIsDisplayed()
        composeRule.onNodeWithTag("login_button").assertIsDisplayed()
        composeRule.onNodeWithTag("back_button").assertIsDisplayed()

        // nhập dữ liệu
        composeRule.onNodeWithTag("username_field").performTextInput("testuser")
        composeRule.onNodeWithTag("password_field").performTextInput("mypassword")

        // click đăng nhập
        composeRule.onNodeWithTag("login_button").performClick()

        // kiểm tra điều hướng đã tới main
        composeRule.onNodeWithTag("main_screen").assertIsDisplayed()
    }

    @Test
    fun login_withEmptyFields_showsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    com.example.atry.ui.screens.loginScreens.LoginScreen(navController = navController)
                }
                composable("main") {
                    Text("MAIN_SCREEN")
                }
            }
        }

        // click login khi rỗng
        composeRule.onNodeWithTag("login_button").performClick()

        // đổi "Vui lòng nhập" thành text lỗi thực tế app bạn hiển thị
        composeRule.onNodeWithText("Vui lòng nhập").assertIsDisplayed()
    }
}