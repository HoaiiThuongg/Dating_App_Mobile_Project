package com.example.atry.performance

import android.content.Context
import android.util.Log
import java.text.SimpleDateFormat
import java.util.*

/**
 * Complete Performance Measurement Framework for Dating App
 * 
 * Usage:
 * 1. Create instance: val metrics = DatingAppPerformanceMetrics(context)
 * 2. Measure specific area: metrics.measureAllCriticalMetrics()
 * 3. Get results: metrics.getFormattedResults()
 * 4. Save to file: metrics.saveResultsToFile()
 */
class DatingAppPerformanceMetrics(private val context: Context) {
    
    private val results = mutableListOf<PerformanceResult>()
    private val dateFormat = SimpleDateFormat("yyyy-MM-dd HH:mm:ss.SSS", Locale.getDefault())
    
    data class PerformanceResult(
        val category: String,
        val metric: String,
        val value: Double,
        val target: Double,
        val unit: String,
        val status: String,
        val timestamp: String = dateFormat.format(Date())
    )
    
    /**
     * Measure all critical performance metrics for dating app
     */
    fun measureAllCriticalMetrics() {
        Log.d("Performance", "=== STARTING COMPREHENSIVE PERFORMANCE MEASUREMENT ===")
        results.clear()
        
        measureImageLoadingPerformance()
        measureScreenRenderingPerformance()
        measureTouchResponsePerformance()
        measureFrameRatePerformance()
        measureSwipePerformance()
        measureNetworkPerformance()
        measureMemoryPerformance()
        
        Log.d("Performance", "=== MEASUREMENT COMPLETE ===")
        Log.d("Performance", "Total metrics measured: ${results.size}")
        Log.d("Performance", "Failed metrics: ${results.count { it.status == "FAIL" }}")
    }
    
    /**
     * Image Loading Performance - Critical for dating app with many photos
     */
    private fun measureImageLoadingPerformance() {
        Log.d("Performance", "\n--- IMAGE LOADING PERFORMANCE ---")
        
        // Test 1: Profile Avatar (50KB)
        measureImageMetric("image_profile_avatar_50kb", 50, 150, 100.0)
        
        // Test 2: Profile Photo (200KB) 
        measureImageMetric("image_profile_photo_200kb", 200, 200, 150.0)
        
        // Test 3: High Quality Photo (1MB)
        measureImageMetric("image_high_quality_1mb", 1024, 800, 200.0)
        
        // Test 4: Progressive Loading (Blur -> Low -> High)
        measureProgressiveLoading()
        
        // Test 5: Multiple Images (Gallery)
        measureMultipleImagesLoading()
    }
    
    private fun measureImageMetric(metricName: String, sizeKb: Int, networkDelayMs: Long, targetMs: Double) {
        val startTime = System.nanoTime()
        
        // Simulate network download based on size
        simulateNetworkDownload(sizeKb, networkDelayMs)
        
        // Simulate image decoding/processing
        simulateImageProcessing(sizeKb)
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        recordResult("Image Loading", metricName, totalTime, targetMs, "ms")
    }
    
    private fun measureProgressiveLoading() {
        val startTime = System.nanoTime()
        
        // Phase 1: Blur placeholder (fast)
        simulateNetworkDownload(5, 30)
        
        // Phase 2: Low resolution
        simulateNetworkDownload(30, 80)
        
        // Phase 3: Medium resolution
        simulateNetworkDownload(100, 120)
        
        // Phase 4: High resolution
        simulateNetworkDownload(200, 200)
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        recordResult("Image Loading", "image_progressive_loading", totalTime, 200.0, "ms")
    }
    
    private fun measureMultipleImagesLoading() {
        val startTime = System.nanoTime()
        val imageCount = 6 // Typical gallery size
        
        // Simulate loading multiple images with some parallelization
        for (i in 0 until imageCount) {
            simulateNetworkDownload(150, 100 + (i * 20)) // Staggered loading
            simulateImageProcessing(150)
        }
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        val avgTime = totalTime / imageCount
        recordResult("Image Loading", "image_gallery_avg_load", avgTime, 120.0, "ms")
    }
    
