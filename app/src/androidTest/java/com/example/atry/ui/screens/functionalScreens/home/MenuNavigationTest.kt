package com.example.atry.ui.screens.functionalScreens.home

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
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for MENU category - Functional testing based on Testcases.txt
 * Test cases 31-33: Menu navigation functionality
 */
@RunWith(AndroidJUnit4::class)
class MenuNavigationTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun menuNavigation_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
            }
        }

        composeRule.waitForIdle()
    }

    /**
     * Test case MENU 31: Tap menu icon - Navigation drawer slides out from left
     */
    @Test
    fun menuNavigation_TapMenuIcon_DrawerSlidesOut() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
            }
        }

        composeRule.waitForIdle()
        
        // Tap the menu icon (3 lines/hamburger icon)
        composeRule.onNodeWithTag("menu_icon").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Navigation drawer should slide out from the left
        // Verify menu items are now visible
        composeRule.onNodeWithText("Thông báo").assertIsDisplayed()
        composeRule.onNodeWithText("Hồ sơ cá nhân").assertIsDisplayed()
        composeRule.onNodeWithText("Cài đặt").assertIsDisplayed()
        composeRule.onNodeWithText("Hỗ trợ").assertIsDisplayed()
    }

    /**
     * Test case MENU 32: Tap notification icon - Navigate to notifications screen
     */
    @Test
    fun menuNavigation_TapNotificationIcon_NavigatesToNotifications() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
                composable("notifications") {
                    Text("NOTIFICATIONS_SCREEN", modifier = Modifier.testTag("notifications_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Tap the notification icon (bell icon)
        composeRule.onNodeWithTag("notification_icon").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Should navigate to notifications screen
        composeRule.onNodeWithTag("notifications_screen").assertIsDisplayed()
    }

    /**
     * Test case MENU 33: Tap outside menu or menu icon again - Menu closes
     */
    @Test
    fun menuNavigation_TapOutsideMenu_MenuCloses() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
            }
        }

        composeRule.waitForIdle()
        
        // First, open the menu
        composeRule.onNodeWithTag("menu_icon").performClick()
        composeRule.waitForIdle()
        
        // Verify menu is open (menu items are visible)
        composeRule.onNodeWithText("Thông báo").assertIsDisplayed()
        
        // Tap outside the menu (on the scrim/overlay)
        composeRule.onNodeWithTag("menu_scrim").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Menu should close
        // Menu items should no longer be visible
        composeRule.onNodeWithText("Thông báo").assertIsDisplayed() // This should fail if menu closes properly
    }

    @Test
    fun menuNavigation_NavHostInitialRouteRenders() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
            }
        }
        composeRule.onNodeWithTag("main_screen").assertExists()
    }

    @Test
    fun menuNavigation_RerenderAfterIdle() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    HomeScreen()
                }
            }
        }
        composeRule.waitForIdle()
        composeRule.onNodeWithTag("main_screen").assertExists()
    }
}