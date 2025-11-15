package com.example.atry.performance

import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import androidx.test.rule.ActivityTestRule
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import java.io.File

/**
 * Real Performance Test
 * Chạy đo lường performance thực tế và so sánh với DATING_APP_ALL_METRICS_SUMMARY.md
 */
@RunWith(AndroidJUnit4::class)
class RealPerformanceTest {
    
    @get:Rule
    val activityRule = ActivityTestRule(MainActivity::class.java)
    
    @Test
    fun testRealPerformanceVsSummary() {
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val activity = activityRule.activity
        
        println("=== REAL PERFORMANCE TEST vs SUMMARY ===")
        println("So sánh kết quả thực tế với DATING_APP_ALL_METRICS_SUMMARY.md")
        
        // 1. Chạy đo lường thực tế
        val realMeasurement = SimpleRealPerformanceMeasurement()
        val realResults = realMeasurement.runSimpleRealMeasurement(context)
        
        println("\n=== KẾT QUẢ THỰC TẾ ===")
        println(realResults)
        
        // 2. Đọc kết quả từ summary cũ
        val summaryResults = readSummaryResults()
        
        println("\n=== KẾT QUẢ TỪ SUMMARY CŨ ===")
        println(summaryResults)
        
        // 3. So sánh và phân tích
        val comparison = compareResults(realResults, summaryResults)
        
        println("\n=== SO SÁNH VÀ PHÂN TÍCH ===")
        println(comparison)
        
        // 4. Lưu kết quả so sánh
        saveComparisonResults(context, realResults, summaryResults, comparison)
        
        // 5. Kiểm tra các metrics quan trọng
        verifyCriticalMetrics(realResults)
    }
    
    private fun readSummaryResults(): String {
        return """
            === KẾT QUẢ TỪ DATING_APP_ALL_METRICS_SUMMARY.md ===
            
            APP STARTUP METRICS:
            Cold Start Time: 3.2s (target: 2.5s) [❌ FAIL] [+28%]
            Warm Start Time: 1.8s (target: 1.5s) [❌ FAIL] [+20%] 
            Hot Start Time: 0.8s (target: 0.5s) [❌ FAIL] [+60%]
            
            UI PERFORMANCE METRICS:
            Frame Rate (FPS): 42 fps (target: 60 fps) [❌ FAIL] [-30%]
            Frame Drop Rate: 15% (target: 5%) [❌ FAIL] [+200%]
            Startup FPS: 38 fps (target: 60 fps) [❌ FAIL] [-37%]
            
            IMAGE LOADING METRICS (Đo lại mới):
            Small Image (50KB): 180ms (target: 100ms) [❌ FAIL] [+80%]
            Medium Image (200KB): 650ms (target: 150ms) [❌ FAIL] [+333%]
            Large Image (1MB): 2200ms (target: 200ms) [❌ FAIL] [+1000%]
            Progressive Blur: 100ms (target: 100ms) [✅ PASS] [Đạt chuẩn]
            Cached Load: 45ms (target: 50ms) [✅ PASS] [Đạt chuẩn]
            
            SCREEN RENDERING METRICS (Đo lại mới):
            Profile Screen Total: 815ms (target: 300ms) [❌ FAIL] [+172%]
            Main Screen Total: 340ms (target: 200ms) [❌ FAIL] [+70%]
            Chat Screen Total: 580ms (target: 250ms) [❌ FAIL] [+132%]
            
            TOUCH RESPONSE METRICS (Đo lại mới):
            Touch Avg Latency: 1.2ms (target: 16ms) [✅ PASS] [Tốt hơn 93%]
            Click Avg Latency: 28ms (target: 50ms) [✅ PASS] [Đạt chuẩn]
            Swipe Avg Latency: 45ms (target: 100ms) [✅ PASS] [Đạt chuẩn]
            
            FRAME RATE METRICS (Đo lại mới):
            Actual FPS: 59.5fps (target: 60fps) [❌ FAIL] [-0.8%]
            Jank Rate: 16.7% (target: 5%) [❌ FAIL] [+234%]
            
            SWIPE PERFORMANCE METRICS (Đo lại mới):
            Card Swipe Animation: 85ms (target: 100ms) [✅ PASS] [Đạt chuẩn]
            Swipe Gesture Recognition: 25ms (target: 50ms) [✅ PASS] [Đạt chuẩn]
            Total Swipe Experience: 290ms (target: 300ms) [✅ PASS] [Đạt chuẩn]
            
            NETWORK PERFORMANCE METRICS:
            Profile API: 150ms (target: 200ms) [✅ PASS] [-25%]
            Chat API: 120ms (target: 150ms) [✅ PASS] [-20%]
            Image Upload API: 800ms (target: 500ms) [❌ FAIL] [+60%]
            
            MEMORY & STORAGE METRICS:
            Used Memory: 145MB (target: 200MB) [✅ PASS] [-28%]
            App Size: 28MB (target: 50MB) [✅ PASS] [-44%]
            Memory Leak Rate: 2MB/hour (target: 1MB/hour) [❌ FAIL] [+100%]
        """.trimIndent()
    }
    
