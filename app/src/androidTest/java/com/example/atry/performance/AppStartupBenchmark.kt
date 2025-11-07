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
    
    @Before
    fun checkBenchmarkRequirements() {
        // Kiểm tra xem app có phải debug build không
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        val isDebuggable = (context.applicationInfo.flags and android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE) != 0
        
        // Skip test nếu là debug build
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
        pressHome()
        startActivityAndWait()
    }
    
    @Test
    fun startupWarm() = benchmarkRule.measureRepeated(
        packageName = "com.example.datingapp",
        metrics = listOf(StartupTimingMetric(), FrameTimingMetric()),
        compilationMode = CompilationMode.Full(),
        iterations = 5,
        startupMode = StartupMode.WARM
    ) {
        pressHome()
        startActivityAndWait()
    }
    
    @Test
    fun startupHot() = benchmarkRule.measureRepeated(
        packageName = "com.example.datingapp",
        metrics = listOf(StartupTimingMetric(), FrameTimingMetric()),
        compilationMode = CompilationMode.Full(),
        iterations = 5,
        startupMode = StartupMode.HOT
    ) {
        pressHome()
        startActivityAndWait()
    }
}

