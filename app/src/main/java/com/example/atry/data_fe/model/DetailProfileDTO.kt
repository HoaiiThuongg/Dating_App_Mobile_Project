package com.example.atry.data_fe.model

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class DetailProfileDTO(
    val id: Long,
    val name: String,
    val age: Int,
    val location: String,
    val bio: String
) : Parcelable
