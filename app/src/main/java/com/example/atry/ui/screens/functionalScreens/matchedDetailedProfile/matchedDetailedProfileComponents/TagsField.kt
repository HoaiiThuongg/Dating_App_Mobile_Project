package com.example.atry.ui.screens.functionalScreens.matchedDetailedProfile.matchedDetailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
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
    list: List<String>?,
    tagColor: Color = Color(0xFFE91E63), // màu viền và text
    textColor: Color = Color(0xFFE91E63)
) {
    Column(
        modifier = Modifier.fillMaxWidth(),
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ) {
        Text(title, fontSize = 20.sp,color = MaterialTheme.colorScheme.onBackground, fontWeight = FontWeight.Bold)
        if(!list.isNullOrEmpty()) {
            FlowRow(
                horizontalArrangement = Arrangement.spacedBy(8.dp), // Khoảng cách ngang
                verticalArrangement = Arrangement.spacedBy(8.dp) ,   // Khoảng cách dọc
                modifier = Modifier
                    .fillMaxWidth()
            ) {
                list.forEach { item ->
                    Text(
                        text = item,
                        fontSize = 14.sp,
                        color = Color(0xFFE91E63),
                        modifier = Modifier
                            .border(
                                width = 1.dp,
                                color = Color(0xFFE91E63),
                                shape = RoundedCornerShape(50)
                            )
                            .padding(horizontal = 12.dp, vertical = 4.dp)
                    )                }
            }
        } else {
            Text("Chưa chia sẻ", color = MaterialTheme.colorScheme.onBackground)
        }
    }
}
