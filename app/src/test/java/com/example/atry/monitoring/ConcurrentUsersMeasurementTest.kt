package com.example.atry.monitoring

import org.junit.Test
import org.junit.Assert.*
import kotlinx.coroutines.*
import java.util.concurrent.ConcurrentHashMap
import java.util.concurrent.atomic.AtomicInteger
import kotlin.system.measureTimeMillis

/**
 * Test đo lường số lượng người dùng cùng lúc (concurrent users)
 * Mô phỏng real-world scenario với nhiều users truy cập đồng thời
 */
class ConcurrentUsersMeasurementTest {

    @Test
    fun measureConcurrentUsersPerformance() {
        println("\n" + "=".repeat(80))
        println("🔥 CONCURRENT USERS MEASUREMENT TEST")
        println("=".repeat(80))

        // Test scenarios khác nhau
        testScenario("Low Load", 10, 30_000L)      // 10 users, 30s
        testScenario("Medium Load", 50, 60_000L)    // 50 users, 60s  
        testScenario("High Load", 100, 90_000L)   // 100 users, 90s
        testScenario("Peak Load", 200, 120_000L)  // 200 users, 120s
        
        // Test gradual increase
        testGradualIncrease()
        
        // Test sudden spike
        testSuddenSpike()
        
        // Test user behavior patterns
        testUserBehaviorPatterns()
    }

    private fun testScenario(scenarioName: String, userCount: Int, durationMs: Long) {
        println("\n📊 Testing $scenarioName: $userCount users for ${durationMs / 1000}s")
        println("-".repeat(60))
        
        val monitor = TestConcurrentUserMonitor()
        val startTime = System.currentTimeMillis()
        val results = mutableListOf<ConcurrentUserSnapshot>()
        
        runBlocking {
            // Start monitoring
            monitor.startMonitoring()
            
            // Launch users gradually
            val userJobs = mutableListOf<Job>()
            val userJoinInterval = durationMs / userCount
            
            for (i in 1..userCount) {
                delay(userJoinInterval)
                
                val job = launch {
                    simulateUserSession(monitor, "user_$i", durationMs / userCount)
                }
                userJobs.add(job)
            }
            
            // Collect metrics during test
            val metricsJob = launch {
                while (isActive) {
                    val snapshot = monitor.getSnapshot()
                    results.add(snapshot)
                    delay(1000) // Collect every second
                }
            }
            
            // Wait for all users to complete
            userJobs.joinAll()
            metricsJob.cancel()
            
            monitor.stopMonitoring()
        }
        
        val endTime = System.currentTimeMillis()
        val actualDuration = endTime - startTime
        
        // Analyze results
        analyzeResults(scenarioName, results, actualDuration)
    }

    private fun testGradualIncrease() {
        println("\n📈 Testing Gradual User Increase")
        println("-".repeat(60))
        
        val monitor = TestConcurrentUserMonitor()
        val results = mutableListOf<ConcurrentUserSnapshot>()
        
        runBlocking {
            monitor.startMonitoring()
            
            // Gradually increase users over 2 minutes
            for (phase in 1..6) {
                val usersInPhase = phase * 20
                println("Phase $phase: Adding $usersInPhase users")
                
                repeat(usersInPhase) { userIndex ->
                    launch {
                        val userId = "gradual_user_${phase}_$userIndex"
                        simulateUserSession(monitor, userId, 60_000L) // 1 minute session
                    }
                }
                
                // Collect snapshot
                delay(20_000L) // 20 seconds between phases
                results.add(monitor.getSnapshot())
            }
            
            delay(30_000L) // Let users finish
            monitor.stopMonitoring()
        }
        
        println("✅ Gradual increase test completed")
        println("Peak concurrent users: ${results.maxOf { it.currentUsers }}")
        println("Average concurrent users: ${results.map { it.currentUsers }.average()}")
    }

