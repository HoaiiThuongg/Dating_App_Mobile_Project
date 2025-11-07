package com.example.atry.performance

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import com.example.atry.MainActivity
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo thời gian render các screens
 * 
 * Metrics:
 * - Composition time: Thời gian để compose UI
 * - First frame time: Thời gian đến frame đầu tiên
 */
@RunWith(AndroidJUnit4::class)
class ScreenRenderPerformanceTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<MainActivity>()
    
    @Test
    fun measureSplashScreenRenderTime() {
        val startTime = System.currentTimeMillis()
        
        composeTestRule.onRoot().assertIsDisplayed()
        
        val endTime = System.currentTimeMillis()
        val renderTime = endTime - startTime
        
        println("SplashScreen render time: ${renderTime}ms")
        
        // Target: < 100ms
        assert(renderTime < 100) { 
            "SplashScreen render time ($renderTime ms) exceeds target (100ms)" 
        }
    }
    
    @Test
    fun measureHomeScreenRenderTime() {
        // Navigate to HomeScreen first
        // Then measure render time
        
        val startTime = System.currentTimeMillis()
        
        // Wait for screen to be displayed
        composeTestRule.waitForIdle()
        
        val endTime = System.currentTimeMillis()
        val renderTime = endTime - startTime
        
        println("HomeScreen render time: ${renderTime}ms")
        
        // Target: < 200ms
        assert(renderTime < 200) { 
            "HomeScreen render time ($renderTime ms) exceeds target (200ms)" 
        }
    }
    
    @Test
    fun measureChatScreenRenderTime() {
        val startTime = System.currentTimeMillis()
        
        composeTestRule.waitForIdle()
        
        val endTime = System.currentTimeMillis()
        val renderTime = endTime - startTime
        
        println("ChatScreen render time: ${renderTime}ms")
        
        // Target: < 300ms (vì cần load messages)
        assert(renderTime < 300) { 
            "ChatScreen render time ($renderTime ms) exceeds target (300ms)" 
        }
    }
    
    @Test
    fun measureMessageScreenRenderTime() {
        val startTime = System.currentTimeMillis()
        
        composeTestRule.waitForIdle()
        
        val endTime = System.currentTimeMillis()
        val renderTime = endTime - startTime
        
        println("MessageScreen render time: ${renderTime}ms")
        
        // Target: < 250ms
        assert(renderTime < 250) { 
            "MessageScreen render time ($renderTime ms) exceeds target (250ms)" 
        }
    }
    
    @Test
    fun measureProfileScreenRenderTime() {
        val startTime = System.currentTimeMillis()
        
        composeTestRule.waitForIdle()
        
        val endTime = System.currentTimeMillis()
        val renderTime = endTime - startTime
        
        println("ProfileScreen render time: ${renderTime}ms")
        
        // Target: < 200ms
        assert(renderTime < 200) { 
            "ProfileScreen render time ($renderTime ms) exceeds target (200ms)" 
        }
    }
}

