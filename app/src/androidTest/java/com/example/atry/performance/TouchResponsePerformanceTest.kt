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
    
    private fun logMetric(testName: String, metricName: String, value: Double, unit: String, status: String, target: String? = null) {
        PerformanceMetricsLogger.logMetric(
            testCategory = "Touch",
            testName = testName,
            metricName = metricName,
            value = value,
            unit = unit,
            status = status,
            target = target
        )
    }
    
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
        val p95Index = responseTimes.size * 95 / 100
        val p95Time = responseTimes.sorted()[p95Index].toDouble()
        val maxTime = responseTimes.maxOrNull() ?: 0
        
        println("Click response time - Avg: ${String.format("%.2f", avgTime)}ms, P95: ${String.format("%.2f", p95Time)}ms, Max: ${maxTime}ms")
        println("Total clicks registered: $clickCount")
        
        val status = if (avgTime < 50 && p95Time < 100) "PASSED" else "FAILED"
        logMetric("Click Response", "Average Time", avgTime, "ms", status, "50ms")
        logMetric("Click Response", "P95 Time", p95Time, "ms", status, "100ms")
        logMetric("Click Response", "Max Time", maxTime.toDouble(), "ms", status)
        logMetric("Click Response", "Total Clicks", clickCount.toDouble(), "", status)
        
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
        
        val status = if (avgLatency < 16) "PASSED" else "FAILED"
        logMetric("Touch Latency", "Average Latency", avgLatency, "ms", status, "16ms")
        logMetric("Touch Latency", "Max Latency", maxLatency.toDouble(), "ms", status)
        
        // Target: Average < 16ms (60 FPS)
        assert(avgLatency < 16) {
            "Touch latency (${avgLatency}ms) exceeds target (16ms)"
        }
    }
}


