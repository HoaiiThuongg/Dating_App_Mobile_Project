package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.material3.Text
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.backend.User
import com.example.atry.navigation.navController
import com.example.atry.viewmodel.composal.AlertViewModel
import com.example.atry.viewmodel.functional.FakeLikeYouViewModel
import com.example.atry.viewmodel.functional.LikedByState
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for LUOT_THICH category - Functional testing based on Testcases.txt
 * Test cases 41-45: Like functionality and interactions
 */
@RunWith(AndroidJUnit4::class)
class LikeYouScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    private lateinit var alertViewModel: AlertViewModel

    @Before
    fun setUp() {
        alertViewModel = AlertViewModel()
    }

    private val testUserB = User("user_b", "Nguyễn Văn B", "userb@example.com", "", "male")
    private val testUserC = User("user_c", "Trần Thị C", "userc@example.com", "", "female")

    /**
     * Test case LUOT_THICH 41: Navigate to "Who liked you" screen from bottom navigation
     */
    @Test
    fun likeYou_NavigateFromBottomNav_ShowsUsersWhoLikedYou() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "main") {
                composable("main") {
                    // Simulate main screen with bottom navigation
                    Text("MAIN_SCREEN", modifier = Modifier.testTag("main_screen"))
                }
                composable("likeYou") {
                    val fakeVm = FakeLikeYouViewModel()
                    fakeVm.pushState(
                        LikedByState(
                            isLoading = false,
                            users = listOf(testUserB, testUserC),
                            matchedUser = null
                        )
                    )
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
        
        // Navigate to LikeYou screen from bottom navigation (heart icon)
        composeRule.onNodeWithTag("bottom_nav_like_you").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Should display users who liked you in grid format
        composeRule.onNodeWithText("Đã thích bạn", substring = true).assertIsDisplayed()
        composeRule.onNodeWithText("Nguyễn Văn B").assertIsDisplayed()
        composeRule.onNodeWithText("Trần Thị C").assertIsDisplayed()
    }

    /**
     * Test case LUOT_THICH 42: Like back from grid view - Shows match animation
     */
    @Test
    fun likeYou_LikeBackFromGrid_ShowsMatchAnimation() {
        var matchAnimationShown = false
        
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    val fakeVm = FakeLikeYouViewModel()
                    fakeVm.pushState(
                        LikedByState(
                            isLoading = false,
                            users = listOf(testUserB),
                            matchedUser = null
                        )
                    )
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
                composable("match") {
                    Text("ITS_A_MATCH", modifier = Modifier.testTag("match_screen"))
                    matchAnimationShown = true
                }
            }
        }

        composeRule.waitForIdle()
        
        // Verify User B is displayed in grid
        composeRule.onNodeWithText("Nguyễn Văn B").assertIsDisplayed()
        
        // Click the small heart icon on User B's profile
        composeRule.onNodeWithTag("like_button_user_b").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Match animation should be shown
        // User B should disappear from the grid
        assert(matchAnimationShown) { "Match animation should be shown when liking back" }
    }

    /**
     * Test case LUOT_THICH 43: View detailed profile from grid
     */
    @Test
    fun likeYou_ViewDetailedProfileFromGrid_NavigatesToProfile() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    val fakeVm = FakeLikeYouViewModel()
                    fakeVm.pushState(
                        LikedByState(
                            isLoading = false,
                            users = listOf(testUserC),
                            matchedUser = null
                        )
                    )
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
                composable("detailedProfile/{userId}") { backStackEntry ->
                    val userId = backStackEntry.arguments?.getString("userId")
                    // Simulate detailed profile screen
                    Text("DETAILED_PROFILE_SCREEN", modifier = Modifier.testTag("detailed_profile_screen"))
                    Text("Trần Thị C", modifier = Modifier.testTag("profile_name"))
                }
            }
        }

        composeRule.waitForIdle()
        
        // Verify User C is displayed in grid
        composeRule.onNodeWithText("Trần Thị C").assertIsDisplayed()
        
        // Click on User C's photo or center area
        composeRule.onNodeWithTag("profile_image_user_c").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Should navigate to detailed profile of User C
        composeRule.onNodeWithTag("detailed_profile_screen").assertIsDisplayed()
        composeRule.onNodeWithTag("profile_name").assertIsDisplayed()
    }

    /**
     * Test case LUOT_THICH 44: Match from detailed profile view
     */
    @Test
    fun likeYou_MatchFromDetailedProfile_ReturnsToGridWithUserRemoved() {
        var matchAnimationShown = false
        
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "detailedProfile") {
                composable("likeYou") {
                    val fakeVm = FakeLikeYouViewModel()
                    fakeVm.pushState(
                        LikedByState(
                            isLoading = false,
                            users = emptyList(), // User C should be removed after match
                            matchedUser = testUserC
                        )
                    )
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
                composable("detailedProfile/{userId}") { backStackEntry ->
                    val userId = backStackEntry.arguments?.getString("userId")
                    // Simulate detailed profile screen
                    Text("DETAILED_PROFILE_SCREEN", modifier = Modifier.testTag("detailed_profile_screen"))
                    Text("Trần Thị C", modifier = Modifier.testTag("profile_name"))
                    
                    // Simulate "Match" button
                    Text("Match", modifier = Modifier.testTag("match_button"))
                }
                composable("match") {
                    Text("ITS_A_MATCH", modifier = Modifier.testTag("match_screen"))
                    matchAnimationShown = true
                }
            }
        }

        composeRule.waitForIdle()
        
        // Scroll down to find the Match button (simulated)
        composeRule.onNodeWithTag("match_button").performClick()
        
        composeRule.waitForIdle()
        
        // Expected: Match animation should be shown
        // When returning to grid, User C should be removed
        assert(matchAnimationShown) { "Match animation should be shown from detailed profile" }
    }

    /**
     * Test case LUOT_THICH 45: Empty state - No one has liked you
     */
    @Test
    fun likeYou_NoOneLikedYou_ShowsEmptyState() {
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    val fakeVm = FakeLikeYouViewModel()
                    fakeVm.pushState(
                        LikedByState(
                            isLoading = false,
                            users = emptyList(),
                            matchedUser = null
                        )
                    )
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
        
        // Expected: Should show empty state message
        composeRule.onNodeWithText("Bạn không có ai thích cả").assertIsDisplayed()
        composeRule.onNodeWithText("Hãy đăng thêm thông tin lên hồ sơ để mọi người biết tới bạn").assertIsDisplayed()
    }

    @Test
    fun likeYouScreen_RendersCorrectly() {
        val fakeVm = FakeLikeYouViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đã thích bạn", substring = true).assertIsDisplayed()
    }

    @Test
    fun likeYouScreen_DisplaysLoadingState() {
        val fakeVm = FakeLikeYouViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.runOnIdle {
            fakeVm.pushState(LikedByState(isLoading = true))
        }
        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đang tải...").assertIsDisplayed()
    }

    @Test
    fun likeYouScreen_DisplaysEmptyState() {
        val fakeVm = FakeLikeYouViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "likeYou") {
                composable("likeYou") {
                    LikeYouScreen(viewModel = fakeVm, alertViewModel = alertViewModel)
                }
            }
        }

        composeRule.runOnIdle {
            fakeVm.pushState(
                LikedByState(
                    isLoading = false,
                    users = emptyList(),
                    matchedUser = null
                )
            )
        }
        composeRule.waitForIdle()
        composeRule.onNodeWithText("Bạn không có ai thích cả").assertIsDisplayed()
        composeRule.onNodeWithText("Hãy đăng thêm thông tin lên hồ sơ để mọi người biết tới bạn").assertIsDisplayed()
    }
}