    private fun testSuddenSpike() {
        println("\n⚡ Testing Sudden User Spike")
        println("-".repeat(60))
        
        val monitor = TestConcurrentUserMonitor()
        val results = mutableListOf<ConcurrentUserSnapshot>()
        
        runBlocking {
            monitor.startMonitoring()
            
            // Start with normal load
            repeat(20) { i ->
                launch {
                    simulateUserSession(monitor, "normal_user_$i", 90_000L)
                }
            }
            
            delay(10_000L) // Wait for normal users
            results.add(monitor.getSnapshot())
            
            // Sudden spike - 150 users join at once
            println("Creating sudden spike: 150 users joining simultaneously")
            val spikeStart = System.currentTimeMillis()
            
            repeat(150) { i ->
                launch {
                    simulateUserSession(monitor, "spike_user_$i", 60_000L)
                }
            }
            
            // Monitor spike impact
            delay(5_000L)
            val spikeSnapshot = monitor.getSnapshot()
            results.add(spikeSnapshot)
            
            val spikeEnd = System.currentTimeMillis()
            println("Spike handled in ${spikeEnd - spikeStart}ms")
            println("Users during spike: ${spikeSnapshot.currentUsers}")
            
            delay(60_000L) // Let spike settle
            monitor.stopMonitoring()
        }
        
        analyzeSpikeResults(results)
    }

    private fun testUserBehaviorPatterns() {
        println("\n👥 Testing User Behavior Patterns")
        println("-".repeat(60))
        
        val monitor = TestConcurrentUserMonitor()
        
        runBlocking {
            monitor.startMonitoring()
            
            // Pattern 1: Dating app peak hours (7-10 PM)
            println("Simulating dating app peak hours...")
            simulatePeakHours(monitor)
            
            // Pattern 2: Weekend vs Weekday
            println("Simulating weekend activity...")
            simulateWeekendPattern(monitor)
            
            // Pattern 3: Swipe sessions (short bursts)
            println("Simulating swipe sessions...")
            simulateSwipeSessions(monitor)
            
            monitor.stopMonitoring()
        }
    }

    private suspend fun simulateUserSession(monitor: TestConcurrentUserMonitor, userId: String, sessionDuration: Long) {
        val deviceInfo = ConcurrentUserMonitor.DeviceInfo(
            deviceModel = "TestDevice",
            osVersion = "13.0",
            appVersion = "1.0.0",
            networkType = listOf("WIFI", "MOBILE").random()
        )
        
        // User joins
        monitor.registerUser(userId, deviceInfo, "main")
        
        // Simulate session with random activities
        val sessionStart = System.currentTimeMillis()
        var currentScreen = "main"
        
        while (System.currentTimeMillis() - sessionStart < sessionDuration) {
            // Random screen changes
            if (Math.random() < 0.3) {
                currentScreen = listOf("profile", "swipe", "chat", "settings").random()
                monitor.updateUserActivity(userId, currentScreen)
            }
            
            // Random heartbeat
            delay((1000..5000).random().toLong()) // 1-5 seconds
            monitor.updateUserActivity(userId, currentScreen)
        }
        
        // User leaves
        monitor.unregisterUser(userId)
    }

    private suspend fun simulatePeakHours(monitor: TestConcurrentUserMonitor) {
        // Simulate 7-10 PM peak
        val peakUsers = (100..200).random()
        
        repeat(peakUsers) { i ->
            launch {
                val sessionDuration = (30_000L..120_000L).random() // 30s to 2min
                simulateUserSession(monitor, "peak_user_$i", sessionDuration)
            }
        }
        
        delay(30_000L) // Let peak settle
        val peakSnapshot = monitor.getSnapshot()
        println("Peak hours simulation: ${peakSnapshot.currentUsers} concurrent users")
    }

    private suspend fun simulateWeekendPattern(monitor: TestConcurrentUserMonitor) {
        // Weekend pattern: longer sessions, more casual browsing
        repeat(50) { i ->
            launch {
                val sessionDuration = (60_000L..300_000L).random() // 1-5 minutes
                simulateUserSession(monitor, "weekend_user_$i", sessionDuration)
            }
        }
        
        delay(60_000L)
        val weekendSnapshot = monitor.getSnapshot()
        println("Weekend pattern: ${weekendSnapshot.currentUsers} concurrent users")
    }

    private suspend fun simulateSwipeSessions(monitor: TestConcurrentUserMonitor) {
        // Short, frequent swipe sessions
        repeat(30) { i ->
            launch {
                // Short session (10-30 seconds)
                val sessionDuration = (10_000L..30_000L).random()
                simulateUserSession(monitor, "swipe_user_$i", sessionDuration)
                
                // Break between sessions
                delay((5000L..15000L).random())
                
                // Come back for another session
                val secondSessionDuration = (5000L..20_000L).random()
                simulateUserSession(monitor, "swipe_user_${i}_return", secondSessionDuration)
            }
        }
    }

