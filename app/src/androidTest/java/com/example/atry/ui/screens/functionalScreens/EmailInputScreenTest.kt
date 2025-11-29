package com.example.atry.ui.screens.functionalScreens

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.core.app.ApplicationProvider
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.screens.auth.register.EmailInputScreen
import com.example.atry.viewmodel.auth.FakeRegisterViewModel
import com.example.atry.viewmodel.composal.AlertViewModel
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class EmailInputScreenTest {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun screenDisplaysCorrectly() {
        val application = ApplicationProvider.getApplicationContext<android.app.Application>()
        val fakeViewModel = FakeRegisterViewModel(application)
        val alertViewModel = AlertViewModel()
        
        composeRule.setContent {
            EmailInputScreen(
                viewModel = fakeViewModel,
                alertViewModel = alertViewModel
            )
        }
        
        composeRule.waitForIdle()
        // Screen should render without crashing
    }
}
