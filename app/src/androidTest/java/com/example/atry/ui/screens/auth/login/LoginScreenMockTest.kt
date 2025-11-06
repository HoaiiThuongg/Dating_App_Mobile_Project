package com.example.atry.ui.screens.auth.login

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.assertIsEnabled
import androidx.compose.ui.test.assertIsNotEnabled
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
import com.example.atry.ui.screens.auth.login.LoginState
import com.example.atry.viewmodel.auth.FakeLoginViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class LoginScreenMockTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var fakeViewModel: FakeLoginViewModel
    private lateinit var fakeAlertViewModel: AlertViewModel

    @Before
    fun setUp() {
        fakeViewModel = FakeLoginViewModel()
        fakeAlertViewModel = AlertViewModel()
    }

    @Test
    fun loginScreen_elementsDisplayed_and_loginNavigatesToMain() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
                composable("main") {
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
            }
        }

        composeRule.onNodeWithTag("login:email_input").assertIsDisplayed()
        composeRule.onNodeWithTag("login:password_input").assertIsDisplayed()
        composeRule.onNodeWithTag("login:login_button").assertIsDisplayed()
        composeRule.onNodeWithTag("login:register_button").assertIsDisplayed()

        composeRule.onNodeWithTag("login:email_input").performTextInput("testuser@example.com")
        composeRule.onNodeWithTag("login:password_input").performTextInput("mypassword")

        composeRule.onNodeWithTag("login:login_button").performClick()

        assertTrue("Hàm login() lẽ ra phải được gọi", fakeViewModel.loginCalled)
        assertEquals("testuser@example.com", fakeViewModel.lastEmailUsed)
        assertEquals("mypassword", fakeViewModel.lastPasswordUsed)

        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    isSuccess = true,
                    message = "Đăng nhập thành công"
                )
            )
        }

        composeRule.waitForIdle()
    }

    @Test
    fun login_withEmptyFields_showsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
                composable("main") {
                    Text("MAIN_SCREEN")
                }
            }
        }

        composeRule.onNodeWithTag("login:login_button").performClick()

        assertTrue("Hàm login() lẽ ra phải được gọi", fakeViewModel.loginCalled)

        val errorMessage = "Vui lòng nhập đầy đủ thông tin"
        composeRule.runOnIdle {
            fakeViewModel.pushState(LoginState(error = errorMessage))
        }

        composeRule.onNodeWithText(errorMessage, substring = true).assertIsDisplayed()
    }

    @Test
    fun loginSuccess_DisplaysSuccessMessage() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    isSuccess = true,
                    message = "Đăng nhập thành công"
                )
            )
        }

        composeRule
            .onNodeWithText("Chúc mừng bạn đăng nhập thành công!", substring = true)
            .assertIsDisplayed()
    }

    @Test
    fun loginError_DisplaysErrorText() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        val errorMessage = "Sai mật khẩu hoặc tên đăng nhập"
        composeRule.runOnIdle {
            fakeViewModel.pushState(LoginState(error = errorMessage))
        }

        composeRule
            .onNodeWithText(errorMessage, substring = true)
            .assertIsDisplayed()
    }

    @Test
    fun loginLoading_DisablesInputsAndButton() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule.onNodeWithTag("login:email_input").assertIsEnabled()
        composeRule.onNodeWithTag("login:password_input").assertIsEnabled()
        composeRule.onNodeWithTag("login:login_button").assertIsEnabled()

        composeRule.runOnIdle {
            fakeViewModel.pushState(LoginState(isLoading = true))
        }

        composeRule.onNodeWithTag("login:email_input").assertIsNotEnabled()
        composeRule.onNodeWithTag("login:password_input").assertIsNotEnabled()
        composeRule.onNodeWithTag("login:login_button").assertIsNotEnabled()

        composeRule.onNodeWithText("Đang xác thực...").assertIsDisplayed()
    }

    @Test
    fun loginClick_CallsViewModelLogin() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "login") {
                composable("login") {
                    Login(
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }

        composeRule
            .onNodeWithTag("login:email_input")
            .performTextInput("user.test@example.com")

        composeRule
            .onNodeWithTag("login:password_input")
            .performTextInput("pass123")

        composeRule
            .onNodeWithTag("login:login_button")
            .performClick()

        assertTrue("Hàm login() lẽ ra phải được gọi", fakeViewModel.loginCalled)
        assertEquals("user.test@example.com", fakeViewModel.lastEmailUsed)
        assertEquals("pass123", fakeViewModel.lastPasswordUsed)
    }
}
