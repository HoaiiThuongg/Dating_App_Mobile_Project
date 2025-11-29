package com.example.atry.viewmodel.functional

import org.junit.Assert.*
import org.junit.Test

class SendUiStateTest {

    @Test
    fun `SendUiState initial values are correct`() {
        val state = SendUiState(receiverId = "user123")

        assertTrue("Initial state should be loading", state.isLoading)
        assertNull("Initial state should have no error message", state.errorMessage)
        assertFalse("Initial state should not be sending", state.isSending)
        assertEquals("Initial state should have receiver ID", "user123", state.receiverId)
    }

    @Test
    fun `SendUiState with sending is correct`() {
        val state = SendUiState(
            isLoading = false,
            isSending = true,
            receiverId = "user123"
        )

        assertTrue("State should be sending", state.isSending)
        assertFalse("State should not be loading when sending", state.isLoading)
    }

    @Test
    fun `SendUiState with error is correct`() {
        val errorMessage = "Failed to send message"
        val state = SendUiState(
            isLoading = false,
            errorMessage = errorMessage,
            receiverId = "user123"
        )

        assertEquals("State should have error message", errorMessage, state.errorMessage)
        assertFalse("State should not be loading when error", state.isLoading)
    }

    @Test
    fun `SendUiState copy works correctly`() {
        val original = SendUiState(receiverId = "user123")
        val copied = original.copy(
            isLoading = false,
            isSending = true,
            receiverId = "user456"
        )

        assertTrue("Original should still be loading", original.isLoading)
        assertFalse("Copied should not be loading", copied.isLoading)
        assertTrue("Copied should be sending", copied.isSending)
        assertEquals("Copied should have new receiver ID", "user456", copied.receiverId)
    }
}

