package com.example.atry

import com.example.atry.data_fe.repository.fakeBE.AuthRepository
import junit.framework.TestCase.assertFalse
import junit.framework.TestCase.assertTrue
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.delay
import org.junit.Assert.*
import org.junit.Test
import kotlinx.coroutines.test.runTest


@OptIn(ExperimentalCoroutinesApi::class)
class LoginViewModelTest {

    @Test
    fun `login success updates state to success`() = runTest {
        val vm = LoginViewModel(AuthRepository())
        vm.onEmailChange("test@gmail.com")
        vm.onPasswordChange("123456")
        vm.login()

        delay(2100) // đợi fake delay
        val state = vm.uiState.value
        assertTrue(state.isSuccess)
        assertFalse(state.isLoading)
        assertNull(state.error)
    }

    @Test
    fun `login fail updates error`() = runTest {
        val vm = LoginViewModel(AuthRepository())
        vm.onEmailChange("wrong@gmail.com")
        vm.onPasswordChange("wrongpass")
        vm.login()

        delay(2100)
        val state = vm.uiState.value
        assertFalse(state.isSuccess)
        assertFalse(state.isLoading)
        assertNotNull(state.error)
    }
}
