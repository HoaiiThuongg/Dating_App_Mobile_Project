package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.screens.functionalScreens.SettingsScreen
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class SettingsInteractionTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testSettingsScreen_TitleDisplayed() {
        composeTestRule.setContent {
            TryTheme {
                SettingsScreen()
            }
        }
        
        // Verify settings title is displayed
        composeTestRule.onNodeWithTag("settings:title")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSettingsScreen_ThemeSwitchDisplayed() {
        composeTestRule.setContent {
            TryTheme {
                SettingsScreen()
            }
        }
        
        // Verify theme label and switch are displayed
        composeTestRule.onNodeWithTag("settings:label_theme")
            .assertIsDisplayed()
        composeTestRule.onNodeWithTag("settings:theme_switch")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSettingsScreen_LanguageSwitchDisplayed() {
        composeTestRule.setContent {
            TryTheme {
                SettingsScreen()
            }
        }
        
        // Verify language label and switch are displayed
        composeTestRule.onNodeWithTag("settings:label_language")
            .assertIsDisplayed()
        composeTestRule.onNodeWithTag("settings:language_switch")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSettingsScreen_ThemeSwitchClickable() {
        composeTestRule.setContent {
            TryTheme {
                SettingsScreen()
            }
        }
        
        // Click on theme switch
        composeTestRule.onNodeWithTag("settings:theme_switch")
            .performClick()
        
        // Verify switch is still displayed after click
        composeTestRule.onNodeWithTag("settings:theme_switch")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSettingsScreen_LanguageSwitchClickable() {
        composeTestRule.setContent {
            TryTheme {
                SettingsScreen()
            }
        }
        
        // Click on language switch
        composeTestRule.onNodeWithTag("settings:language_switch")
            .performClick()
        
        // Verify switch is still displayed after click
        composeTestRule.onNodeWithTag("settings:language_switch")
            .assertIsDisplayed()
    }
}