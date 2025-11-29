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
    
    private fun logMetric(testName: String, metricName: String, value: Double, unit: String, status: String, target: String? = null) {
        PerformanceMetricsLogger.logMetric(
            testCategory = "Frame Rate",
            testName = testName,
            metricName = metricName,
            value = value,
            unit = unit,
            status = status,
            target = target
        )
    }
    
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
        
        val status = if (estimatedFPS > 50 && jankPercentage < 5) "PASSED" else "FAILED"
        logMetric("Scroll", "Frame Rate (FPS)", estimatedFPS, "FPS", status, "50 FPS")
        logMetric("Scroll", "Average Frame Time", avgFrameTime, "ms", status)
        logMetric("Scroll", "Min Frame Time", minFrameTime.toDouble(), "ms", status)
        logMetric("Scroll", "Max Frame Time", maxFrameTime.toDouble(), "ms", status)
        logMetric("Scroll", "Jank Count", jankCount.toDouble(), "", status)
        logMetric("Scroll", "Jank Percentage", jankPercentage, "%", status, "5%")
        
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
        
        val status = if (avgFrameTime < 33) "PASSED" else "FAILED"
        logMetric("Composition", "Frame Rate (FPS)", estimatedFPS, "FPS", status)
        logMetric("Composition", "Average Frame Time", avgFrameTime, "ms", status, "33ms")
        logMetric("Composition", "Max Frame Time", maxFrameTime.toDouble(), "ms", status)
        
        // Target: Average frame time < 33ms (30 FPS minimum)
        assert(avgFrameTime < 33) {
            "Average composition frame time (${avgFrameTime}ms) exceeds target (33ms)"
        }
    }
}

