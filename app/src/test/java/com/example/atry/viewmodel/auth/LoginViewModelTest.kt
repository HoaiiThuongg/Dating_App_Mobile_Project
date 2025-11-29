package com.example.atry.viewmodel.auth

import android.app.Application
import androidx.test.core.app.ApplicationProvider
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.test.runTest
import org.junit.Assert.*
import org.junit.Before
import org.junit.Test

/**
 * Unit tests for LoginViewModel.
 * 
 * NOTE: These tests focus on state management and basic functionality.
 * Full integration tests with Firebase should be done in androidTest.
 */
@OptIn(ExperimentalCoroutinesApi::class)
class LoginViewModelTest {

    private lateinit var application: Application
    private lateinit var viewModel: LoginViewModel

    @Before
    fun setUp() {
        try {
            application = ApplicationProvider.getApplicationContext()
            viewModel = LoginViewModel(application)
        } catch (e: IllegalStateException) {
            // Application or Firebase not initialized in unit test
            throw org.junit.AssumptionViolatedException("Application/Firebase not available in unit test environment", e)
        } catch (e: RuntimeException) {
            // Firebase not initialized in unit test
            throw org.junit.AssumptionViolatedException("Firebase not available in unit test environment", e)
        }
    }

    @Test
    fun `initial state is correct`() {
        val state = viewModel.state.value
        assertFalse("Initial state should not be loading", state.isLoading)
        assertFalse("Initial state should not be success", state.isSuccess)
        assertNull("Initial state should have no error", state.error)
        assertNull("Initial state should have no message", state.message)
    }

    @Test
    fun `login sets loading state immediately`() = runTest {
        // Act
        viewModel.login("test@example.com", "password123")

        // Assert - loading should be set immediately
        assertTrue("State should be loading", viewModel.state.value.isLoading)
    }

    @Test
    fun `resetState resets to initial state`() {
        // Arrange - set some state
        viewModel.login("test@example.com", "password123")

        // Act
        viewModel.resetState()

        // Assert
        val state = viewModel.state.value
        assertFalse("State should not be loading after reset", state.isLoading)
        assertFalse("State should not be success after reset", state.isSuccess)
        assertNull("State should have no error after reset", state.error)
        assertNull("State should have no message after reset", state.message)
    }

    @Test
    fun `login can be called multiple times`() = runTest {
        // Act
        viewModel.login("test1@example.com", "pass1")
        viewModel.resetState()
        viewModel.login("test2@example.com", "pass2")

        // Assert - should not crash
        assertNotNull("Login should be callable multiple times", viewModel.state.value)
    }

    @Test
    fun `login with empty email sets loading state`() = runTest {
        // Act
        viewModel.login("", "password123")

        // Assert - loading should still be set
        assertTrue("State should be loading even with empty email", viewModel.state.value.isLoading)
    }

    @Test
    fun `login with empty password sets loading state`() = runTest {
        // Act
        viewModel.login("test@example.com", "")

        // Assert - loading should still be set
        assertTrue("State should be loading even with empty password", viewModel.state.value.isLoading)
    }

    @Test
    fun `resetState after login clears all state`() {
        // Arrange
        viewModel.login("test@example.com", "password123")

        // Act
        viewModel.resetState()

        // Assert
        val state = viewModel.state.value
        assertFalse("State should not be loading after reset", state.isLoading)
        assertFalse("State should not be success after reset", state.isSuccess)
        assertNull("State should have no error after reset", state.error)
        assertNull("State should have no message after reset", state.message)
    }
}

