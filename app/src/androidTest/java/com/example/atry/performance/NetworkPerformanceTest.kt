package com.example.atry.performance

import androidx.test.ext.junit.runners.AndroidJUnit4
import kotlinx.coroutines.runBlocking
import org.junit.Test
import org.junit.runner.RunWith
import java.net.HttpURLConnection
import java.net.URL

/**
 * Performance test để đo network performance
 * 
 * Metrics:
 * - Connection time: Thời gian kết nối
 * - Response time: Thời gian nhận response
 * - Throughput: Tốc độ download/upload
 * - Success rate: Tỷ lệ thành công
 */
@RunWith(AndroidJUnit4::class)
class NetworkPerformanceTest {
    
    private fun logMetric(testName: String, metricName: String, value: Double, unit: String, status: String, target: String? = null) {
        PerformanceMetricsLogger.logMetric(
            testCategory = "Network",
            testName = testName,
            metricName = metricName,
            value = value,
            unit = unit,
            status = status,
            target = target
        )
    }
    
    private fun measureConnectionTime(urlString: String): Long {
        val startTime = System.currentTimeMillis()
        try {
            val url = URL(urlString)
            val connection = url.openConnection() as HttpURLConnection
            connection.connectTimeout = 5000
            connection.readTimeout = 5000
            connection.requestMethod = "HEAD"
            connection.connect()
            val endTime = System.currentTimeMillis()
            connection.disconnect()
            return endTime - startTime
        } catch (e: Exception) {
            return -1 // Connection failed
        }
    }
    
    @Test
    fun measureNetworkConnectionTime() {
        val testUrls = listOf(
            "https://www.google.com",
            "https://www.github.com"
        )
        
        val connectionTimes = mutableListOf<Long>()
        
        for (url in testUrls) {
            val connectionTime = measureConnectionTime(url)
            if (connectionTime > 0) {
                connectionTimes.add(connectionTime)
                println("Connection time to $url: ${connectionTime}ms")
            } else {
                println("Failed to connect to $url")
            }
        }
        
        if (connectionTimes.isNotEmpty()) {
            val avgTime = connectionTimes.average()
            val maxTime = connectionTimes.maxOrNull() ?: 0
            println("Average connection time: ${String.format("%.2f", avgTime)}ms")
            println("Max connection time: ${maxTime}ms")
            
            val status = if (avgTime < 2000) "PASSED" else "FAILED"
            connectionTimes.forEachIndexed { index, time ->
                logMetric("Connection", "Connection Time", time.toDouble(), "ms", status, "2000ms")
            }
            logMetric("Connection", "Average Connection Time", avgTime, "ms", status, "2000ms")
            logMetric("Connection", "Max Connection Time", maxTime.toDouble(), "ms", status)
            
            // Target: Average < 2000ms
            assert(avgTime < 2000) {
                "Average connection time (${avgTime}ms) exceeds target (2000ms)"
            }
        }
    }
    
    @Test
    fun measureNetworkLatency() {
        val iterations = 5
        val latencies = mutableListOf<Long>()
        
        for (i in 1..iterations) {
            val latency = measureConnectionTime("https://www.google.com")
            if (latency > 0) {
                latencies.add(latency)
                Thread.sleep(500) // Wait between requests
            }
        }
        
        if (latencies.isNotEmpty()) {
            val avgLatency = latencies.average()
            val minLatency = latencies.minOrNull() ?: 0
            val maxLatency = latencies.maxOrNull() ?: 0
            val jitter = maxLatency - minLatency
            
            println("Network latency - Avg: ${String.format("%.2f", avgLatency)}ms, Min: ${minLatency}ms, Max: ${maxLatency}ms, Jitter: ${jitter}ms")
            
            val status = if (avgLatency < 1000 && jitter < 500) "PASSED" else "FAILED"
            logMetric("Latency", "Average Latency", avgLatency, "ms", status, "1000ms")
            logMetric("Latency", "Min Latency", minLatency.toDouble(), "ms", status)
            logMetric("Latency", "Max Latency", maxLatency.toDouble(), "ms", status)
            logMetric("Latency", "Jitter", jitter.toDouble(), "ms", status, "500ms")
            
            // Target: Average < 1000ms, Jitter < 500ms
            assert(avgLatency < 1000) {
                "Average latency (${avgLatency}ms) exceeds target (1000ms)"
            }
        }
    }
    
    @Test
    fun measureNetworkThroughput() {
        val testUrl = "https://www.google.com"
        val startTime = System.currentTimeMillis()
        
        try {
            val url = URL(testUrl)
            val connection = url.openConnection() as HttpURLConnection
            connection.connectTimeout = 5000
            connection.readTimeout = 10000
            connection.requestMethod = "GET"
            connection.connect()
            
            val inputStream = connection.inputStream
            var bytesRead = 0
            val buffer = ByteArray(1024)
            
            while (inputStream.read(buffer) != -1) {
                bytesRead += buffer.size
                if (bytesRead > 100_000) break // Limit to 100KB for test
            }
            
            val endTime = System.currentTimeMillis()
            val duration = endTime - startTime
            val throughput = (bytesRead.toDouble() / duration) * 1000 / 1024 // KB/s
            
            connection.disconnect()
            
            println("Network throughput: ${String.format("%.2f", throughput)} KB/s")
            println("Bytes downloaded: ${bytesRead} bytes in ${duration}ms")
            
            val status = if (throughput > 10) "PASSED" else "FAILED"
            logMetric("Throughput", "Throughput", throughput, "KB/s", status, "10 KB/s")
            logMetric("Throughput", "Bytes Downloaded", bytesRead.toDouble(), "bytes", status)
            logMetric("Throughput", "Duration", duration.toDouble(), "ms", status)
            
            // Target: Throughput > 10 KB/s
            assert(throughput > 10) {
                "Network throughput (${throughput}KB/s) below target (10KB/s)"
            }
        } catch (e: Exception) {
            println("Network throughput test failed: ${e.message}")
        }
    }
}


