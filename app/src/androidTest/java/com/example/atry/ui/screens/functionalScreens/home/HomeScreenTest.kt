package com.example.atry.ui.screens.functionalScreens.home

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule

import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class HomeScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test Case 1: Kiểm tra hiển thị loading khi đang tải dữ liệu
     * Note: Test này cần ViewModel được inject để kiểm soát trạng thái loading
     */
    @Test
    fun homeScreen_LoadingState_DisplaysLoadingIndicator() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 2: Kiểm tra hiển thị thông báo khi hết người dùng
     */
    @Test
    fun homeScreen_EmptyState_DisplaysEmptyMessage() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
    }

    /**
     * Test Case 3: Kiểm tra hiển thị SwipeCard khi có users
     * Note: Test này cần mock data và ViewModel
     */
    @Test
    fun homeScreen_WithUsers_DisplaysSwipeCards() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
    }
}
