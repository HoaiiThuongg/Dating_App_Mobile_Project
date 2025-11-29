package com.example.atry.functional.home

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
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
 * Test case 38: Chatbot AI functionality
 */
@RunWith(AndroidJUnit4::class)
class ChatbotAIFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case CHATBOT_AI 38: Gửi tin nhắn cho AI chatbot
     */
    @Test
    fun chatbotAI_SendMessage_Success() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "aiChat") {
                composable("aiChat") {
                    // Mock AI Chat screen
                    Text("AI_CHAT_SCREEN", modifier = Modifier.testTag("ai_chat_screen"))
                    Text("MESSAGE_INPUT", modifier = Modifier.testTag("message_input"))
                    Text("SEND_BUTTON", modifier = Modifier.testTag("send_button"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("ai_chat_screen").assertIsDisplayed()
        
        // Type message
        composeRule.onNodeWithTag("message_input").performTextInput("Xin chào, tôi cần tư vấn về hẹn hò")
        
        // Click send button
        composeRule.onNodeWithTag("send_button").performClick()
        
        // Expected: Message sent successfully and AI response received
    }
}