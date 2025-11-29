package com.example.atry.monitoring

import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.widget.*
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.ContextCompat
import com.example.atry.R
import com.example.atry.ui.theme.greenAiColor
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.ui.theme.purpleHighlight
import com.example.atry.ui.theme.strongPurple
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.toArgb
import kotlinx.coroutines.*
import java.text.SimpleDateFormat
import java.util.*
import kotlin.coroutines.CoroutineContext

/**
 * Dashboard hiển thị số lượng người dùng trực tuyến cùng lúc
 * Real-time monitoring với biểu đồ và statistics
 */
class ConcurrentUsersDashboardActivity : AppCompatActivity(), ConcurrentUserMonitor.ConcurrentUserListener {
    
    private lateinit var monitor: ConcurrentUserMonitor
    private val handler = Handler(Looper.getMainLooper())
    private val updateInterval = 1000L // Update mỗi giây
    
    // UI Components
    private lateinit var tvCurrentUsers: TextView
    private lateinit var tvPeakUsers: TextView
    private lateinit var tvAverageUsers: TextView
    private lateinit var tvLastUpdate: TextView
    private lateinit var tvUserStatus: TextView
    private lateinit var progressBar: ProgressBar
    private lateinit var btnRefresh: Button
    private lateinit var btnStartMonitoring: Button
    private lateinit var btnStopMonitoring: Button
    private lateinit var userListContainer: LinearLayout
    private lateinit var scrollView: ScrollView
    
    // Charts
    private lateinit var userCountChart: UserCountChartView
    private lateinit var userActivityChart: UserActivityChartView
    
    // Data tracking
    private val userCountHistory = mutableListOf<UserCountData>()
    private var isMonitoring = false
    private var currentUserCount = 0
    private var peakUserCount = 0
    
    // Coroutine scope
    private val scope = object : CoroutineScope {
        private val job = SupervisorJob()
        override val coroutineContext: CoroutineContext = Dispatchers.Main + job
    }
    
