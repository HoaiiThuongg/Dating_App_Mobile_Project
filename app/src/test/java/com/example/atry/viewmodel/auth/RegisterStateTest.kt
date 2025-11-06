package com.example.atry.viewmodel.auth

import org.junit.Assert.*
import org.junit.Test

class RegisterStateTest {

    @Test
    fun `RegisterState initial values are correct`() {
        val state = RegisterState()

        assertFalse("Initial state should not be loading", state.isLoading)
        assertFalse("Initial state should not be success", state.isSuccess)
        assertNull("Initial state should have no error", state.error)
        assertNull("Initial state should have no message", state.message)
    }

    @Test
    fun `RegisterState with loading is correct`() {
        val state = RegisterState(isLoading = true)

        assertTrue("State should be loading", state.isLoading)
        assertFalse("State should not be success when loading", state.isSuccess)
        assertNull("State should have no error when loading", state.error)
    }

    @Test
    fun `RegisterState with success is correct`() {
        val message = "Đăng ký thành công"
        val state = RegisterState(isSuccess = true, message = message)

        assertTrue("State should be success", state.isSuccess)
        assertFalse("State should not be loading when success", state.isLoading)
        assertEquals("State should have success message", message, state.message)
        assertNull("State should have no error when success", state.error)
    }

    @Test
    fun `RegisterState with error is correct`() {
        val errorMessage = "Email đã tồn tại"
        val state = RegisterState(error = errorMessage)

        assertEquals("State should have error message", errorMessage, state.error)
        assertFalse("State should not be loading when error", state.isLoading)
        assertFalse("State should not be success when error", state.isSuccess)
    }

    @Test
    fun `RegisterState copy works correctly`() {
        val original = RegisterState(isLoading = true)
        val copied = original.copy(isLoading = false, isSuccess = true, message = "Success")

        assertTrue("Original should still be loading", original.isLoading)
        assertFalse("Copied should not be loading", copied.isLoading)
        assertTrue("Copied should be success", copied.isSuccess)
        assertEquals("Copied should have message", "Success", copied.message)
    }
}

