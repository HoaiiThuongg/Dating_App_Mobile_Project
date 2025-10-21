package com.example.atry.data_fe.service

import com.example.atry.data_fe.model.LikeYouInfoDTO
import retrofit2.http.Field
import retrofit2.http.FormUrlEncoded
import retrofit2.http.GET
import retrofit2.http.POST
import retrofit2.http.Path

interface LikeYouService {
    @GET("/api/likeYou/getUsers/{id}")
    suspend fun getPeopleWhoLikeYou(@Path("id") currentUserId: Long): List<LikeYouInfoDTO>

    @FormUrlEncoded
    @POST("/api/likeYou/matching")
    suspend fun matching(
        @Field("user_id1") user_id1: Long,
        @Field("user_id2") user_id2: Long
    ): String

}