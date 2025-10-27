package com.example.atry.ui.screens.registerScreens

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
class EmailScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var navController: TestNavHostController

    @Before
    fun setup() {
        navController = TestNavHostController(ApplicationProvider.getApplicationContext())

        // add Compose navigator on UI thread
        composeRule.activity.runOnUiThread {
            navController.navigatorProvider.addNavigator(ComposeNavigator())
        }

        // set NavHost with our test navController
        composeRule.setContent {
            NavHost(navController = navController, startDestination = "email") {
                composable("email") { EmailScreen(navController = navController) }
                composable("otp") { Text("OTP_SCREEN_PLACEHOLDER") }
                composable("back") { Text("BACK_SCREEN_PLACEHOLDER") }
            }
        }

        composeRule.waitForIdle()
    }

    @Test
    fun clicking_continue_navigates_to_otp_and_shows_otp_screen() {
        // ensure field exists and can input text
        composeRule.onNodeWithTag("email_field").assertExists().performTextInput("user@example.com")

        // click continue button
        composeRule.onNodeWithTag("continue_button").assertExists().assertHasClickAction().performClick()

        // wait for navigation
        composeRule.waitUntil(timeoutMillis = 3_000) {
            navController.currentDestination?.route == "otp"
        }

        // assert nav destination on UI thread
        composeRule.runOnIdle {
            assertEquals("otp", navController.currentDestination?.route)
        }

        // also assert OTP UI visible
        composeRule.onNodeWithText("OTP_SCREEN_PLACEHOLDER").assertIsDisplayed()
    }

    @Test
    fun clicking_back_navigates_to_back_route() {
        composeRule.onNodeWithTag("back_button").assertExists().performClick()
        composeRule.waitUntil(timeoutMillis = 3_000) {
            navController.currentDestination?.route == "back"
        }
        composeRule.runOnIdle {
            assertEquals("back", navController.currentDestination?.route)
        }
        composeRule.onNodeWithText("BACK_SCREEN_PLACEHOLDER").assertIsDisplayed()
    }
}
