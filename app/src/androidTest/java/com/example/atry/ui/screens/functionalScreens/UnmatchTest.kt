package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.navigation.navController
import com.example.atry.ui.screens.functionalScreens.detailedProfile.DetailScreen
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for UNMATCH category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class UnmatchTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun unmatch_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            val testUser = User()
            testUser.userId = "test_user"
            testUser.name = "Test User"
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
