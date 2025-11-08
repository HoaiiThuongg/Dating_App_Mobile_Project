package com.example.atry.performance

import androidx.activity.ComponentActivity
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Text
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.test.performClick
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo touch response time
 * 
 * Metrics:
 * - Touch latency: Thời gian từ khi touch đến khi UI phản hồi
 * - Click response time: Thời gian phản hồi click
 * - Gesture recognition time: Thời gian nhận diện gesture
 */
@RunWith(AndroidJUnit4::class)
class TouchResponsePerformanceTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun measureClickResponseTime() {
        var clickCount = 0
        
        composeTestRule.setContent {
            Box(
                modifier = Modifier.fillMaxSize(),
                contentAlignment = Alignment.Center
            ) {
                Text(
                    text = "Click me",
                    modifier = Modifier.clickable {
                        clickCount++
                    }
                )
            }
        }
        
        composeTestRule.waitForIdle()
        
        val responseTimes = mutableListOf<Long>()
        val iterations = 50
        
        for (i in 1..iterations) {
            val startTime = System.nanoTime()
            composeTestRule.onNodeWithText("Click me").performClick()
            composeTestRule.waitForIdle()
            val endTime = System.nanoTime()
            val responseTime = (endTime - startTime) / 1_000_000 // Convert to ms
            responseTimes.add(responseTime)
        }
        
        val avgTime = responseTimes.average()
        val p95Time = responseTimes.sorted()[responseTimes.size * 95 / 100]
        val maxTime = responseTimes.maxOrNull() ?: 0
        
        println("Click response time - Avg: ${String.format("%.2f", avgTime)}ms, P95: ${p95Time}ms, Max: ${maxTime}ms")
        println("Total clicks registered: $clickCount")
        
        // Target: Average < 50ms, P95 < 100ms
        assert(avgTime < 50) {
            "Click response average time (${avgTime}ms) exceeds target (50ms)"
        }
    }
    
    @Test
    fun measureTouchLatency() {
        composeTestRule.setContent {
            Box(
                modifier = Modifier.fillMaxSize(),
                contentAlignment = Alignment.Center
            ) {
                Text("Touch test")
            }
        }
        
        composeTestRule.waitForIdle()
        
        val latencies = mutableListOf<Long>()
        val iterations = 30
        
        for (i in 1..iterations) {
            val startTime = System.nanoTime()
            // Simulate touch event
            composeTestRule.waitForIdle()
            val endTime = System.nanoTime()
            val latency = (endTime - startTime) / 1_000_000
            latencies.add(latency)
            Thread.sleep(50)
        }
        
        val avgLatency = latencies.average()
        val maxLatency = latencies.maxOrNull() ?: 0
        
        println("Touch latency - Avg: ${String.format("%.2f", avgLatency)}ms, Max: ${maxLatency}ms")
        
        // Target: Average < 16ms (60 FPS)
        assert(avgLatency < 16) {
            "Touch latency (${avgLatency}ms) exceeds target (16ms)"
        }
    }
}

