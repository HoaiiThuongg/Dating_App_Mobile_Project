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

class HobbySelectedScreenInstrumentedTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun hobbyScreen_displaysAllComponents() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            // register navigator for test navController
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "hobby") {
                composable("hobby") { HobbySelectedScreen(navController = navController) }
                composable("uploadPhoto") { Text("UPLOAD_SCREEN", modifier = Modifier.testTag("upload_screen")) }
            }
        }

        // kiểm tra hiển thị các thành phần chính
        composeRule.onNodeWithTag("back_button").assertIsDisplayed()
        composeRule.onNodeWithTag("hobby_title").assertIsDisplayed()

        // kiểm tra ít nhất một item trong danh sách ("Button 0")
        composeRule.onNodeWithText("Button 0").assertExists().assertIsDisplayed()

        // kiểm tra nút Bỏ qua hiển thị
        composeRule.onNodeWithText("Bỏ qua").assertIsDisplayed()
    }

    @Test
    fun hobbyScreen_clickItem_and_skipNavigatesToUpload() {
        val context = ApplicationProvider.getApplicationContext<Context>()
        val navController = TestNavHostController(context)

        composeRule.setContent {
            navController.navigatorProvider.addNavigator(ComposeNavigator())

            NavHost(navController = navController, startDestination = "hobby") {
                composable("hobby") { HobbySelectedScreen(navController = navController) }
                composable("uploadPhoto") { Text("UPLOAD_SCREEN", modifier = Modifier.testTag("upload_screen")) }
            }
        }

        // click item "Button 0" (testTag also available as "hobby_button_Button 0")
        composeRule.onNodeWithText("Button 0").performClick()

        // click skip button (text)
        composeRule.onNodeWithText("Bỏ qua").performClick()

        // assert navigation happened to "uploadPhoto"
        composeRule.runOnIdle {
            assertEquals("uploadPhoto", navController.currentBackStackEntry?.destination?.route)
        }

        // verify target screen displayed
        composeRule.onNodeWithTag("upload_screen").assertIsDisplayed()
    }
}
