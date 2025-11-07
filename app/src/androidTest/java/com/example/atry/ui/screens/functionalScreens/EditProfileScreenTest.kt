package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for CHINH_SUA_HS category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class EditProfileScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun editProfileScreen_RendersCorrectly() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "editProfile") {
                composable("editProfile") {
                    EditProfileScreen()
                }
            }
        }

        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
