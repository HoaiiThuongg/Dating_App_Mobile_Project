package com.example.atry.ui.components.qr

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class UserQrScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        // Use NavHost to properly handle navigation and avoid activity lifecycle issues
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "user_qr") {
                composable("user_qr") {
                    UserQrScreen(userId = "testUser123")
                }
            }
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
