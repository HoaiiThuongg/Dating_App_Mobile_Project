package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class DevelopingScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        composeRule.setContent {
            DevelopingScreen()
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun screenDisplaysLogo() {
        composeRule.setContent {
            DevelopingScreen()
        }
        
        composeRule.waitForIdle()
        // Logo should be displayed
    }
    
    @Test
    fun screenDisplaysMessage() {
        composeRule.setContent {
            DevelopingScreen()
        }
        
        composeRule.waitForIdle()
        
        // Check if the development message is displayed
        composeRule
            .onNodeWithText("Phần này đang phát triển", substring = true)
            .assertIsDisplayed()
    }
    
    @Test
    fun screenRendersWithCorrectLayout() {
        composeRule.setContent {
            DevelopingScreen()
        }
        
        composeRule.waitForIdle()
        // Screen should render with correct layout (logo and message)
    }
}