    /**
     * Screen Rendering Performance - Critical for smooth UI
     */
    private fun measureScreenRenderingPerformance() {
        Log.d("Performance", "\n--- SCREEN RENDERING PERFORMANCE ---")
        
        // Profile Screen
        measureScreenRendering("screen_profile_render", 300.0, complexity = 3)
        
        // Matches Screen (with RecyclerView)
        measureScreenRendering("screen_matches_render", 250.0, complexity = 4)
        
        // Chat Screen
        measureScreenRendering("screen_chat_render", 200.0, complexity = 2)
        
        // Settings Screen
        measureScreenRendering("screen_settings_render", 150.0, complexity = 1)
    }
    
    private fun measureScreenRendering(metricName: String, targetMs: Double, complexity: Int) {
        val startTime = System.nanoTime()
        
        // Phase 1: Layout Inflation
        val layoutStart = System.nanoTime()
        simulateLayoutInflation(complexity)
        val layoutTime = (System.nanoTime() - layoutStart) / 1_000_000.0
        
        // Phase 2: View Binding
        val bindingStart = System.nanoTime()
        simulateViewBinding(complexity)
        val bindingTime = (System.nanoTime() - bindingStart) / 1_000_000.0
        
        // Phase 3: Data Population
        val dataStart = System.nanoTime()
        simulateDataPopulation(complexity)
        val dataTime = (System.nanoTime() - dataStart) / 1_000_000.0
        
        // Phase 4: Image Loading (if applicable)
        val imageStart = System.nanoTime()
        simulateScreenImageLoading(complexity)
        val imageTime = (System.nanoTime() - imageStart) / 1_000_000.0
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        
        // Record both detailed phases and total
        recordResult("Screen Rendering", "${metricName}_layout", layoutTime, 80.0 * complexity, "ms")
        recordResult("Screen Rendering", "${metricName}_binding", bindingTime, 60.0 * complexity, "ms")
        recordResult("Screen Rendering", "${metricName}_data", dataTime, 80.0 * complexity, "ms")
        recordResult("Screen Rendering", "${metricName}_images", imageTime, 80.0 * complexity, "ms")
        recordResult("Screen Rendering", metricName, totalTime, targetMs, "ms")
    }
    
    /**
     * Touch Response Performance - Critical for user interaction
     */
    private fun measureTouchResponsePerformance() {
        Log.d("Performance", "\n--- TOUCH RESPONSE PERFORMANCE ---")
        
        val responseTimes = mutableListOf<Double>()
        
        // Measure multiple touch interactions
        repeat(20) { iteration ->
            val startTime = System.nanoTime()
            
            // Simulate complete touch pipeline
            simulateTouchDetection()
            simulateGestureRecognition()
            simulateUiThreadProcessing()
            simulateRenderUpdate()
            
            val responseTime = (System.nanoTime() - startTime) / 1_000_000.0
            responseTimes.add(responseTime)
            
            recordResult("Touch Response", "touch_response_iter_${iteration + 1}", responseTime, 50.0, "ms")
        }
        
        // Calculate statistics
        val avgTime = responseTimes.average()
        val minTime = responseTimes.minOrNull() ?: 0.0
        val maxTime = responseTimes.maxOrNull() ?: 0.0
        val percentile95 = calculatePercentile(responseTimes, 95.0)
        
        recordResult("Touch Response", "touch_response_avg", avgTime, 50.0, "ms")
        recordResult("Touch Response", "touch_response_min", minTime, 16.0, "ms")
        recordResult("Touch Response", "touch_response_max", maxTime, 50.0, "ms")
        recordResult("Touch Response", "touch_response_p95", percentile95, 75.0, "ms")
    }
    
