package com.example.atry.ui.components.general

import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R

@Composable
fun Header(screenName: String, iconRes: Int) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(horizontal = 10.dp, vertical = 15.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically

    ) {

        IconButton(
            onClick = {}
        ){
            Image(
                painter = painterResource(id = R.drawable.navigation),
                contentDescription = "Yêu thích",
            )
        }
        Row(
            horizontalArrangement = Arrangement.spacedBy(7.dp),
            verticalAlignment = Alignment.CenterVertically

        ) {
            Text(
                text = screenName,
                fontWeight = FontWeight.Bold,
                color = Color(0xFFAB3BFF),
                fontSize = 32.sp
            )

            Image(
                painter = painterResource(id = iconRes),
                contentDescription = null,
                modifier = Modifier.size(32.dp),
                contentScale = ContentScale.Crop
            )
        }
        Image(
            painter = painterResource(id = R.drawable.bell),
            contentDescription = null,
            modifier = Modifier.size(32.dp),
            contentScale = ContentScale.Crop
        )
    }
}
