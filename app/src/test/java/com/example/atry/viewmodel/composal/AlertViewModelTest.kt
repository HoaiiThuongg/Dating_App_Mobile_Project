package com.example.atry.viewmodel.composal

import com.example.atry.backend.User
import org.junit.Assert.*
import org.junit.Before
import org.junit.Test

class AlertViewModelTest {

    private lateinit var viewModel: AlertViewModel

    @Before
    fun setUp() {
        viewModel = AlertViewModel()
    }

    @Test
    fun `initial state is correct`() {
        assertFalse("Alert should not be visible initially", viewModel.isAlertVisible)
        assertFalse("Match card should not be visible initially", viewModel.isMatchSuccessfullyCard)
        assertNull("Matched user should be null initially", viewModel.matchedUser)
        assertEquals("Alert message should be empty initially", "", viewModel.alert)
    }

    @Test
    fun `showAlert sets alert visible`() {
        // Act
        viewModel.showAlert()

        // Assert
        assertTrue("Alert should be visible", viewModel.isAlertVisible)
    }

    @Test
    fun `showAlert with message sets alert visible and message`() {
        // Arrange
        val message = "Test alert message"

        // Act
        viewModel.showAlert(message)

        // Assert
        assertTrue("Alert should be visible", viewModel.isAlertVisible)
        assertEquals("Alert message should be set", message, viewModel.alert)
    }

    @Test
    fun `hideAlert hides alert and clears message`() {
        // Arrange
        viewModel.showAlert("Test message")

        // Act
        viewModel.hideAlert()

        // Assert
        assertFalse("Alert should not be visible", viewModel.isAlertVisible)
        assertEquals("Alert message should be cleared", "", viewModel.alert)
    }

    @Test
    fun `showMatchSuccessfullyCard sets card visible and matched user`() {
        // Arrange
        val matchedUser = User()
        matchedUser.userId = "user123"
        matchedUser.email = "test@example.com"

        // Act
        viewModel.showMatchSuccessfullyCard(matchedUser)

        // Assert
        assertTrue("Match card should be visible", viewModel.isMatchSuccessfullyCard)
        assertEquals("Matched user should be set", matchedUser, viewModel.matchedUser)
    }

    @Test
    fun `hideMatchSuccessfullyCard hides card and clears matched user`() {
        // Arrange
        val matchedUser = User()
        matchedUser.userId = "user123"
        viewModel.showMatchSuccessfullyCard(matchedUser)

        // Act
        viewModel.hideMatchSuccessfullyCard()

        // Assert
        assertFalse("Match card should not be visible", viewModel.isMatchSuccessfullyCard)
        assertNull("Matched user should be cleared", viewModel.matchedUser)
    }

    @Test
    fun `multiple show and hide alert works correctly`() {
        // Act & Assert
        viewModel.showAlert("Message 1")
        assertTrue("Alert should be visible", viewModel.isAlertVisible)

        viewModel.hideAlert()
        assertFalse("Alert should be hidden", viewModel.isAlertVisible)

        viewModel.showAlert("Message 2")
        assertTrue("Alert should be visible again", viewModel.isAlertVisible)
        assertEquals("Alert message should be updated", "Message 2", viewModel.alert)
    }

    @Test
    fun `showAlert without message sets alert visible with empty message`() {
        // Act
        viewModel.showAlert()

        // Assert
        assertTrue("Alert should be visible", viewModel.isAlertVisible)
        assertEquals("Alert message should be empty", "", viewModel.alert)
    }

    @Test
    fun `hideAlert multiple times does not crash`() {
        // Arrange
        viewModel.showAlert("Test message")

        // Act
        viewModel.hideAlert()
        viewModel.hideAlert()
        viewModel.hideAlert()

        // Assert
        assertFalse("Alert should remain hidden", viewModel.isAlertVisible)
        assertEquals("Alert message should remain empty", "", viewModel.alert)
    }

    @Test
    fun `showMatchSuccessfullyCard with null user does not crash`() {
        // Act - try to show with null (if possible)
        val user = User()
        user.userId = null
        viewModel.showMatchSuccessfullyCard(user)

        // Assert - should not crash
        assertTrue("Match card should be visible", viewModel.isMatchSuccessfullyCard)
    }

    @Test
    fun `hideMatchSuccessfullyCard multiple times does not crash`() {
        // Arrange
        val user = User()
        user.userId = "user123"
        viewModel.showMatchSuccessfullyCard(user)

        // Act
        viewModel.hideMatchSuccessfullyCard()
        viewModel.hideMatchSuccessfullyCard()

        // Assert
        assertFalse("Match card should remain hidden", viewModel.isMatchSuccessfullyCard)
        assertNull("Matched user should remain null", viewModel.matchedUser)
    }
}

