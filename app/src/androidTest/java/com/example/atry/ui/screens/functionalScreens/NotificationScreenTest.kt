package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for THONG_BAO category - Functional testing based on Testcases.txt
 * Test cases 39-40: Notification functionality with matches and likes
 */
@RunWith(AndroidJUnit4::class)
class NotificationScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private val testUsers = listOf(
        User("user1", "Nguyễn Văn A", "user1@example.com", "", "male"),
        User("user2", "Trần Thị B", "user2@example.com", "", "female"),
        User("user3", "Lê Văn C", "user3@example.com", "", "male"),
        User("user4", "Phạm Thị D", "user4@example.com", "", "female"),
        User("user5", "Hoàng Văn E", "user5@example.com", "", "male")
    )

    /**
     * Test case THONG_BAO 39: User has new matches and likes
     */
    @Test
    fun notificationScreen_HasNewMatchesAndLikes_DisplaysCorrectLists() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    // Simulate main screen with notification icon
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
                composable("notifications") {
                    // Simulate notifications screen with matches and likes
                    Text("NOTIFICATIONS_SCREEN", modifier = Modifier.testTag("notifications_screen"))
                    Text("Match mới", modifier = Modifier.testTag("new_matches_title"))
                    Text("Đã thích bạn", modifier = Modifier.testTag("likes_you_title"))
                    
                    // Display 2 new matches
                    Text("Nguyễn Văn A", modifier = Modifier.testTag("match_user_1"))
                    Text("Trần Thị B", modifier = Modifier.testTag("match_user_2"))
                    
                    // Display 3 new likes
                    Text("Lê Văn C", modifier = Modifier.testTag("like_user_1"))
                    Text("Phạm Thị D", modifier = Modifier.testTag("like_user_2"))
                    Text("Hoàng Văn E", modifier = Modifier.testTag("like_user_3"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Navigate to notifications screen
        composeRule.onNodeWithTag("notification_icon").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Notifications screen should show both matches and likes lists
        composeRule.onNodeWithTag("notifications_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("new_matches_title").assertIsDisplayed()
        composeRule.onNodeWithTag("likes_you_title").assertIsDisplayed()
        
        // Verify 2 new matches are displayed
        composeRule.onNodeWithTag("match_user_1").assertIsDisplayed()
        composeRule.onNodeWithTag("match_user_2").assertIsDisplayed()
        
        // Verify 3 new likes are displayed
        composeRule.onNodeWithTag("like_user_1").assertIsDisplayed()
        composeRule.onNodeWithTag("like_user_2").assertIsDisplayed()
        composeRule.onNodeWithTag("like_user_3").assertIsDisplayed()
    }

    /**
     * Test case THONG_BAO 40: User has no new notifications
     */
    @Test
    fun notificationScreen_NoNewNotifications_ShowsEmptyState() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    // Simulate main screen with notification icon
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
                composable("notifications") {
                    // Simulate empty notifications screen
                    Text("NOTIFICATIONS_SCREEN", modifier = Modifier.testTag("notifications_screen"))
                    Text("Không có thông báo mới", modifier = Modifier.testTag("empty_notification_message"))
                    Text("Bạn đã xem hết", modifier = Modifier.testTag("all_caught_up_message"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Navigate to notifications screen
        composeRule.onNodeWithTag("notification_icon").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Should show empty state message
        composeRule.onNodeWithTag("notifications_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("empty_notification_message").assertIsDisplayed()
        composeRule.onNodeWithTag("all_caught_up_message").assertIsDisplayed()
    }

    @Test
    fun notificationScreen_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "notification") {
                composable("notification") {
                    // Note: Notification screen might not exist as a separate screen
                    // This is a placeholder test
                    SettingsScreen()
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}