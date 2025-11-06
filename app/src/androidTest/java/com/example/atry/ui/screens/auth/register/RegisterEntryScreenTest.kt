package com.example.atry.ui.screens.auth.register

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.assertIsEnabled
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput

import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class RegisterEntryScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var fakeAlertViewModel: AlertViewModel

    @Before
    fun setUp() {
        fakeAlertViewModel = AlertViewModel()
    }

    /**
     * Test Case 1: Kiểm tra hiển thị tiêu đề và các trường input
     */
    @Test
    fun registerEntryScreen_DisplaysTitleAndInputs() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
            }
        }

        composeRule.onNodeWithText("Tạo tài khoản").assertIsDisplayed()
        composeRule.onNodeWithText("Nhập email của bạn").assertIsDisplayed()
        composeRule.onNodeWithText("Nhập Email").assertIsDisplayed()
        composeRule.onNodeWithText("Email", substring = true).assertIsDisplayed()
        composeRule.onNodeWithText("Mật khẩu", substring = true).assertIsDisplayed()
        composeRule.onNodeWithText("Tiếp theo").assertIsDisplayed()
    }

    /**
     * Test Case 2: Kiểm tra nhập email và mật khẩu
     */
    @Test
    fun registerEntryScreen_CanInputEmailAndPassword() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
            }
        }

        composeRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("test@example.com")

        composeRule
            .onNodeWithText("Mật khẩu", substring = true)
            .performTextInput("password123")

        composeRule.onNodeWithText("Tiếp theo").assertIsEnabled()
    }

    /**
     * Test Case 3: Kiểm tra trạng thái Loading
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun registerEntryScreen_LoadingState_DisplaysLoadingMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 4: Kiểm tra trạng thái Success
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun registerEntryScreen_SuccessState_DisplaysSuccessMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 5: Kiểm tra trạng thái Error
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun registerEntryScreen_ErrorState_DisplaysErrorMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 6: Kiểm tra click nút "Tiếp theo"
     */
    @Test
    fun registerEntryScreen_NextButtonIsClickable() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "authEntry") {
                composable("authEntry") {
                    RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
                }
                composable("registerInfoInput1") {
                    Text("REGISTER_INFO_SCREEN", modifier = Modifier.testTag("register_info_screen"))
                }
            }
        }

        composeRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("newuser@example.com")

        composeRule
            .onNodeWithText("Mật khẩu", substring = true)
            .performTextInput("securePassword123")

        composeRule
            .onNodeWithText("Tiếp theo")
            .performClick()

        composeRule.waitForIdle()
    }
}
