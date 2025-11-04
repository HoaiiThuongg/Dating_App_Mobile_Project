package com.example.atry.ui.components.alert

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.theme.grayBlurBackground
import com.example.atry.ui.theme.redLinear

@Composable
fun MatchSuccessfullyCard(
    matchedUser: User?,
    onClose: () -> Unit
) {
    val imageUrl1 = CurrentUser.user?.defaultImage
    val imageUrl2 = matchedUser?.defaultImage


    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(grayBlurBackground),
        contentAlignment = Alignment.Center
    ) {
        Column(
            modifier = Modifier
                .clip(RoundedCornerShape(20.dp)) // bo góc 20dp
                .background(
                    brush = Brush.linearGradient( // tạo màu gradient
                        colors = redLinear,
                        start = Offset(0f, 0f), // bắt đầu từ trên trái
                        end = Offset(400f, 400f) // kết thúc ở dưới phải
                    )
                )
                .size(250.dp, 300.dp)
                .padding(10.dp),
            verticalArrangement = Arrangement.spacedBy(30.dp),
            horizontalAlignment = Alignment.CenterHorizontally

        ) {

            IconButton(
                onClick = { onClose()},
                modifier = Modifier
                    .size(32.dp)
                    .align(Alignment.End)
            ) {
                Icon(
                    imageVector = Icons.Default.Close,
                    contentDescription = "Close",
                    tint = Color.White
                )
            }
            Column(
                verticalArrangement = Arrangement.spacedBy(5.dp),
                horizontalAlignment = Alignment.CenterHorizontally
            ) {
                Row(
                    horizontalArrangement = Arrangement.spacedBy((-15).dp)
                ) {
                    Image(
                        painter = rememberAsyncImagePainter(model = imageUrl1),
                        contentDescription = "Avatar 1",
                        modifier = Modifier
                            .size(100.dp)
                            .clip(CircleShape),
                        contentScale = ContentScale.Crop
                    )
                    Image(
                        painter = rememberAsyncImagePainter(model = imageUrl2),
                        contentDescription = "Avatar 1",
                        modifier = Modifier
                            .size(100.dp)
                            .clip(CircleShape),
                        contentScale = ContentScale.Crop
                    )
                }

                Text(
                    "Bạn đã thích ${matchedUser?.name}",
                    color = Color.White, fontSize = 20.sp,
                    textAlign = TextAlign.Center
                )
                Text(
                    "Bạn đã thích đối phương!",
                    color = Color.White,
                    fontSize = 12.sp,
                    textAlign = TextAlign.Center
                )
            }
        }
    }
}