package com.example.atry.ui.screens.auth.register

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class PicturesInputTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screen_Displays_Correctly() {
        composeRule.setContent {
            PicturesInput()
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
