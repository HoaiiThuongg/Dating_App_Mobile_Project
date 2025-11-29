package com.example.atry.viewmodel.functional

import com.example.atry.backend.User

/**
 * Fake SwipeViewModel for testing swipe functionality and match detection
 * This is a standalone fake, not extending the actual SwipeViewModel
 */
class FakeSwipeViewModel {
    
    // Store mutual likes for testing match detection
    private val mutualLikes = mutableMapOf<String, MutableSet<String>>()
    
    /**
     * Simulate a mutual like between two users for testing match detection
     */
    fun simulateMutualLike(userId1: String, userId2: String) {
        mutualLikes.getOrPut(userId1) { mutableSetOf() }.add(userId2)
        mutualLikes.getOrPut(userId2) { mutableSetOf() }.add(userId1)
    }
    
    /**
     * Check if there's a mutual like between two users
     */
    fun isMutualLike(userId1: String, userId2: String): Boolean {
        return mutualLikes[userId1]?.contains(userId2) == true &&
               mutualLikes[userId2]?.contains(userId1) == true
    }
    
    /**
     * Simulate load more users - no-op for testing
     */
    fun loadMoreUsers(limit: Int = 10) {
        // No-op for testing
    }
    
    /**
     * Simulate swipe action - no-op for testing
     */
    fun swipe(targetUserId: String, type: com.example.atry.backend.SwipeService.SwipeType) {
        // Simulate successful swipe for testing
        errorMessage = "Swipe successful"
    }
    
    // Mock properties that tests might need
    var errorMessage: String? = null
    val users = mutableListOf<User>()
    var isLoading = false
}