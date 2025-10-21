package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import android.net.Uri
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.components.ImageUploadField
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush
import kotlin.collections.toMutableList

@Composable
@Preview
fun EditProfileImage() {
    Column (

    ) {
        var images by remember { mutableStateOf<List<Uri>>(emptyList()) }
        val titleBrush = if (!ThemeSingleton.isDark.value) Brush.linearGradient(
            colorStops = arrayOf(
                0.41f to Color.Black, // tại 41%
                1.0f to Color.Black   // tại 100%
            )
        ) else logoGradientBrush
        val subTitleColor = if (!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White

        Text(
            text = buildAnnotatedString {
                withStyle(
                    style = SpanStyle(
                        brush = titleBrush,
                        fontWeight = FontWeight.Bold,
                        fontSize = 20.sp
                    )
                ) {
                    append("Ảnh của bạn")
                }
            }
        )
        Text("Ảnh này sẽ hiển thị trên hồ sơ của bạn", fontSize = 16.sp, color = subTitleColor)


        Spacer(modifier = Modifier.height(8.dp))

        ImageUploadField(
            images = images,
            onAddClick = { uri -> images = images + uri },
            onRemoveClick = { index -> images = images.toMutableList().apply { removeAt(index) } }
        )
    }
}