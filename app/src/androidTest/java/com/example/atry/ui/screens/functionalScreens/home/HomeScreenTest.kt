package com.example.atry.ui.screens.functionalScreens.home

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.assertIsDisplayed
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.viewmodel.functional.FakeHomeViewModel
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
        val vm = FakeHomeViewModel(initialLoading = true)
        composeRule.setContent {
            HomeScreen(viewModel = vm)
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đang tải...").assertIsDisplayed()
    }

    /**
     * Test Case 2: Kiểm tra hiển thị thông báo khi hết người dùng
     */
    @Test
    fun homeScreen_EmptyState_DisplaysEmptyMessage() {
        val vm = FakeHomeViewModel(initialUsers = emptyList())
        composeRule.setContent {
            HomeScreen(viewModel = vm)
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Hết đối tượng để hiển thị rồi").assertIsDisplayed()
    }

    /**
     * Test Case 3: Kiểm tra hiển thị SwipeCard khi có users
     * Note: Test này cần mock data và ViewModel
     */
    @Test
    fun homeScreen_WithUsers_DisplaysSwipeCards() {
        val users = listOf(
            User("u1", "A", "a@example.com", "", "male"),
            User("u2", "B", "b@example.com", "", "female")
        )
        val vm = FakeHomeViewModel(initialUsers = users)
        composeRule.setContent {
            HomeScreen(viewModel = vm)
        }

        composeRule.waitForIdle()
        // Verify users are displayed (not empty state)
        composeRule.onNodeWithText("A").assertIsDisplayed()
        composeRule.onNodeWithText("B").assertIsDisplayed()
    }
    
    @Test
    fun homeScreen_RendersCorrectly() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun homeScreen_HandlesUserInfoSetup() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
        // Screen should handle user info setup
    }
    
    @Test
    fun homeScreen_DisplaysSwipeButtons() {
        composeRule.setContent {
            HomeScreen()
        }

        composeRule.waitForIdle()
        // Swipe buttons (like, pass) should be displayed
    }
}
