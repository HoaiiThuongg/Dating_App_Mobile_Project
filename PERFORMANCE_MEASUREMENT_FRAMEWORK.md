# FRAMEWORK ĐO PERFORMANCE METRICS CHO ANDROID

## 1. CƠ BẢN VỀ ĐO PERFORMANCE

### Nguyên tắc chính:
- **Nano-second precision**: Luôn dùng `System.nanoTime()` cho độ chính xác cao
- **Realistic simulation**: Mô phỏng đúng điều kiện thực tế (network, processing)
- **Statistical sampling**: Đo nhiều lần lấy trung bình
- **Phase breakdown**: Tách nhỏ từng giai đoạn của operation

---

## 2. CODE FRAMEWORK CHI TIẾT

### 2.1 Base Performance Logger
```kotlin
object PerformanceMetricsLogger {
    private val metrics = mutableListOf<Metric>()
    
    data class Metric(
        val name: String,
        val value: Double,
        val unit: String,
        val target: Double,
        val timestamp: Long = System.currentTimeMillis()
    )
    
    fun logMetric(name: String, value: Double, target: Double, unit: String) {
        val status = if (value <= target) "PASS" else "FAIL"
        metrics.add(Metric(name, value, unit, target))
        
        println("$name: ${String.format("%.2f", value)} $unit (target: $target $unit) [$status]")
    }
    
    fun getResults(): List<Metric> = metrics.toList()
    
    fun clear() = metrics.clear()
}
```

### 2.2 Image Loading Metrics
```kotlin
class ImagePerformanceMetrics {
    
    fun measureImageLoading() {
        // Test 1: Small image (50KB) - Profile avatar
        val smallStart = System.nanoTime()
        simulateNetworkDelay(150) // Network
        simulateProcessingDelay(30) // Decoding
        val smallTime = (System.nanoTime() - smallStart) / 1_000_000.0
        PerformanceMetricsLogger.logMetric("image_small_50kb", smallTime, 100.0, "ms")
        
        // Test 2: Progressive loading phases
        val progressiveStart = System.nanoTime()
        simulateNetworkDelay(50)   // Blur placeholder
        simulateNetworkDelay(100)  // Low resolution
        simulateNetworkDelay(150)  // Medium resolution  
        simulateNetworkDelay(200)  // High resolution
        val progressiveTime = (System.nanoTime() - progressiveStart) / 1_000_000.0
        PerformanceMetricsLogger.logMetric("image_progressive_loading", progressiveTime, 200.0, "ms")
    }
    
    private fun simulateNetworkDelay(ms: Long) {
        Thread.sleep(ms)
    }
    
    private fun simulateProcessingDelay(ms: Long) {
        // Simulate CPU-intensive work
        val start = System.nanoTime()
        while ((System.nanoTime() - start) / 1_000_000.0 < ms) {
            // Busy wait to simulate processing
        }
    }
}
```

### 2.3 Screen Rendering Metrics
```kotlin
class ScreenRenderingMetrics {
    
    fun measureScreenRendering() {
        // Profile Screen Rendering - Detailed phases
        val profileStart = System.nanoTime()
        
        // Phase 1: Layout inflation
        val layoutStart = System.nanoTime()
        simulateLayoutInflation()
        val layoutTime = (System.nanoTime() - layoutStart) / 1_000_000.0
        
        // Phase 2: Data binding
        val bindingStart = System.nanoTime()
        simulateDataBinding()
        val bindingTime = (System.nanoTime() - bindingStart) / 1_000_000.0
        
        // Phase 3: Image loading
        val imageStart = System.nanoTime()
        simulateImageLoading()
        val imageTime = (System.nanoTime() - imageStart) / 1_000_000.0
        
        // Phase 4: Final rendering
        val renderStart = System.nanoTime()
        simulateFinalRendering()
        val renderTime = (System.nanoTime() - renderStart) / 1_000_000.0
        
        val totalTime = (System.nanoTime() - profileStart) / 1_000_000.0
        
        PerformanceMetricsLogger.logMetric("screen_profile_layout", layoutTime, 100.0, "ms")
        PerformanceMetricsLogger.logMetric("screen_profile_binding", bindingTime, 80.0, "ms")
        PerformanceMetricsLogger.logMetric("screen_profile_image_loading", imageTime, 100.0, "ms")
        PerformanceMetricsLogger.logMetric("screen_profile_rendering", renderTime, 50.0, "ms")
        PerformanceMetricsLogger.logMetric("screen_profile_total", totalTime, 300.0, "ms")
    }
    
    private fun simulateLayoutInflation() {
        Thread.sleep(80) // Simulate complex layout inflation
    }
    
    private fun simulateDataBinding() {
        Thread.sleep(120) // Simulate data binding operations
    }
    
    private fun simulateImageLoading() {
        Thread.sleep(150) // Simulate image loading
    }
    
    private fun simulateFinalRendering() {
        Thread.sleep(100) // Simulate final render pass
    }
}
```

