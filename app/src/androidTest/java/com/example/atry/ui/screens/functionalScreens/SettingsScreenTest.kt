package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
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
 * Test cases for CAI_DAT category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class SettingsScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun settingsScreen_RendersCorrectly() {
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
        composeRule.onNodeWithTag("settings:title").assertIsDisplayed()
        composeRule.onNodeWithTag("settings:label_theme").assertIsDisplayed()
        composeRule.onNodeWithTag("settings:label_language").assertIsDisplayed()
        composeRule.onNodeWithTag("settings:theme_switch").assertIsDisplayed()
        composeRule.onNodeWithTag("settings:language_switch").assertIsDisplayed()
    }

    @Test
    fun settingsScreen_TogglesThemeAndLanguage() {
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
        composeRule.onNodeWithTag("settings:theme_switch").performClick()
        composeRule.onNodeWithTag("settings:language_switch").performClick()
    }
}
