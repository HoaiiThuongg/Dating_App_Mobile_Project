package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.ui.components.textfield.BlackBorderTextField
import com.example.atry.ui.components.textfield.CustomTextField
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush
import com.example.atry.ui.theme.purpleGradientBrush

@Composable
fun InformationBar(title:String,content:String) {
    val titleBrush = if(!ThemeSingleton.isDark.value) purpleGradientBrush
    else logoGradientBrush
    var text by remember { mutableStateOf(content) }
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 1.dp,
                color = MaterialTheme.colorScheme.onSurface,
                shape = RoundedCornerShape(30.dp)
            )
    ) {
        Row(
            horizontalArrangement = Arrangement.SpaceBetween,
            modifier = Modifier
                .padding(2.dp)
                .fillMaxWidth()
        ) {
            BlackBorderTextField(title,text, onValueChange = { text = it },
                MaterialTheme.colorScheme.onBackground,titleBrush)
        }
    }
}