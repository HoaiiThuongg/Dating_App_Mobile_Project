package com.example.atry.ui.screens.loginScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.ui.platform.testTag
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
//import com.example.atry.navigation.navController
import com.example.atry.ui.components.textfield.GrayBorderTextField
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.buttons.CustomBorderButton


@Composable
@Preview
fun LoginScreen(
    navController: NavHostController = rememberNavController(),
    modifier: Modifier = Modifier
) {

    Column(
        modifier = Modifier
            .imePadding()
            .fillMaxSize()
    ){
        Column(modifier = Modifier
            .imePadding()
            .weight(1f)
            .background(Color.White)
            .padding(24.dp),
            verticalArrangement = Arrangement.SpaceBetween
        ){
            IconButton(
                onClick = { navController.navigate("splash")},
                modifier = Modifier.testTag("back_button")
            ) {
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
                    GrayBorderTextField(
                        "Nhập tên đăng nhập",
                        { navController.navigate("main") },
                        modifier = Modifier.testTag("username_field")
                    )
                    GrayBorderTextField(
                        "Nhập mật khẩu",
                        { navController.navigate("main") },
                        modifier = Modifier.testTag("password_field")
                    )

                }


            }
            CustomBorderButton(
                "Đăng nhập",
                {navController.navigate("main")},
                Color.Red,
                modifier = Modifier.testTag("login_button")
            )


        }
    }


}