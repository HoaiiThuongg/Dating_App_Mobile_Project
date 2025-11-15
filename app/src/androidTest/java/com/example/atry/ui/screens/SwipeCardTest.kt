package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.SwipeCard
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class SwipeCardTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testSwipeCard_Displayed() {
        // Create test user
        val testUser = User(
            "test_user_123",
            "Test User",
            "test@example.com",
            "https://example.com/avatar.jpg",
            "male"
        )
        
        composeTestRule.setContent {
            TryTheme {
                SwipeCard(
                    modifier = androidx.compose.ui.Modifier,
                    user = testUser, 
                    onSwipeLeft = {}, 
                    onSwipeRight = {}
                )
            }
        }
        
        // Verify swipe card is displayed with correct testTag
        composeTestRule.onNodeWithTag("swipe_card:test_user_123")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeCard_ProfileInfoDisplayed() {
        // Create test user
        val testUser = User(
            "test_user_456",
            "John Doe",
            "john@example.com",
            "https://example.com/john.jpg",
            "male"
        )
        
        composeTestRule.setContent {
            TryTheme {
                SwipeCard(
                    modifier = androidx.compose.ui.Modifier,
                    user = testUser, 
                    onSwipeLeft = {}, 
                    onSwipeRight = {}
                )
            }
        }
        
        // Verify profile info is displayed with correct testTag
        composeTestRule.onNodeWithTag("profile_info:test_user_456")
            .assertIsDisplayed()
    }
}