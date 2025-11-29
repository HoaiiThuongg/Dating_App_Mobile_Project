package com.example.atry.viewmodel.functional

import com.example.atry.backend.MatchedUser
import org.junit.Assert.*
import org.junit.Test

class MatchStateTest {

    @Test
    fun `MatchState initial values are correct`() {
        val state = MatchState()

        assertFalse("Initial state should not be loading", state.isLoading)
        assertTrue("Initial state should have empty matched users list", state.matchedUsers.isEmpty())
        assertNull("Initial state should have no error", state.error)
    }

    @Test
    fun `MatchState with loading is correct`() {
        val state = MatchState(isLoading = true)

        assertTrue("State should be loading", state.isLoading)
        assertTrue("State should have empty matched users when loading", state.matchedUsers.isEmpty())
        assertNull("State should have no error when loading", state.error)
    }

    @Test
    fun `MatchState with matched users is correct`() {
        val matchedUser1 = MatchedUser()
        matchedUser1.matchId = "match1"
        val matchedUser2 = MatchedUser()
        matchedUser2.matchId = "match2"
        val matchedUsers = listOf(matchedUser1, matchedUser2)
        val state = MatchState(matchedUsers = matchedUsers)

        assertEquals("State should have matched users", matchedUsers, state.matchedUsers)
        assertFalse("State should not be loading", state.isLoading)
        assertNull("State should have no error", state.error)
    }

    @Test
    fun `MatchState with error is correct`() {
        val errorMessage = "Failed to load matches"
        val state = MatchState(error = errorMessage)

        assertEquals("State should have error message", errorMessage, state.error)
        assertFalse("State should not be loading when error", state.isLoading)
        assertTrue("State should have empty matched users when error", state.matchedUsers.isEmpty())
    }

    @Test
    fun `MatchState copy works correctly`() {
        val original = MatchState(isLoading = true)
        val matchedUser = MatchedUser()
        matchedUser.matchId = "match1"
        val matchedUsers = listOf(matchedUser)
        val copied = original.copy(isLoading = false, matchedUsers = matchedUsers)

        assertTrue("Original should still be loading", original.isLoading)
        assertFalse("Copied should not be loading", copied.isLoading)
        assertEquals("Copied should have matched users", matchedUsers, copied.matchedUsers)
    }
}

