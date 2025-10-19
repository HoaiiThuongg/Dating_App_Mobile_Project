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

class BirthdayInputScreenInstrumentedTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun birthdayScreen_displaysAllComponents() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            // register navigator
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "birthday") {
                composable("birthday") { BirthdayInputScreen(navController = navController) }
                composable("gender") { Text("GENDER_SCREEN", modifier = Modifier.testTag("gender_screen")) }
            }
        }

        // các assertions hiển thị
        composeRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeRule.onNodeWithTag("birthday_title").assertIsDisplayed()
        composeRule.onNodeWithTag("birthday_field").assertExists().assertIsDisplayed()
        composeRule.onNodeWithTag("birthday_description").assertIsDisplayed()
        composeRule.onNodeWithText("Tiếp tục").assertIsDisplayed()
    }

    @Test
    fun birthdayScreen_inputBirthday_and_navigatesToGender() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "birthday") {
                composable("birthday") { BirthdayInputScreen(navController = navController) }
                composable("gender") { Text("GENDER_SCREEN", modifier = Modifier.testTag("gender_screen")) }
            }
        }

        // Nhập ngày sinh
        val sampleBirthday = "01/01/2000"
        composeRule.onNodeWithTag("birthday_field").performTextInput(sampleBirthday)

        // confirm text xuất hiện trong cây compose
        composeRule.onNodeWithText(sampleBirthday).assertIsDisplayed()

        // nhấn Tiếp tục
        composeRule.onNodeWithText("Tiếp tục").performClick()

        // kiểm tra nav đã chuyển sang "gender"
        composeRule.runOnIdle {
            assertEquals("gender", navController.currentBackStackEntry?.destination?.route)
        }

        // optional: kiểm tra màn hình gender xuất hiện
        composeRule.onNodeWithTag("gender_screen").assertIsDisplayed()
    }
}
