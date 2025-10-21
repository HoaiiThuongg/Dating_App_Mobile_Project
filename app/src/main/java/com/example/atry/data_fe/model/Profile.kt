package com.example.atry.data_fe.model

data class Profile(
    val name: String,
    val gender: Gender, // Sử dụng Enum đã định nghĩa
    val bio: String,
    val location:String,
    val phoneNumber:String,
    val birthday:String


)