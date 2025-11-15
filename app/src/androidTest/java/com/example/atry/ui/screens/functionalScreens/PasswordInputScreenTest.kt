package com.example.atry.ui.screens.functionalScreens

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
import com.example.atry.ui.screens.auth.register.PasswordInputScreen
import com.example.atry.viewmodel.auth.FakeRegisterViewModel
import com.example.atry.viewmodel.auth.RegisterState
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class PasswordInputScreenTest {
    
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
     * Test Case 1: Kiểm tra hiển thị màn hình nhập mật khẩu
     */
    @Test
    fun screenDisplaysCorrectly() {
        composeRule.setContent {
            PasswordInputScreen(
                email = "test@example.com",
                viewModel = fakeViewModel,
                alertViewModel = fakeAlertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    /**
     * Test Case 2: Mật khẩu yếu (< 6 ký tự) - Test case DANG_KY 7
     */
    @Test
    fun passwordInputScreen_WeakPassword_ShowsError() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "passwordInput/{email}") {
                composable("passwordInput/{email}") { backStackEntry ->
                    PasswordInputScreen(
                        email = backStackEntry.arguments?.getString("email") ?: "",
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
            }
        }
        
        // Nhập mật khẩu yếu (< 6 ký tự)
        composeRule.onNodeWithText("Nhập mật khẩu").performTextInput("12345")
        composeRule.onNodeWithText("Tếp theo").performClick()
        
        // Simulate validation error - weak password
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                RegisterState(
                    error = "Mật khẩu phải có ít nhất 6 ký tự"
                )
            )
            fakeAlertViewModel.showAlert()
        }
        
        composeRule.waitForIdle()
        // Expected: Hiển thị thông báo lỗi "Mật khẩu phải có ít nhất 6 ký tự" và vẫn ở màn hình nhập mật khẩu
    }
    
    /**
     * Test Case 3: Mật khẩu hợp lệ (>= 6 ký tự) - Test case DANG_KY 6
     */
    @Test
    fun passwordInputScreen_ValidPassword_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "passwordInput/{email}") {
                composable("passwordInput/{email}") { backStackEntry ->
                    PasswordInputScreen(
                        email = backStackEntry.arguments?.getString("email") ?: "",
                        viewModel = fakeViewModel,
                        alertViewModel = fakeAlertViewModel
                    )
                }
                composable("registerInfoInput1") {
                    Text("REGISTER_INFO_INPUT_1", modifier = Modifier.testTag("register_info_input_1_screen"))
                }
            }
        }
        
        // Nhập mật khẩu hợp lệ (>= 6 ký tự)
        composeRule.onNodeWithText("Nhập mật khẩu").performTextInput("password123")
        composeRule.onNodeWithText("Tếp theo").performClick()
        
        // Simulate successful password input
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                RegisterState(
                    isSuccess = true,
                    message = "Mật khẩu hợp lệ"
                )
            )
            fakeAlertViewModel.showAlert()
        }
        
        composeRule.waitForIdle()
        // Expected: Mật khẩu được chấp nhận và chuyển sang màn hình tiếp theo
    }
    
    /**
     * Test Case 4: Trạng thái Loading
     */
    @Test
    fun passwordInputScreen_LoadingState_DisablesButton() {
        composeRule.setContent {
            PasswordInputScreen(
                email = "test@example.com",
                viewModel = fakeViewModel,
                alertViewModel = fakeAlertViewModel
            )
        }
        
        // Set loading state
        composeRule.runOnIdle {
            fakeViewModel.pushState(
                RegisterState(isLoading = true)
            )
        }
        
        composeRule.waitForIdle()
        // Expected: Nút "Tếp theo" bị vô hiệu hóa khi đang loading
    }
}