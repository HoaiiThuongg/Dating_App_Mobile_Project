package com.example.atry.ui.screens.auth.register

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.compose.ui.test.performTextInput
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for TAO_PROFILE category - Basic UI coverage tests
 * Focus on rendering screens and basic interactions for code coverage
 */
@RunWith(AndroidJUnit4::class)
class ProfileCreationTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun infoInput1_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }

    @Test
    fun infoInput1_CanInputName() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput1") {
                composable("registerInfoInput1") {
                    InfoInput1()
                }
            }
        }

        composeRule
            .onNodeWithText("Tên", substring = true)
            .performTextInput("Nguyễn Văn A")

        composeRule.waitForIdle()
    }

    @Test
    fun infoInput2_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerInfoInput2") {
                composable("registerInfoInput2") {
                    InfoInput2()
                }
            }
        }

        composeRule.waitForIdle()
    }

    @Test
    fun hobbiesInput_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "registerHobbiesInput") {
                composable("registerHobbiesInput") {
                    HobbiesInput()
                }
            }
        }

        composeRule.waitForIdle()
    }

    @Test
    fun picturesInput_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "picturesInput") {
                composable("picturesInput") {
                    PicturesInput()
                }
            }
        }

        composeRule.waitForIdle()
    }
}
