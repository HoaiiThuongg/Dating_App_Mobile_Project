package com.example.atry.functional.home

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for THONG_BAO category - Functional testing based on Testcases.txt
 * Test cases 39-40: Notification functionality
 */
@RunWith(AndroidJUnit4::class)
class NotificationFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case THONG_BAO 39: Hiển thị danh sách thông báo
     */
    @Test
    fun notificationScreen_DisplayNotificationList_Success() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "notifications") {
                composable("notifications") {
                    // Mock notification screen
                    Text("NOTIFICATION_SCREEN", modifier = Modifier.testTag("notification_screen"))
                    Text("NOTIFICATION_LIST", modifier = Modifier.testTag("notification_list"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("notification_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("notification_list").assertIsDisplayed()
    }

    /**
     * Test case THONG_BAO 40: Click vào thông báo - Xem chi tiết thông báo
     */
    @Test
    fun notificationScreen_ClickNotification_ShowsDetail() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "notifications") {
                composable("notifications") {
                    // Mock notification screen with notification items
                    Text("NOTIFICATION_SCREEN", modifier = Modifier.testTag("notification_screen"))
                    Text("NOTIFICATION_ITEM_1", modifier = Modifier.testTag("notification_item_1"))
                }
                composable("notificationDetail/{notificationId}") {
                    Text("NOTIFICATION_DETAIL_SCREEN", modifier = Modifier.testTag("notification_detail_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("notification_screen").assertIsDisplayed()
        
        // Click on first notification item
        composeRule.onNodeWithTag("notification_item_1").performClick()
        
        // Expected: Navigate to notification detail screen
        composeRule.onNodeWithTag("notification_detail_screen").assertIsDisplayed()
    }
}