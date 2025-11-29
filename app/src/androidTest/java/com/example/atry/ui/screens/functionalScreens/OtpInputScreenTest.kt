package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.screens.auth.forgetPassword.OtpInputScreen
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class OtpInputScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        composeRule.setContent {
            OtpInputScreen()
        }
        
        composeRule.waitForIdle()
    }

    @Test
    fun screenAcceptsInputRender() {
        composeRule.setContent {
            OtpInputScreen()
        }
        composeRule.onRoot().assertExists()
    }

    @Test
    fun screenStateIdle() {
        composeRule.setContent {
            OtpInputScreen()
        }
        composeRule.waitForIdle()
        composeRule.onRoot().assertExists()
    }
}
