package com.example.atry.data

import retrofit2.http.*

data class AgoraTokenResponse(
    val token: String,
    val channelName: String,
    val uid: String
)
interface AgoraApi {
    @GET("agora/token")
    suspend fun getToken(
        @Query("channelName") channelName: String,
        @Query("uid") uid: Int
    ): AgoraTokenResponse

    @GET("agora/call/start")
    suspend fun startCall(
        @Query("fromUser") fromUser: String,
        @Query("toUser") toUser: String
    ): Map<String, String>

    @GET("agora/call/status")
    suspend fun checkIncomingCall(
        @Query("userId") userId: String
    ): Map<String, String>

    @GET("agora/call/accept")
    suspend fun acceptCall(
        @Query("callerId") callerId: String
    ): Map<String, String>

    @GET("agora/call/decline")
    suspend fun declineCall(): Map<String, String>
}