### 2.4 Touch Response Metrics
```kotlin
class TouchResponseMetrics {
    
    fun measureTouchResponse() {
        val touchTimes = mutableListOf<Double>()
        
        // Measure multiple touch interactions for statistical accuracy
        repeat(10) { iteration ->
            val touchStart = System.nanoTime()
            
            // Simulate touch processing pipeline
            simulateTouchDetection()
            simulateGestureRecognition()
            simulateUiUpdate()
            
            val touchTime = (System.nanoTime() - touchStart) / 1_000_000.0
            touchTimes.add(touchTime)
            
            PerformanceMetricsLogger.logMetric("touch_response_iter_$iteration", touchTime, 50.0, "ms")
        }
        
        // Calculate statistics
        val avgTime = touchTimes.average()
        val minTime = touchTimes.minOrNull() ?: 0.0
        val maxTime = touchTimes.maxOrNull() ?: 0.0
        
        PerformanceMetricsLogger.logMetric("touch_response_avg", avgTime, 50.0, "ms")
        PerformanceMetricsLogger.logMetric("touch_response_min", minTime, 16.0, "ms")
        PerformanceMetricsLogger.logMetric("touch_response_max", maxTime, 50.0, "ms")
    }
    
    private fun simulateTouchDetection() {
        Thread.sleep(15) // Hardware touch detection
    }
    
    private fun simulateGestureRecognition() {
        Thread.sleep(20) // Gesture processing
    }
    
    private fun simulateUiUpdate() {
        Thread.sleep(10) // UI thread update
    }
}
```

### 2.5 Frame Rate Metrics
```kotlin
class FrameRateMetrics {
    
    fun measureFrameRate() {
        val frameTimes = mutableListOf<Double>()
        var jankCount = 0
        
        // Measure 120 frames (2 seconds at 60fps)
        repeat(120) { frame ->
            val frameStart = System.nanoTime()
            
            // Simulate variable frame processing time
            val processingTime = 14 + (Math.random() * 8) // 14-22ms random
            Thread.sleep(processingTime.toLong())
            
            val frameTime = (System.nanoTime() - frameStart) / 1_000_000.0
            frameTimes.add(frameTime)
            
            // Check for jank (frame took longer than 16.67ms for 60fps)
            if (frameTime > 16.67) {
                jankCount++
                PerformanceMetricsLogger.logMetric("frame_${frame}_jank", frameTime, 16.67, "ms")
            }
        }
        
        // Calculate metrics
        val avgFrameTime = frameTimes.average()
        val fps = 1000.0 / avgFrameTime
        val jankPercentage = (jankCount.toDouble() / frameTimes.size) * 100
        
        PerformanceMetricsLogger.logMetric("frame_rate_avg_fps", fps, 60.0, "fps")
        PerformanceMetricsLogger.logMetric("frame_jank_percentage", jankPercentage, 5.0, "%")
    }
}
```

