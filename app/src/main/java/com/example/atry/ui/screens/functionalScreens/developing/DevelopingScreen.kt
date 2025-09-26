package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController
import com.example.atry.R
import com.example.atry.ui.components.general.Footer
import com.example.atry.ui.components.general.Header

@Composable
fun DevelopingScreen(){
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White),
        verticalArrangement = Arrangement.SpaceBetween
    ){
        Header("Hehe", R.drawable.humble_logo)

        //main
        Column(
            modifier = Modifier
                .background(
                    brush = Brush.verticalGradient(   // 👈 gradient dọc
                        colors = listOf(
                            Color(0xFFFFFFFF), // xanh nhạt
                            Color(0xFFFFE2FB)  // xanh đậm
                        )
                    ),
                )
                .weight(1f),
            verticalArrangement = Arrangement.spacedBy(20.dp,Alignment.CenterVertically),
            horizontalAlignment = Alignment.CenterHorizontally ,
        ){
            Image(
                painter = painterResource(id = R.drawable.developing),
                contentDescription = null,
                modifier = Modifier
                    .size(150.dp)
                    .clip(CircleShape)
                    .background(Color.LightGray),
                contentScale = ContentScale.Crop
            )
            Text(
                text = "Phần này đang phát triển, không biết bao giờ xong đâu, phiền chọn dịch vụ khác mà chơi.",
                fontWeight = FontWeight.Bold,
                color = Color(0xFF4D4D4D),
                fontSize = 16.sp,
                textAlign = TextAlign.Center
            )
        }

        var selected  by remember { mutableStateOf("home") }
        Footer(selected = selected, onSelect = { selected = it })
    }

}