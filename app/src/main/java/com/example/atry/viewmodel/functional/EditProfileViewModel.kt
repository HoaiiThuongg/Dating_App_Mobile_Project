package com.example.atry.viewmodel.functional

import ImageItem
import android.app.Application
import android.content.Context
import android.net.Uri
import android.util.Log
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import com.example.atry.backend.CloudinaryService
import com.example.atry.backend.UserService
import com.example.atry.data.singleton.CurrentUser
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import java.io.File
import java.io.FileOutputStream
import java.util.Date

class EditProfileViewModel(app: Application) : AndroidViewModel(app){

    private val userService = UserService()
    private val cloudinaryService = CloudinaryService()

    private val _updateStatus = MutableStateFlow<String?>(null)
    val updateStatus: StateFlow<String?> = _updateStatus
    var status = mutableStateOf("")


    // -------------------- UPDATE USER FIELD --------------------
    fun updateUserField(label: String, value: String) {
        viewModelScope.launch(Dispatchers.IO) {
            when (label) {
                "name" -> userService.updateUserField(label,value, callback())
                "email" -> userService.updateUserField("email", value, callback())
                "phone" -> userService.updateProfileField("phone", value, callback())
                "location" -> userService.updateProfileField("location", value, callback())
                "gender" -> userService.updateUserField(label,value, callback())
                else -> _updateStatus.value = "User field '$label' không tồn tại"
            }
        }
        // Update local
        when (label) {
            "name" -> CurrentUser.user?.name = value
            "email" -> CurrentUser.user?.email = value
            "phone" -> CurrentUser.userProfile?.phone = value
            "location" -> CurrentUser.userProfile?.location = value
            "gender"->CurrentUser.user?.gender=value
        }
    }

    // Hàm riêng để update dob (Date)
    public fun updateDob(date: Date) {
        try {
            if (date != null) {
                userService.updateProfileDateTime("dob", date, callback())
                CurrentUser.userProfile?.dob = date
            } else {
                _updateStatus.value = "Ngày sinh không hợp lệ"
            }
        } catch (e: Exception) {
            _updateStatus.value = "Lỗi parse dob: ${e.message}"
        }
    }

    // -------------------- UPDATE USERPROFILE FIELD --------------------
    fun updateUserProfileField(label: String, value: String) {
        viewModelScope.launch(Dispatchers.IO) {
            when (label) {
                "bio" -> userService.updateProfileField(label,value, callback())
                "lifestyle" -> userService.updateProfileField("lifestyle", value, callback())
                "gender" -> userService.updateUserField(label,value, callback())
                else -> _updateStatus.value = "UserProfile field '$label' không tồn tại hoặc là list"
            }
        }
        // Update local
        when (label) {
            "bio" -> CurrentUser.userProfile?.bio = value
            "lifestyle" -> CurrentUser.userProfile?.lifestyle = value
            "gender" -> CurrentUser.user?.gender = value
        }
    }

    // -------------------- ADD TO USERPROFILE LIST --------------------
    fun addToProfileList(field: String, value: String) {
        viewModelScope.launch(Dispatchers.IO) {
            userService.addToProfileList(field, value, object : UserService.UserCallback {
                override fun onSuccess(message: String) { _updateStatus.value = message }
                override fun onFailure(error: String) { _updateStatus.value = error }
            })
        }
        // update local cache
        when(field) {
            "interests" -> CurrentUser.userProfile?.interests?.add(value)
            "images" -> CurrentUser.userProfile?.images?.add(value)
            "partnerPreferences" -> CurrentUser.userProfile?.partnerPreferences?.add(value)
            "religions" -> CurrentUser.userProfile?.religions?.add(value)
        }
    }

    fun removeFromProfileList(field: String, value: String) {
        viewModelScope.launch(Dispatchers.IO) {
            userService.removeFromProfileList(field, value, object : UserService.UserCallback {
                override fun onSuccess(message: String) { _updateStatus.value = message }
                override fun onFailure(error: String) { _updateStatus.value = error }
            })
        }
        // update local cache
        when(field) {
            "interests" -> CurrentUser.userProfile?.interests?.remove(value)
            "images" -> CurrentUser.userProfile?.images?.remove(value)
            "partnerPreferences" -> CurrentUser.userProfile?.partnerPreferences?.remove(value)
            "religions" -> CurrentUser.userProfile?.religions?.remove(value)
        }
    }


    // -------------------- CALLBACK HÀNG CHUNG --------------------
    private fun callback() = object : UserService.UserCallback {
        override fun onSuccess(message: String) {
            _updateStatus.value = message
        }

        override fun onFailure(error: String) {
            _updateStatus.value = error
        }
    }


    /// ----------------- Up ảnh
    // Hàm upload ảnh
    var images = mutableStateListOf<ImageItem>()
        private set

    fun getRealPathFromUri(context: Context, item: ImageItem): String {
        return when(item) {
            is ImageItem.Local -> {
                val inputStream = context.contentResolver.openInputStream(item.uri) ?: return ""
                val tempFile = File.createTempFile("upload", ".jpg", context.cacheDir)
                FileOutputStream(tempFile).use { output ->
                    inputStream.copyTo(output)
                }
                tempFile.absolutePath
            }
            is ImageItem.Remote -> ""
        }
    }

    fun addAvatar(context: Context, uri: Uri, onUploaded: (String) -> Unit) {
        val item = ImageItem.Local(uri)
        viewModelScope.launch(Dispatchers.IO) {
            try {
                val path = getRealPathFromUri(context, item)
                val url = cloudinaryService.uploadImage(path)
                onUploaded(url)
                val index = images.indexOf(item)
                if (index != -1) images[index] = ImageItem.Remote(url)
                CurrentUser.user?.defaultImage = url
                userService.updateUserField("defaultImage", url, object : UserService.UserCallback {
                    override fun onSuccess(message: String) { Log.d("Upload", message) }
                    override fun onFailure(errorMessage: String) { Log.e("Upload", errorMessage) }
                })
            } catch (e: Exception) {
                Log.e("Upload", "Lỗi upload: ${e.message}")
            }
        }
    }

    fun addImage(context: Context, uri: Uri) {
        val item = ImageItem.Local(uri)
        images.add(item) // cập nhật UI ngay
        viewModelScope.launch(Dispatchers.IO) {
            try {
                val path = getRealPathFromUri(context, item)
                val url = cloudinaryService.uploadImage(path)

                // Thay Local bằng Remote khi upload xong
                val index = images.indexOf(item)
                if (index != -1) images[index] = ImageItem.Remote(url)

                // Cập nhật CurrentUser.userProfile luôn
                CurrentUser.userProfile?.images?.add(url)

                // Cập nhật backend
                userService.addToProfileList("images", url, object : UserService.UserCallback {
                    override fun onSuccess(message: String) { Log.d("Upload", message) }
                    override fun onFailure(errorMessage: String) { Log.e("Upload", errorMessage) }
                })
            } catch (e: Exception) {
                Log.e("Upload", "Lỗi upload: ${e.message}")
            }
        }
    }

    fun removeImage(index: Int) {
        if (index in images.indices) {
            val removed = images.removeAt(index)
            // Nếu là Remote thì xóa khỏi profile luôn
            if (removed is ImageItem.Remote) {
                CurrentUser.userProfile?.images?.remove(removed.url)
            }
        }
    }

}

