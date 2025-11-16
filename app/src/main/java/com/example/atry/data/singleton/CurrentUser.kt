package com.example.atry.data.singleton

import android.util.Log
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.google.firebase.firestore.ListenerRegistration
import java.text.SimpleDateFormat
import java.util.*

object CurrentUser {
    var user: User? = null
    var userProfile: UserProfile? = null

    private var listenerRegistration: ListenerRegistration? = null

    fun updateInfo(label: String, value: String) {
        when (label) {
            // --- Thuộc tính User ---
            "name" -> user?.name = value
            "email" -> user?.email = value
            "phoneNumber", "phone" -> userProfile?.phone = value
            "dob" -> {
                // Nếu value là String "yyyy-MM-dd", convert sang Date
                try {
                    val sdf = SimpleDateFormat("yyyy-MM-dd", Locale.getDefault())
                    val date = sdf.parse(value)
                    userProfile?.dob = date
                } catch (e: Exception) {
                    Log.w("CurrentUser", "Không thể parse dob: $value")
                }
            }
            "location" -> userProfile?.location = value
            "gender" -> {
                user?.gender = value
            }

            // --- Thuộc tính UserProfile ---
            "bio" -> userProfile?.bio = value
            "lifeView", "lifestyle" -> userProfile?.lifestyle = value

            // List: add 1 item
            "interests" -> {
                val list = userProfile?.interests?.toMutableList() ?: mutableListOf()
                list.add(value)
                userProfile?.interests = list
            }
            "images" -> {
                val list = userProfile?.images?.toMutableList() ?: mutableListOf()
                list.add(value)
                userProfile?.images = list
            }
            "partnerPreferences" -> {
                val list = userProfile?.partnerPreferences?.toMutableList() ?: mutableListOf()
                list.add(value)
                userProfile?.partnerPreferences = list
            }
            "religions" -> {
                val list = userProfile?.religions?.toMutableList() ?: mutableListOf()
                list.add(value)
                userProfile?.religions = list
            }

            else -> Log.w("CurrentUser", "Không có thuộc tính '$label'")
        }
    }

    fun setName(name: String) {
        user?.name = name
    }

    fun clear() {
        user = null
        userProfile = null
    }
}
