package com.example.atry.performance

import androidx.benchmark.macro.CompilationMode
import androidx.benchmark.macro.FrameTimingMetric
import androidx.benchmark.macro.StartupMode
import androidx.benchmark.macro.StartupTimingMetric
import androidx.benchmark.macro.junit4.MacrobenchmarkRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

/**
 * Performance test để đo thời gian khởi động app
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