    data class UserCountData(
        val timestamp: Long,
        val userCount: Int,
        val formattedTime: String
    )
    
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_concurrent_users_dashboard)
        
        initViews()
        initMonitor()
        setupListeners()
        startRealTimeUpdates()
        
        // Demo data nếu cần
        generateDemoData()
    }
    
    private fun initViews() {
        tvCurrentUsers = findViewById(R.id.tvCurrentUsers)
        tvPeakUsers = findViewById(R.id.tvPeakUsers)
        tvAverageUsers = findViewById(R.id.tvAverageUsers)
        tvLastUpdate = findViewById(R.id.tvLastUpdate)
        tvUserStatus = findViewById(R.id.tvUserStatus)
        progressBar = findViewById(R.id.progressBar)
        btnRefresh = findViewById(R.id.btnRefresh)
        btnStartMonitoring = findViewById(R.id.btnStartMonitoring)
        btnStopMonitoring = findViewById(R.id.btnStopMonitoring)
        userListContainer = findViewById(R.id.userListContainer)
        scrollView = findViewById(R.id.scrollView)
        
        // Custom chart views
        userCountChart = findViewById(R.id.userCountChart)
        userActivityChart = findViewById(R.id.userActivityChart)
        
        // Initial UI state
        updateUI(0)
        tvUserStatus.text = "Ready to monitor"
        tvLastUpdate.text = "Last update: Never"
    }
    
    private fun initMonitor() {
        monitor = ConcurrentUserMonitor.getInstance(this)
        monitor.addListener(this)
    }
    
    private fun setupListeners() {
        btnRefresh.setOnClickListener {
            refreshData()
        }
        
        btnStartMonitoring.setOnClickListener {
            startMonitoring()
        }
        
        btnStopMonitoring.setOnClickListener {
            stopMonitoring()
        }
    }
    
    private fun startMonitoring() {
        if (isMonitoring) return
        
        isMonitoring = true
        monitor.startMonitoring()
        tvUserStatus.text = "Monitoring active..."
        btnStartMonitoring.isEnabled = false
        btnStopMonitoring.isEnabled = true
        
        // Register demo users
        registerDemoUsers()
        
        Toast.makeText(this, "Concurrent user monitoring started", Toast.LENGTH_SHORT).show()
    }
    
    private fun stopMonitoring() {
        if (!isMonitoring) return
        
        isMonitoring = false
        monitor.stopMonitoring()
        tvUserStatus.text = "Monitoring stopped"
        btnStartMonitoring.isEnabled = true
        btnStopMonitoring.isEnabled = false
        
        Toast.makeText(this, "Concurrent user monitoring stopped", Toast.LENGTH_SHORT).show()
    }
    
    private fun refreshData() {
        scope.launch {
            progressBar.visibility = ProgressBar.VISIBLE
            
            val stats = monitor.getCurrentStats()
            updateUI(stats.currentUsers)
            updateCharts()
            updateUserList(stats.userSessions)
            
            tvLastUpdate.text = "Last update: ${getCurrentTime()}"
            progressBar.visibility = ProgressBar.GONE
            
            Toast.makeText(this@ConcurrentUsersDashboardActivity, "Data refreshed", Toast.LENGTH_SHORT).show()
        }
    }
    
    private fun startRealTimeUpdates() {
        handler.post(object : Runnable {
            override fun run() {
                if (isMonitoring) {
                    updateRealTimeData()
                }
                handler.postDelayed(this, updateInterval)
            }
        })
    }
    
    private fun updateRealTimeData() {
        scope.launch {
            val stats = monitor.getCurrentStats()
            updateUI(stats.currentUsers)
            updateCharts()
            updateUserList(stats.userSessions)
            
            // Add to history
            val timeFormatted = SimpleDateFormat("HH:mm:ss", Locale.getDefault()).format(Date())
            userCountHistory.add(UserCountData(System.currentTimeMillis(), stats.currentUsers, timeFormatted))
            
            // Keep only last 60 data points (1 hour)
            if (userCountHistory.size > 60) {
                userCountHistory.removeAt(0)
            }
        }
    }
    
    private fun updateUI(userCount: Int) {
        currentUserCount = userCount
        if (userCount > peakUserCount) {
            peakUserCount = userCount
        }
        
        // Update current users with animation
        animateNumberChange(tvCurrentUsers, userCount)
        
        // Update peak and average
        tvPeakUsers.text = "Peak: ${ConcurrentUserMonitor.formatUserCount(peakUserCount)}"
        
        val average = if (userCountHistory.isNotEmpty()) {
            userCountHistory.map { it.userCount }.average()
        } else {
            userCount.toDouble()
        }
        tvAverageUsers.text = "Average: ${String.format("%.1f", average)}"
        
        // Update status color based on user count
        updateStatusColor(userCount)
    }
    
    private fun animateNumberChange(textView: TextView, newValue: Int) {
        val oldValue = try {
            textView.text.toString().replace(",", "").toInt()
        } catch (e: Exception) {
            0
        }
        
        if (oldValue == newValue) return
        
        // Simple animation
        val step = if (newValue > oldValue) 1 else -1
        var current = oldValue
        
        handler.post(object : Runnable {
            override fun run() {
                if (current != newValue) {
                    current += step * Math.max(1, Math.abs(newValue - oldValue) / 20)
                    if ((step > 0 && current > newValue) || (step < 0 && current < newValue)) {
                        current = newValue
                    }
                    textView.text = ConcurrentUserMonitor.formatUserCount(current)
                    handler.postDelayed(this, 50)
                }
            }
        })
    }
    
    private fun updateStatusColor(userCount: Int) {
        val colorRes = when {
            userCount < 10 -> android.graphics.Color.GREEN    // Low activity
            userCount < 50 -> android.graphics.Color.rgb(0xBE, 0x55, 0xBF)   // Medium activity  
            userCount < 100 -> android.graphics.Color.RED  // High activity
            else -> android.graphics.Color.rgb(0x6E, 0x08, 0x61)                // Very high activity
        }
        
        tvCurrentUsers.setTextColor(colorRes)
    }
    
    private fun updateCharts() {
        // Update user count chart
        val chartData = userCountHistory.map { 
            UserCountChartView.DataPoint(it.timestamp, it.userCount, it.formattedTime) 
        }
        userCountChart.updateData(chartData)
        
        // Update activity chart (simplified)
        val activityData = generateActivityData()
        userActivityChart.updateData(activityData)
    }
    
    private fun generateActivityData(): List<UserActivityChartView.ActivityData> {
        val activities = mutableListOf<UserActivityChartView.ActivityData>()
        val now = System.currentTimeMillis()
        
        // Generate data for last 24 hours
        for (i in 23 downTo 0) {
            val timestamp = now - (i * 3600000L) // 1 hour intervals
            val hour = SimpleDateFormat("HH", Locale.getDefault()).format(Date(timestamp))
            
            // Simulate activity data (in real app, this would come from server)
            val activeUsers = when (hour.toInt()) {
                in 0..6 -> (5..20).random()      // Night time - low activity
                in 7..9 -> (30..60).random()     // Morning - medium activity
                in 10..17 -> (50..100).random() // Day time - high activity
                in 18..22 -> (40..80).random()  // Evening - medium-high activity
                else -> (20..50).random()        // Late night - medium activity
            }
            
            activities.add(UserActivityChartView.ActivityData(
                timestamp = timestamp,
                hour = hour,
                activeUsers = activeUsers,
                newUsers = (1..10).random(),
                returningUsers = activeUsers - (1..10).random()
            ))
        }
        
        return activities
    }
    
    private fun updateUserList(sessions: List<ConcurrentUserMonitor.UserSession>) {
        userListContainer.removeAllViews()
        
        if (sessions.isEmpty()) {
            val emptyView = TextView(this).apply {
                text = "No active users"
                textSize = 14f
                setPadding(16, 16, 16, 16)
                setTextColor(android.graphics.Color.GRAY)
            }
            userListContainer.addView(emptyView)
            return
        }
        
        // Group by screen
        val usersByScreen = sessions.groupBy { it.currentScreen }
        
        usersByScreen.forEach { (screen, users) ->
            val screenHeader = TextView(this).apply {
                text = "$screen (${users.size} users)"
                textSize = 16f
                setTypeface(null, android.graphics.Typeface.BOLD)
                setPadding(16, 16, 16, 8)
                setTextColor(android.graphics.Color.rgb(0xBE, 0x55, 0xBF))
            }
            userListContainer.addView(screenHeader)
            
            users.take(5).forEach { user ->
                val userView = createUserItemView(user)
                userListContainer.addView(userView)
            }
            
            if (users.size > 5) {
                val moreView = TextView(this).apply {
                    text = "+${users.size - 5} more users"
                    textSize = 12f
                    setPadding(32, 8, 16, 16)
                    setTextColor(android.graphics.Color.GRAY)
                }
                userListContainer.addView(moreView)
            }
        }
    }
    
    private fun createUserItemView(user: ConcurrentUserMonitor.UserSession): TextView {
        return TextView(this).apply {
            val timeAgo = getTimeAgo(user.lastHeartbeat)
            text = "👤 ${user.userId.take(8)}... • ${user.deviceInfo.deviceModel} • $timeAgo"
            textSize = 12f
            setPadding(32, 4, 16, 4)
            setTextColor(android.graphics.Color.DKGRAY)
        }
    }
    
    private fun getTimeAgo(timestamp: Long): String {
        val now = System.currentTimeMillis()
        val diff = now - timestamp
        
        return when {
            diff < 60000 -> "just now"
            diff < 3600000 -> "${diff / 60000}m ago"
            diff < 86400000 -> "${diff / 3600000}h ago"
            else -> "${diff / 86400000}d ago"
        }
    }
    
    private fun getCurrentTime(): String {
        return SimpleDateFormat("HH:mm:ss", Locale.getDefault()).format(Date())
    }
    
    private fun generateDemoData() {
        // Add some initial demo data
        val now = System.currentTimeMillis()
        for (i in 10 downTo 0) {
            val timestamp = now - (i * 60000L) // 1 minute intervals
            val timeFormatted = SimpleDateFormat("HH:mm:ss", Locale.getDefault())
                .format(Date(timestamp))
            val userCount = (20..80).random()
            userCountHistory.add(UserCountData(timestamp, userCount, timeFormatted))
        }
    }
    
    private fun registerDemoUsers() {
        // Register some demo users for testing
        val demoUsers = listOf(
            "user_001" to "main",
            "user_002" to "profile", 
            "user_003" to "chat",
            "user_004" to "swipe",
            "user_005" to "settings"
        )
        
        demoUsers.forEach { (userId, screen) ->
            val deviceInfo = ConcurrentUserMonitor.DeviceInfo(
                deviceModel = "Demo Device",
                osVersion = "13.0",
                appVersion = "1.0.0",
                networkType = "WIFI"
            )
            monitor.registerUser(userId, deviceInfo, screen)
        }
    }
    
    // ConcurrentUserMonitor callbacks
    override fun onUserCountChanged(currentCount: Int, previousCount: Int) {
        runOnUiThread {
            updateUI(currentCount)
            tvUserStatus.text = "Users changed: $previousCount → $currentCount"
        }
    }
    
    override fun onPeakUsersReached(peakCount: Int) {
        runOnUiThread {
            tvUserStatus.text = "🎉 Peak users reached: $peakCount"
            Toast.makeText(this, "Peak users reached: $peakCount", Toast.LENGTH_LONG).show()
        }
    }
    
    override fun onUserSessionStarted(userId: String, sessionId: String) {
        runOnUiThread {
            tvUserStatus.text = "👤 User joined: ${userId.take(8)}..."
        }
    }
    
    override fun onUserSessionEnded(userId: String, sessionId: String) {
        runOnUiThread {
            tvUserStatus.text = "👋 User left: ${userId.take(8)}..."
        }
    }
    
    override fun onDestroy() {
        super.onDestroy()
        monitor.removeListener(this)
        handler.removeCallbacksAndMessages(null)
        scope.coroutineContext.cancelChildren()
    }
}

