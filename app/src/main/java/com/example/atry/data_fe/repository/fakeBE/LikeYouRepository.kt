package com.example.atry.data_fe.repository.fakeBE

import com.example.atry.data_fe.model.LikeYouInfoDTO

object LikeYouRepository {
    private val fakeProfiles = listOf(
        LikeYouInfoDTO(2, "Bob", 25),
        LikeYouInfoDTO(3, "Charlie", 22),
        LikeYouInfoDTO(4, "Diana", 24)
    )

    suspend fun getPeopleWhoLikeYou(userId: Long): List<LikeYouInfoDTO> {
        kotlinx.coroutines.delay(1000) // giả lập mạng
        return fakeProfiles
    }

    suspend fun matching(userId1: Long, userId2: Long): Boolean {
        kotlinx.coroutines.delay(500) // giả lập mạng
        println("Fake matching: $userId1 <-> $userId2")
        return true // luôn thành công
    }
}
