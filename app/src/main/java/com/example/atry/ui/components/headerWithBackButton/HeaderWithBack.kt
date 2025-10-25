package com.example.atry.ui.components.headerAndFooter

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.theme.dynamicGradientBrush

@Composable
fun HeaderWithBack(screenName: String,
           iconRes: Int,
           backTo:()->Unit,
           onOpenNotification:()->Unit) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .background(
                color = MaterialTheme.colorScheme.surface
            )
            .padding(15.dp, 50.dp,15.dp,25.dp)
        ,
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically

    ) {

        IconButton(
            onClick = {backTo() },
            modifier = Modifier
                .size(32.dp)
        ) {
            Icon(
                painter = painterResource(id = R.drawable.back),
                contentDescription = "notifications",
                tint = MaterialTheme.colorScheme.onSurface,
                modifier = Modifier.size(30.dp)
            )
        }

        Row(
            horizontalArrangement = Arrangement.spacedBy(7.dp),
            verticalAlignment = Alignment.CenterVertically

        ) {
            Text(
                text = screenName,
                fontWeight = FontWeight.Bold,
                style = TextStyle(
                    fontSize = 32.sp,
                    brush = dynamicGradientBrush()
                )
            )

            Image(
                painter = painterResource(id = iconRes),
                contentDescription = null,
                modifier = Modifier.size(32.dp),
                contentScale = ContentScale.Crop
            )
        }
        IconButton(
            onClick = {onOpenNotification() },
            modifier = Modifier
                .size(32.dp)
        ) {
            Icon(
                painter = painterResource(id = R.drawable.bell),
                contentDescription = "notifications",
                tint = MaterialTheme.colorScheme.onSurface,
                modifier = Modifier.size(30.dp)
            )
        }
    }
}
