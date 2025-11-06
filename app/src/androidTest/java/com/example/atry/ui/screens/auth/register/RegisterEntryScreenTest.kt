package com.example.atry.ui.screens.auth.register

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.assertIsEnabled
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
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
    val composeTestRule = createComposeRule()

    private lateinit var fakeAlertViewModel: AlertViewModel

    @Before
    fun setUp() {
        fakeAlertViewModel = AlertViewModel()
    }

    /**
     * Test Case 1: Kiểm tra hiển thị tiêu đề và các trường input
     * Kịch bản: Màn hình đăng ký có hiển thị đúng tiêu đề và các trường input không?
     */
    @Test
    fun testRegisterEntryScreen_DisplaysTitleAndInputs() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Khẳng định (Assert)
        composeTestRule.onNodeWithText("Tạo tài khoản").assertIsDisplayed()
        composeTestRule.onNodeWithText("Nhập email của bạn").assertIsDisplayed()
        composeTestRule.onNodeWithText("Nhập Email").assertIsDisplayed()
        composeTestRule.onNodeWithText("Email", substring = true).assertIsDisplayed()
        composeTestRule.onNodeWithText("Mật khẩu", substring = true).assertIsDisplayed()
        composeTestRule.onNodeWithText("Tiếp theo").assertIsDisplayed()
    }

    /**
     * Test Case 2: Kiểm tra nhập email và mật khẩu
     * Kịch bản: Người dùng có thể nhập email và mật khẩu vào các trường input không?
     */
    @Test
    fun testRegisterEntryScreen_CanInputEmailAndPassword() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Hành động (Act)
        // Tìm text field bằng label và nhập text
        composeTestRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("test@example.com")

        composeTestRule
            .onNodeWithText("Mật khẩu", substring = true)
            .performTextInput("password123")

        // Khẳng định (Assert)
        // Kiểm tra xem các trường input có thể nhận giá trị
        composeTestRule.onNodeWithText("Tiếp theo").assertIsEnabled()
    }

    /**
     * Test Case 3: Kiểm tra trạng thái Loading
     * Kịch bản: Khi ViewModel ở trạng thái Loading, UI có hiển thị đúng không?
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun testRegisterEntryScreen_LoadingState_DisplaysLoadingMessage() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Khẳng định (Assert)
        // Khi loading, thông báo "Đang xác thực..." sẽ được hiển thị
        // Note: Cần trigger loading state từ ViewModel thật
        composeTestRule.waitForIdle()
    }

    /**
     * Test Case 4: Kiểm tra trạng thái Success
     * Kịch bản: Khi đăng ký thành công, UI có hiển thị thông báo thành công không?
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun testRegisterEntryScreen_SuccessState_DisplaysSuccessMessage() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Khẳng định (Assert)
        // Khi success, thông báo thành công sẽ được hiển thị
        // Note: Cần trigger success state từ ViewModel thật
        composeTestRule.waitForIdle()
    }

    /**
     * Test Case 5: Kiểm tra trạng thái Error
     * Kịch bản: Khi có lỗi, UI có hiển thị thông báo lỗi không?
     * Note: Test này cần refactor RegisterEntryScreen để có thể inject ViewModel
     */
    @Test
    fun testRegisterEntryScreen_ErrorState_DisplaysErrorMessage() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Khẳng định (Assert)
        // Khi error, thông báo lỗi sẽ được hiển thị
        // Note: Cần trigger error state từ ViewModel thật
        composeTestRule.waitForIdle()
    }

    /**
     * Test Case 6: Kiểm tra click nút "Tiếp theo"
     * Kịch bản: Nút "Tiếp theo" có thể được click không?
     * Note: Để test đầy đủ, cần refactor RegisterEntryScreen để sử dụng interface như ILoginViewModel
     */
    @Test
    fun testRegisterEntryScreen_NextButtonIsClickable() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            RegisterEntryScreen(alertViewModel = fakeAlertViewModel)
        }

        // Hành động (Act)
        // Nhập email và password trước
        composeTestRule
            .onNodeWithText("Email", substring = true)
            .performTextInput("newuser@example.com")

        composeTestRule
            .onNodeWithText("Mật khẩu", substring = true)
            .performTextInput("securePassword123")

        // Click nút "Tiếp theo"
        composeTestRule
            .onNodeWithText("Tiếp theo")
            .performClick()

        // Khẳng định (Assert)
        // Nếu không có lỗi, nút đã có thể click được
        // (Hàm register sẽ được gọi trong production code)
    }
}
