package com.example.atry.ui.screens.setupScreens

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
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun GenderSelectedScreen() {

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


            InputTitle("Bạn là")
            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement =  Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ){
                RedLinearBorderButton("Nam",{})
                RedLinearBorderButton("Nữ",{})
                RedLinearBorderButton("Không muốn tiết lộ",{})
            }


        }
        Column(){
            RedLinearBorderButton("Bỏ qua",{ navController.navigate("hobby") })

        }

    }

}