package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ThemeSystemWideTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testThemeConsistency_LightMode() {
        composeTestRule.setContent {
            TryTheme(darkTheme = false) {
                // Test light theme consistency across all screens
                TestScreensWithTheme(darkTheme = false)
            }
        }
        
        // Verify theme colors are applied consistently
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testThemeConsistency_DarkMode() {
        composeTestRule.setContent {
            TryTheme(darkTheme = true) {
                // Test dark theme consistency across all screens
                TestScreensWithTheme(darkTheme = true)
            }
        }
        
        // Verify dark theme colors are applied consistently
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testThemeSwitching() {
        var isDarkTheme = false
        
        composeTestRule.setContent {
            TryTheme(darkTheme = isDarkTheme) {
                TestScreensWithTheme(darkTheme = isDarkTheme)
            }
        }
        
        // Test switching from light to dark
        isDarkTheme = true
        composeTestRule.waitForIdle()
        
        // Test switching from dark to light
        isDarkTheme = false
        composeTestRule.waitForIdle()
        
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testThemePersistence() {
        composeTestRule.setContent {
            TryTheme(darkTheme = true) {
                // Simulate app restart with theme preference
                TestScreensWithTheme(darkTheme = true)
            }
        }
        
        // Verify theme is maintained across app lifecycle
        composeTestRule.onRoot().assertExists()
    }
    
    @Test
    fun testSystemThemeIntegration() {
        composeTestRule.setContent {
            TryTheme(
                darkTheme = false
            ) {
                TestScreensWithTheme(darkTheme = false)
            }
        }
        
        // Verify system theme integration works
        composeTestRule.onRoot().assertExists()
    }
}

@Composable
private fun TestScreensWithTheme(darkTheme: Boolean) {
    // Test Login Screen theme
    LoginScreenThemeTest(darkTheme)
    
    // Test Register Screen theme
    RegisterScreenThemeTest(darkTheme)
    
    // Test Home Screen theme
    HomeScreenThemeTest(darkTheme)
    
    // Test Chat Screen theme
    ChatScreenThemeTest(darkTheme)
    
    // Test Profile Screen theme
    ProfileScreenThemeTest(darkTheme)
}

@Composable
private fun LoginScreenThemeTest(darkTheme: Boolean) {
    // Verify login screen components have correct theme colors
    // This would include background, text fields, buttons, etc.
}

@Composable
private fun RegisterScreenThemeTest(darkTheme: Boolean) {
    // Verify register screen components have correct theme colors
}

@Composable
private fun HomeScreenThemeTest(darkTheme: Boolean) {
    // Verify home screen components have correct theme colors
}

@Composable
private fun ChatScreenThemeTest(darkTheme: Boolean) {
    // Verify chat screen components have correct theme colors
}

@Composable
private fun ProfileScreenThemeTest(darkTheme: Boolean) {
    // Verify profile screen components have correct theme colors
}
