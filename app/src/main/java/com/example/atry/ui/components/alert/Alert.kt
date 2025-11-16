package com.example.atry.ui.components.alert

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
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
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.components.nothingToLoad.RotatedIcon
import com.example.atry.ui.theme.grayBlurBackground
import com.example.atry.ui.theme.redLinear
import com.example.atry.viewmodel.composal.WarningCardViewModel

@Composable
fun Alert(
    alert:String,
    onClose:()->Unit,
) {
    Box(
        modifier = Modifier
            .background(grayBlurBackground)
            .fillMaxSize(),
        contentAlignment = Alignment.Center
    ) {
        Column(
            modifier = Modifier
        ){}
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
                .width(250.dp)
                .padding(10.dp),
            verticalArrangement = Arrangement.spacedBy(15.dp),
            horizontalAlignment = Alignment.CenterHorizontally

        ) {

            IconButton(
                onClick = {onClose()},
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

                Text(
                    alert,
                    color = Color.White, fontSize = 24.sp,
                    textAlign = TextAlign.Center,
                    fontWeight = FontWeight.Bold
                )

                Box(
                    modifier = Modifier
                        .fillMaxWidth()
                        .padding(vertical = 50.dp),
                    contentAlignment = Alignment.Center
                ){
                    RotatedIcon(size = 100f)
                }
            }
        }
    }
}