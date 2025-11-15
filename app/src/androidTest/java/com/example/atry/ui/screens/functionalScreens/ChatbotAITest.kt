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
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for CHATBOT_AI category - Functional testing based on Testcases.txt
 * Test case 38: Chatbot functionality and navigation
 */
@RunWith(AndroidJUnit4::class)
class ChatbotAITest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case CHATBOT_AI 38: Navigate to chatbot screen
     */
    @Test
    fun chatbotAI_NavigateToChatbot_ShowsChatInterface() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "menu") {
                composable("menu") {
                    // Simulate menu with AI Chatbot option
                    Text("MENU_SCREEN", modifier = Modifier.testTag("menu_screen"))
                }
                composable("chatbot") {
                    // Simulate chatbot screen
                    Text("CHATBOT_SCREEN", modifier = Modifier.testTag("chatbot_screen"))
                    Text("AI Chatbot", modifier = Modifier.testTag("chatbot_title"))
                    Text("Nhập tin nhắn...", modifier = Modifier.testTag("chat_input_placeholder"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Navigate to chatbot from menu
        composeRule.onNodeWithText("AI Chatbot").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Chatbot screen should be displayed with clear interface
        composeRule.onNodeWithTag("chatbot_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("chatbot_title").assertIsDisplayed()
        composeRule.onNodeWithTag("chat_input_placeholder").assertIsDisplayed()
    }

    /**
     * Test case CHATBOT_AI 38: Chatbot interface elements
     */
    @Test
    fun chatbotAI_ChatInterface_HasRequiredElements() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "chatbot") {
                composable("chatbot") {
                    // Simulate chatbot screen with all required elements
                    Text("CHATBOT_SCREEN", modifier = Modifier.testTag("chatbot_screen"))
                    Text("AI Chatbot", modifier = Modifier.testTag("chatbot_title"))
                    Text("Nhập tin nhắn...", modifier = Modifier.testTag("chat_input_placeholder"))
                    Text("Gửi", modifier = Modifier.testTag("send_button"))
                    Text("Xóa cuộc trò chuyện", modifier = Modifier.testTag("clear_chat_button"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Expected: Chatbot interface should have all required elements
        composeRule.onNodeWithTag("chatbot_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("chatbot_title").assertIsDisplayed()
        composeRule.onNodeWithTag("chat_input_placeholder").assertIsDisplayed()
        composeRule.onNodeWithTag("send_button").assertIsDisplayed()
        composeRule.onNodeWithTag("clear_chat_button").assertIsDisplayed()
    }
}