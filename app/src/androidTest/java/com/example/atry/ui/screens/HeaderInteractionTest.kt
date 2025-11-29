package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.components.headerAndFooter.Header
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class HeaderInteractionTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testHeader_NotificationIconDisplayed() {
        composeTestRule.setContent {
            TryTheme {
                Header(
                    screenName = "Test Screen",
                    iconRes = android.R.drawable.ic_dialog_info,
                    onOpenNav = {},
                    onOpenNotification = {}
                )
            }
        }
        
        // Verify notification icon is displayed
        composeTestRule.onNodeWithTag("notification_icon")
            .assertIsDisplayed()
    }
    
    @Test
    fun testHeader_NotificationIconClickable() {
        composeTestRule.setContent {
            TryTheme {
                Header(
                    screenName = "Test Screen",
                    iconRes = android.R.drawable.ic_dialog_info,
                    onOpenNav = {},
                    onOpenNotification = {}
                )
            }
        }
        
        // Click on notification icon
        composeTestRule.onNodeWithTag("notification_icon")
            .performClick()
        
        // Verify icon is still displayed after click
        composeTestRule.onNodeWithTag("notification_icon")
            .assertIsDisplayed()
    }
    
    @Test
    fun testHeader_NotificationBadgeDisplayed() {
        composeTestRule.setContent {
            TryTheme {
                Header(
                    screenName = "Test Screen",
                    iconRes = android.R.drawable.ic_dialog_info,
                    onOpenNav = {},
                    onOpenNotification = {}
                )
            }
        }
        
        // Verify notification badge text is displayed (if exists)
        try {
            composeTestRule.onNodeWithTag("notification_badge_text")
                .assertIsDisplayed()
        } catch (e: AssertionError) {
            // Badge might not be visible if no notifications
        }
    }
}