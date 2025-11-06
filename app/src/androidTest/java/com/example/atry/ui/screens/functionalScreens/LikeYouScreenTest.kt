package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.viewmodel.composal.AlertViewModel
import com.example.atry.viewmodel.functional.FakeLikeYouViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class LikeYouScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        val fakeViewModel = FakeLikeYouViewModel()
        val alertViewModel = AlertViewModel()
        
        composeRule.setContent {
            LikeYouScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun screenRendersWithLoadingState() {
        val fakeViewModel = FakeLikeYouViewModel()
        fakeViewModel.pushState(
            com.example.atry.viewmodel.functional.LikedByState(isLoading = true)
        )
        val alertViewModel = AlertViewModel()
        
        composeRule.setContent {
            LikeYouScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Loading state should be displayed
    }
    
    @Test
    fun screenRendersWithEmptyState() {
        val fakeViewModel = FakeLikeYouViewModel()
        fakeViewModel.pushState(
            com.example.atry.viewmodel.functional.LikedByState(isLoading = false)
        )
        val alertViewModel = AlertViewModel()
        
        composeRule.setContent {
            LikeYouScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Empty state should be displayed
    }
}
