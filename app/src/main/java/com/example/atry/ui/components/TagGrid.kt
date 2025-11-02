package com.example.atry.ui.components

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
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
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.room.Update
import com.example.atry.ui.theme.redGradientBrush
import com.example.atry.viewmodel.auth.RegisterViewModel
import com.example.atry.viewmodel.auth.UserInfoSetupViewModel


@Composable
fun TagGrid(
    title: String,
    tags: List<String>,
    selectedTags: List<String>,
    selectedColor:Color,
    color:Color,
    onTagToggle: (String) -> Unit,
    viewModel: UserInfoSetupViewModel = viewModel()
) {
    Column(modifier = Modifier.fillMaxWidth()) {
        Text(
            text = title,
            style = MaterialTheme.typography.bodyMedium,
            color = Color.Black,
            fontSize = 16.sp
        )
        Spacer(modifier = Modifier.height(6.dp))

        FlowRow(
            horizontalArrangement = Arrangement.spacedBy(8.dp),
            verticalArrangement = Arrangement.spacedBy(8.dp),
            modifier = Modifier.fillMaxWidth()
        ) {
            tags.forEach { tag ->
                val isSelected = tag in selectedTags

                Row(
                    modifier = Modifier
                        .clip(RoundedCornerShape(50))
                        .background(if (isSelected) selectedColor else color)
                        .clickable {
                            onTagToggle(tag)
                            viewModel.addToProfileList("interests", tag)
                        }
                        .padding(horizontal = 20.dp, vertical = 10.dp),
                ) {
                    Text(
                        text = tag,
                        color = if (isSelected) Color.White else Color.Black,
                        fontWeight = FontWeight.SemiBold,
                        fontSize = 14.sp,
                    )

                    if (isSelected) {
                        IconButton(
                            onClick = { viewModel.removeFromProfileList("interests", tag) },
                            modifier = Modifier
                                .size(16.dp) // nhỏ lại cho vừa tag
                        ) {
                            Icon(
                                imageVector = Icons.Default.Close,
                                contentDescription = "Close",
                                tint = Color.White
                            )
                        }
                    }
                }

            }
        }
    }
}
