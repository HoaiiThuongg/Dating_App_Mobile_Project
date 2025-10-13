package com.example.atry.data.service

import com.example.atry.data.model.User
import retrofit2.http.GET
import retrofit2.http.Path

interface DetailProfileService {
    @GET("/api/likeYou/getUserProfile/{id}")
    suspend fun getUserById(@Path("id") currentUserId: Long): List<User>

}