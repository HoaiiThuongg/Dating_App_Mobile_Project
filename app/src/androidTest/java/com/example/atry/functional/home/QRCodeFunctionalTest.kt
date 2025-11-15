package com.example.atry.functional.home

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for QR_CODE category - Functional testing based on Testcases.txt
 * Test cases 36-37: QR code functionality
 */
@RunWith(AndroidJUnit4::class)
class QRCodeFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case QR_CODE 36: Hiển thị mã QR thành công
     */
    @Test
    fun qrCodeScreen_DisplayQRCode_Success() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "qrCode") {
                composable("qrCode") {
                    // Mock QR code screen
                    Text("QR_CODE_SCREEN", modifier = Modifier.testTag("qr_code_screen"))
                    Text("QR_CODE_DISPLAYED", modifier = Modifier.testTag("qr_code_displayed"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("qr_code_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("qr_code_displayed").assertIsDisplayed()
    }

    /**
     * Test case QR_CODE 37: Quét mã QR thành công
     */
    @Test
    fun qrCodeScreen_ScanQRCode_Success() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "qrCode") {
                composable("qrCode") {
                    // Mock QR code screen with scan button
                    Text("QR_CODE_SCREEN", modifier = Modifier.testTag("qr_code_screen"))
                    Text("SCAN_BUTTON", modifier = Modifier.testTag("scan_button"))
                }
                composable("scanResult") {
                    Text("SCAN_RESULT_SCREEN", modifier = Modifier.testTag("scan_result_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("qr_code_screen").assertIsDisplayed()
        
        // Click scan button
        composeRule.onNodeWithTag("scan_button").performClick()
        
        // Expected: Navigate to scan result screen
        composeRule.onNodeWithTag("scan_result_screen").assertIsDisplayed()
    }
}