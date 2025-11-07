package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import com.example.atry.ui.components.qr.UserQrScreen
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for QR_CODE category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class QRCodeTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun qrCodeScreen_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "user_qr") {
                composable("user_qr") {
                    UserQrScreen(userId = "test_user")
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
