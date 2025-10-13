package com.example.atry.data.service

import com.example.atry.data.model.HomeMatchingProfileDTO
import com.example.atry.data.model.User
import retrofit2.http.Field
import retrofit2.http.FormUrlEncoded
import retrofit2.http.GET
import retrofit2.http.POST
import retrofit2.http.Path

interface HomeService {
    @GET("/api/home/userId/{id}")
    suspend fun getHomeUsers(@Path("id") currentUserId: Long): List<User>

    @GET("/api/home/profile/{id}")
    suspend fun getProfileById(@Path("id") profileId: Long): List<HomeMatchingProfileDTO>

    @FormUrlEncoded
    @POST("/api/home/swipe")
    suspend fun swipe(
        @Field("userSwipingId") userSwipingId: Long,
        @Field("userTargetId") userTargetId: Long,
        @Field("action") action: String
    ): String
}
