package com.example.atry.monitoring

import android.content.Context
import android.os.Handler
import android.os.Looper
import kotlinx.coroutines.*
import java.util.concurrent.ConcurrentHashMap
import java.util.concurrent.atomic.AtomicInteger
import kotlin.coroutines.CoroutineContext

/**
 * Monitor số lượng người dùng trực tuyến cùng lúc
 * Sử dụng heartbeat mechanism để theo dõi real-time
 */
class ConcurrentUserMonitor(
    private val context: Context,
    private val heartbeatInterval: Long = 30000L // 30 giây
) : CoroutineScope {
    
    private val job = SupervisorJob()
    override val coroutineContext: CoroutineContext = Dispatchers.IO + job
    
    // Lưu trữ thông tin user đang active
    private val activeUsers = ConcurrentHashMap<String, UserSession>()
    private val concurrentUserCount = AtomicInteger(0)
    
    // Handler cho periodic tasks
    private val handler = Handler(Looper.getMainLooper())
    private var heartbeatRunnable: Runnable? = null
    
    // Callback để thông báo thay đổi
    private val listeners = mutableListOf<ConcurrentUserListener>()
    
    // Server endpoint để sync với backend
    private val serverSyncEnabled = true
    private var serverSyncJob: Job? = null
    
    data class UserSession(
        val userId: String,
        val sessionId: String,
        val lastHeartbeat: Long,
        val deviceInfo: DeviceInfo,
        val currentScreen: String = "unknown"
    )
    
    data class DeviceInfo(
        val deviceModel: String,
        val osVersion: String,
        val appVersion: String,
        val networkType: String
    )
    
    data class ConcurrentUserStats(
        val currentUsers: Int,
        val peakUsers: Int,
        val averageUsers: Double,
        val userSessions: List<UserSession>,
        val timestamp: Long
    )
    
    interface ConcurrentUserListener {
        fun onUserCountChanged(currentCount: Int, previousCount: Int)
        fun onPeakUsersReached(peakCount: Int)
        fun onUserSessionStarted(userId: String, sessionId: String)
        fun onUserSessionEnded(userId: String, sessionId: String)
    }
    
    companion object {
        @Volatile
        private var INSTANCE: ConcurrentUserMonitor? = null
        
        fun getInstance(context: Context): ConcurrentUserMonitor {
            return INSTANCE ?: synchronized(this) {
                INSTANCE ?: ConcurrentUserMonitor(context.applicationContext).also {
                    INSTANCE = it
                }
            }
        }
        
        // Hàm tiện ích để format số liệu
        fun formatUserCount(count: Int): String {
            return when {
                count < 1000 -> count.toString()
                count < 1000000 -> "${String.format("%.1f", count / 1000.0)}K"
                else -> "${String.format("%.1f", count / 1000000.0)}M"
            }
        }
    }
    
    // Khởi động monitoring
    fun startMonitoring() {
        if (heartbeatRunnable != null) return
        
        heartbeatRunnable = object : Runnable {
            override fun run() {
                performHeartbeatCheck()
                handler.postDelayed(this, heartbeatInterval)
            }
        }
        
        handler.post(heartbeatRunnable!!)
        
        // Bắt đầu server sync nếu enabled
        if (serverSyncEnabled) {
            startServerSync()
        }
        
        log("ConcurrentUserMonitor started with ${heartbeatInterval}ms interval")
    }
    
    // Dừng monitoring
    fun stopMonitoring() {
        heartbeatRunnable?.let { handler.removeCallbacks(it) }
        heartbeatRunnable = null
        
        serverSyncJob?.cancel()
        job.cancel()
        
        log("ConcurrentUserMonitor stopped")
    }
    
    // User đăng nhập/app mở lên
    fun registerUser(userId: String, deviceInfo: DeviceInfo, currentScreen: String = "main") {
        launch {
            val sessionId = generateSessionId(userId)
            val now = System.currentTimeMillis()
            
            val userSession = UserSession(
                userId = userId,
                sessionId = sessionId,
                lastHeartbeat = now,
                deviceInfo = deviceInfo,
                currentScreen = currentScreen
            )
            
            val previousCount = concurrentUserCount.get()
            activeUsers[sessionId] = userSession
            val newCount = concurrentUserCount.incrementAndGet()
            
            // Thông báo cho listeners
            withContext(Dispatchers.Main) {
                listeners.forEach { 
                    it.onUserSessionStarted(userId, sessionId)
                    it.onUserCountChanged(newCount, previousCount)
                }
            }
            
            log("User $userId registered. Count: $newCount")
            
            // Sync với server ngay lập tức
            if (serverSyncEnabled) {
                syncWithServer("user_joined", userId, sessionId)
            }
        }
    }
    
    // User thoát app/đăng xuất
    fun unregisterUser(userId: String) {
        launch {
            // Tìm tất cả sessions của user này
            val userSessions = activeUsers.filter { it.value.userId == userId }
            
            userSessions.forEach { (sessionId, session) ->
                val previousCount = concurrentUserCount.get()
                activeUsers.remove(sessionId)
                val newCount = concurrentUserCount.decrementAndGet()
                
                withContext(Dispatchers.Main) {
                    listeners.forEach {
                        it.onUserSessionEnded(userId, sessionId)
                        it.onUserCountChanged(newCount, previousCount)
                    }
                }
                
                log("User $userId unregistered. Count: $newCount")
                
                if (serverSyncEnabled) {
                    syncWithServer("user_left", userId, sessionId)
                }
            }
        }
    }
    
    // Update user activity (heartbeat)
    fun updateUserActivity(userId: String, currentScreen: String = "unknown") {
        launch {
            val sessions = activeUsers.filter { it.value.userId == userId }
            val now = System.currentTimeMillis()
            
            sessions.forEach { (sessionId, session) ->
                val updatedSession = session.copy(
                    lastHeartbeat = now,
                    currentScreen = currentScreen
                )
                activeUsers[sessionId] = updatedSession
            }
        }
    }
    
    // Kiểm tra và cleanup inactive users
    private fun performHeartbeatCheck() {
        launch {
            val now = System.currentTimeMillis()
            val timeout = heartbeatInterval * 2 // 2 lần heartbeat interval
            
            val inactiveSessions = activeUsers.filter { 
                (now - it.value.lastHeartbeat) > timeout 
            }
            
            inactiveSessions.forEach { (sessionId, session) ->
                val previousCount = concurrentUserCount.get()
                activeUsers.remove(sessionId)
                val newCount = concurrentUserCount.decrementAndGet()
                
                withContext(Dispatchers.Main) {
                    listeners.forEach {
                        it.onUserSessionEnded(session.userId, sessionId)
                        it.onUserCountChanged(newCount, previousCount)
                    }
                }
                
                log("Removed inactive user ${session.userId}. Count: $newCount")
            }
        }
    }
    
    // Lấy stats hiện tại
    fun getCurrentStats(): ConcurrentUserStats {
        val currentCount = concurrentUserCount.get()
        val userSessions = activeUsers.values.toList()
        val peakUsers = getPeakUsers()
        val averageUsers = calculateAverageUsers()
        
        return ConcurrentUserStats(
            currentUsers = currentCount,
            peakUsers = peakUsers,
            averageUsers = averageUsers,
            userSessions = userSessions,
            timestamp = System.currentTimeMillis()
        )
    }
    
    // Lấy số users hiện tại
    fun getCurrentUserCount(): Int = concurrentUserCount.get()
    
    // Lấy danh sách users đang active
    fun getActiveUsers(): List<UserSession> = activeUsers.values.toList()
    
    // Thêm listener
    fun addListener(listener: ConcurrentUserListener) {
        listeners.add(listener)
    }
    
    // Xóa listener
    fun removeListener(listener: ConcurrentUserListener) {
        listeners.remove(listener)
    }
    
    // Generate unique session ID
    private fun generateSessionId(userId: String): String {
        return "${userId}_${System.currentTimeMillis()}_${(Math.random() * 1000).toInt()}"
    }
    
    // Lấy peak users (có thể lưu vào SharedPreferences hoặc database)
    private fun getPeakUsers(): Int {
        // Implement logic để lấy peak users từ lịch sử
        return concurrentUserCount.get() // Temporary
    }
    
    // Tính average users
    private fun calculateAverageUsers(): Double {
        // Implement logic để tính average từ lịch sử
        return concurrentUserCount.get().toDouble() // Temporary
    }
    
    // Sync với server
    private fun syncWithServer(event: String, userId: String, sessionId: String) {
        launch {
            try {
                // Implement server sync logic
                // Có thể dùng Retrofit, Firebase, hoặc WebSocket
                log("Syncing with server: $event for user $userId")
            } catch (e: Exception) {
                log("Server sync failed: ${e.message}")
            }
        }
    }
    
    // Bắt đầu server sync job
    private fun startServerSync() {
        serverSyncJob = launch {
            while (isActive) {
                delay(60000L) // Sync mỗi phút
                syncCurrentStats()
            }
        }
    }
    
    // Sync stats hiện tại lên server
    private fun syncCurrentStats() {
        launch {
            val stats = getCurrentStats()
            // Implement sync logic với server
            log("Syncing stats: ${stats.currentUsers} users online")
        }
    }
    
    // Logging
    private fun log(message: String) {
        println("[ConcurrentUserMonitor] $message")
    }
}

/**
 * Extension functions để dễ sử dụng
 */
fun Context.trackUserActivity(userId: String, screen: String = "unknown") {
    val monitor = ConcurrentUserMonitor.getInstance(this)
    val deviceInfo = ConcurrentUserMonitor.DeviceInfo(
        deviceModel = android.os.Build.MODEL,
        osVersion = android.os.Build.VERSION.RELEASE,
        appVersion = packageManager.getPackageInfo(packageName, 0).versionName ?: "1.0",
        networkType = getNetworkType()
    )
    
    monitor.updateUserActivity(userId, screen)
}

fun Context.getNetworkType(): String {
    val connectivityManager = getSystemService(Context.CONNECTIVITY_SERVICE) as android.net.ConnectivityManager
    return try {
        val activeNetwork = connectivityManager.activeNetworkInfo
        when (activeNetwork?.type) {
            android.net.ConnectivityManager.TYPE_WIFI -> "WIFI"
            android.net.ConnectivityManager.TYPE_MOBILE -> "MOBILE"
            else -> "UNKNOWN"
        }
    } catch (e: Exception) {
        "UNKNOWN"
    }
}