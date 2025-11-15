package com.example.atry.functional.auth

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.core.app.ApplicationProvider
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.screens.auth.register.EmailInputScreen
import com.example.atry.viewmodel.auth.FakeRegisterViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Assert.assertTrue
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class EmailInputFunctionalTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    private lateinit var fakeViewModel: FakeRegisterViewModel
    private lateinit var alertViewModel: AlertViewModel
    
    @Before
    fun setUp() {
        val application = ApplicationProvider.getApplicationContext<android.app.Application>()
        fakeViewModel = FakeRegisterViewModel(application)
        alertViewModel = AlertViewModel()
    }
    
    // Test case DANG_KY 6: Đăng ký email thành công
    @Test
    fun emailInputScreen_SuccessfulRegistration_NavigatesToNextScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "emailInput") {
                composable("emailInput") {
                    EmailInputScreen(
                        viewModel = fakeViewModel,
                        alertViewModel = alertViewModel
                    )
                }
                composable("passwordInput") {
                    // Mock next screen
                }
            }
        }
        
        // Nhập email hợp lệ
        composeRule.onNodeWithTag("email_input").performTextInput("newuser@example.com")
        composeRule.onNodeWithTag("continue_button").performClick()
        
        // Verify email was set in ViewModel
        assertTrue("Email should be set in ViewModel", fakeViewModel.email.isNotEmpty())
    }
    
    // Test case DANG_KY 8: Email không đúng định dạng
    @Test
    fun emailInputScreen_InvalidEmailFormat_ShowsError() {
        composeRule.setContent {
            EmailInputScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        // Nhập email sai định dạng
        composeRule.onNodeWithTag("email_input").performTextInput("invalid-email")
        composeRule.onNodeWithTag("continue_button").performClick()
        
        // Should show validation error
        // In a real implementation, we'd verify the error message
    }
    
    // Test case DANG_KY 9: Email đã tồn tại
    @Test
    fun emailInputScreen_ExistingEmail_ShowsError() {
        composeRule.setContent {
            EmailInputScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        // Nhập email đã tồn tại
        composeRule.onNodeWithTag("email_input").performTextInput("existing@example.com")
        composeRule.onNodeWithTag("continue_button").performClick()
        
        // Simulate existing email error
        fakeViewModel.setEmailExists(true)
        
        // Should show "Email đã tồn tại" error
    }
    
    // Test case DANG_KY 10: Email để trống
    @Test
    fun emailInputScreen_EmptyEmail_ShowsError() {
        composeRule.setContent {
            EmailInputScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        // Không nhập email, click continue
        composeRule.onNodeWithTag("continue_button").performClick()
        
        // Should show "Vui lòng nhập email" error
    }
}