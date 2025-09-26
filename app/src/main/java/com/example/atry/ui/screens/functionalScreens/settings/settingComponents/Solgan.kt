package com.example.atry.ui.screens.functionalScreens.settings.settingComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R

@Composable
fun Slogan (){
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 2.dp,
                brush = Brush.linearGradient(
                    colors = listOf(Color(0xFF7500DB), Color(0xFFFF4187)), // gradient từ trái → phải
                    start = Offset(0f, 0f),
                    end = Offset(1000f, 0f)
                ),
                shape = androidx.compose.foundation.shape.RoundedCornerShape(16.dp)
            )
            .padding(16.dp) ,// padding bên trong viền
        horizontalAlignment = Alignment.CenterHorizontally, // căn giữa theo chiều ngang
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {

        Row(
            horizontalArrangement = Arrangement.spacedBy(3.dp)
        ){
            Image(
                painter = painterResource(id = R.drawable.humble_logo),
                contentDescription = "Logo",
                modifier = Modifier.size(20.dp)
            )
            Text("Humble",
                style = TextStyle(
                    fontSize = 20.sp,
                    brush = Brush.linearGradient(
                        colors = listOf(Color(0xFF7500DB), Color(0xFFFF4187)), // gradient từ trái → phải
                        start = Offset(0f, 0f),
                        end = Offset(1000f, 0f)
                    )
                )
            )

        }
        Text("Humble ghép đôi - Tình yêu tới thôi",
            style = TextStyle(
                fontSize = 12.sp, brush = Brush.linearGradient(
                    colors = listOf(
                        Color(0xFF7500DB),
                        Color(0xFFFF4187)
                    ), // gradient từ trái → phải
                    start = Offset(0f, 0f),
                    end = Offset(1000f, 0f)
                )
            )
        )
    }
}