    private fun analyzeResults(scenarioName: String, results: List<ConcurrentUserSnapshot>, duration: Long) {
        if (results.isEmpty()) {
            println("❌ No data collected for $scenarioName")
            return
        }
        
        val userCounts = results.map { it.currentUsers }
        val maxUsers = userCounts.maxOrNull() ?: 0
        val minUsers = userCounts.minOrNull() ?: 0
        val avgUsers = userCounts.average()
        val totalSessions = results.sumOf { it.totalSessions }
        
        println("\n📊 $scenarioName Results:")
        println("  Duration: ${duration / 1000}s")
        println("  Peak concurrent users: $maxUsers")
        println("  Average concurrent users: ${String.format("%.1f", avgUsers)}")
        println("  Minimum concurrent users: $minUsers")
        println("  Total user sessions: $totalSessions")
        println("  User join rate: ${String.format("%.2f", totalSessions.toDouble() / (duration / 1000.0))} users/second")
        
        // Performance analysis
        if (maxUsers > 100) {
            println("  ⚠️  High load detected - consider scaling")
        }
        if (avgUsers > maxUsers * 0.8) {
            println("  ✅ Consistent high usage - good user retention")
        }
        if (minUsers < maxUsers * 0.1) {
            println("  ⚠️  High variance - investigate user patterns")
        }
    }

    private fun analyzeSpikeResults(results: List<ConcurrentUserSnapshot>) {
        if (results.size < 2) return
        
        val beforeSpike = results[0].currentUsers
        val duringSpike = results[1].currentUsers
        val spikeMultiplier = duringSpike.toDouble() / beforeSpike.toDouble()
        
        println("\n⚡ Spike Analysis:")
        println("  Users before spike: $beforeSpike")
        println("  Users during spike: $duringSpike")
        println("  Spike multiplier: ${String.format("%.1fx", spikeMultiplier)}")
        
        if (spikeMultiplier > 3.0) {
            println("  🚨 Extreme spike detected - implement rate limiting")
        } else if (spikeMultiplier > 2.0) {
            println("  ⚠️  Significant spike - monitor server capacity")
        } else {
            println("  ✅ Manageable spike - within normal parameters")
        }
    }

    // Test helper class
    class TestConcurrentUserMonitor {
        private val activeUsers = ConcurrentHashMap<String, UserSession>()
        private val concurrentUserCount = AtomicInteger(0)
        private val totalSessions = AtomicInteger(0)
        private var monitoring = false
        
        data class UserSession(
            val userId: String,
            val sessionId: String,
            val joinTime: Long,
            var lastActivity: Long,
            var currentScreen: String
        )
        
        data class ConcurrentUserSnapshot(
            val currentUsers: Int,
            val totalSessions: Int,
            val timestamp: Long,
            val activeSessions: List<UserSession>
        )
        
        fun startMonitoring() {
            monitoring = true
            println("🚀 Test monitor started")
        }
        
        fun stopMonitoring() {
            monitoring = false
            println("⏹️ Test monitor stopped")
        }
        
        fun registerUser(userId: String, deviceInfo: ConcurrentUserMonitor.DeviceInfo, screen: String) {
            val sessionId = "${userId}_${System.currentTimeMillis()}"
            val now = System.currentTimeMillis()
            
            val session = UserSession(
                userId = userId,
                sessionId = sessionId,
                joinTime = now,
                lastActivity = now,
                currentScreen = screen
            )
            
            activeUsers[sessionId] = session
            concurrentUserCount.incrementAndGet()
            totalSessions.incrementAndGet()
            
            println("👤 User $userId joined. Current: ${concurrentUserCount.get()}")
        }
        
        fun unregisterUser(userId: String) {
            val sessions = activeUsers.filter { it.value.userId == userId }
            sessions.forEach { (sessionId, session) ->
                activeUsers.remove(sessionId)
                concurrentUserCount.decrementAndGet()
                println("👋 User $userId left. Current: ${concurrentUserCount.get()}")
            }
        }
        
        fun updateUserActivity(userId: String, screen: String) {
            val sessions = activeUsers.filter { it.value.userId == userId }
            val now = System.currentTimeMillis()
            
            sessions.forEach { (sessionId, session) ->
                val updatedSession = session.copy(
                    lastActivity = now,
                    currentScreen = screen
                )
                activeUsers[sessionId] = updatedSession
            }
        }
        
        fun getSnapshot(): ConcurrentUserSnapshot {
            return ConcurrentUserSnapshot(
                currentUsers = concurrentUserCount.get(),
                totalSessions = totalSessions.get(),
                timestamp = System.currentTimeMillis(),
                activeSessions = activeUsers.values.toList()
            )
        }
    }
}