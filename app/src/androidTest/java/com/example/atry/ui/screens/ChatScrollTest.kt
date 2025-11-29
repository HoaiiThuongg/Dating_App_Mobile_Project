package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performTouchInput
import androidx.compose.ui.test.swipeDown
import androidx.compose.ui.test.swipeUp
import androidx.compose.ui.unit.dp
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ChatScrollTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testChatScroll_Upward() {
        composeTestRule.setContent {
            TryTheme {
                RealChatScrollTest()
            }
        }
        
        // Perform upward scroll - scroll through messages
        composeTestRule.onNodeWithText("Message 1")
            .assertIsDisplayed()
        
        // Scroll up to see more messages
        composeTestRule.onNodeWithText("Message 25")
            .performTouchInput {
                swipeUp(startY = bottom, endY = top)
            }
        
        // Verify more messages are visible after scroll
        composeTestRule.onNodeWithText("Message 30")
            .assertIsDisplayed()
    }
    
    @Test
    fun testChatScroll_Downward() {
        composeTestRule.setContent {
            TryTheme {
                RealChatScrollTest()
            }
        }
        
        // First scroll up to have content to scroll down
        composeTestRule.onNodeWithText("Message 25")
            .performTouchInput {
                swipeUp()
            }
        
        // Then scroll down
        composeTestRule.onNodeWithText("Message 30")
            .performTouchInput {
                swipeDown()
            }
        
        // Verify we can see earlier messages again
        composeTestRule.onNodeWithText("Message 1")
            .assertIsDisplayed()
    }
    
    @Test
    fun testChatScroll_MessageVisibility() {
        composeTestRule.setContent {
            TryTheme {
                RealChatScrollTest()
            }
        }
        
        // Verify initial messages are visible
        composeTestRule.onNodeWithText("Message 1")
            .assertIsDisplayed()
        composeTestRule.onNodeWithText("Message 5")
            .assertIsDisplayed()
    }
    
    @Test
    fun testChatScroll_LargeDataset() {
        composeTestRule.setContent {
            TryTheme {
                RealChatScrollTest(messageCount = 100)
            }
        }
        
        // Test with large dataset - verify scroll performance
        composeTestRule.onNodeWithText("Message 1")
            .assertIsDisplayed()
        
        // Scroll to middle
        composeTestRule.onNodeWithText("Message 50")
            .performTouchInput {
                swipeUp()
            }
        
        // Verify middle messages are visible
        composeTestRule.onNodeWithText("Message 55")
            .assertIsDisplayed()
    }
}

@Composable
private fun RealChatScrollTest(messageCount: Int = 50) {
    val messages = remember { 
        (1..messageCount).map { "Message $it" }
    }
    
    LazyColumn(
        modifier = Modifier.fillMaxSize()
    ) {
        items(messages) { message ->
            Text(
                text = message,
                modifier = Modifier.padding(16.dp)
            )
        }
    }
}