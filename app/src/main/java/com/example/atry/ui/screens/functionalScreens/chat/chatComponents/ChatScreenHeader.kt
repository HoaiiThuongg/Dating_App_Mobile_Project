package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.navigation.navController

@Composable
fun ChatScreenHeader(){
    //header
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(10.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically

    ) {

        IconButton(
            onClick = { navController.navigate("message") }
        ) {
            Image(
                painter = painterResource(id = R.drawable.grayarrow),
                contentDescription = "Yêu thích",
            )
        }
        Column(
            verticalArrangement = Arrangement.spacedBy(7.dp),
            horizontalAlignment = Alignment.CenterHorizontally

        ) {
            Image(
                painter = painterResource(id = R.drawable.viethuong),
                contentDescription = null,
                modifier = Modifier
                    .size(32.dp)
                    .clip(RoundedCornerShape(20.dp))
                    .background(Color.LightGray),
                contentScale = ContentScale.Crop
            )
            Text(
                text = "Parot Smell",
                fontWeight = FontWeight.Bold,
                color = Color(0xFF4D4D4D),
                fontSize = 16.sp
            )
        }


        Row(
            horizontalArrangement = Arrangement.spacedBy(15.dp),
            verticalAlignment = Alignment.CenterVertically

        ) {
            Image(
                painter = painterResource(id = R.drawable.phone),
                contentDescription = null,
                modifier = Modifier
                    .size(24.dp)
            )
            Image(
                painter = painterResource(id = R.drawable.video),
                contentDescription = null,
                modifier = Modifier
                    .size(32.dp)
            )
        }
    }

}