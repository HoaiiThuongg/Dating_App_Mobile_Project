package com.example.atry.ui.components.qr

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class UserQrScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        composeRule.setContent {
            UserQrScreen(userId = "testUser123")
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