    private fun compareResults(realResults: String, summaryResults: String): String {
        val comparison = StringBuilder()
        comparison.appendLine("=== SO SÁNH KẾT QUẢ THỰC TẾ vs SUMMARY ===")
        comparison.appendLine()
        
        // Key metrics comparison
        comparison.appendLine("📊 SO SÁNH CÁC CHỈ SỐ QUAN TRỌNG:")
        comparison.appendLine()
        
        // Extract key metrics from both results
        val realMetrics = extractMetrics(realResults)
        val summaryMetrics = extractMetrics(summaryResults)
        
        // Compare each metric
        val importantMetrics = listOf(
            "Cold Start", "Frame Rate", "Small Image Loading", 
            "Large Image Loading", "Profile Screen Render", 
            "Touch Latency", "Swipe Animation", "Memory Usage"
        )
        
        importantMetrics.forEach { metricName ->
            val realValue = realMetrics[metricName]
            val summaryValue = summaryMetrics[metricName]
            
            if (realValue != null && summaryValue != null) {
                val difference = calculateDifference(realValue, summaryValue)
                val accuracy = if (kotlin.math.abs(difference) < 20) "✅ CHÍNH XÁC" else "⚠️ KHÁC BIỆT"
                
                comparison.appendLine("$metricName:")
                comparison.appendLine("  - Summary: $summaryValue")
                comparison.appendLine("  - Real: $realValue") 
                comparison.appendLine("  - Khác biệt: ${formatDifference(difference)}")
                comparison.appendLine("  - Độ chính xác: $accuracy")
                comparison.appendLine()
            }
        }
        
        // Overall analysis
        comparison.appendLine("🔍 PHÂN TÍCH TỔNG QUAN:")
        comparison.appendLine()
        
        val accurateMetrics = countAccurateMetrics(realMetrics, summaryMetrics)
        val totalCompared = realMetrics.size
        val accuracyRate = (accurateMetrics * 100.0 / totalCompared).toInt()
        
        comparison.appendLine("- Tổng số metrics so sánh: $totalCompared")
        comparison.appendLine("- Số metrics chính xác: $accurateMetrics")
        comparison.appendLine("- Tỷ lệ chính xác: $accuracyRate%")
        comparison.appendLine()
        
        if (accuracyRate >= 80) {
            comparison.appendLine("✅ KẾT LUẬN: Các chỉ số trong SUMMARY khá chính xác!")
            comparison.appendLine("   - Phản ánh đúng thực tế performance của app")
            comparison.appendLine("   - Có thể tin tưởng để đánh giá và cải thiện")
        } else {
            comparison.appendLine("⚠️ KẾT LUẬN: Có sự khác biệt đáng kể!")
            comparison.appendLine("   - Cần đo lại thực tế để có baseline chính xác")
            comparison.appendLine("   - Không nên chỉ dựa vào summary để ra quyết định")
        }
        
        return comparison.toString()
    }
    
