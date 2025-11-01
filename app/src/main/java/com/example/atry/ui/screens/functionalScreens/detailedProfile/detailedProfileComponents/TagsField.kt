package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun TagsField(
    title:String,
    hobbies: List<String>?,
    tagColor: Color = Color(0xFFE91E63), // màu viền và text
    textColor: Color = Color(0xFFE91E63)
) {
    Column(
        modifier = Modifier.fillMaxWidth(),
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ) {
        Text(title, fontSize = 20.sp,color = MaterialTheme.colorScheme.onBackground, fontWeight = FontWeight.Bold)
        Row(
            horizontalArrangement = Arrangement.spacedBy(5.dp),
            modifier = Modifier

        ) {
            hobbies?.forEach { hobby ->
                Text(
                    text = hobby,
                    fontSize = 14.sp,
                    color = textColor,
                    modifier = Modifier
                        .background(
                            color = Color.Transparent,
                            shape = RoundedCornerShape(50)
                        )
                        .border(width = 1.dp, color = tagColor, shape = RoundedCornerShape(50))
                        .padding(vertical = 4.dp, horizontal = 12.dp)
                        .wrapContentWidth()
                        .background(
                            color = Color.Transparent,
                            shape = RoundedCornerShape(50)
                        )
                )
            }
        }
    }
}
