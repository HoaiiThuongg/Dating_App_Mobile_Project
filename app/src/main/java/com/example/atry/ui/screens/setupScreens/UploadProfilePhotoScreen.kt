package com.example.atry.ui.screens.setupScreens

import android.net.Uri
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.ImageUploadField
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun UploadProfilePhotoScreen() {
    var images by remember { mutableStateOf<List<Uri>>(emptyList()) }

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
                onAddClick = { uri -> images = images + uri },
                onRemoveClick = { index -> images = images.toMutableList().apply { removeAt(index) } }
            )


        }
        Column(){
            RedLinearBorderButton("Hoàn thành",{ navController.navigate("home") })

        }

    }

}