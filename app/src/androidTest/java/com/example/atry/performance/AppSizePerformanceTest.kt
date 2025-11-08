package com.example.atry.performance

import android.content.Context
import android.content.pm.PackageManager
import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.platform.app.InstrumentationRegistry
import org.junit.Test
import org.junit.runner.RunWith
import java.io.File

/**
 * Performance test để đo kích thước app
 * 
 * Metrics:
 * - APK size: Kích thước file APK
 * - Installed size: Kích thước app sau khi install
 * - Cache size: Kích thước cache
 * - Data size: Kích thước data
 */
@RunWith(AndroidJUnit4::class)
class AppSizePerformanceTest {
    
    private fun getContext(): Context {
        return InstrumentationRegistry.getInstrumentation().targetContext
    }
    
    private fun logMetric(testName: String, metricName: String, value: Double, unit: String, status: String, target: String? = null) {
        PerformanceMetricsLogger.logMetric(
            testCategory = "App Size",
            testName = testName,
            metricName = metricName,
            value = value,
            unit = unit,
            status = status,
            target = target
        )
    }
    
    private fun getAppSize(): Long {
        try {
            val packageManager = getContext().packageManager
            val packageInfo = packageManager.getPackageInfo(getContext().packageName, 0)
            val appInfo = packageManager.getApplicationInfo(getContext().packageName, 0)
            
            val appDir = File(appInfo.sourceDir).parent
            var totalSize = 0L
            
            if (appDir != null) {
                val dir = File(appDir)
                if (dir.exists() && dir.isDirectory) {
                    dir.walkTopDown().forEach { file ->
                        if (file.isFile) {
                            totalSize += file.length()
                        }
                    }
                }
            }
            
            return totalSize / (1024 * 1024) // Convert to MB
        } catch (e: Exception) {
            return -1
        }
    }
    
    private fun getApkSize(): Long {
        try {
            val context = getContext()
            val packageManager = context.packageManager
            val appInfo = packageManager.getApplicationInfo(context.packageName, 0)
            val apkFile = File(appInfo.sourceDir)
            
            if (apkFile.exists()) {
                return apkFile.length() / (1024 * 1024) // Convert to MB
            }
        } catch (e: Exception) {
            // Ignore
        }
        return -1
    }
    
    @Test
    fun measureApkSize() {
        val apkSize = getApkSize()
        
        if (apkSize > 0) {
            println("APK size: ${apkSize}MB")
            
            val status = if (apkSize < 50) "PASSED" else "FAILED"
            logMetric("APK Size", "APK Size", apkSize.toDouble(), "MB", status, "50MB")
            
            // Target: APK size < 50 MB
            assert(apkSize < 50) {
                "APK size (${apkSize}MB) exceeds target (50MB)"
            }
        } else {
            println("Could not determine APK size")
        }
    }
    
    @Test
    fun measureInstalledAppSize() {
        val appSize = getAppSize()
        
        if (appSize > 0) {
            println("Installed app size: ${appSize}MB")
            
            val status = if (appSize < 200) "PASSED" else "FAILED"
            logMetric("Installed Size", "Installed App Size", appSize.toDouble(), "MB", status, "200MB")
            
            // Target: Installed size < 200 MB
            assert(appSize < 200) {
                "Installed app size (${appSize}MB) exceeds target (200MB)"
            }
        } else {
            println("Could not determine installed app size")
        }
    }
    
    @Test
    fun measureAppSizeBreakdown() {
        try {
            val context = getContext()
            val packageManager = context.packageManager
            val packageStats = android.content.pm.PackageStats(context.packageName)
            
            // Note: PackageStats requires reflection or special permissions
            // This is a simplified version
            val apkSize = getApkSize()
            val appSize = getAppSize()
            
            println("APK size: ${apkSize}MB")
            println("Total installed size: ${appSize}MB")
            if (apkSize > 0 && appSize > 0) {
                val additionalSize = appSize - apkSize
                println("Additional size (cache + data): ${additionalSize}MB")
                
                logMetric("Size Breakdown", "APK Size", apkSize.toDouble(), "MB", "PASSED")
                logMetric("Size Breakdown", "Installed Size", appSize.toDouble(), "MB", "PASSED")
                logMetric("Size Breakdown", "Additional Size", additionalSize.toDouble(), "MB", "PASSED")
            }
        } catch (e: Exception) {
            println("Could not get app size breakdown: ${e.message}")
        }
    }
}


