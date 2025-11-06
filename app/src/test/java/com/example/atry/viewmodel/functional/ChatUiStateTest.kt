package com.example.atry.viewmodel.functional

import com.example.atry.backend.MatchedUser
import org.junit.Assert.*
import org.junit.Test

class ChatUiStateTest {

    @Test
    fun `ChatUiState initial values are correct`() {
        val state = ChatUiState()

        assertFalse("Initial state should not be loading", state.isLoading)
        assertNull("Initial state should have no error message", state.errorMessage)
        assertNull("Initial state should have no matched user", state.matchedUser)
    }

    @Test
    fun `ChatUiState with loading is correct`() {
        val state = ChatUiState(isLoading = true)

        assertTrue("State should be loading", state.isLoading)
        assertNull("State should have no error when loading", state.errorMessage)
    }

    @Test
    fun `ChatUiState with error is correct`() {
        val errorMessage = "Failed to load messages"
        val state = ChatUiState(errorMessage = errorMessage)

        assertEquals("State should have error message", errorMessage, state.errorMessage)
        assertFalse("State should not be loading when error", state.isLoading)
    }

    @Test
    fun `ChatUiState with matched user is correct`() {
        val matchedUser = MatchedUser()
        matchedUser.matchId = "match123"
        val state = ChatUiState(matchedUser = matchedUser)

        assertEquals("State should have matched user", matchedUser, state.matchedUser)
        assertFalse("State should not be loading", state.isLoading)
    }

    @Test
    fun `ChatUiState copy works correctly`() {
        val original = ChatUiState(isLoading = true)
        val copied = original.copy(isLoading = false, errorMessage = "Error")

        assertTrue("Original should still be loading", original.isLoading)
        assertFalse("Copied should not be loading", copied.isLoading)
        assertEquals("Copied should have error message", "Error", copied.errorMessage)
    }
}

