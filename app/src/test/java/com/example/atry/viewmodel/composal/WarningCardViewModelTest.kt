package com.example.atry.viewmodel.composal

import org.junit.Assert.*
import org.junit.Before
import org.junit.Test

class WarningCardViewModelTest {

    private lateinit var viewModel: WarningCardViewModel

    @Before
    fun setUp() {
        viewModel = WarningCardViewModel()
    }

    @Test
    fun `initial state is correct`() {
        assertFalse("Warning should not be visible initially", viewModel.isWarningVisible)
    }

    @Test
    fun `showWarning sets warning visible`() {
        // Act
        viewModel.showWarning()

        // Assert
        assertTrue("Warning should be visible", viewModel.isWarningVisible)
    }

    @Test
    fun `hideWarning hides warning`() {
        // Arrange
        viewModel.showWarning()

        // Act
        viewModel.hideWarning()

        // Assert
        assertFalse("Warning should not be visible", viewModel.isWarningVisible)
    }

    @Test
    fun `multiple show and hide warning works correctly`() {
        // Act & Assert
        viewModel.showWarning()
        assertTrue("Warning should be visible", viewModel.isWarningVisible)

        viewModel.hideWarning()
        assertFalse("Warning should be hidden", viewModel.isWarningVisible)

        viewModel.showWarning()
        assertTrue("Warning should be visible again", viewModel.isWarningVisible)
    }

    @Test
    fun `showWarning multiple times keeps warning visible`() {
        // Act
        viewModel.showWarning()
        viewModel.showWarning()
        viewModel.showWarning()

        // Assert
        assertTrue("Warning should remain visible", viewModel.isWarningVisible)
    }

    @Test
    fun `hideWarning multiple times does not crash`() {
        // Arrange
        viewModel.showWarning()

        // Act
        viewModel.hideWarning()
        viewModel.hideWarning()
        viewModel.hideWarning()

        // Assert
        assertFalse("Warning should remain hidden", viewModel.isWarningVisible)
    }
}
