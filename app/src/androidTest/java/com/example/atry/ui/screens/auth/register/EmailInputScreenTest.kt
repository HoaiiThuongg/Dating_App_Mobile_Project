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
import androidx.test.core.app.ApplicationProvider
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.auth.FakeRegisterViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class EmailInputScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    private lateinit var fakeViewModel: FakeRegisterViewModel
    private lateinit var fakeAlertViewModel: AlertViewModel
    
    @Before
    fun setUp() {
        val application = ApplicationProvider.getApplicationContext<android.app.Application>()
        fakeViewModel = FakeRegisterViewModel(application)
        fakeAlertViewModel = AlertViewModel()
    }
    
    /**
     * Test Case 1: Kiểm tra hiển thị tiêu đề và các trường input
     */
    @Test
    fun emailInputScreen_DisplaysTitleAndInputs() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule.onNodeWithText("Tạo tài khoản").assertIsDisplayed()
        composeRule.onNodeWithText("Nhập email của bạn").assertIsDisplayed()
        composeRule.onNodeWithText("Nhập Email").assertIsDisplayed()
        composeRule.onNodeWithText("Email", substring = true).assertIsDisplayed()
        composeRule.onNodeWithText("Tếp theo").assertIsDisplayed()
    }
    
    /**
     * Test Case 2: Kiểm tra nhập email
     */
    @Test
    fun emailInputScreen_CanInputEmail() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("test@example.com")

        composeRule.onNodeWithText("Tếp theo").assertIsEnabled()
    }
    
    /**
     * Test Case 3: Kiểm tra click nút "Tếp theo"
     */
    @Test
    fun emailInputScreen_NextButtonIsClickable() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
                composable("passwordInput/{email}") {
                    Text("PASSWORD_INPUT_SCREEN", modifier = Modifier.testTag("password_input_screen"))
                }
            }
        }

        composeRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("newuser@example.com")

        composeRule
            .onNodeWithText("Tếp theo")
            .performClick()

        composeRule.waitForIdle()
    }
    
    /**
     * Test Case 4: Kiểm tra trạng thái Loading
     */
    @Test
    fun emailInputScreen_LoadingState_DisplaysLoadingMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule.runOnIdle {
            fakeViewModel.pushState(
                com.example.atry.viewmodel.auth.RegisterState(isLoading = true)
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đang xác thực...", substring = true).assertIsDisplayed()
    }
    
    /**
     * Test Case 5: Kiểm tra trạng thái Success
     */
    @Test
    fun emailInputScreen_SuccessState_DisplaysSuccessMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule.runOnIdle {
            fakeViewModel.pushState(
                com.example.atry.viewmodel.auth.RegisterState(
                    isSuccess = true,
                    message = "Đã gửi link xác thực thành công!"
                )
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đã gửi link xác thực thành công!", substring = true).assertIsDisplayed()
    }
    
    /**
     * Test Case 6: Kiểm tra trạng thái Error
     */
    @Test
    fun emailInputScreen_ErrorState_DisplaysErrorMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        val errorMessage = "Email không hợp lệ"
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                com.example.atry.viewmodel.auth.RegisterState(error = errorMessage)
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Lỗi: $errorMessage", substring = true).assertIsDisplayed()
    }
}

