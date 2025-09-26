package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.components.form.ImageUploadField

@Composable
@Preview
fun EditProfileImage() {
    var images by remember { mutableStateOf(listOf<String>()) }

    Text("Ảnh của bạn", fontWeight = FontWeight.Bold, fontSize = 18.sp)
    Text(
    "Ảnh này sẽ hiển thị trên hồ sơ hẹn hò của bạn",
    fontSize = 14.sp,
    color = Color.Gray
    )

    Spacer(modifier = Modifier.height(8.dp))
    ImageUploadField(
    images = images,
    onAddClick = {
        // Demo: khi add thì thêm path giả
        images = images + "new_image_path"
    },
    onRemoveClick = { index ->
        // Xoá ảnh ở vị trí index
        images = images.toMutableList().also { it.removeAt(index) }
    }
    )

}