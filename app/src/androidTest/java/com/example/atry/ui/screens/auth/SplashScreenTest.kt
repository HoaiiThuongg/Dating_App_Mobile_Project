package com.example.atry.ui.screens.auth

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick

import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class SplashScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test Case 1: Kiểm tra hiển thị logo và tiêu đề
     */
    @Test
    fun splashScreen_DisplaysAppName() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
            }
        }

        composeRule
            .onNodeWithText("Humble")
            .assertIsDisplayed()
    }

    /**
     * Test Case 2: Kiểm tra hiển thị nút Đăng nhập
     */
    @Test
    fun splashScreen_DisplaysLoginButton() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
            }
        }

        composeRule
            .onNodeWithText("Đăng nhập")
            .assertIsDisplayed()
    }

    /**
     * Test Case 3: Kiểm tra hiển thị nút Đăng ký
     */
    @Test
    fun splashScreen_DisplaysRegisterButton() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
            }
        }

        composeRule
            .onNodeWithText("Đăng kí")
            .assertIsDisplayed()
    }

    /**
     * Test Case 4: Kiểm tra hiển thị thông điệp chào mừng
     */
    @Test
    fun splashScreen_DisplaysWelcomeMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
            }
        }

        composeRule
            .onNodeWithText("Chào mừng bạn đến với Humble")
            .assertIsDisplayed()
    }

    /**
     * Test Case 5: Kiểm tra nút Đăng nhập navigate đến màn hình Login
     */
    @Test
    fun splashScreen_LoginButtonNavigatesToLogin() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
                composable("login") {
                    Text("LOGIN_SCREEN", modifier = Modifier.testTag("login_screen"))
                }
            }
        }

        composeRule.onNodeWithText("Humble").assertIsDisplayed()

        composeRule
            .onNodeWithText("Đăng nhập")
            .performClick()

        composeRule.waitForIdle()

        composeRule.onNodeWithTag("login_screen").assertIsDisplayed()
    }

    /**
     * Test Case 6: Kiểm tra nút Đăng ký navigate đến màn hình Register
     */
    @Test
    fun splashScreen_RegisterButtonNavigatesToRegister() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "splash") {
                composable("splash") {
                    SplashScreen()
                }
                composable("authEntry") {
                    Text("REGISTER_SCREEN", modifier = Modifier.testTag("register_screen"))
                }
            }
        }

        composeRule.onNodeWithText("Humble").assertIsDisplayed()

        composeRule
            .onNodeWithText("Đăng kí")
            .performClick()

        composeRule.waitForIdle()

        composeRule.onNodeWithTag("register_screen").assertIsDisplayed()
    }
}
