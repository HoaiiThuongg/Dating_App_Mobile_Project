package com.example.atry.ui.screens.auth.forgetPassword

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
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ForgetPasswordTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    /**
     * Test Case 1: Kiểm tra hiển thị tiêu đề và các trường input
     */
    @Test
    fun forgetPasswordScreenDisplaysTitleAndInputs() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "forgetPassword") {
                composable("forgetPassword") {
                    ForgetPassword()
                }
            }
        }

        composeRule.onNodeWithText("Quên mật khẩu").assertIsDisplayed()
        composeRule.onNodeWithText("Nhập email của bạn").assertIsDisplayed()
        composeRule.onNodeWithText("Email", substring = true).assertIsDisplayed()
        composeRule.onNodeWithText("Quay Lại").assertIsDisplayed()
        composeRule.onNodeWithText("Tếp theo").assertIsDisplayed()
    }
    
    /**
     * Test Case 2: Kiểm tra nhập email
     */
    @Test
    fun forgetPasswordScreenCanInputEmail() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "forgetPassword") {
                composable("forgetPassword") {
                    ForgetPassword()
                }
            }
        }

        composeRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("test@example.com")

        composeRule.waitForIdle()
    }
    
    /**
     * Test Case 3: Kiểm tra nút "Quay Lại" navigate đến màn hình Login
     */
    @Test
    fun forgetPasswordScreenBackButtonNavigatesToLogin() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "forgetPassword") {
                composable("forgetPassword") {
                    ForgetPassword()
                }
                composable("login") {
                    Text("LOGIN_SCREEN", modifier = Modifier.testTag("login_screen"))
                }
            }
        }

        composeRule.onNodeWithText("Quên mật khẩu").assertIsDisplayed()

        composeRule
            .onNodeWithText("Quay Lại")
            .performClick()

        composeRule.waitForIdle()

        composeRule.onNodeWithTag("login_screen").assertIsDisplayed()
    }
    
    /**
     * Test Case 4: Kiểm tra nút "Tếp theo" navigate đến màn hình Login
     */
    @Test
    fun forgetPasswordScreenNextButtonNavigatesToLogin() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "forgetPassword") {
                composable("forgetPassword") {
                    ForgetPassword()
                }
                composable("login") {
                    Text("LOGIN_SCREEN", modifier = Modifier.testTag("login_screen"))
                }
            }
        }

        composeRule.onNodeWithText("Quên mật khẩu").assertIsDisplayed()

        composeRule
            .onNodeWithText("Tếp theo")
            .performClick()

        composeRule.waitForIdle()

        composeRule.onNodeWithTag("login_screen").assertIsDisplayed()
    }
}

