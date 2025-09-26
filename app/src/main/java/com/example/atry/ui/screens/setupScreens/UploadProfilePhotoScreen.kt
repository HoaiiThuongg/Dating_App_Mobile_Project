package com.example.atry.ui.screens.setupScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Add
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.general.GrayBorderButton
import com.example.atry.ui.components.general.GrayBorderTextField
import com.example.atry.ui.components.form.ImageUploadField
import com.example.atry.ui.components.general.InputTitle

@Preview
@Composable
fun UploadProfilePhotoScreen() {
    var images by remember { mutableStateOf(listOf<String>()) }

    Column(modifier = Modifier
        .fillMaxSize()
        .background(Color.White)
        .padding(24.dp),
        verticalArrangement = Arrangement.SpaceBetween
    ){
        IconButton(
            onClick = { /* handle back */ }) {
            Icon(
                imageVector = Icons.Filled.ArrowBack,
                contentDescription = "Back"
            )
        }
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement =  Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ){
            InputTitle("Đăng ảnh của bạn")
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
        Column(){
            GrayBorderButton("Hoàn thành",{ navController.navigate("home") })

        }

    }

}