    /**
     * Frame Rate Performance - Critical for smooth animations
     */
    private fun measureFrameRatePerformance() {
        Log.d("Performance", "\n--- FRAME RATE PERFORMANCE ---")
        
        val frameTimes = mutableListOf<Double>()
        var jankCount = 0
        var severeJankCount = 0
        
        // Measure 180 frames (3 seconds at 60fps)
        repeat(180) { frame ->
            val frameStart = System.nanoTime()
            
            // Simulate variable frame complexity
            val complexity = 1.0 + (Math.random() * 2.0) // 1x to 3x complexity
            simulateFrameRendering(complexity)
            
            val frameTime = (System.nanoTime() - frameStart) / 1_000_000.0
            frameTimes.add(frameTime)
            
            // Detect jank (>16.67ms for 60fps)
            if (frameTime > 16.67) {
                jankCount++
                if (frameTime > 33.33) { // Severe jank (>2 frames)
                    severeJankCount++
                }
            }
        }
        
        // Calculate metrics
        val avgFrameTime = frameTimes.average()
        val avgFps = 1000.0 / avgFrameTime
        val jankPercentage = (jankCount.toDouble() / frameTimes.size) * 100
        val severeJankPercentage = (severeJankCount.toDouble() / frameTimes.size) * 100
        val percentile95FrameTime = calculatePercentile(frameTimes, 95.0)
        val percentile95Fps = 1000.0 / percentile95FrameTime
        
        recordResult("Frame Rate", "frame_rate_avg_fps", avgFps, 60.0, "fps")
        recordResult("Frame Rate", "frame_rate_p95_fps", percentile95Fps, 30.0, "fps")
        recordResult("Frame Rate", "frame_jank_percentage", jankPercentage, 5.0, "%")
        recordResult("Frame Rate", "frame_severe_jank_percentage", severeJankPercentage, 1.0, "%")
        recordResult("Frame Rate", "frame_time_p95_ms", percentile95FrameTime, 25.0, "ms")
    }
    
    /**
     * Swipe Performance - Critical for dating app core functionality
     */
    private fun measureSwipePerformance() {
        Log.d("Performance", "\n--- SWIPE PERFORMANCE ---")
        
        // Profile Card Swipe
        measureSwipeGesture("swipe_profile_card", 50.0, hasAnimation = true, hasImageLoad = false)
        
        // Image Gallery Swipe
        measureSwipeGesture("swipe_image_gallery", 100.0, hasAnimation = true, hasImageLoad = true)
        
        // Matches List Swipe
        measureSwipeGesture("swipe_matches_list", 80.0, hasAnimation = false, hasImageLoad = false)
        
        // Profile Stack Swipe (Tinder-style)
        measureSwipeGesture("swipe_profile_stack", 60.0, hasAnimation = true, hasImageLoad = false, complexity = 2)
    }
    
    private fun measureSwipeGesture(metricName: String, targetMs: Double, 
                                  hasAnimation: Boolean, hasImageLoad: Boolean, complexity: Int = 1) {
        val startTime = System.nanoTime()
        
        // Phase 1: Touch Detection
        val touchStart = System.nanoTime()
        simulateTouchDetection()
        val touchTime = (System.nanoTime() - touchStart) / 1_000_000.0
        
        // Phase 2: Gesture Recognition
        val gestureStart = System.nanoTime()
        simulateSwipeRecognition(complexity)
        val gestureTime = (System.nanoTime() - gestureStart) / 1_000_000.0
        
        // Phase 3: Decision Making
        val decisionStart = System.nanoTime()
        simulateSwipeDecision()
        val decisionTime = (System.nanoTime() - decisionStart) / 1_000_000.0
        
        // Phase 4: Animation (if applicable)
        val animationTime = if (hasAnimation) {
            val animationStart = System.nanoTime()
            simulateSwipeAnimation(complexity)
            (System.nanoTime() - animationStart) / 1_000_000.0
        } else 0.0
        
        // Phase 5: Image Loading (if applicable)
        val imageLoadTime = if (hasImageLoad) {
            val imageStart = System.nanoTime()
            simulateNetworkDownload(200, 150)
            simulateImageProcessing(200)
            (System.nanoTime() - imageStart) / 1_000_000.0
        } else 0.0
        
        // Phase 6: State Update
        val updateStart = System.nanoTime()
        simulateSwipeStateUpdate()
        val updateTime = (System.nanoTime() - updateStart) / 1_000_000.0
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        
        // Record detailed phases and total
        recordResult("Swipe Performance", "${metricName}_touch", touchTime, 15.0 * complexity, "ms")
        recordResult("Swipe Performance", "${metricName}_gesture", gestureTime, 20.0 * complexity, "ms")
        recordResult("Swipe Performance", "${metricName}_decision", decisionTime, 10.0, "ms")
        if (hasAnimation) recordResult("Swipe Performance", "${metricName}_animation", animationTime, 30.0 * complexity, "ms")
        if (hasImageLoad) recordResult("Swipe Performance", "${metricName}_image_load", imageLoadTime, 100.0, "ms")
        recordResult("Swipe Performance", "${metricName}_update", updateTime, 15.0, "ms")
        recordResult("Swipe Performance", metricName, totalTime, targetMs, "ms")
    }
    
