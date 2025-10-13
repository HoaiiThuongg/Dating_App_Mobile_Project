package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import android.net.Uri
import androidx.compose.foundation.layout.Column
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
import com.example.atry.ui.components.ImageUploadField
import kotlin.collections.toMutableList

@Composable
@Preview
fun EditProfileImage() {
    Column (

    ) {
        var images by remember { mutableStateOf<List<Uri>>(emptyList()) }

        Text("Ảnh của bạn", fontWeight = FontWeight.Bold, fontSize = 18.sp)
        Text(
            "Ảnh này sẽ hiển thị trên hồ sơ hẹn hò của bạn",
            fontSize = 14.sp,
            color = Color.Gray
        )

        Spacer(modifier = Modifier.height(8.dp))

        ImageUploadField(
            images = images,
            onAddClick = { uri -> images = images + uri },
            onRemoveClick = { index -> images = images.toMutableList().apply { removeAt(index) } }
        )
    }
}