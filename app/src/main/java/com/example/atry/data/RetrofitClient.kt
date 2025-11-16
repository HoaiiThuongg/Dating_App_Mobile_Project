package com.example.atry.data

import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory

object RetrofitClient {
    private const val BASE_URL = "https://dating-app-server-2cf2.onrender.com/" // đổi link BE thật nha

    val api: AgoraApi by lazy {
        Retrofit.Builder()
            .baseUrl(BASE_URL)
            .addConverterFactory(GsonConverterFactory.create())
            .build()
            .create(AgoraApi::class.java)
    }
}
