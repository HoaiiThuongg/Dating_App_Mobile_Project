package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.backend.MessageService
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.SwipeService
import com.example.atry.viewmodel.composal.AlertViewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import com.example.atry.ui.screens.functionalScreens.detailedProfile.DetailScreen
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for Detailed Profile Screen - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class DetailedProfileScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun detailedProfileScreen_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            val testUser = User("test_user", "Test User", "test@example.com", "default.jpg", "Nam")
            val alertViewModel = AlertViewModel()
            NavHost(navController = navController, startDestination = "detailedProfile") {
                composable("detailedProfile") {
                    DetailScreen(user = testUser, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
