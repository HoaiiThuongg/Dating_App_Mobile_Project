package com.example.atry

import com.example.atry.ui.screens.auth.login.LoginState
import kotlinx.coroutines.ExperimentalCoroutinesApi
import org.junit.Assert.*
import org.junit.Test

/**
 * Unit tests for LoginViewModel state management.
 * 
 * NOTE: LoginViewModel requires Firebase to be initialized, which is not available
 * in unit test environment. For full integration tests, use androidTest with Firebase Emulator.
 * 
 * This test file focuses on testing LoginState data class and state management logic
 * that doesn't require Firebase.
 */
@OptIn(ExperimentalCoroutinesApi::class)
class LoginViewModelTest {

    /**
     * Test LoginState initial values
     */
    @Test
    fun `LoginState initial values are correct`() {
        val state = LoginState()
        
        assertFalse("Initial state should not be loading", state.isLoading)
        assertFalse("Initial state should not be success", state.isSuccess)
        assertNull("Initial state should have no error", state.error)
        assertNull("Initial state should have no message", state.message)
    }

    /**
     * Test LoginState with loading state
     */
    @Test
    fun `LoginState with loading is correct`() {
        val state = LoginState(isLoading = true)
        
        assertTrue("State should be loading", state.isLoading)
        assertFalse("State should not be success when loading", state.isSuccess)
        assertNull("State should have no error when loading", state.error)
    }

    /**
     * Test LoginState with success state
     */
    @Test
    fun `LoginState with success is correct`() {
        val message = "Đăng nhập thành công"
        val state = LoginState(isSuccess = true, message = message)
        
        assertTrue("State should be success", state.isSuccess)
        assertFalse("State should not be loading when success", state.isLoading)
        assertEquals("State should have success message", message, state.message)
        assertNull("State should have no error when success", state.error)
    }

    /**
     * Test LoginState with error state
     */
    @Test
    fun `LoginState with error is correct`() {
        val errorMessage = "Sai mật khẩu hoặc tên đăng nhập"
        val state = LoginState(error = errorMessage)
        
        assertEquals("State should have error message", errorMessage, state.error)
        assertFalse("State should not be loading when error", state.isLoading)
        assertFalse("State should not be success when error", state.isSuccess)
    }

    /**
     * Test LoginState reset to initial state
     */
    @Test
    fun `LoginState can be reset to initial state`() {
        // Create a state with all fields set
        val state = LoginState(
            isLoading = true,
            isSuccess = true,
            error = "Some error",
            message = "Some message"
        )
        
        // Reset to initial state
        val resetState = LoginState()
        
        assertFalse("Reset state should not be loading", resetState.isLoading)
        assertFalse("Reset state should not be success", resetState.isSuccess)
        assertNull("Reset state should have no error", resetState.error)
        assertNull("Reset state should have no message", resetState.message)
    }
}
