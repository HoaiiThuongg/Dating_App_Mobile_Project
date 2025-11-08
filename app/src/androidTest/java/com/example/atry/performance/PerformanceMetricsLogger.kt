package com.example.atry.performance

import android.content.Context
import androidx.test.platform.app.InstrumentationRegistry
import org.json.JSONObject
import java.io.File
import java.text.SimpleDateFormat
import java.util.*

/**
 * Utility class để lưu performance metrics vào file
 * Metrics được lưu dưới dạng JSON để dễ parse sau này
 */
object PerformanceMetricsLogger {
    private const val METRICS_DIR = "performance_metrics"
    private const val METRICS_FILE_PREFIX = "metrics_"
    private const val METRICS_FILE_EXT = ".json"
    
    private fun getMetricsDirectory(): File {
        val context = InstrumentationRegistry.getInstrumentation().targetContext
        // Use internal files directory (accessible via run-as)
        // targetContext gives us the app under test package (com.example.datingapp)
        val internalDir = context.filesDir
        val metricsDir = File(internalDir, METRICS_DIR)
        if (!metricsDir.exists()) {
            val created = metricsDir.mkdirs()
            println("PerformanceMetricsLogger: Created metrics directory: ${metricsDir.absolutePath}, success: $created")
        }
        // Log package name for debugging
        println("PerformanceMetricsLogger: Package: ${context.packageName}, Metrics dir: ${metricsDir.absolutePath}")
        return metricsDir
    }
    
    /**
     * Lưu một metric vào file
     */
    fun logMetric(
        testCategory: String,
        testName: String,
        metricName: String,
        value: Double,
        unit: String,
        status: String,
        target: String? = null,
        timestamp: Long = System.currentTimeMillis()
    ) {
        try {
            val metricsDir = getMetricsDirectory()
            // Use a single file for all metrics (append mode)
            val metricsFile = File(metricsDir, "all_metrics.json")
            
            val metric = JSONObject().apply {
                put("testCategory", testCategory)
                put("testName", testName)
                put("metricName", metricName)
                put("value", value)
                put("unit", unit)
                put("status", status)
                put("target", target ?: "")
                put("timestamp", timestamp)
                put("date", SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(Date(timestamp)))
            }
            
            // Append to file (one JSON object per line)
            metricsFile.appendText(metric.toString() + "\n")
            
            // Also print to console for backward compatibility
            println("METRIC: $testCategory | $testName | $metricName: $value $unit | Status: $status | Target: $target")
        } catch (e: Exception) {
            println("Failed to log metric: ${e.message}")
            e.printStackTrace()
        }
    }
    
    /**
     * Lưu multiple metrics cùng lúc
     */
    fun logMetrics(metrics: List<Metric>) {
        metrics.forEach { metric ->
            logMetric(
                testCategory = metric.category,
                testName = metric.testName,
                metricName = metric.metricName,
                value = metric.value,
                unit = metric.unit,
                status = metric.status,
                target = metric.target
            )
        }
    }
    
    /**
     * Get all metrics files
     */
    fun getAllMetricsFiles(): List<File> {
        val metricsDir = getMetricsDirectory()
        val allMetricsFile = File(metricsDir, "all_metrics.json")
        return if (allMetricsFile.exists()) {
            listOf(allMetricsFile)
        } else {
            metricsDir.listFiles { file ->
                file.name.startsWith(METRICS_FILE_PREFIX) && file.name.endsWith(METRICS_FILE_EXT)
            }?.toList() ?: emptyList()
        }
    }
    
    /**
     * Read all metrics from files
     */
    fun readAllMetrics(): List<Metric> {
        val metrics = mutableListOf<Metric>()
        getAllMetricsFiles().forEach { file ->
            file.readLines().forEach { line ->
                try {
                    val json = JSONObject(line)
                    metrics.add(
                        Metric(
                            category = json.getString("testCategory"),
                            testName = json.getString("testName"),
                            metricName = json.getString("metricName"),
                            value = json.getDouble("value"),
                            unit = json.getString("unit"),
                            status = json.getString("status"),
                            target = json.optString("target", "")
                        )
                    )
                } catch (e: Exception) {
                    // Skip invalid lines
                }
            }
        }
        return metrics
    }
    
    /**
     * Clear all metrics files
     */
    fun clearMetrics() {
        getAllMetricsFiles().forEach { it.delete() }
    }
    
    data class Metric(
        val category: String,
        val testName: String,
        val metricName: String,
        val value: Double,
        val unit: String,
        val status: String,
        val target: String
    )
}

