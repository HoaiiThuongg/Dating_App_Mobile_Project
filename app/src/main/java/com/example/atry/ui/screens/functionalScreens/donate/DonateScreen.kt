package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
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
fun DonateScreen() {
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
                    brush = Brush.verticalGradient(
                        colors = listOf(
                            Color(0xFFB996FF),
                            Color(0xFF7158FF)
                        )
                    ),
                )
                .fillMaxWidth()
                .weight(1f)
                .padding(20.dp),
            verticalArrangement = Arrangement.SpaceBetween,
            horizontalAlignment = Alignment.CenterHorizontally ,
        ){
            Spacer(
                modifier = Modifier.height(10.dp)
            )
            Column(
                verticalArrangement = Arrangement.spacedBy(20.dp,Alignment.CenterVertically),
                horizontalAlignment = Alignment.CenterHorizontally ,
            ) {
                Text(
                    text = "Ủng hộ bọn tớ ít kinh phí nhé",
                    fontWeight = FontWeight.Bold,
                    color = Color.White,
                    fontSize = 20.sp,
                    textAlign = TextAlign.Center
                )

                Image(
                    painter = painterResource(id = R.drawable.qr),
                    contentDescription = null,
                    modifier = Modifier
                        .size(200.dp)
                        .clip(RoundedCornerShape(20.dp))
                        .background(Color.LightGray),
                    contentScale = ContentScale.Crop
                )
            }


            Row(
                horizontalArrangement = Arrangement.spacedBy(20.dp,Alignment.CenterHorizontally),
                verticalAlignment = Alignment.CenterVertically ,
            ){

                Column(
                    verticalArrangement = Arrangement.spacedBy(20.dp,Alignment.CenterVertically),
                    horizontalAlignment = Alignment.CenterHorizontally ,
                ){
                    Image(
                        painter = painterResource(id = R.drawable.qr),
                        contentDescription = null,
                        modifier = Modifier
                            .size(50.dp)
                            .clip(RoundedCornerShape(20.dp))
                            .background(Color.LightGray),
                    )
                    Text(
                        text = "Chia sẻ",
                        fontWeight = FontWeight.Bold,
                        color = Color.Black,
                        fontSize = 14.sp,
                        textAlign = TextAlign.Center
                    )
                }
            }
        }

        var selected  by remember { mutableStateOf("profile") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}