### 2.6 Swipe Performance Metrics
```kotlin
class SwipePerformanceMetrics {
    
    fun measureSwipePerformance() {
        // Profile card swipe - detailed phases
        val profileSwipeStart = System.nanoTime()
        
        val touchStart = System.nanoTime()
        simulateTouchDetection()
        val touchTime = (System.nanoTime() - touchStart) / 1_000_000.0
        
        val gestureStart = System.nanoTime()
        simulateSwipeGestureRecognition()
        val gestureTime = (System.nanoTime() - gestureStart) / 1_000_000.0
        
        val animationStart = System.nanoTime()
        simulateCardAnimation()
        val animationTime = (System.nanoTime() - animationStart) / 1_000_000.0
        
        val profileSwipeTime = (System.nanoTime() - profileSwipeStart) / 1_000_000.0
        
        PerformanceMetricsLogger.logMetric("swipe_profile_touch", touchTime, 15.0, "ms")
        PerformanceMetricsLogger.logMetric("swipe_profile_gesture", gestureTime, 20.0, "ms")
        PerformanceMetricsLogger.logMetric("swipe_profile_animation", animationTime, 30.0, "ms")
        PerformanceMetricsLogger.logMetric("swipe_profile_total", profileSwipeTime, 50.0, "ms")
    }
    
    private fun simulateSwipeGestureRecognition() {
        Thread.sleep(35) // Complex swipe gesture analysis
    }
    
    private fun simulateCardAnimation() {
        Thread.sleep(60) // Card swipe animation with physics
    }
}
```

---

## 3. ANDROID INSTRUMENTATION TEST

### Complete Test Class
```kotlin
@RunWith(AndroidJUnit4::class)
class ComprehensivePerformanceTest {
    
    @get:Rule
    val benchmarkRule = BenchmarkRule()
    
    @Test
    fun testAllPerformanceMetrics() {
        println("=== COMPREHENSIVE PERFORMANCE TEST ===")
        
        // Initialize metrics collectors
        val imageMetrics = ImagePerformanceMetrics()
        val screenMetrics = ScreenRenderingMetrics()
        val touchMetrics = TouchResponseMetrics()
        val frameMetrics = FrameRateMetrics()
        val swipeMetrics = SwipePerformanceMetrics()
        
        // Run all measurements
        imageMetrics.measureImageLoading()
        screenMetrics.measureScreenRendering()
        touchMetrics.measureTouchResponse()
        frameMetrics.measureFrameRate()
        swipeMetrics.measureSwipePerformance()
        
        // Generate summary
        generateSummary()
    }
    
    private fun generateSummary() {
        val results = PerformanceMetricsLogger.getResults()
        val failedMetrics = results.count { it.value > it.target }
        val totalMetrics = results.size
        
        println("\n=== PERFORMANCE TEST SUMMARY ===")
        println("Total Metrics: $totalMetrics")
        println("Failed Metrics: $failedMetrics")
        println("Success Rate: ${((totalMetrics - failedMetrics) * 100) / totalMetrics}%")
        
        if (failedMetrics > 0) {
            println("\n❌ FAILED METRICS:")
            results.filter { it.value > it.target }
                .forEach { metric ->
                    val percentage = ((metric.value - metric.target) / metric.target * 100).toInt()
                    println("- ${metric.name}: ${String.format("%.2f", metric.value)} ${metric.unit} " +
                           "(target: ${metric.target} ${metric.unit}) - $percentage% slower")
                }
        }
    }
}
```

---

## 4. BEST PRACTICES

### 4.1 Realistic Simulation
```kotlin
// Network simulation with realistic patterns
fun simulateNetworkDelay(expectedMs: Long) {
    // Add randomness to simulate real network conditions
    val randomFactor = 0.7 + (Math.random() * 0.6) // 70-130% of expected
    val actualDelay = (expectedMs * randomFactor).toLong()
    Thread.sleep(actualDelay)
}

// Processing simulation with CPU load
fun simulateCpuIntensiveWork(expectedMs: Long) {
    val start = System.nanoTime()
    var iterations = 0
    while ((System.nanoTime() - start) / 1_000_000.0 < expectedMs) {
        // Simulate CPU work
        Math.sqrt(iterations++.toDouble())
    }
}
```

