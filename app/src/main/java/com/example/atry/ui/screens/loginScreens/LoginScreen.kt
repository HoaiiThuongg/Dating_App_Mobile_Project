package com.example.atry.ui.screens.loginScreens

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
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import com.example.atry.navigation.navController
import com.example.atry.ui.components.general.GrayBorderTextField
import com.example.atry.ui.components.general.InputTitle
import com.example.atry.ui.components.general.LinearButton
import com.example.atry.ui.theme.purpleGradientBrush


@Composable
@Preview
fun LoginScreen() {

    Column(modifier = Modifier
        .fillMaxSize()
        .background(Color.White)
        .padding(24.dp),
        verticalArrangement = Arrangement.SpaceBetween
    ){
        IconButton(
            onClick = { navController.navigate("splash")}) {
            Icon(
                imageVector = Icons.Filled.ArrowBack,
                contentDescription = "Back"
            )
        }
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement =  Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ){


            InputTitle("Đăng nhập")

            Column(
                horizontalAlignment = Alignment.CenterHorizontally,
                verticalArrangement =  Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
            ){
                GrayBorderTextField("Nhập tên đăng nhập")
                GrayBorderTextField("Nhập mật khẩu")

            }


        }
        LinearButton("Đăng nhập",{navController.navigate("home")},purpleGradientBrush)


    }

}