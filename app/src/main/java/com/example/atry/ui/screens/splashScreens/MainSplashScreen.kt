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
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController
import com.example.atry.R
import com.example.atry.navigation.navController

import com.example.atry.ui.components.general.WhiteBorderButton
@Composable
fun MainSplashScreen() {
    // Background gradient
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(
                Brush.verticalGradient(
                    colors = listOf(Color(0xFFF84587), Color(0xFFFFA2D2))
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
                verticalAlignment  = Alignment.CenterVertically,
                horizontalArrangement  = Arrangement.SpaceBetween,
//                modifier = Modifier.fillMaxSize().padding(24.dp)
            ) {
                Image(
                    painter = painterResource(id = R.drawable.humble_logo),
                    contentDescription = "Logo",
                    modifier = Modifier.size(120.dp)
                )

                Spacer(modifier = Modifier.height(16.dp))

                Text(
                    text = "Humble",
                    fontSize = 32.sp,
                    fontWeight = FontWeight.Bold,
                    color = Color.White
                )
            }

            Spacer(modifier = Modifier.height(200.dp))

            Text(
                text = "Khi bạn ấn vô tạo tài khoản hay đăng nhập, bạn đồng ý với điều khoản của chúng tôi nhé",
                color = Color.White,
                fontSize = 14.sp
            )

            Spacer(modifier = Modifier.height(10.dp))

            // Nút "Tạo tài khoản"
           WhiteBorderButton(
               text = "Đăng kí nào!",
               onClick = { navController.navigate("register") }
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