/**
 * Custom view cho user count chart
 */
class UserCountChartView(context: android.content.Context, attrs: android.util.AttributeSet?) : 
    android.view.View(context, attrs) {
    
    data class DataPoint(
        val timestamp: Long,
        val userCount: Int,
        val timeLabel: String
    )
    
    private var dataPoints = listOf<DataPoint>()
    private val paint = android.graphics.Paint()
    private val textPaint = android.graphics.Paint()
    
    init {
        paint.isAntiAlias = true
        paint.style = android.graphics.Paint.Style.STROKE
        paint.strokeWidth = 4f
        paint.color = android.graphics.Color.rgb(0xBE, 0x55, 0xBF)
        
        textPaint.isAntiAlias = true
        textPaint.textSize = 24f
        textPaint.color = android.graphics.Color.GRAY
    }
    
    fun updateData(newData: List<DataPoint>) {
        dataPoints = newData
        invalidate() // Redraw
    }
    
    override fun onDraw(canvas: android.graphics.Canvas) {
        super.onDraw(canvas)
        
        if (dataPoints.isEmpty()) {
            canvas.drawText("No data", width / 2f - 50, height / 2f, textPaint)
            return
        }
        
        // Draw chart here (simplified line chart)
        val maxUsers = dataPoints.maxOf { it.userCount }
        val minUsers = dataPoints.minOf { it.userCount }
        val range = maxUsers - minUsers
        
        val stepX = width.toFloat() / (dataPoints.size - 1)
        
        for (i in 0 until dataPoints.size - 1) {
            val x1 = i * stepX
            val x2 = (i + 1) * stepX
            
            val y1 = height - ((dataPoints[i].userCount - minUsers).toFloat() / range * height * 0.8f) - height * 0.1f
            val y2 = height - ((dataPoints[i + 1].userCount - minUsers).toFloat() / range * height * 0.8f) - height * 0.1f
            
            canvas.drawLine(x1, y1, x2, y2, paint)
        }
    }
}

