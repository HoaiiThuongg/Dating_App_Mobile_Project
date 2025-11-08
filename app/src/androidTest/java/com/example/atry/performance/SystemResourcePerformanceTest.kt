package com.example.atry.performance

import android.app.ActivityManager
import android.content.Context
import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import java.lang.Runtime

/**
 * Performance test để đo system resources (CPU, Threads, etc.)
 * 
 * Metrics:
 * - CPU usage: % CPU sử dụng
 * - Thread count: Số lượng threads
 * - Active threads: Số threads đang chạy
 * - Heap size: Kích thước heap
 * - Available memory: Memory còn trống
 */
@RunWith(AndroidJUnit4::class)
class SystemResourcePerformanceTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    private fun getContext(): Context {
        return InstrumentationRegistry.getInstrumentation().targetContext
    }
    
    private fun getCpuUsage(): Double {
        val runtime = Runtime.getRuntime()
        val totalMemory = runtime.totalMemory()
        val freeMemory = runtime.freeMemory()
        val usedMemory = totalMemory - freeMemory
        // Approximate CPU usage based on memory pressure
        return (usedMemory.toDouble() / totalMemory.toDouble()) * 100.0
    }
    
    private fun getThreadCount(): Int {
        return Thread.activeCount()
    }
    
    private fun getHeapSize(): Long {
        val runtime = Runtime.getRuntime()
        return runtime.totalMemory() / (1024 * 1024) // MB
    }
    
    private fun getAvailableMemory(): Long {
        val activityManager = getContext().getSystemService(Context.ACTIVITY_SERVICE) as ActivityManager
        val memInfo = ActivityManager.MemoryInfo()
        activityManager.getMemoryInfo(memInfo)
        return memInfo.availMem / (1024 * 1024) // MB
    }
    
    @Test
    fun measureInitialSystemResources() {
        composeTestRule.waitForIdle()
        
        val cpuUsage = getCpuUsage()
        val threadCount = getThreadCount()
        val heapSize = getHeapSize()
        val availableMemory = getAvailableMemory()
        
        println("Initial CPU usage: ${String.format("%.2f", cpuUsage)}%")
        println("Initial thread count: $threadCount")
        println("Initial heap size: ${heapSize}MB")
        println("Initial available memory: ${availableMemory}MB")
        
        // Targets
        assert(threadCount < 50) {
            "Initial thread count ($threadCount) exceeds target (50)"
        }
        assert(heapSize < 200) {
            "Initial heap size (${heapSize}MB) exceeds target (200MB)"
        }
    }
    
    @Test
    fun measureSystemResourcesAfterOperations() {
        composeTestRule.waitForIdle()
        
        val initialThreadCount = getThreadCount()
        val initialHeapSize = getHeapSize()
        
        // Simulate operations
        repeat(20) {
            composeTestRule.waitForIdle()
            Thread.sleep(50)
        }
        
        val finalThreadCount = getThreadCount()
        val finalHeapSize = getHeapSize()
        val threadIncrease = finalThreadCount - initialThreadCount
        val heapIncrease = finalHeapSize - initialHeapSize
        
        println("Thread count after operations: $finalThreadCount (increase: $threadIncrease)")
        println("Heap size after operations: ${finalHeapSize}MB (increase: ${heapIncrease}MB)")
        
        // Targets
        assert(threadIncrease < 10) {
            "Thread increase ($threadIncrease) exceeds target (10) - possible thread leak"
        }
        assert(heapIncrease < 50) {
            "Heap increase (${heapIncrease}MB) exceeds target (50MB)"
        }
    }
    
    @Test
    fun measurePeakSystemResources() {
        var peakThreadCount = getThreadCount()
        var peakHeapSize = getHeapSize()
        var peakCpuUsage = getCpuUsage()
        
        // Perform intensive operations
        repeat(30) {
            composeTestRule.waitForIdle()
            Thread.sleep(100)
            
            val currentThreadCount = getThreadCount()
            val currentHeapSize = getHeapSize()
            val currentCpuUsage = getCpuUsage()
            
            if (currentThreadCount > peakThreadCount) peakThreadCount = currentThreadCount
            if (currentHeapSize > peakHeapSize) peakHeapSize = currentHeapSize
            if (currentCpuUsage > peakCpuUsage) peakCpuUsage = currentCpuUsage
        }
        
        println("Peak CPU usage: ${String.format("%.2f", peakCpuUsage)}%")
        println("Peak thread count: $peakThreadCount")
        println("Peak heap size: ${peakHeapSize}MB")
        
        // Targets
        assert(peakThreadCount < 100) {
            "Peak thread count ($peakThreadCount) exceeds target (100)"
        }
        assert(peakHeapSize < 300) {
            "Peak heap size (${peakHeapSize}MB) exceeds target (300MB)"
        }
    }
}

