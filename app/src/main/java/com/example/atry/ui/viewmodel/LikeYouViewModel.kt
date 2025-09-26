package com.example.atry.ui.viewmodel

import androidx.lifecycle.ViewModel
import com.example.atry.R
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class PartnerProfile(
    val id: String,
    val name: String,
    val age: String,
    val bio: String,
    val zodiac: String,
    val hobbies: String,
    val motto: String,
    val imageRes: Int // ảnh demo từ drawable
): Parcelable

class LikeYouViewModel : ViewModel() {
    private val _partner_profiles = MutableStateFlow<List<PartnerProfile>>(emptyList())
    val partner_profiles: StateFlow<List<PartnerProfile>> = _partner_profiles.asStateFlow()

    private val _currentIndex = MutableStateFlow(0)
    val currentIndex: StateFlow<Int> = _currentIndex.asStateFlow()

    init {
        loadProfiles()
    }

    private fun loadProfiles() {
        // mock BE data
        _partner_profiles.value = listOf(
            PartnerProfile(
                id = "1",
                name = "Văn Lê Quốc Thịnh",
                age="19",
                bio = "Tớ là Thịnh mong được làm quen",
                zodiac = "♏",
                hobbies = "Game, nấu ăn",
                motto = "Ghét giả dối",
                imageRes = R.drawable.humble_logo
            ),
            PartnerProfile(
                id = "2",
                name = "Phan Tiến Quốc Anh",
                age="19",
                bio = "Tui muốn làm quen Thịnh",
                zodiac = "♊",
                hobbies = "Tarot, coding",
                motto = "Luôn vui vẻ",
                imageRes = R.drawable.humble_logo
            ),
            PartnerProfile(
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

}
