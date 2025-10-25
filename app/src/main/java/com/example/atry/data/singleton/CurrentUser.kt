package com.example.atry.data.singleton

import com.example.atry.backend.User

object CurrentUser {
    var user: User?=null

    fun setName(name:String) {
        user?.name =name
    }
    fun clear() {
        user=null
    }
}