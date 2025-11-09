package com.example.atry.performance

import androidx.benchmark.macro.CompilationMode
import androidx.benchmark.macro.FrameTimingMetric
import androidx.benchmark.macro.StartupMode
import androidx.benchmark.macro.StartupTimingMetric
import androidx.benchmark.macro.junit4.MacrobenchmarkRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Assume
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo thời gian khởi động app
 * 
 * ⚠️ LƯU Ý: Macrobenchmark yêu cầu:
 * - App phải được build ở release hoặc benchmark variant (không debuggable)
 * - Chạy trên device thật hoặc emulator được cấu hình đúng
 * 
 * Metrics:
 * - timeToInitialDisplay: Thời gian từ launch đến khi UI hiển thị
 * - timeToFullDisplay: Thời gian từ launch đến khi UI hoàn toàn sẵn sàng
 * - frameTiming: Frame timing metrics (FPS, jank)
 */
@RunWith(AndroidJUnit4::class)
class AppStartupBenchmark {
    
    @get:Rule
    val benchmarkRule = MacrobenchmarkRule()
    
    private fun logSkipStartupMetrics(reason: String) {
        // Ghi log ra console và file metrics khi không thể chạy Macrobenchmark
        println("[Macrobenchmark] SKIP App startup benchmarks: $reason")
        PerformanceMetricsLogger.logMetric(
            testCategory = "Startup",
            testName = "Cold Startup",
            metricName = "timeToInitialDisplay",
            value = 0.0,
            unit = "ms",
            status = "SKIPPED",
            target = "Non-debuggable build required"
        )
        PerformanceMetricsLogger.logMetric(
            testCategory = "Startup",
            testName = "Warm Startup",
            metricName = "timeToInitialDisplay",
            value = 0.0,
            unit = "ms",
            status = "SKIPPED",
            target = "Non-debuggable build required"
        )
        PerformanceMetricsLogger.logMetric(
            testCategory = "Startup",
            testName = "Hot Startup",
            metricName = "timeToInitialDisplay",
            value = 0.0,
            unit = "ms",
            status = "SKIPPED",
            target = "Non-debuggable build required"
        )
    }
    
    @Before
    fun checkBenchmarkRequirements() {
        // Kiểm tra xem app có phải debug build không
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val isDebuggable = (context.applicationInfo.flags and android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE) != 0
        
        if (isDebuggable) {
            // In hướng dẫn ra console và ghi SKIP metrics
            println("[Macrobenchmark] Macrobenchmark requires non-debuggable build.")
            println("[Macrobenchmark] Cách build & chạy:")
            println("  - Build: gradlew.bat :app:assembleBenchmark || gradlew.bat :app:assembleRelease")
            println("  - Run (single class): gradlew.bat :app:connectedAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark")
            println("  - Run (single method): gradlew.bat :app:connectedAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark#startupCold")
            println("[Macrobenchmark] Kết quả JSON/HTML sẽ nằm trong: app\\build\\outputs\\connected_android_test_additional_output\\debugAndroidTest\\connected\\<DEVICE>/ và performance_results/<report>/benchmarks nếu được xuất.")
            logSkipStartupMetrics("Build hiện tại là debuggable")
        }
        
        // Skip test nếu là debug build (JUnit sẽ mark Ignored)
        Assume.assumeFalse(
            "Macrobenchmark requires non-debuggable build. " +
            "Please build with: ./gradlew assembleBenchmark or assembleRelease",
            isDebuggable
        )
    }
    
    @Test
    fun startupCold() = benchmarkRule.measureRepeated(
        packageName = "com.example.datingapp",
        metrics = listOf(StartupTimingMetric(), FrameTimingMetric()),
        compilationMode = CompilationMode.Full(),
        iterations = 5,
        startupMode = StartupMode.COLD
    ) {
        println("[Macrobenchmark] Running Cold Startup benchmark… (results will be saved to additional output directory)")
        pressHome()
        startActivityAndWait()
        println("[Macrobenchmark] Finished Cold Startup benchmark")
    }
    
    @Test
    fun startupWarm() = benchmarkRule.measureRepeated(
        packageName = "com.example.datingapp",
        metrics = listOf(StartupTimingMetric(), FrameTimingMetric()),
        compilationMode = CompilationMode.Full(),
        iterations = 5,
        startupMode = StartupMode.WARM
    ) {
        println("[Macrobenchmark] Running Warm Startup benchmark…")
        pressHome()
        startActivityAndWait()
        println("[Macrobenchmark] Finished Warm Startup benchmark")
    }
    
    @Test
    fun startupHot() = benchmarkRule.measureRepeated(
        packageName = "com.example.datingapp",
        metrics = listOf(StartupTimingMetric(), FrameTimingMetric()),
        compilationMode = CompilationMode.Full(),
        iterations = 5,
        startupMode = StartupMode.HOT
    ) {
        println("[Macrobenchmark] Running Hot Startup benchmark…")
        pressHome()
        startActivityAndWait()
        println("[Macrobenchmark] Finished Hot Startup benchmark")
    }
}