    /**
     * Network Performance - Critical for online features
     */
    private fun measureNetworkPerformance() {
        Log.d("Performance", "\n--- NETWORK PERFORMANCE ---")
        
        // API Calls simulation
        measureApiCall("api_user_profile", 50, 150.0)
        measureApiCall("api_matches_list", 100, 200.0)
        measureApiCall("api_chat_messages", 30, 100.0)
        measureApiCall("api_send_message", 20, 80.0)
        measureApiCall("api_update_location", 25, 100.0)
        
        // Batch operations
        measureBatchOperation("api_batch_update", 5, 300.0)
    }
    
    private fun measureApiCall(metricName: String, responseSizeKb: Int, targetMs: Double) {
        val startTime = System.nanoTime()
        
        // Simulate network latency
        simulateNetworkLatency(responseSizeKb)
        
        // Simulate response processing
        simulateResponseProcessing(responseSizeKb)
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        recordResult("Network Performance", metricName, totalTime, targetMs, "ms")
    }
    
    private fun measureBatchOperation(metricName: String, itemCount: Int, targetMs: Double) {
        val startTime = System.nanoTime()
        
        // Simulate batch processing
        for (i in 0 until itemCount) {
            simulateNetworkLatency(10)
            simulateResponseProcessing(10)
            Thread.sleep(20) // Processing delay between items
        }
        
        val totalTime = (System.nanoTime() - startTime) / 1_000_000.0
        recordResult("Network Performance", metricName, totalTime, targetMs, "ms")
    }
    
    /**
     * Memory Performance - Critical for app stability
     */
    private fun measureMemoryPerformance() {
        Log.d("Performance", "\n--- MEMORY PERFORMANCE ---")
        
        // Measure memory usage after different operations
        measureMemoryUsage("memory_after_image_load", 50.0)
        measureMemoryUsage("memory_after_screen_render", 30.0)
        measureMemoryUsage("memory_after_swipe_operation", 20.0)
        measureMemoryUsage("memory_after_chat_load", 40.0)
        
        // Measure memory leaks simulation
        measureMemoryLeakTrend()
    }
    
    private fun measureMemoryUsage(metricName: String, expectedIncreaseMb: Double) {
        val runtime = Runtime.getRuntime()
        val memoryBefore = (runtime.totalMemory() - runtime.freeMemory()) / (1024.0 * 1024.0)
        
        // Simulate memory-intensive operation
        simulateMemoryIntensiveOperation()
        
        System.gc() // Suggest garbage collection
        Thread.sleep(100) // Allow GC to work
        
        val memoryAfter = (runtime.totalMemory() - runtime.freeMemory()) / (1024.0 * 1024.0)
        val memoryIncrease = memoryAfter - memoryBefore
        
        recordResult("Memory Performance", metricName, memoryIncrease, expectedIncreaseMb, "MB")
    }
    
    private fun measureMemoryLeakTrend() {
        val measurements = mutableListOf<Double>()
        
        // Simulate multiple operations and measure memory trend
        repeat(10) {
            simulateMemoryIntensiveOperation()
            val runtime = Runtime.getRuntime()
            val memoryUsage = (runtime.totalMemory() - runtime.freeMemory()) / (1024.0 * 1024.0)
            measurements.add(memoryUsage)
            Thread.sleep(50)
        }
        
        // Calculate trend (simple linear regression)
        val trend = calculateLinearTrend(measurements)
        recordResult("Memory Performance", "memory_leak_trend_mb_per_op", trend, 0.5, "MB/op")
    }
    
