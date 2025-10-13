package com.example.atry.ui.components

import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.purpleGradientBrush
import com.example.atry.ui.theme.redGradientBrush

@Composable
fun InputTitle(title:String) {
    Text(
        text = buildAnnotatedString {
            withStyle(
                style = SpanStyle(
                    redGradientBrush,
                    fontWeight = FontWeight.Bold,
                    fontSize = 32.sp
                )
            ) {
                append(title)
            }
        }
    )

}