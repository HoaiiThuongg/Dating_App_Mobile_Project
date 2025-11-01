package com.example.atry.ui.screens.functionalScreens.aiChatBot.chatComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R

@Composable
@Preview
fun AiChatBox(){
    Row(
        modifier = Modifier.fillMaxWidth(),
        horizontalArrangement = Arrangement.spacedBy(5.dp, Alignment.CenterHorizontally)

    ) {
        Image(
            painter = painterResource(id = R.drawable.bot),
            contentDescription = "parter avatar",
            modifier = Modifier
                .size(40.dp)
                .clip(RoundedCornerShape(20.dp))
                .background(Color.LightGray),
            contentScale = ContentScale.Crop
        )

        Box(
            modifier = Modifier
                .fillMaxWidth()
                .padding(end=50.dp), // chiếm hết ngang để căn được bên phải
            contentAlignment = Alignment.CenterStart // dính sang phải
        ) {
            Box(
                modifier = Modifier
                    .background(
                        color = Color(0xFFEEEFF1),
                        shape = RoundedCornerShape(
                            topStart = 30.dp,
                            topEnd = 30.dp,
                            bottomEnd = 30.dp,
                            bottomStart = 10.dp
                        )
                    )
                    .padding(horizontal = 20.dp, vertical = 8.dp)
            ) {
                Text(
                    text = "mình ở đây để trả lời câu hỏi của bạn",
                    color = Color.Black,
                    fontSize = 16.sp
                )
            }
        }
    }

}