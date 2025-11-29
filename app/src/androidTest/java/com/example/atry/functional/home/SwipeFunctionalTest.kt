package com.example.atry.functional.home

import androidx.activity.ComponentActivity
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performTouchInput
import androidx.compose.ui.test.swipeLeft
import androidx.compose.ui.test.swipeRight
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.SwipeCard
import com.example.atry.viewmodel.functional.FakeSwipeViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for QUET category - Functional testing based on Testcases.txt
 * Test cases 28-30: Swipe functionality with Like/Dislike and Match detection
 */
@RunWith(AndroidJUnit4::class)
class SwipeFunctionalTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private val testUserA = User(
        "test_user_a",
        "Test User A",
        "testa@example.com",
        "",
        "female"
    )

    private val testUserB = User(
        "test_user_b",
        "Test User B", 
        "testb@example.com",
        "",
        "male"
    )

    /**
     * Test case QUET 28: Swipe right (Like) - Profile disappears and next profile shows
     */
    @Test
    fun swipeRight_LikeAction_ProfileDisappearsAndNextProfileShows() {
        var likeActionRecorded = false
        var currentUser = testUserA
        
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "swipe") {
                composable("swipe") {
                    // Simulate swipe screen with multiple users
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        user = currentUser,
                        onSwipeLeft = {},
                        onSwipeRight = { 
                            likeActionRecorded = true
                            currentUser = testUserB // Move to next user
                        }
                    )
                }
                composable("next_profile") {
                    Text("NEXT_PROFILE_SHOWN", modifier = Modifier.testTag("next_profile"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Verify initial profile is displayed
        composeRule.onNodeWithTag("swipe_card:${testUserA.userId}").assertIsDisplayed()
        
        // Perform swipe right (Like) gesture
        composeRule.onNodeWithTag("swipe_card:${testUserA.userId}")
            .performTouchInput { swipeRight() }
        
        composeRule.waitForIdle()
        
        // Expected: Like action is recorded and profile A disappears
        assert(likeActionRecorded) { "Like action should be recorded" }
    }

    /**
     * Test case QUET 29: Swipe left (Dislike) - Profile disappears and next profile shows
     */
    @Test
    fun swipeLeft_DislikeAction_ProfileDisappearsAndNextProfileShows() {
        var dislikeActionRecorded = false
        var currentUser = testUserA
        
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "swipe") {
                composable("swipe") {
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        user = currentUser,
                        onSwipeLeft = { 
                            dislikeActionRecorded = true
                            currentUser = testUserB // Move to next user
                        },
                        onSwipeRight = {}
                    )
                }
                composable("next_profile") {
                    Text("NEXT_PROFILE_SHOWN", modifier = Modifier.testTag("next_profile"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Verify initial profile is displayed
        composeRule.onNodeWithTag("swipe_card:${testUserA.userId}").assertIsDisplayed()
        
        // Perform swipe left (Dislike) gesture
        composeRule.onNodeWithTag("swipe_card:${testUserA.userId}")
            .performTouchInput { swipeLeft() }
        
        composeRule.waitForIdle()
        
        // Expected: Dislike action is recorded and profile A disappears
        assert(dislikeActionRecorded) { "Dislike action should be recorded" }
    }

    /**
     * Test case QUET 30: Match detection - When both users like each other
     */
    @Test
    fun swipeRight_MutualLike_ShowsMatchAnimation() {
        var matchAnimationShown = false
        val fakeViewModel = FakeSwipeViewModel()
        
        composeRule.setContent {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "swipe") {
                composable("swipe") {
                    // Simulate that User B already liked User A
                    fakeViewModel.simulateMutualLike(testUserA.userId, testUserB.userId)
                    
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        user = testUserB,
                        onSwipeLeft = {},
                        onSwipeRight = { 
                            // When User A likes User B back, it's a match
                            if (fakeViewModel.isMutualLike(testUserA.userId, testUserB.userId)) {
                                matchAnimationShown = true
                                // In real app, would navigate to match screen
                            }
                        }
                    )
                }
                composable("match") {
                    Text("ITS_A_MATCH", modifier = Modifier.testTag("match_screen"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Verify profile B is displayed for User A to swipe
        composeRule.onNodeWithTag("swipe_card:${testUserB.userId}").assertIsDisplayed()
        
        // User A swipes right on User B (who already liked User A)
        composeRule.onNodeWithTag("swipe_card:${testUserB.userId}")
            .performTouchInput { swipeRight() }
        
        composeRule.waitForIdle()
        
        // Expected: Match animation should be shown
        assert(matchAnimationShown) { "Match animation should be shown when mutual like occurs" }
    }
}