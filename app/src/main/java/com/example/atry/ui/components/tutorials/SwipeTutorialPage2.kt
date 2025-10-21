package com.example.atry.ui.components.tutorials

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.theme.dynamicGradientBrush
import com.example.atry.ui.theme.redPinkGradientBrush

@Composable
fun SwipeTutorialPage2(onPrev:()->Unit) {

    Column(
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ) {
        // --- Navigation buttons ---
        Row(
            horizontalArrangement = Arrangement.SpaceBetween,
            verticalAlignment = Alignment.CenterVertically,
            modifier = Modifier
                .fillMaxWidth()
        ) {
            IconButton(onClick = { onPrev() }) {
                Icon(
                    painterResource(R.drawable.arrow_left),
                    contentDescription = "Sau",
                    tint = Color.Unspecified,
                    modifier = Modifier
                        .size(36.dp)
                        .graphicsLayer(alpha = 0.99f) // cần cho blend mode
                        .drawWithCache {
                            onDrawWithContent {
                                drawContent()
                                drawRect(color = Color.White, blendMode = BlendMode.SrcAtop)
                            }
                        }
                )
            }
            Box(
                modifier = Modifier
                    .width(200.dp)
                    .clip(RoundedCornerShape(15.dp))
                    .background(Color.LightGray)
                    .border(2.dp, Color(0xFFFF9DD3), RoundedCornerShape(15.dp)),
                contentAlignment = Alignment.Center
            ) {
                Image(
                    painter = painterResource(id = R.drawable.home_image),
                    contentDescription = "Thẻ người dùng",
                    modifier = Modifier
                        .fillMaxWidth()
                        .aspectRatio(painterResource(id = R.drawable.home_image).intrinsicSize.width /
                                painterResource(id = R.drawable.home_image).intrinsicSize.height)
                    ,
                    contentScale = ContentScale.Fit
                )
                DislikeSwipeHandAnimation(Modifier.align(Alignment.CenterStart))
            }
            IconButton(onClick = { }) {
                Icon(
                    painterResource(R.drawable.arrow),
                    contentDescription = "Sau",
                    tint = Color.Transparent,
                )
            }

        }
        Spacer(Modifier.height(5.dp))

        // --- Footer text ---
        Text(
            text = "Quẹt trái nếu họ không phải gu",
            fontSize = 20.sp,
            color = Color.White,
            modifier = Modifier.padding(bottom = 10.dp)
        )
    }
}