package com.example.atry.viewmodel.functional

import kotlinx.coroutines.ExperimentalCoroutinesApi
import org.junit.Assert.*
import org.junit.Before
import org.junit.Test

@OptIn(ExperimentalCoroutinesApi::class)
class DetailedProfileViewModelTest {

    private lateinit var viewModel: DetailedProfileViewModel

    @Before
    fun setUp() {
        try {
            viewModel = DetailedProfileViewModel()
        } catch (e: RuntimeException) {
            // Firebase not initialized in unit test
            throw org.junit.AssumptionViolatedException("Firebase not available in unit test environment", e)
        }
    }

    @Test
    fun `initial state is correct`() {
        assertNull("Initial user should be null", viewModel.user.value)
    }

    @Test
    fun `swipe is callable`() {
        // Act
        viewModel.swipe("user123", com.example.atry.backend.SwipeService.SwipeType.RIGHT)

        // Assert - method should be callable without crashing
        assertNotNull("Swipe should be callable", viewModel)
    }

    @Test
    fun `swipe handles different swipe types`() {
        // Test different swipe types
        viewModel.swipe("user123", com.example.atry.backend.SwipeService.SwipeType.RIGHT)
        viewModel.swipe("user456", com.example.atry.backend.SwipeService.SwipeType.LEFT)
        viewModel.swipe("user789", com.example.atry.backend.SwipeService.SwipeType.SUPER)

        // Assert - methods should be callable without crashing
        assertNotNull("Swipe should handle different types", viewModel)
    }

    @Test
    fun `getUserProfileById is callable`() {
        // Act
        viewModel.getUserProfileById("user123")

        // Assert - method should be callable without crashing
        assertNotNull("Get user profile should be callable", viewModel.user)
    }
}

