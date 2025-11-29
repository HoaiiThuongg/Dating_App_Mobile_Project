package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule

import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ProfileScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test Case 1: Kiểm tra màn hình Settings có hiển thị đúng không
     */
    @Test
    fun settingsScreen_DisplaysSettingsOptions() {
        composeRule.setContent {
            SettingsScreen()
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 2: Kiểm tra màn hình Support có hiển thị đúng không
     */
    @Test
    fun supportScreen_DisplaysSupportContent() {
        composeRule.setContent {
            SupportScreen()
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 3: Kiểm tra màn hình MyProfile có hiển thị đúng không
     */
    @Test
    fun myProfileScreen_DisplaysProfileContent() {
        composeRule.setContent {
            MyProfileScreen()
        }

        composeRule.waitForIdle()
    }
}
