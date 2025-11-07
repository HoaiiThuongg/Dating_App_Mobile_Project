package com.example.atry.ui.screens.functionalScreens.chat

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.MessageService
import com.example.atry.backend.User
import com.example.atry.backend.UserService
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.functional.ChatViewModelFactory
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for HOP_CHAT category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class ChatScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun chatScreen_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            
            // Create a minimal factory for testing
            val messageService = MessageService()
            val userService = UserService()
            val user = User()
            user.userId = "test_user"
            user.name = "Test User"
            
            val matchedUser = MatchedUser(user, "match123")
            
            val factory = ChatViewModelFactory(
                messageService = messageService,
                userService = userService,
                matchedUser = matchedUser
            )
            
            NavHost(navController = navController, startDestination = "chat") {
                composable("chat") {
                    ChatScreen(factory = factory)
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
