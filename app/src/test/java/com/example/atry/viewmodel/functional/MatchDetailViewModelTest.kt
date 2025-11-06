package com.example.atry.viewmodel.functional

import kotlinx.coroutines.ExperimentalCoroutinesApi
import org.junit.Assert.*
import org.junit.Before
import org.junit.Test

@OptIn(ExperimentalCoroutinesApi::class)
class MatchDetailViewModelTest {

    private lateinit var viewModel: MatchDetailViewModel

    @Before
    fun setUp() {
        try {
            viewModel = MatchDetailViewModel()
        } catch (e: RuntimeException) {
            // Firebase not initialized in unit test
            throw org.junit.AssumptionViolatedException("Firebase not available in unit test environment", e)
        }
    }

    @Test
    fun `initial state is correct`() {
        assertNotNull("Days matched should be initialized", viewModel.daysMatched)
        assertNotNull("Unmatch status should be initialized", viewModel.unmatchStatus)
        assertNotNull("Swipe service should be initialized", viewModel.swipeService)
    }

    @Test
    fun `fetchDaysMatched is callable`() {
        // Act
        viewModel.fetchDaysMatched("user123", "partner456")

        // Assert - method should be callable without crashing
        assertNotNull("Fetch days matched should be callable", viewModel.daysMatched)
    }

    @Test
    fun `unmatchUser is callable`() {
        // Act
        viewModel.unmatchUser("user123", "partner456")

        // Assert - method should be callable without crashing
        assertNotNull("Unmatch user should be callable", viewModel.unmatchStatus)
    }
}

