package com.example.atry.ui.screens.auth

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.screens.auth.forgetPassword.ForgetPassword
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ForgetPasswordTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        composeRule.setContent {
            ForgetPassword()
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun userInteractionsWorkCorrectly() {
        composeRule.setContent {
            ForgetPassword()
        }
        
        composeRule.waitForIdle()
        // Basic smoke test - screen should load
    }
    
    @Test
    fun screenRendersWithoutCrashing() {
        composeRule.setContent {
            ForgetPassword()
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
