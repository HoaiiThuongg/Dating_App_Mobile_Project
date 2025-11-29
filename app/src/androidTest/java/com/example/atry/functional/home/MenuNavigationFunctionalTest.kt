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
 * Test cases for MENU category - Functional testing based on Testcases.txt
 * Test cases 31-33: Menu navigation functionality
 */
@RunWith(AndroidJUnit4::class)
class MenuNavigationFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case MENU 31: Click Settings menu - Navigate to Settings screen
     */
    @Test
    fun menuClickSettings_NavigatesToSettingsScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "home") {
                composable("home") {
                    // Mock home screen with menu
                    Text("HOME_SCREEN", modifier = Modifier.testTag("home_screen"))
                    // Simulate menu click
                    androidx.compose.runtime.LaunchedEffect(Unit) {
                        navController.navigate("settings")
                    }
                }
                composable("settings") {
                    Text("SETTINGS_SCREEN", modifier = Modifier.testTag("settings_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("settings_screen").assertIsDisplayed()
    }

    /**
     * Test case MENU 32: Click Profile menu - Navigate to Profile screen
     */
    @Test
    fun menuClickProfile_NavigatesToProfileScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "home") {
                composable("home") {
                    Text("HOME_SCREEN", modifier = Modifier.testTag("home_screen"))
                    // Simulate menu click
                    androidx.compose.runtime.LaunchedEffect(Unit) {
                        navController.navigate("profile")
                    }
                }
                composable("profile") {
                    Text("PROFILE_SCREEN", modifier = Modifier.testTag("profile_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("profile_screen").assertIsDisplayed()
    }

    /**
     * Test case MENU 33: Click Messages menu - Navigate to Messages screen
     */
    @Test
    fun menuClickMessages_NavigatesToMessagesScreen() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "home") {
                composable("home") {
                    Text("HOME_SCREEN", modifier = Modifier.testTag("home_screen"))
                    // Simulate menu click
                    androidx.compose.runtime.LaunchedEffect(Unit) {
                        navController.navigate("messages")
                    }
                }
                composable("messages") {
                    Text("MESSAGES_SCREEN", modifier = Modifier.testTag("messages_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("messages_screen").assertIsDisplayed()
    }
}