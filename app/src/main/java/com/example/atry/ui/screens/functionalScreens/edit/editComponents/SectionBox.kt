package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush

@Composable

fun SelectionBox(title: String, hint: String) {
    val titleBrush = if(!ThemeSingleton.isDark.value) Brush.linearGradient(
        colorStops = arrayOf(
            0.41f to Color.Black, // tại 41%
            1.0f to Color.Black   // tại 100%
        )
    ) else logoGradientBrush
    val subTitleColor = if(!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White

    Column (
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Text(
            text = buildAnnotatedString {
                withStyle(
                    style = SpanStyle(
                        brush = titleBrush,
                        fontWeight = FontWeight.Bold,
                        fontSize = 20.sp
                    )
                ) {
                    append(title)
                }
            }
        )

        Text(
            text = hint,
            fontSize = 16.sp,
            color = subTitleColor
        )

        TagInputField()
    }
}
