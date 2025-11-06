package com.example.atry.ui.screens.functionalScreens.detailedProfile

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class DetailedProfileScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    private fun createFakeUser(): User {
        val user = User()
        user.userId = "testUser123"
        user.email = "test@example.com"
        return user
    }
    
    @Test
    fun screenDisplaysCorrectly() {
        val user = createFakeUser()
        val alertViewModel = AlertViewModel()
        
        composeRule.setContent {
            DetailScreen(
                user = user,
                alertViewModel = alertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
