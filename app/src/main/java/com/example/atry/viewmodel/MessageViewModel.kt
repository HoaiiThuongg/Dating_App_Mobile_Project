package com.example.atry.viewmodel

import androidx.lifecycle.ViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

data class ConnectedPeople(
    val id: String,
    val name: String,
    val message: String
)

class MessageViewModel : ViewModel() {
    private val _connected_profiles = MutableStateFlow<List<ConnectedPeople>>(emptyList())
    val connected_profiles: StateFlow<List<ConnectedPeople>> = _connected_profiles.asStateFlow()

    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex.asStateFlow()

    init {
        loadProfiles()
    }

    private fun loadProfiles() {
        // mock BE data
        _connected_profiles.value = listOf(
            ConnectedPeople(
                id = "1",
                name = "Thịnh",
                message = "hí hí"
            ),
            ConnectedPeople(
                id = "2",
                name = "Anh",
                message = "ok"
            ),
            ConnectedPeople(
                id = "3",
                name = "Linh",
                message = "mmm"
            )
        )
    }
}