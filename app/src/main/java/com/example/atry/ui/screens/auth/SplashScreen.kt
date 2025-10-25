package com.example.atry.ui.screens.auth

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.nothingToLoad.RotatedIcon
import com.example.atry.ui.theme.redOrangeLinear

@Preview
@Composable
fun SplashScreen () {

    AuthFormContainer(
        haveBack = false,
        title = "",
        subtitle = "",
        topContent = {
            Column (
                horizontalAlignment  =Alignment.CenterHorizontally,
                verticalArrangement  = Arrangement.Center,
            ) {
                RotatedIcon()

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
                }

                Spacer(modifier = Modifier.size(150.dp))

            }
        },
        bottomContent = {
            CustomBorderButton("Đăng kí",
                {navController.navigate("registerEmailInput")},Color.Black)

            CustomLinearButton("Đăng nhập", { navController.navigate("login")},
                redOrangeLinear, Color.White)
            Text("Chào mừng bạn đến với Humble", color = Color(0xFF595959), fontSize = 14.sp)

            IconButton(
                onClick = { },
                modifier = Modifier
                    .size(32.dp)
            ) {
                Icon(
                    painter = painterResource(id = R.drawable.humble_logo),
                    contentDescription = "notifications",
                    tint = Color.Unspecified,
                    modifier = Modifier.size(32.dp)
                )
            }
        }
    )
}