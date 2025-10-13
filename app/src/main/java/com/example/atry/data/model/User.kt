package com.example.atry.data.model

data class User(
    val userId: Long,
    val email: String,
    val profile: Profile?,
    val photos: List<Photo>? = emptyList()
)