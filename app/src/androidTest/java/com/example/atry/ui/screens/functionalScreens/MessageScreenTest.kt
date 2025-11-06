package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.viewmodel.functional.FakeMessageViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class MessageScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        val fakeViewModel = FakeMessageViewModel()
        
        composeRule.setContent {
            MessageScreen(viewModel = fakeViewModel)
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
    
    @Test
    fun screenRendersWithLoadingState() {
        val fakeViewModel = FakeMessageViewModel()
        fakeViewModel.pushState(
            com.example.atry.viewmodel.functional.MatchState(isLoading = true)
        )
        
        composeRule.setContent {
            MessageScreen(viewModel = fakeViewModel)
        }
        
        composeRule.waitForIdle()
        // Loading state should be displayed
    }
    
    @Test
    fun screenRendersWithEmptyState() {
        val fakeViewModel = FakeMessageViewModel()
        fakeViewModel.pushState(
            com.example.atry.viewmodel.functional.MatchState(isLoading = false)
        )
        
        composeRule.setContent {
            MessageScreen(viewModel = fakeViewModel)
        }
        
        composeRule.waitForIdle()
        // Empty state should be displayed
    }
}
