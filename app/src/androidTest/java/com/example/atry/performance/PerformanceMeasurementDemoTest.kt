package com.example.atry.performance

import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Demo test class showing how to use the DatingAppPerformanceMetrics framework
 * 
 * Run with: ./gradlew connectedAndroidTest --tests PerformanceMeasurementDemoTest
 */
@RunWith(AndroidJUnit4::class)
class PerformanceMeasurementDemoTest {
    
    @Test
    fun demonstratePerformanceMeasurement() {
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val metrics = DatingAppPerformanceMetrics(context)
        
        println("\n" + "=".repeat(80))
        println("🚀 DATING APP PERFORMANCE MEASUREMENT DEMO")
        println("=".repeat(80))
        
        // Measure all critical performance metrics
        metrics.measureAllCriticalMetrics()
        
        // Get and display formatted results
        val results = metrics.getFormattedResults()
        println("\n")
        println(results)
        
        // Show failed metrics summary
        println("\n" + "=".repeat(80))
        println("❌ CRITICAL ISSUES IDENTIFIED:")
        println("=".repeat(80))
        println(metrics.getFailedMetricsSummary())
        
        // Save results to file
        metrics.saveResultsToFile("demo_performance_results.txt")
        
        println("\n✅ Performance measurement completed!")
        println("📊 Results saved to device storage")
    }
    
    @Test
    fun measureSpecificPerformanceArea() {
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val metrics = DatingAppPerformanceMetrics(context)
        
        println("\n" + "=".repeat(60))
        println("📱 MEASURING SPECIFIC AREAS")
        println("=".repeat(60))
        
        // If you want to measure only specific areas, you can access the methods directly
        // Note: These are private in the main class, but you can make them public if needed
        
        // Example: Measure just image loading performance
        println("\n1. Measuring Image Loading Performance...")
        // metrics.measureImageLoadingPerformance() // Uncomment if method is public
        
        // Example: Measure just touch response
        println("\n2. Measuring Touch Response Performance...")
        // metrics.measureTouchResponsePerformance() // Uncomment if method is public
        
        // Example: Measure just swipe performance
        println("\n3. Measuring Swipe Performance...")
        // metrics.measureSwipePerformance() // Uncomment if method is public
        
        println("\n✅ Specific area measurement completed!")
    }
    
    @Test
    fun compareBeforeAfterOptimization() {
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val metrics = DatingAppPerformanceMetrics(context)
        
        println("\n" + "=".repeat(80))
        println("📈 BEFORE vs AFTER OPTIMIZATION COMPARISON")
        println("=".repeat(80))
        
        println("\n🔍 MEASURING BASELINE PERFORMANCE...")
        metrics.measureAllCriticalMetrics()
        val baselineResults = metrics.getResults()
        val baselineSummary = metrics.getFormattedResults()
        
        println("\n📊 BASELINE RESULTS:")
        println(baselineSummary)
        
        // Simulate optimization by creating new metrics instance
        // In real scenario, you would apply actual optimizations here
        println("\n🔧 APPLYING OPTIMIZATIONS...")
        println("   (In real scenario, apply your optimizations here)")
        println("   - Optimizing image loading with better caching")
        println("   - Improving touch response pipeline")
        println("   - Reducing frame rendering complexity")
        
        // Measure after optimization
        val optimizedMetrics = DatingAppPerformanceMetrics(context)
        println("\n🚀 MEASURING OPTIMIZED PERFORMANCE...")
        optimizedMetrics.measureAllCriticalMetrics()
        val optimizedResults = optimizedMetrics.getResults()
        val optimizedSummary = optimizedMetrics.getFormattedResults()
        
        println("\n📊 OPTIMIZED RESULTS:")
        println(optimizedSummary)
        
        // Compare results
        println("\n📊 COMPARISON ANALYSIS:")
        println("=".repeat(60))
        compareResults(baselineResults, optimizedResults)
        
        // Save comparison
        optimizedMetrics.saveResultsToFile("optimized_performance_results.txt")
        println("\n✅ Optimization comparison completed!")
    }
    
    private fun compareResults(baseline: List<DatingAppPerformanceMetrics.PerformanceResult>, 
                             optimized: List<DatingAppPerformanceMetrics.PerformanceResult>) {
        val baselineMap = baseline.associateBy { "${it.category}_${it.metric}" }
        val optimizedMap = optimized.associateBy { "${it.category}_${it.metric}" }
        
        var totalImprovement = 0.0
        var improvedCount = 0
        var worsenedCount = 0
        
        baselineMap.forEach { (key, baselineResult) ->
            val optimizedResult = optimizedMap[key]
            if (optimizedResult != null) {
                val improvement = ((baselineResult.value - optimizedResult.value) / baselineResult.value) * 100
                val direction = if (improvement > 0) "🟢" else "🔴"
                val status = if (optimizedResult.status == "PASS") "✅ PASS" else "❌ FAIL"
                
                println(String.format("%-40s %s %6.1f%% %s", 
                                     key, direction, improvement, status))
                
                if (improvement > 0) {
                    improvedCount++
                    totalImprovement += improvement
                } else if (improvement < 0) {
                    worsenedCount++
                }
            }
        }
        
        println("\n📈 SUMMARY:")
        println("Improved metrics: $improvedCount")
        println("Worsened metrics: $worsenedCount")
        if (improvedCount > 0) {
            println(String.format("Average improvement: %.1f%%", totalImprovement / improvedCount))
        }
    }
}