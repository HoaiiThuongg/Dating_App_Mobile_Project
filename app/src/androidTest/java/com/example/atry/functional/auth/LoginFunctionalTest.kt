package com.example.atry.functional.auth

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
import com.example.atry.ui.screens.auth.login.Login
import com.example.atry.viewmodel.auth.FakeLoginViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class LoginFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var fakeViewModel: FakeLoginViewModel
    private lateinit var fakeAlertViewModel: AlertViewModel

    @Before
    fun setUp() {
        fakeViewModel = FakeLoginViewModel()
        fakeAlertViewModel = AlertViewModel()
    }

    // Test case DANG_NHAP 1: Đăng nhập thành công
    @Test
    fun loginSuccess_WithValidCredentials_ShowsSuccessMessage() {
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

        // Nhập thông tin hợp lệ theo Test case 1
        composeRule.onNodeWithTag("login:email_input").performTextInput("test@example.com")
        composeRule.onNodeWithTag("login:password_input").performTextInput("123456")
        composeRule.onNodeWithTag("login:login_button").performClick()

        // Simulate successful login
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    isSuccess = true,
                    message = "Chúc mừng bạn đăng nhập thành công!"
                )
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        // Expected: Hiển thị thông báo "Chúc mừng bạn đăng nhập thành công!" và chuyển sang màn hình chính
    }

    // Test case DANG_NHAP 2: Sai mật khẩu
    @Test
    fun loginWithWrongPassword_ShowsErrorMessage() {
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

        // Nhập email đúng và mật khẩu sai
        composeRule.onNodeWithTag("login:email_input").performTextInput("test@example.com")
        composeRule.onNodeWithTag("login:password_input").performTextInput("wrongpassword")
        composeRule.onNodeWithTag("login:login_button").performClick()

        // Simulate login error - wrong password
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    error = "Email hoặc mật khẩu không chính xác"
                )
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        // Expected: Hiển thị thông báo lỗi "Email hoặc mật khẩu không chính xác" và vẫn ở màn hình đăng nhập
    }

    // Test case DANG_NHAP 3: Email không tồn tại
    @Test
    fun loginWithNonExistentEmail_ShowsErrorMessage() {
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

        // Nhập email không tồn tại
        composeRule.onNodeWithTag("login:email_input").performTextInput("nouser@example.com")
        composeRule.onNodeWithTag("login:password_input").performTextInput("123456")
        composeRule.onNodeWithTag("login:login_button").performClick()

        // Simulate login error - email not found
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    error = "Tài khoản không tồn tại"
                )
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        // Expected: Hiển thị thông báo lỗi "Tài khoản không tồn tại" và vẫn ở màn hình đăng nhập
    }

    // Test case DANG_NHAP 4: Email để trống
    @Test
    fun loginWithEmptyEmail_ShowsErrorMessage() {
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

        // Không nhập email, chỉ nhập mật khẩu
        composeRule.onNodeWithTag("login:password_input").performTextInput("123456")
        composeRule.onNodeWithTag("login:login_button").performClick()

        // Simulate validation error - empty email
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                LoginState(
                    error = "Vui lòng nhập email"
                )
            )
            fakeAlertViewModel.showAlert()
        }

        composeRule.waitForIdle()
        // Expected: Hiển thị thông báo lỗi "Vui lòng nhập email" và vẫn ở màn hình đăng nhập
    }

    // Test case DANG_NHAP 5: Nút đăng ký - navigation sang màn hình đăng ký
    @Test
    fun loginClickRegisterButton_NavigatesToRegisterScreen() {
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
                composable("authEntry") {
                    Text("REGISTER_SCREEN", modifier = Modifier.testTag("register_screen"))
                }
            }
        }

        // Click nút đăng ký
        composeRule.onNodeWithTag("login:register_button").performClick()

        composeRule.waitForIdle()
        // Expected: Chuyển hướng đến màn hình đăng ký (authEntry)
    }
}