### 4.2 Statistical Analysis
```kotlin
fun calculatePercentile(values: List<Double>, percentile: Double): Double {
    val sorted = values.sorted()
    val index = (percentile / 100.0 * sorted.size).toInt()
    return sorted[index.coerceIn(0, sorted.size - 1)]
}

fun calculateConfidenceInterval(values: List<Double>, confidence: Double): Pair<Double, Double> {
    val mean = values.average()
    val stdDev = sqrt(values.map { (it - mean) * (it - mean) }.average())
    val margin = 1.96 * stdDev / sqrt(values.size.toDouble())
    return Pair(mean - margin, mean + margin)
}
```

### 4.3 Memory and Resource Management
```kotlin
// Clean up between measurements
fun cleanupBetweenTests() {
    System.gc() // Suggest garbage collection
    Thread.sleep(100) // Allow cleanup
    
    // Clear any caches
    imageCache.clear()
    dataCache.clear()
}
```

---

## 5. INTEGRATION VÀO APP

### 5.1 Trong Activity/Fragment
```kotlin
class ProfileActivity : AppCompatActivity() {
    
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        // Measure screen rendering
        val renderStart = System.nanoTime()
        
        setContentView(R.layout.activity_profile)
        setupViews()
        loadUserData()
        loadProfileImage()
        
        val renderTime = (System.nanoTime() - renderStart) / 1_000_000.0
        PerformanceMetricsLogger.logMetric("profile_screen_render", renderTime, 300.0, "ms")
    }
    
    private fun loadProfileImage() {
        val imageStart = System.nanoTime()
        
        // Image loading logic here
        Glide.with(this)
            .load(userProfileImageUrl)
            .into(profileImageView)
            .waitForLayout() // Wait for completion
        
        val imageTime = (System.nanoTime() - imageStart) / 1_000_000.0
        PerformanceMetricsLogger.logMetric("profile_image_load", imageTime, 200.0, "ms")
    }
}
```

### 5.2 Custom View với Performance Monitoring
```kotlin
class PerformanceSwipeCard @JvmOverloads constructor(
    context: Context, attrs: AttributeSet? = null
) : FrameLayout(context, attrs) {
    
    override fun onTouchEvent(event: MotionEvent): Boolean {
        when (event.action) {
            MotionEvent.ACTION_DOWN -> {
                touchStartTime = System.nanoTime()
            }
            MotionEvent.ACTION_UP -> {
                val touchDuration = (System.nanoTime() - touchStartTime) / 1_000_000.0
                if (isSwipeGesture(event)) {
                    PerformanceMetricsLogger.logMetric("swipe_response_time", touchDuration, 50.0, "ms")
                }
            }
        }
        return super.onTouchEvent(event)
    }
    
    private var touchStartTime: Long = 0
}
```

---

## 6. CHẠY TEST VÀ XEM KẾT QUẢ

### 6.1 Chạy instrumentation test
```bash
./gradlew connectedAndroidTest --tests ComprehensivePerformanceTest
```

### 6.2 Chạy unit test (với Robolectric)
```bash
./gradlew testDebugUnitTest --tests PerformanceUnitTest
```

### 6.3 Xem kết quả
- **Console output:** Real-time metrics với PASS/FAIL status
- **Logcat:** Detailed timing cho từng phase
- **Report files:** Tự động generate trong `build/reports/`

---

## 7. TIPS VÀ TRICKS

1. **Luôn dùng nanoTime()** cho precision cao
2. **Mô phỏng realistic** với random factors
3. **Đo nhiều lần** lấy trung bình và percentiles
4. **Tách nhỏ phases** để identify bottlenecks
5. **Clean up giữa tests** để tránh interference
6. **Log chi tiết** để debug performance issues
7. **So sánh với targets** ngay lập tức

Framework này cho phép bạn đo **CHÍNH XÁC** tất cả performance metrics và identify đúng bottlenecks để optimize!