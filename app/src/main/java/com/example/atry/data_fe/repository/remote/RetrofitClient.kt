package com.example.atry.data_fe.repository.remote

import com.example.atry.data_fe.service.HomeService
import com.example.atry.data_fe.service.LikeYouService
import retrofit2.Retrofit
import retrofit2.converter.gson.GsonConverterFactory

object  RetrofitClient {

    private const val BASE_URL =
        "http://10.0.2.2:8080/"
    private val retrofit by lazy {
        Retrofit.Builder()
            .baseUrl(BASE_URL)
            .addConverterFactory(GsonConverterFactory.create())
            .build()
    }

    val homeService: HomeService by lazy {
        retrofit.create(HomeService::class.java)
    }

    val likeYouService: LikeYouService by lazy {
        retrofit.create(LikeYouService::class.java)
    }
}
