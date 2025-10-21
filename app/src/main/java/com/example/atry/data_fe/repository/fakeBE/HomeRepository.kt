package com.example.atry.data_fe.repository.fakeBE

import com.example.atry.data_fe.model.HomeMatchingProfileDTO
import kotlinx.coroutines.delay

object HomeRepository {
    private val fakeProfiles = listOf(
        HomeMatchingProfileDTO(1, "Alice", 23, "Hà Nội","hehehe"),
        HomeMatchingProfileDTO(2, "Bob", 25, "Hà Nội","hehehe"),
        HomeMatchingProfileDTO(3, "Charlie", 22, "Hà Nội","hehehe")
    )

    suspend fun getProfileById(userId: Long): List<HomeMatchingProfileDTO> {
        delay(1000) // giả lập mạng
        return fakeProfiles.filter { it.user_id != userId } // không trả profile của chính user
    }

    suspend fun swipe(userSwipingId: Long, userTargetId: Long, action: String): Boolean {
        delay(500) // giả lập mạng
        println("Fake swipe: $userSwipingId -> $userTargetId = $action")
        return true // luôn thành công
    }
}
