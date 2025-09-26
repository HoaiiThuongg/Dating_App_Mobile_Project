package com.example.atry.ui.viewmodel

import androidx.lifecycle.ViewModel
import com.example.atry.R
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow

data class Profile(
    val id: String,
    val name: String,
    val age: String,
    val bio: String,
    val zodiac: String,
    val hobbies: String,
    val motto: String,
    val imageRes: Int // ảnh demo từ drawable
)

class HomeViewModel : ViewModel() {
    private val _profiles = MutableStateFlow<List<Profile>>(emptyList())
    val profiles: StateFlow<List<Profile>> = _profiles.asStateFlow()

    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex.asStateFlow()

    init {
        loadProfiles()
    }

    private fun loadProfiles() {
        // mock BE data
        _profiles.value = listOf(
            Profile(
                id = "1",
                name = "Văn Lê Quốc Thịnh",
                age="19",
                bio = "Tớ là Thịnh mong được làm quen",
                zodiac = "♏",
                hobbies = "Game, nấu ăn",
                motto = "Ghét giả dối",
                imageRes = R.drawable.humble_logo
            ),
            Profile(
                id = "2",
                name = "Phan Tiến Quốc Anh",
                age="19",
                bio = "Tui muốn làm quen Thịnh",
                zodiac = "♊",
                hobbies = "Tarot, coding",
                motto = "Luôn vui vẻ",
                imageRes = R.drawable.humble_logo
            ),
            Profile(
                id = "3",
                name = "Nguyễn Ngọc Linh",
                age="19",
                bio = "Tui muốn 2 ông làm quen nhau",
                zodiac = "♊",
                hobbies = "Tarot, coding",
                motto = "Luôn vui vẻ",
                imageRes = R.drawable.humble_logo
            )
        )
    }

    fun onSwipeLeft() {
        // bỏ qua, sang profile tiếp theo
        _currentIndex.value = (_currentIndex.value + 1).coerceAtMost(_profiles.value.size - 1)
    }

    fun onSwipeRight() {
        // có thể lưu vào "favorite" rồi chuyển tiếp
        _currentIndex.value = (_currentIndex.value + 1).coerceAtMost(_profiles.value.size - 1)
    }
}
