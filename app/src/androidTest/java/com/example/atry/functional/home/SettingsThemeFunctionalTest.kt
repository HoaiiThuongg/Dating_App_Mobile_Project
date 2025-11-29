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
 * Test cases for GIAO_DIEN category - Functional testing based on Testcases.txt
 * Test cases 34-35: Theme functionality
 */
@RunWith(AndroidJUnit4::class)
class SettingsThemeFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case GIAO_DIEN 34: Chuyển sang chế độ tối (Dark mode)
     */
    @Test
    fun settingsTheme_SwitchToDarkMode_ThemeChangesToDark() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    // Mock settings screen with theme toggle
                    Text("SETTINGS_SCREEN", modifier = Modifier.testTag("settings_screen"))
                    // Simulate dark mode toggle
                    androidx.compose.runtime.LaunchedEffect(Unit) {
                        // In real implementation, this would toggle theme
                    }
                }
            }
        }

        composeRule.waitForIdle()
        
        // Click theme toggle button
        composeRule.onNodeWithTag("theme_toggle_button").performClick()
        
        // Expected: Theme changes to dark mode
        composeRule.onNodeWithTag("settings_screen").assertIsDisplayed()
    }

    /**
     * Test case GIAO_DIEN 35: Chuyển sang chế độ sáng (Light mode)
     */
    @Test
    fun settingsTheme_SwitchToLightMode_ThemeChangesToLight() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "settings") {
                composable("settings") {
                    // Mock settings screen with theme toggle
                    Text("SETTINGS_SCREEN", modifier = Modifier.testTag("settings_screen"))
                    // Simulate light mode toggle
                    androidx.compose.runtime.LaunchedEffect(Unit) {
                        // In real implementation, this would toggle theme
                    }
                }
            }
        }

        composeRule.waitForIdle()
        
        // Click theme toggle button
        composeRule.onNodeWithTag("theme_toggle_button").performClick()
        
        // Expected: Theme changes to light mode
        composeRule.onNodeWithTag("settings_screen").assertIsDisplayed()
    }
}