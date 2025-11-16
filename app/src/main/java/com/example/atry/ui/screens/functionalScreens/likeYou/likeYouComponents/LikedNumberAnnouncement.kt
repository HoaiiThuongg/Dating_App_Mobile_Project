package com.example.atry.ui.screens.functionalScreens.likeYou.likeYouComponents

import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R

@Composable
fun LikedNumberAnnouncement(
    totalPeopleLikeYou:Int
) {
    Text(
        buildAnnotatedString {
            append(stringResource(id = R.string.have)+ " ")
            withStyle(
                style = SpanStyle(
                    fontSize = 32.sp,
                    brush = Brush.linearGradient(
                        colors = listOf(Color(0xFFEF278E), Color(0xFF60004E)),
                        start = Offset(0f, 0f),
                        end = Offset(0f, 200f)
                    )
                )
            ) { append(totalPeopleLikeYou.toString()) }

            append(" "+stringResource(id = R.string.people)+" ")

            withStyle(
                style = SpanStyle(
                    brush = Brush.linearGradient(
                        colors = listOf(Color(0xFFEF278E), Color(0xFF60004E)),
                        start = Offset(0f, 0f),
                        end = Offset(0f, 200f)
                    )
                )
            ) { append(stringResource(id = R.string.follow_you)) } },
        fontSize = 16.sp,
        fontWeight = FontWeight.Bold,
        modifier = Modifier.padding(horizontal = 20.dp, vertical = 8.dp),
        color = MaterialTheme.colorScheme.onBackground
    )
}