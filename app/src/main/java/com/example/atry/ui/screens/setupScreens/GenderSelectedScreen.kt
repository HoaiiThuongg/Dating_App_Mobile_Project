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
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.general.GrayBorderButton
import com.example.atry.ui.components.general.InputTitle

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
                GrayBorderButton("Nam",{})
                GrayBorderButton("Nữ",{})
                GrayBorderButton("Không muốn tiết lộ",{})
            }


        }
        Column(){
            GrayBorderButton("Bỏ qua",{ navController.navigate("hobby") })

        }

    }

}