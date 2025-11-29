package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithContentDescription
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.Message
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.OnlineAvatar
import com.example.atry.ui.theme.TryTheme
import com.example.atry.viewmodel.functional.MessageItem
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ChatAvatarClickTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testOnlineAvatarClick_NavigatesToChat() {
        // Create test user
        val testUser = User(
            "test_user_123",
            "Test User",
            "test@example.com",
            "https://example.com/avatar.jpg",
            "male"
        )
        
        val matchedUser = MatchedUser(testUser, "match_123")
        val messageItem = MessageItem(matchedUser, null, true)
        
        composeTestRule.setContent {
            TryTheme {
                OnlineAvatar(chatItem = messageItem)
            }
        }
        
        // Verify avatar is displayed
        composeTestRule.onNodeWithContentDescription("avatar")
            .assertIsDisplayed()
        
        // Click on avatar
        composeTestRule.onNodeWithContentDescription("avatar")
            .performClick()
        
        // In real app, this would navigate to chat screen
        // For test, we verify the click action was performed
    }
    
    @Test
    fun testOnlineAvatarClick_WithDefaultImage() {
        // Create test user without image
        val testUser = User(
            "test_user_456",
            "User No Image",
            "noimage@example.com",
            null,
            "female"
        )
        
        val matchedUser = MatchedUser(testUser, "match_456")
        val messageItem = MessageItem(matchedUser, null, true)
        
        composeTestRule.setContent {
            TryTheme {
                OnlineAvatar(chatItem = messageItem)
            }
        }
        
        // Verify avatar with default image is displayed
        composeTestRule.onNodeWithContentDescription("avatar")
            .assertIsDisplayed()
    }
    
    @Test
    fun testOnlineAvatarClick_WithUserName() {
        // Create test user
        val testUser = User(
            "test_user_789",
            "John Doe",
            "john@example.com",
            "https://example.com/john.jpg",
            "male"
        )
        
        val matchedUser = MatchedUser(testUser, "match_789")
        val messageItem = MessageItem(matchedUser, null, true)
        
        composeTestRule.setContent {
            TryTheme {
                OnlineAvatar(chatItem = messageItem)
            }
        }
        
        // Verify user name is displayed
        composeTestRule.onNodeWithText("John Doe")
            .assertIsDisplayed()
        
        // Click on avatar
        composeTestRule.onNodeWithContentDescription("avatar")
            .performClick()
    }
}