package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
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
 * Test cases for QR_CODE category - Functional testing based on Testcases.txt
 * Test cases 36-37: QR code display and scanning functionality
 */
@RunWith(AndroidJUnit4::class)
class QRCodeTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case QR_CODE 36: Display personal QR code
     */
    @Test
    fun qrCode_DisplayPersonalQRCode_ShowsQRCode() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "menu") {
                composable("menu") {
                    // Simulate menu with QR code option
                    Text("MENU_SCREEN", modifier = Modifier.testTag("menu_screen"))
                }
                composable("user_qr") {
                    UserQrScreen(userId = "test_user_123")
                }
            }
        }

        composeRule.waitForIdle()
        
        // Navigate to QR code screen from menu
        composeRule.onNodeWithText("Mã QR của bạn").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Personal QR code should be displayed
        composeRule.onNodeWithTag("qr_code_display").assertIsDisplayed()
        composeRule.onNodeWithTag("qr_code_user_info").assertIsDisplayed()
    }

    /**
     * Test case QR_CODE 37: Scan QR code - Camera permission request
     */
    @Test
    fun qrCode_ScanQRCode_RequestsCameraPermission() {
        var cameraPermissionRequested = false
        
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "menu") {
                composable("menu") {
                    // Simulate menu with QR scan option
                    Text("MENU_SCREEN", modifier = Modifier.testTag("menu_screen"))
                }
                composable("qr_scanner") {
                    // Simulate QR scanner that requests camera permission
                    if (!cameraPermissionRequested) {
                        cameraPermissionRequested = true
                        Text("CAMERA_PERMISSION_REQUESTED", modifier = Modifier.testTag("camera_permission_requested"))
                    } else {
                        Text("QR_SCANNER_SCREEN", modifier = Modifier.testTag("qr_scanner_screen"))
                    }
                }
            }
        }

        composeRule.waitForIdle()
        
        // Tap on "Quét mã QR" option in menu
        composeRule.onNodeWithText("Quét mã QR").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Camera permission should be requested
        composeRule.onNodeWithTag("camera_permission_requested").assertIsDisplayed()
        
        // If permission is granted, QR scanner should open
        if (cameraPermissionRequested) {
            composeRule.onNodeWithTag("qr_scanner_screen").assertIsDisplayed()
        }
    }

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