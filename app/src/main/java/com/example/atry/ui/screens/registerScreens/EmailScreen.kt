package com.example.atry.ui.screens.registerScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.material.icons.filled.ArrowBack
import com.example.atry.navigation.navController
import com.example.atry.ui.components.textfield.GrayBorderTextField
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton


@Preview
@Composable
fun EmailScreen() {

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


            InputTitle("Nhập email")
            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement =  Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ){
                GrayBorderTextField("Nhập tên đăng nhập",{ navController.navigate("otp") })
                Text("Chúng tớ sẽ gửi mã xác minh đến email của cậu", color = Color.Gray,fontSize = 16.sp)
            }


        }
        Column(){
            RedLinearBorderButton("Tiếp tục",{ navController.navigate("otp") })
        }

    }

}