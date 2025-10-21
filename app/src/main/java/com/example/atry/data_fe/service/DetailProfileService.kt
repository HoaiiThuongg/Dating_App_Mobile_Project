package com.example.atry.data_fe.service

import com.example.atry.data_fe.model.User
import retrofit2.http.GET
import retrofit2.http.Path

interface DetailProfileService {
    @GET("/api/likeYou/getUserProfile/{id}")
    suspend fun getUserById(@Path("id") currentUserId: Long): List<User>

}