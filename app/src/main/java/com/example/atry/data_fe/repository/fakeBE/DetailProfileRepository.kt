package com.example.atry.data_fe.repository.fakeBE

import com.example.atry.data_fe.model.DetailProfileDTO

object DetailProfileRepository {
    private val fakeProfiles = mapOf(
        1L to DetailProfileDTO(1, "Alice", 23, "Hà Nội", "Yêu thích đọc sách và du lịch."),
        2L to DetailProfileDTO(2, "Bob", 25, "Hồ Chí Minh", "Đam mê thể thao và âm nhạc."),
        3L to DetailProfileDTO(3, "Charlie", 22, "Đà Nẵng", "Thích công nghệ và gaming.")
    )

    suspend fun getProfileDetail(userId: Long): DetailProfileDTO {
        kotlinx.coroutines.delay(1000) // giả lập mạng
        return fakeProfiles[userId] ?: DetailProfileDTO(userId, "Unknown", 0, "Không rõ", "")
    }
}