/**
 * Custom view cho user activity chart
 */
class UserActivityChartView(context: android.content.Context, attrs: android.util.AttributeSet?) : 
    android.view.View(context, attrs) {
    
    data class ActivityData(
        val timestamp: Long,
        val hour: String,
        val activeUsers: Int,
        val newUsers: Int,
        val returningUsers: Int
    )
    
    private var activityData = listOf<ActivityData>()
    private val paint = android.graphics.Paint()
    
    init {
        paint.isAntiAlias = true
        paint.style = android.graphics.Paint.Style.FILL
    }
    
    fun updateData(newData: List<ActivityData>) {
        activityData = newData
        invalidate() // Redraw
    }
    
    override fun onDraw(canvas: android.graphics.Canvas) {
        super.onDraw(canvas)
        
        if (activityData.isEmpty()) {
            return
        }
        
        // Draw bar chart here
        val maxUsers = activityData.maxOf { it.activeUsers }
        val barWidth = width.toFloat() / activityData.size
        
        activityData.forEachIndexed { index, data ->
            val x = index * barWidth
            val barHeight = (data.activeUsers.toFloat() / maxUsers) * height * 0.8f
            val y = height - barHeight
            
            paint.color = android.graphics.Color.rgb(0xEF, 0x27, 0x8E)
            canvas.drawRect(x, y, x + barWidth - 4, height.toFloat(), paint)
        }
    }
}