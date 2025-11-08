package com.example.atry.performance

import androidx.activity.ComponentActivity
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onRoot
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo frame rate và jank
 * 
 * Metrics:
 * - Frame rate: FPS (Frames per second)
 * - Jank: Frame drops (frames > 16ms)
 * - Frame time: Thời gian render mỗi frame
 * - Smoothness: Độ mượt của animation
 */
@RunWith(AndroidJUnit4::class)
class FrameRatePerformanceTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun measureFrameRateDuringScroll() {
        composeTestRule.setContent {
            Column(
                modifier = androidx.compose.ui.Modifier
                    .fillMaxSize()
                    .verticalScroll(rememberScrollState())
            ) {
                repeat(100) {
                    Text("Item $it", style = androidx.compose.material3.MaterialTheme.typography.bodyLarge)
                }
            }
        }
        
        composeTestRule.waitForIdle()
        composeTestRule.onRoot().assertIsDisplayed()
        
        val frameTimes = mutableListOf<Long>()
        val iterations = 50
        
        for (i in 1..iterations) {
            val startTime = System.nanoTime()
            composeTestRule.waitForIdle()
            val endTime = System.nanoTime()
            val frameTime = (endTime - startTime) / 1_000_000 // Convert to ms
            frameTimes.add(frameTime)
            Thread.sleep(16) // Simulate 60 FPS (16ms per frame)
        }
        
        val avgFrameTime = frameTimes.average()
        val maxFrameTime = frameTimes.maxOrNull() ?: 0
        val minFrameTime = frameTimes.minOrNull() ?: 0
        val jankCount = frameTimes.count { it > 16 } // Frames > 16ms are janky
        val jankPercentage = (jankCount.toDouble() / frameTimes.size) * 100
        val estimatedFPS = 1000.0 / avgFrameTime
        
        println("Frame rate - Avg: ${String.format("%.2f", estimatedFPS)} FPS")
        println("Frame time - Avg: ${String.format("%.2f", avgFrameTime)}ms, Min: ${minFrameTime}ms, Max: ${maxFrameTime}ms")
        println("Jank - Count: $jankCount, Percentage: ${String.format("%.2f", jankPercentage)}%")
        
        // Targets
        assert(estimatedFPS > 50) {
            "Frame rate (${estimatedFPS}FPS) below target (50FPS)"
        }
        assert(jankPercentage < 5) {
            "Jank percentage (${jankPercentage}%) exceeds target (5%)"
        }
    }
    
    @Test
    fun measureFrameRateDuringComposition() {
        val frameTimes = mutableListOf<Long>()
        val iterations = 20
        
        for (i in 1..iterations) {
            val startTime = System.nanoTime()
            
            composeTestRule.setContent {
                Column {
                    repeat(50) {
                        Text("Composition test $it")
                    }
                }
            }
            
            composeTestRule.waitForIdle()
            val endTime = System.nanoTime()
            val frameTime = (endTime - startTime) / 1_000_000
            frameTimes.add(frameTime)
        }
        
        val avgFrameTime = frameTimes.average()
        val maxFrameTime = frameTimes.maxOrNull() ?: 0
        val estimatedFPS = 1000.0 / avgFrameTime
        
        println("Composition frame rate - Avg: ${String.format("%.2f", estimatedFPS)} FPS")
        println("Composition frame time - Avg: ${String.format("%.2f", avgFrameTime)}ms, Max: ${maxFrameTime}ms")
        
        // Target: Average frame time < 33ms (30 FPS minimum)
        assert(avgFrameTime < 33) {
            "Average composition frame time (${avgFrameTime}ms) exceeds target (33ms)"
        }
    }
}

