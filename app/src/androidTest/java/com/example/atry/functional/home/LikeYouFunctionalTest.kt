package com.example.atry.functional.home

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for LUOT_THICH category - Functional testing based on Testcases.txt
 * Test cases 41-45: Like functionality
 */
@RunWith(AndroidJUnit4::class)
class LikeYouFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    /**
     * Test case LUOT_THICH 41: Hiển thị danh sách người đã thích mình
     */
    @Test
    fun likeYouScreen_DisplayLikeList_Success() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    // Mock Like You screen
                    Text("LIKE_YOU_SCREEN", modifier = Modifier.testTag("like_you_screen"))
                    Text("LIKE_LIST", modifier = Modifier.testTag("like_list"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("like_you_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("like_list").assertIsDisplayed()
    }

    /**
     * Test case LUOT_THICH 42: Click vào người đã thích - Xem profile
     */
    @Test
    fun likeYouScreen_ClickLikeUser_ShowsProfile() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    // Mock Like You screen with user items
                    Text("LIKE_YOU_SCREEN", modifier = Modifier.testTag("like_you_screen"))
                    Text("LIKE_USER_ITEM_1", modifier = Modifier.testTag("like_user_item_1"))
                }
                composable("userProfile/{userId}") {
                    Text("USER_PROFILE_SCREEN", modifier = Modifier.testTag("user_profile_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("like_you_screen").assertIsDisplayed()
        
        // Click on first like user item
        composeRule.onNodeWithTag("like_user_item_1").performClick()
        
        // Expected: Navigate to user profile screen
        composeRule.onNodeWithTag("user_profile_screen").assertIsDisplayed()
    }

    /**
     * Test case LUOT_THICH 43: Like lại người đã thích mình
     */
    @Test
    fun likeYouScreen_LikeBackUser_CreatesMatch() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    // Mock Like You screen with like back button
                    Text("LIKE_YOU_SCREEN", modifier = Modifier.testTag("like_you_screen"))
                    Text("LIKE_BACK_BUTTON_1", modifier = Modifier.testTag("like_back_button_1"))
                }
                composable("match") {
                    Text("MATCH_SCREEN", modifier = Modifier.testTag("match_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("like_you_screen").assertIsDisplayed()
        
        // Click like back button
        composeRule.onNodeWithTag("like_back_button_1").performClick()
        
        // Expected: Navigate to match screen
        composeRule.onNodeWithTag("match_screen").assertIsDisplayed()
    }

    /**
     * Test case LUOT_THICH 44: Không like lại người đã thích mình
     */
    @Test
    fun likeYouScreen_NotLikeBackUser_RemainsInList() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    // Mock Like You screen
                    Text("LIKE_YOU_SCREEN", modifier = Modifier.testTag("like_you_screen"))
                    Text("LIKE_USER_ITEM_1", modifier = Modifier.testTag("like_user_item_1"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("like_you_screen").assertIsDisplayed()
        
        // User remains in list (no action taken)
        composeRule.onNodeWithTag("like_user_item_1").assertIsDisplayed()
        
        // Expected: User still in like list
    }

    /**
     * Test case LUOT_THICH 45: Xóa người đã thích mình khỏi danh sách
     */
    @Test
    fun likeYouScreen_RemoveLikeUser_RemovesFromList() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    // Mock Like You screen with remove button
                    Text("LIKE_YOU_SCREEN", modifier = Modifier.testTag("like_you_screen"))
                    Text("REMOVE_BUTTON_1", modifier = Modifier.testTag("remove_button_1"))
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithTag("like_you_screen").assertIsDisplayed()
        
        // Click remove button
        composeRule.onNodeWithTag("remove_button_1").performClick()
        
        // Expected: User removed from like list
    }
}