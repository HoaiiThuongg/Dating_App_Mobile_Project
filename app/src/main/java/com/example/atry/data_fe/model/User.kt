package com.example.atry.data_fe.model

data class User(
    val userId: Long,
    val email: String,
    val profile: Profile?,
    val photos: List<Photo>? = emptyList()
)