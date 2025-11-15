package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.assertIsDisplayed

import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.navigation.navController
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.User
import com.example.atry.viewmodel.functional.FakeMessageViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Test cases for TIN_NHAN category - Basic UI coverage tests
 */
@RunWith(AndroidJUnit4::class)
class MessageScreenTest {

    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()

    @Test
    fun messageScreen_RendersCorrectly() {
        val fakeVm = FakeMessageViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "message") {
                composable("message") {
                    MessageScreen(viewModel = fakeVm)
                }
            }
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Tin nhắn").assertIsDisplayed()
    }

    @Test
    fun messageScreen_DisplaysLoadingState() {
        val fakeVm = FakeMessageViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "message") {
                composable("message") {
                    MessageScreen(viewModel = fakeVm)
                }
            }
        }

        composeRule.runOnIdle {
            fakeVm.pushState(
                com.example.atry.viewmodel.functional.MatchState(isLoading = true)
            )
        }
        composeRule.waitForIdle()
        composeRule.onNodeWithText("Đang tải...").assertIsDisplayed()
    }

    @Test
    fun messageScreen_DisplaysEmptyState() {
        val fakeVm = FakeMessageViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "message") {
                composable("message") {
                    MessageScreen(viewModel = fakeVm)
                }
            }
        }

        composeRule.runOnIdle {
            fakeVm.pushState(
                com.example.atry.viewmodel.functional.MatchState(
                    isLoading = false,
                    matchedUsers = emptyList()
                )
            )
        }
        composeRule.waitForIdle()
        composeRule.onNodeWithText("Bạn chưa kết nối với ai").assertIsDisplayed()
        composeRule.onNodeWithText("Hãy đi ghép đôi với mọi người nào").assertIsDisplayed()
    }

    @Test
    fun messageScreen_DisplaysMessagesTitleWhenHasMatches() {
        val fakeVm = FakeMessageViewModel()
        composeRule.setContent {
            val navController = rememberNavController()
            com.example.atry.navigation.navController = navController
            NavHost(navController = navController, startDestination = "message") {
                composable("message") {
                    MessageScreen(viewModel = fakeVm)
                }
            }
        }

        val user = User("u1", "Test User", "u1@example.com", "", "male")
        val matched = MatchedUser(user, "match1")
        composeRule.runOnIdle {
            fakeVm.pushState(
                com.example.atry.viewmodel.functional.MatchState(
                    isLoading = false,
                    matchedUsers = listOf(matched)
                )
            )
            fakeVm.pushChatList(emptyList())
        }

        composeRule.waitForIdle()
        composeRule.onNodeWithText("Tin nhắn").assertIsDisplayed()
    }
}