    private fun extractMetrics(results: String): Map<String, String> {
        val metrics = mutableMapOf<String, String>()
        val lines = results.lines()
        
        for (line in lines) {
            // Extract metric name and value using regex
            val regex = """([A-Za-z\s]+):\s*([\d.]+)([a-zA-Z%]+)""".toRegex()
            val match = regex.find(line)
            
            if (match != null) {
                val name = match.groupValues[1].trim()
                val value = match.groupValues[2]
                val unit = match.groupValues[3]
                
                // Clean up metric names
                val cleanName = when {
                    name.contains("Cold Start") -> "Cold Start"
                    name.contains("Frame Rate") || name.contains("FPS") -> "Frame Rate"
                    name.contains("Small Image") -> "Small Image Loading"
                    name.contains("Large Image") -> "Large Image Loading"
                    name.contains("Profile Screen") && name.contains("Total") -> "Profile Screen Render"
                    name.contains("Touch") && name.contains("Avg") -> "Touch Latency"
                    name.contains("Swipe") && name.contains("Animation") -> "Swipe Animation"
                    name.contains("Memory") && name.contains("Used") -> "Memory Usage"
                    else -> name
                }
                
                metrics[cleanName] = "$value$unit"
            }
        }
        
        return metrics
    }
    
    private fun calculateDifference(realValue: String, summaryValue: String): Double {
        // Extract numeric values
        val realNum = extractNumericValue(realValue)
        val summaryNum = extractNumericValue(summaryValue)
        
        if (realNum == 0.0 || summaryNum == 0.0) return 0.0
        
        return ((realNum - summaryNum) / summaryNum) * 100
    }
    
    private fun extractNumericValue(value: String): Double {
        return """([\d.]+)""".toRegex().find(value)?.groupValues?.get(1)?.toDoubleOrNull() ?: 0.0
    }
    
    private fun formatDifference(difference: Double): String {
        return when {
            difference > 0 -> "+${"%.1f".format(difference)}%"
            difference < 0 -> "${"%.1f".format(difference)}%"
            else -> "0%"
        }
    }
    
    private fun countAccurateMetrics(realMetrics: Map<String, String>, summaryMetrics: Map<String, String>): Int {
        var accurateCount = 0
        
        realMetrics.forEach { (name, realValue) ->
            val summaryValue = summaryMetrics[name]
            if (summaryValue != null) {
                val difference = kotlin.math.abs(calculateDifference(realValue, summaryValue))
                if (difference < 20) { // Within 20% is considered accurate
                    accurateCount++
                }
            }
        }
        
        return accurateCount
    }
    
    private fun verifyCriticalMetrics(realResults: String) {
        println("\n=== XÁC MINH CÁC METRICS QUAN TRỌNG ===")
        
        // Check for critical performance issues
        val criticalIssues = mutableListOf<String>()
        
        if (realResults.contains("Cold Start") && realResults.contains("FAIL")) {
            criticalIssues.add("❌ Cold start time vượt quá target")
        }
        
        if (realResults.contains("Frame Rate") && realResults.contains("FAIL")) {
            criticalIssues.add("❌ Frame rate không đạt 60fps")
        }
        
        if (realResults.contains("Large Image") && realResults.contains("FAIL")) {
            criticalIssues.add("❌ Large image loading quá chậm")
        }
        
        if (realResults.contains("Profile Screen") && realResults.contains("FAIL")) {
            criticalIssues.add("❌ Profile screen rendering quá chậm")
        }
        
        if (criticalIssues.isNotEmpty()) {
            println("🚨 CÁC VẤN ĐỀ PERFORMANCE QUAN TRỌNG:")
            criticalIssues.forEach { issue ->
                println(issue)
            }
        } else {
            println("✅ Không có vấn đề performance nghiêm trọng")
        }
    }
    
    private fun saveComparisonResults(context: android.content.Context, realResults: String, summaryResults: String, comparison: String) {
        try {
            val timestamp = java.text.SimpleDateFormat("yyyyMMdd_HHmmss", java.util.Locale.getDefault()).format(java.util.Date())
            val fileName = "REAL_vs_SUMMARY_COMPARISON_$timestamp.txt"
            val file = File(context.getExternalFilesDir(null), fileName)
            
            file.bufferedWriter().use { writer ->
                writer.write("=== SO SÁNH REAL vs SUMMARY PERFORMANCE ===\n")
                writer.write("Thời gian: $timestamp\n")
                writer.write("===========================================\n\n")
                
                writer.write(realResults)
                writer.write("\n\n")
                writer.write(summaryResults)
                writer.write("\n\n")
                writer.write(comparison)
            }
            
            println("✅ Kết quả so sánh đã được lưu vào: ${file.absolutePath}")
            
        } catch (e: Exception) {
            println("❌ Lỗi khi lưu kết quả: ${e.message}")
        }
    }
}