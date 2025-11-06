package com.example.atry.ui.screens.functionalScreens.chat

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.User
import com.example.atry.viewmodel.functional.FakeChatViewModelFactory
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ChatScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    private fun createFakeMatchedUser(): MatchedUser {
        val user = User()
        user.userId = "testUser123"
        user.email = "test@example.com"
        
        val matchedUser = MatchedUser()
        matchedUser.user = user
        matchedUser.matchId = "match123"
        return matchedUser
    }
    
    @Test
    fun screenDisplaysCorrectly() {
        val matchedUser = createFakeMatchedUser()
        val factory = FakeChatViewModelFactory(matchedUser)
        
        composeRule.setContent {
            ChatScreen(factory = factory)
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun screenRendersWithFactory() {
        val matchedUser = createFakeMatchedUser()
        val factory = FakeChatViewModelFactory(matchedUser)
        
        composeRule.setContent {
            ChatScreen(factory = factory)
        }
        
        composeRule.waitForIdle()
        // Basic smoke test - screen should load
    }
}
