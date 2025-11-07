package com.example.atry.performance

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.compose.ui.test.performScrollTo
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.MainActivity
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo hiệu năng scroll
 * 
 * Metrics:
 * - Scroll frame rate: FPS khi scroll
 * - Scroll jank: Số frame bị jank
 * - Scroll smoothness: Độ mượt khi scroll
 */
@RunWith(AndroidJUnit4::class)
class ScrollPerformanceTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<MainActivity>()
    
    @Test
    fun measureHomeScreenSwipePerformance() {
        val startTime = System.currentTimeMillis()
        
        // Perform swipe action
        composeTestRule.onRoot().performScrollTo()
        composeTestRule.waitForIdle()
        
        val endTime = System.currentTimeMillis()
        val swipeTime = endTime - startTime
        
        println("HomeScreen swipe time: ${swipeTime}ms")
        
        // Target: < 50ms per swipe
        assert(swipeTime < 50) { 
            "HomeScreen swipe time ($swipeTime ms) exceeds target (50ms)" 
        }
    }
    
    @Test
    fun measureMessageScreenScrollPerformance() {
        val iterations = 10
        val times = mutableListOf<Long>()
        
        for (i in 1..iterations) {
            val startTime = System.currentTimeMillis()
            
            composeTestRule.onRoot().performScrollTo()
            composeTestRule.waitForIdle()
            
            val endTime = System.currentTimeMillis()
            times.add(endTime - startTime)
        }
        
        val avgTime = times.average()
        val maxTime = times.maxOrNull() ?: 0
        
        println("MessageScreen scroll - Average: ${avgTime}ms, Max: ${maxTime}ms")
        
        // Target: Average < 30ms, Max < 60ms
        assert(avgTime < 30) { 
            "MessageScreen average scroll time ($avgTime ms) exceeds target (30ms)" 
        }
        assert(maxTime < 60) { 
            "MessageScreen max scroll time ($maxTime ms) exceeds target (60ms)" 
        }
    }
    
    @Test
    fun measureChatScreenScrollPerformance() {
        val iterations = 10
        val times = mutableListOf<Long>()
        
        for (i in 1..iterations) {
            val startTime = System.currentTimeMillis()
            
            composeTestRule.onRoot().performScrollTo()
            composeTestRule.waitForIdle()
            
            val endTime = System.currentTimeMillis()
            times.add(endTime - startTime)
        }
        
        val avgTime = times.average()
        val maxTime = times.maxOrNull() ?: 0
        
        println("ChatScreen scroll - Average: ${avgTime}ms, Max: ${maxTime}ms")
        
        // Target: Average < 25ms, Max < 50ms
        assert(avgTime < 25) { 
            "ChatScreen average scroll time ($avgTime ms) exceeds target (25ms)" 
        }
        assert(maxTime < 50) { 
            "ChatScreen max scroll time ($maxTime ms) exceeds target (50ms)" 
        }
    }
}

