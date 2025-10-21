package com.example.atry.ui.screens.splashScreens

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.navController

import com.example.atry.ui.components.buttons.WhiteBorderButton
@Composable
@Preview
fun MainSplashScreen() {
    // Background gradient
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(
                Brush.verticalGradient(
                    colors = listOf(Color(0xFFFF4379), Color(0xFFFFA2AB))
                )
            ),
        contentAlignment = Alignment.Center
    ) {
        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.SpaceBetween,
            modifier = Modifier.fillMaxSize().padding(24.dp)
        ) {
            Spacer(modifier = Modifier.height(250.dp))

            // 🔥 LOGO nằm ở đây nè
            Row(
                verticalAlignment  = Alignment.Bottom,
                horizontalArrangement  = Arrangement.SpaceBetween,
//                modifier = Modifier.fillMaxSize().padding(24.dp)
            ) {
                Image(
                    painter = painterResource(id = R.drawable.humble_logo),
                    contentDescription = "Logo",
                    modifier = Modifier.size(110.dp)
                )

                Spacer(modifier = Modifier.height(16.dp))
                Column(
                    verticalArrangement = Arrangement.spacedBy(5.dp)
                ) {
                    Text(
                        text = "Humble",
                        fontSize = 48.sp,
                        fontWeight = FontWeight.Bold,
                        color = Color.White
                    )
                    Text(
                        text = "Version 1.0.0.0",
                        fontSize = 16.sp,
                        color = Color.White
                    )
                }

            }

            Spacer(modifier = Modifier.height(200.dp))

            Text(
                text = "Chào mừng mọi người đến với Humble \n Nơi tình yêu bắt đầu!",
                color = Color.White,
                fontSize = 16.sp,
                textAlign = TextAlign.Center
            )

            Spacer(modifier = Modifier.height(10.dp))

            // Nút "Tạo tài khoản"
           WhiteBorderButton(
               text = "Đăng kí nào!",
               onClick = { navController.navigate("registerEmailInput") }
           )

            // Nút "Đăng nhập thôi!"
            WhiteBorderButton(
                "Đăng nhập thôi",
                {navController.navigate("login")}
            )

            Spacer(modifier = Modifier.height(30.dp))

        }
    }
}
