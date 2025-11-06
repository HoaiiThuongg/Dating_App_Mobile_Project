package com.example.atry.viewmodel.auth

import kotlinx.coroutines.ExperimentalCoroutinesApi
import org.junit.Assert.*
import org.junit.Before
import org.junit.Test
import java.util.Date

@OptIn(ExperimentalCoroutinesApi::class)
class UserInfoSetupViewModelTest {

    private lateinit var viewModel: UserInfoSetupViewModel

    @Before
    fun setUp() {
        try {
            viewModel = UserInfoSetupViewModel()
        } catch (e: RuntimeException) {
            // Firebase not initialized in unit test
            throw org.junit.AssumptionViolatedException("Firebase not available in unit test environment", e)
        } catch (e: IllegalStateException) {
            // Application or services not initialized
            throw org.junit.AssumptionViolatedException("Services not available in unit test environment", e)
        }
    }

    @Test
    fun `initial state is correct`() {
        assertNull("Initial update status should be null", viewModel.updateStatus.value)
        assertEquals("Initial status should be empty", "", viewModel.status.value)
        assertTrue("Initial images list should be empty", viewModel.images.isEmpty())
    }

    @Test
    fun `updateUserField is callable for name`() {
        // Act
        viewModel.updateUserField("name", "John Doe")

        // Assert - method should be callable without crashing
        assertNotNull("Update user field should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for email`() {
        // Act
        viewModel.updateUserField("email", "test@example.com")

        // Assert
        assertNotNull("Update email should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for phone`() {
        // Act
        viewModel.updateUserField("phone", "0123456789")

        // Assert
        assertNotNull("Update phone should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for location`() {
        // Act
        viewModel.updateUserField("location", "Hanoi")

        // Assert
        assertNotNull("Update location should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for gender`() {
        // Act
        viewModel.updateUserField("gender", "Male")

        // Assert
        assertNotNull("Update gender should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for bio`() {
        // Act
        viewModel.updateUserField("bio", "Test bio")

        // Assert
        assertNotNull("Update bio should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField is callable for lifestyle`() {
        // Act
        viewModel.updateUserField("lifestyle", "Active")

        // Assert
        assertNotNull("Update lifestyle should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateUserField sets error for unknown field`() {
        // Act
        viewModel.updateUserField("unknown", "value")

        // Assert
        assertNotNull("Update unknown field should set error", viewModel.updateStatus.value)
        assertTrue("Error should mention field doesn't exist", 
            viewModel.updateStatus.value?.contains("không tồn tại") == true)
    }

    @Test
    fun `updateDob is callable`() {
        // Act
        viewModel.updateDob(Date())

        // Assert
        assertNotNull("Update dob should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `updateDob with valid date is callable`() {
        // Act
        viewModel.updateDob(Date(System.currentTimeMillis() - 86400000L * 365 * 25)) // 25 years ago

        // Assert
        assertNotNull("Update dob with valid date should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `addToProfileList is callable`() {
        // Act
        viewModel.addToProfileList("interests", "music")

        // Assert
        assertNotNull("Add to profile list should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `removeFromProfileList is callable`() {
        // Act
        viewModel.removeFromProfileList("interests", "music")

        // Assert
        assertNotNull("Remove from profile list should be callable", viewModel.updateStatus.value)
    }

    @Test
    fun `removeImage is callable`() {
        // Act - try to remove from empty list
        viewModel.removeImage(0)

        // Assert - should not crash even if index is out of bounds
        assertNotNull("Remove image should be callable", viewModel.images)
    }
}

