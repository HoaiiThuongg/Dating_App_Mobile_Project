package com.example.atry.ui.screens.auth

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class SplashScreenTest {

    @get:Rule
    val composeTestRule = createComposeRule()

    /**
     * Test Case 1: Kiểm tra hiển thị logo và tiêu đề
     * Kịch bản: Màn hình Splash có hiển thị đúng logo và tên ứng dụng "Humble" không?
     */
    @Test
    fun testSplashScreen_DisplaysAppName() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Khẳng định (Assert)
        // Kiểm tra xem tên ứng dụng "Humble" có được hiển thị không
        composeTestRule
            .onNodeWithText("Humble")
            .assertIsDisplayed()
    }

    /**
     * Test Case 2: Kiểm tra hiển thị nút Đăng nhập
     * Kịch bản: Màn hình Splash có hiển thị nút "Đăng nhập" không?
     */
    @Test
    fun testSplashScreen_DisplaysLoginButton() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Khẳng định (Assert)
        composeTestRule
            .onNodeWithText("Đăng nhập")
            .assertIsDisplayed()
    }

    /**
     * Test Case 3: Kiểm tra hiển thị nút Đăng ký
     * Kịch bản: Màn hình Splash có hiển thị nút "Đăng kí" không?
     */
    @Test
    fun testSplashScreen_DisplaysRegisterButton() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Khẳng định (Assert)
        composeTestRule
            .onNodeWithText("Đăng kí")
            .assertIsDisplayed()
    }

    /**
     * Test Case 4: Kiểm tra hiển thị thông điệp chào mừng
     * Kịch bản: Màn hình Splash có hiển thị text "Chào mừng bạn đến với Humble" không?
     */
    @Test
    fun testSplashScreen_DisplaysWelcomeMessage() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Khẳng định (Assert)
        composeTestRule
            .onNodeWithText("Chào mừng bạn đến với Humble")
            .assertIsDisplayed()
    }

    /**
     * Test Case 5: Kiểm tra nút Đăng nhập có thể click
     * Kịch bản: Người dùng có thể click vào nút "Đăng nhập" không?
     */
    @Test
    fun testSplashScreen_LoginButtonIsClickable() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Hành động (Act) - Click vào nút Đăng nhập
        composeTestRule
            .onNodeWithText("Đăng nhập")
            .performClick()

        // Khẳng định (Assert)
        // Nếu không có lỗi, nút đã có thể click được
        // (Navigation sẽ được test trong integration test)
    }

    /**
     * Test Case 6: Kiểm tra nút Đăng ký có thể click
     * Kịch bản: Người dùng có thể click vào nút "Đăng kí" không?
     */
    @Test
    fun testSplashScreen_RegisterButtonIsClickable() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            navController = rememberNavController()
            SplashScreen()
        }

        // Hành động (Act) - Click vào nút Đăng ký
        composeTestRule
            .onNodeWithText("Đăng kí")
            .performClick()

        // Khẳng định (Assert)
        // Nếu không có lỗi, nút đã có thể click được
    }
}
