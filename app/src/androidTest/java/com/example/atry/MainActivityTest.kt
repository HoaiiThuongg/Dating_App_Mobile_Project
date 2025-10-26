package com.example.atry.ui.screens.loginScreens

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.test.*
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.ComposeNavigator
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.testing.TestNavHostController
import androidx.test.core.app.ApplicationProvider
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Assert.assertEquals
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class LoginScreenNavTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var navController: TestNavHostController

    @Before
    fun setup() {
        navController = TestNavHostController(ApplicationProvider.getApplicationContext())

        // Add ComposeNavigator on UI thread
        composeRule.activity.runOnUiThread {
            navController.navigatorProvider.addNavigator(ComposeNavigator())
        }

        // Use composeRule.setContent so Compose test rule manages lifecycle correctly
        composeRule.setContent {
            NavHost(navController = navController, startDestination = "login") {
                composable("login") { LoginScreen(navController = navController) }
                composable("main") { Text("MAIN_SCREEN_PLACEHOLDER") }
                composable("splash") { Text("SPLASH_SCREEN_PLACEHOLDER") }
            }
        }

        // Wait until UI is idle
        composeRule.waitForIdle()
    }

    @Test
    fun clicking_back_button_navigates_to_splash_and_shows_splash() {
        // debug: print UI tree if needed
        // composeRule.onRoot().printToLog("UI_TREE_BEFORE_BACK")

        // Ensure node exists and is clickable
        composeRule.onNodeWithTag("back_button").assertExists().assertHasClickAction().performClick()

        // Wait for navigation / recomposition
        composeRule.waitForIdle()

        // Verify nav controller route on main thread
        composeRule.runOnIdle {
            assertEquals("splash", navController.currentDestination?.route)
        }

        // Also verify that the splash screen content is shown
        composeRule.onNodeWithText("SPLASH_SCREEN_PLACEHOLDER").assertIsDisplayed()
    }

    @Test
    fun clicking_login_button_navigates_to_main_and_shows_main_screen() {
        // Input username and password (if your GrayBorderTextField uses Modifier.testTag)
        composeRule.onNodeWithTag("username_field").assertExists().performTextInput("user1")
        composeRule.onNodeWithTag("password_field").assertExists().performTextInput("pass1")

        // Debug: print UI tree to ensure nodes present
        // composeRule.onRoot().printToLog("UI_TREE_BEFORE_LOGIN")

        // Click login button
        composeRule.onNodeWithTag("login_button").assertExists().assertHasClickAction().performClick()

        // Wait for UI to settle
        composeRule.waitForIdle()

        // Assert navigation happened (on UI thread)
        composeRule.runOnIdle {
            assertEquals("main", navController.currentDestination?.route)
        }

        // Assert the main screen UI is visible
        composeRule.onNodeWithText("MAIN_SCREEN_PLACEHOLDER").assertIsDisplayed()
    }
}
