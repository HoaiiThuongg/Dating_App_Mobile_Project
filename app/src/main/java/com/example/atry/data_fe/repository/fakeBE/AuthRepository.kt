package com.example.atry.data_fe.repository.fakeBE

import kotlinx.coroutines.delay

class AuthRepository {

    suspend fun login(email: String, password: String): Result<String> {
        delay(2000) // giả lập gọi BE

        return if (email == "t@gmail.com" && password == "1") {
            Result.success("fake_token_12345")
        } else {
            Result.failure(Exception("Sai email hoặc mật khẩu"))
        }
    }

    //register

    suspend fun sendEmail(email: String): Result<Boolean> {
        delay(1000) // giả lập mạng
        return if (email.contains("@")) Result.success(true)
        else Result.failure(Exception("Email không hợp lệ"))
    }

    suspend fun verifyOtp(otp: String): Result<Boolean> {
        delay(1000)
        return if (otp == "123456") Result.success(true)
        else Result.failure(Exception("OTP sai"))
    }

    suspend fun submitRegister(
        name: String,
        password: String,
        interests: List<String>,
        imageUri: String?,
        message: String
    ): Result<Boolean> {
        delay(1000)
        return Result.success(true) // luôn thành công để test
    }
}