    // ===== SIMULATION METHODS =====
    
    private fun simulateNetworkDownload(sizeKb: Int, baseDelayMs: Long) {
        // Realistic network simulation with variable conditions
        val networkQuality = 0.7 + (Math.random() * 0.6) // 70% to 130% of base speed
        val actualDelay = (baseDelayMs * networkQuality).toLong()
        Thread.sleep(actualDelay)
    }
    
    private fun simulateImageProcessing(sizeKb: Int) {
        // Simulate CPU-intensive image processing
        val processingTime = (sizeKb / 10.0) + (Math.random() * 20.0) // Base + random
        val startTime = System.nanoTime()
        var iterations = 0
        while ((System.nanoTime() - startTime) / 1_000_000.0 < processingTime) {
            // Simulate processing work
            Math.sqrt(iterations++.toDouble())
        }
    }
    
    private fun simulateLayoutInflation(complexity: Int) {
        val baseTime = 30.0 * complexity
        val variation = Math.random() * 20.0 // ±20% variation
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateViewBinding(complexity: Int) {
        val baseTime = 40.0 * complexity
        val variation = Math.random() * 15.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateDataPopulation(complexity: Int) {
        val baseTime = 50.0 * complexity
        val variation = Math.random() * 25.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateScreenImageLoading(complexity: Int) {
        val baseTime = 60.0 * complexity
        val variation = Math.random() * 30.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateTouchDetection() {
        val baseTime = 8.0 + (Math.random() * 4.0) // 8-12ms
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateGestureRecognition() {
        val baseTime = 15.0 + (Math.random() * 8.0) // 15-23ms
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateUiThreadProcessing() {
        val baseTime = 12.0 + (Math.random() * 8.0) // 12-20ms
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateRenderUpdate() {
        val baseTime = 10.0 + (Math.random() * 6.0) // 10-16ms
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateFrameRendering(complexity: Double) {
        val baseTime = 10.0 * complexity // Base 10ms per complexity unit
        val variation = Math.random() * 5.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateSwipeRecognition(complexity: Int) {
        val baseTime = 20.0 * complexity
        val variation = Math.random() * 10.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateSwipeDecision() {
        val baseTime = 8.0 + (Math.random() * 4.0)
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateSwipeAnimation(complexity: Int) {
        val baseTime = 30.0 * complexity
        val variation = Math.random() * 15.0
        Thread.sleep((baseTime + variation).toLong())
    }
    
    private fun simulateSwipeStateUpdate() {
        val baseTime = 12.0 + (Math.random() * 6.0)
        Thread.sleep(baseTime.toLong())
    }
    
    private fun simulateNetworkLatency(responseSizeKb: Int) {
        val baseLatency = 50.0 + (responseSizeKb / 10.0) // Base + size factor
        val networkVariation = 0.8 + (Math.random() * 0.4) // 80-120% variation
        Thread.sleep((baseLatency * networkVariation).toLong())
    }
    
    private fun simulateResponseProcessing(responseSizeKb: Int) {
        val processingTime = 10.0 + (responseSizeKb / 5.0) // Base + processing factor
        Thread.sleep(processingTime.toLong())
    }
    
    private fun simulateMemoryIntensiveOperation() {
        // Create temporary objects to simulate memory usage
        val tempList = mutableListOf<ByteArray>()
        repeat(10) {
            tempList.add(ByteArray(1024 * 1024)) // 1MB each
        }
        Thread.sleep(50) // Hold memory briefly
        tempList.clear() // Allow GC
    }
    
    // ===== UTILITY METHODS =====
    
    private fun recordResult(category: String, metric: String, value: Double, target: Double, unit: String) {
        val status = if (value <= target) "PASS" else "FAIL"
        val result = PerformanceResult(category, metric, value, target, unit, status)
        results.add(result)
        
        val message = String.format("%-25s %-30s %8.2f %s (target: %6.2f %s) [%s]", 
                                   category, metric, value, unit, target, unit, status)
        Log.d("Performance", message)
    }
    
    private fun calculatePercentile(values: List<Double>, percentile: Double): Double {
        val sorted = values.sorted()
        val index = (percentile / 100.0 * sorted.size).toInt()
        return sorted[index.coerceIn(0, sorted.size - 1)]
    }
    
    private fun calculateLinearTrend(values: List<Double>): Double {
        if (values.size < 2) return 0.0
        
        val n = values.size.toDouble()
        val sumX = (0 until values.size).sum().toDouble()
        val sumY = values.sum()
        val sumXY = values.indices.sumOf { it * values[it] }.toDouble()
        val sumXX = values.indices.sumOf { it * it }.toDouble()
        
        val slope = (n * sumXY - sumX * sumY) / (n * sumXX - sumX * sumX)
        return slope
    }
    
    // ===== PUBLIC METHODS FOR RESULTS =====
    
    fun getResults(): List<PerformanceResult> = results.toList()
    
    fun getFormattedResults(): String {
        val sb = StringBuilder()
        sb.appendLine("=== DATING APP PERFORMANCE RESULTS ===")
        sb.appendLine("Generated: ${dateFormat.format(Date())}")
        sb.appendLine("")
        sb.appendLine(String.format("%-25s %-30s %15s %10s %8s", "Category", "Metric", "Value", "Target", "Status"))
        sb.appendLine("=".repeat(100))
        
        results.forEach { result ->
            sb.appendLine(String.format("%-25s %-30s %8.2f %s (%.2f %s) [%s]", 
                                       result.category, result.metric, 
                                       result.value, result.unit, result.target, result.unit, result.status))
        }
        
        val failedCount = results.count { it.status == "FAIL" }
        val totalCount = results.size
        val successRate = ((totalCount - failedCount) * 100.0) / totalCount
        
        sb.appendLine("=".repeat(100))
        sb.appendLine("SUMMARY:")
        sb.appendLine("Total Metrics: $totalCount")
        sb.appendLine("Passed: ${totalCount - failedCount}")
        sb.appendLine("Failed: $failedCount")
        sb.appendLine(String.format("Success Rate: %.1f%%", successRate))
        
        if (failedCount > 0) {
            sb.appendLine("\nCRITICAL FAILURES:")
            results.filter { it.status == "FAIL" }
                   .sortedByDescending { it.value / it.target } // Worst failures first
                   .take(10)
                   .forEach { result ->
                       val severity = (result.value / result.target * 100).toInt()
                       sb.appendLine("- ${result.metric}: ${severity}% of target (${result.category})")
                   }
        }
        
        return sb.toString()
    }
    
    fun saveResultsToFile(filename: String = "dating_app_performance_results.txt") {
        try {
            val file = android.os.Environment.getExternalStoragePublicDirectory(
                android.os.Environment.DIRECTORY_DOCUMENTS)
            val resultsFile = java.io.File(file, filename)
            
            java.io.FileWriter(resultsFile).use { writer ->
                writer.write(getFormattedResults())
            }
            
            Log.d("Performance", "Results saved to: ${resultsFile.absolutePath}")
        } catch (e: Exception) {
            Log.e("Performance", "Error saving results: ${e.message}")
        }
    }
    
    fun getFailedMetricsSummary(): String {
        val failedMetrics = results.filter { it.status == "FAIL" }
        if (failedMetrics.isEmpty()) return "All metrics passed! 🎉"
        
        val sb = StringBuilder()
        sb.appendLine("FAILED METRICS SUMMARY:")
        sb.appendLine("=".repeat(60))
        
        // Group by category
        val byCategory = failedMetrics.groupBy { it.category }
        byCategory.forEach { (category, metrics) ->
            sb.appendLine("\n$category:")
            metrics.sortedByDescending { it.value / it.target }.forEach { metric ->
                val percentage = (metric.value / metric.target * 100).toInt()
                sb.appendLine("  - ${metric.metric}: ${String.format("%.1f", metric.value)} ${metric.unit} " +
                             "(${percentage}% of target)")
            }
        }
        
        return sb.toString()
    }
}