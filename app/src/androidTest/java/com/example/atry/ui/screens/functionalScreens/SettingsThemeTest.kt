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
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for GIAO_DIEN category - Functional testing based on Testcases.txt
 * Test cases 34-35: Theme switching functionality (Light/Dark mode)
 */
@RunWith(AndroidJUnit4::class)
class SettingsThemeTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun settingsTheme_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    SettingsScreen()
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("settings:title").assertExists()
        composeRule.onNodeWithTag("settings:theme_switch").assertExists()
        composeRule.onNodeWithTag("settings:language_switch").assertExists()
    }

    /**
     * Test case GIAO_DIEN 34: Toggle from Light to Dark mode
     */
    @Test
    fun settingsTheme_ToggleLightToDark_ThemeChangesToDark() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    SettingsScreen()
                }
            }
        }

        composeRule.waitForIdle()
        
        // Assume app starts in Light mode (switch is off)
        // Click the theme toggle switch
        composeRule.onNodeWithTag("settings:theme_switch").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: App theme should change to Dark mode
        // Verify the switch is now in "on" state
        composeRule.onNodeWithTag("settings:theme_switch_on").assertIsDisplayed()
        
        // Verify dark theme is applied (background color changes)
        composeRule.onNodeWithTag("settings:dark_theme_applied").assertIsDisplayed()
    }

    /**
     * Test case GIAO_DIEN 35: Toggle from Dark to Light mode
     */
    @Test
    fun settingsTheme_ToggleDarkToLight_ThemeChangesToLight() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    SettingsScreen() // Start in dark mode - we'll need to toggle theme through the UI
                }
            }
        }

        composeRule.waitForIdle()
        
        // Assume app starts in Dark mode (switch is on)
        // Click the theme toggle switch
        composeRule.onNodeWithTag("settings:theme_switch").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: App theme should change to Light mode
        // Verify the switch is now in "off" state
        composeRule.onNodeWithTag("settings:theme_switch_off").assertIsDisplayed()
        
        // Verify light theme is applied (background color changes)
        composeRule.onNodeWithTag("settings:light_theme_applied").assertIsDisplayed()
    }

    @Test
    fun settingsTheme_TogglesVisible() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    SettingsScreen()
                }
            }
        }
        composeRule.onNodeWithTag("settings:theme_switch").assertExists()
        composeRule.onNodeWithTag("settings:language_switch").assertExists()
    }

    @Test
    fun settingsTheme_TitleAndLabels() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    SettingsScreen()
                }
            }
        }
        composeRule.onNodeWithTag("settings:title").assertExists()
        composeRule.onNodeWithTag("settings:label_theme").assertExists()
        composeRule.onNodeWithTag("settings:label_language").assertExists()
    }
}