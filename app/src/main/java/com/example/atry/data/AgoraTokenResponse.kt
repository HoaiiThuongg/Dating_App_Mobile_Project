package com.example.atry.data

import retrofit2.http.*

data class AgoraTokenResponse(
    val token: String,
    val channelName: String,
    val uid: String
)

data class AcceptCallResponse(
    val status: String,
    val channelName: String,
    val tokenCaller: String,
    val tokenCallee: String,
    val uidCaller: String,
    val uidCallee: String
)

interface AgoraApi {

    // 🔹 Lấy token cho bất kỳ channel nào
    @GET("agora/token")
    suspend fun getToken(
        @Query("channelName") channelName: String,
        @Query("uid") uid: Int
    ): AgoraTokenResponse

    // 🔹 Người A gọi người B
    @GET("agora/call/start")
    suspend fun startCall(
        @Query("fromUser") fromUser: String,
        @Query("toUser") toUser: String
    ): Map<String, String>

    // 🔹 Kiểm tra xem có cuộc gọi đến
    @GET("agora/call/status")
    suspend fun checkIncomingCall(
        @Query("userId") userId: String
    ): Map<String, String>

    // 🔹 Người B nhận cuộc gọi → trả token + channel cho cả 2 join
    @GET("agora/call/accept")
    suspend fun acceptCall(
        @Query("callerId") callerId: String,
        @Query("calleeId") calleeId: String
    ): AcceptCallResponse

    // 🔹 Người B từ chối cuộc gọi
    @GET("agora/call/decline")
    suspend fun declineCall(
        @Query("callerId") callerId: String,
        @Query("calleeId") calleeId: String
    ): Map<String, String>

    // 🔹 Người gọi kiểm tra xem người nghe đã accept chưa
    @GET("agora/call/accepted")
    suspend fun checkCallAccepted(
        @Query("callerId") callerId: String
    ): Map<String, String>
}
