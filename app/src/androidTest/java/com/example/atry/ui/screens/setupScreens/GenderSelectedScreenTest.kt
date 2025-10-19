package com.example.atry.ui.screens.setupScreens

import android.content.Context
import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.*
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.ComposeNavigator
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.testing.TestNavHostController
import androidx.test.core.app.ApplicationProvider
import org.junit.Assert.assertEquals
import org.junit.Rule
import org.junit.Test

class GenderSelectedScreenInstrumentedTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun genderScreen_displaysAllComponents() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            // register navigator so NavHost works in tests
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "gender") {
                composable("gender") { GenderSelectedScreen(navController = navController) }
                composable("hobby") { Text("HOBBY_SCREEN", modifier = Modifier.testTag("hobby_screen")) }
            }
        }

        // assert hiển thị các phần tử chính
        composeRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeRule.onNodeWithTag("gender_title").assertIsDisplayed()
        composeRule.onNodeWithTag("gender_male_box").assertIsDisplayed()
        composeRule.onNodeWithTag("gender_female_box").assertIsDisplayed()
        composeRule.onNodeWithTag("gender_unspecified_box").assertIsDisplayed()
        composeRule.onNodeWithTag("skip_button_box").assertIsDisplayed()

        // optional: assert the texts exist inside the boxes
        composeRule.onNodeWithText("Nam").assertIsDisplayed()
        composeRule.onNodeWithText("Nữ").assertIsDisplayed()
        composeRule.onNodeWithText("Không muốn tiết lộ").assertIsDisplayed()
        composeRule.onNodeWithText("Bỏ qua").assertIsDisplayed()
    }

    @Test
    fun genderScreen_skipNavigatesToHobby() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "gender") {
                composable("gender") { GenderSelectedScreen(navController = navController) }
                composable("hobby") { Text("HOBBY_SCREEN", modifier = Modifier.testTag("hobby_screen")) }
            }
        }

        // click skip (dùng text hoặc testTag)
        composeRule.onNodeWithText("Bỏ qua").performClick()

        // ensure navigation happened
        composeRule.runOnIdle {
            assertEquals("hobby", navController.currentBackStackEntry?.destination?.route)
        }

        // check hobby screen shown
        composeRule.onNodeWithTag("hobby_screen").assertIsDisplayed()
    }
}
