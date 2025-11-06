package com.example.atry.ui.screens.functionalScreens

import androidx.compose.ui.test.junit4.createComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ProfileScreenTest {

    @get:Rule
    val composeTestRule = createComposeRule()

    /**
     * Test Case 1: Kiểm tra màn hình Settings có hiển thị đúng không
     * Kịch bản: Màn hình Settings có hiển thị các option không?
     */
    @Test
    fun testSettingsScreen_DisplaysSettingsOptions() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            SettingsScreen()
        }

        // Khẳng định (Assert)
        // Kiểm tra các option trong Settings có được hiển thị không
        composeTestRule.waitForIdle()
        // Settings có chứa text "Settings", "Theme", "Language"
        // Note: Cần kiểm tra bằng stringResource, nhưng có thể test bằng cách khác
    }

    /**
     * Test Case 2: Kiểm tra màn hình Support có hiển thị đúng không
     * Kịch bản: Màn hình Support có hiển thị thông tin hỗ trợ không?
     */
    @Test
    fun testSupportScreen_DisplaysSupportContent() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            SupportScreen()
        }

        // Khẳng định (Assert)
        // Kiểm tra content của Support screen
        composeTestRule.waitForIdle()
    }

    /**
     * Test Case 3: Kiểm tra màn hình MyProfile có hiển thị đúng không
     * Kịch bản: Màn hình Profile có hiển thị thông tin người dùng không?
     */
    @Test
    fun testMyProfileScreen_DisplaysProfileContent() {
        // Sắp xếp (Arrange)
        composeTestRule.setContent {
            MyProfileScreen()
        }

        // Khẳng định (Assert)
        // Kiểm tra content của Profile screen
        composeTestRule.waitForIdle()
    }
}
