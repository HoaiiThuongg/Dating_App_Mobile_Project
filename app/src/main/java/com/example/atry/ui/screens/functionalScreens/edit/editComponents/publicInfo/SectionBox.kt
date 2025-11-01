package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun SelectionBox(
    title: String,
    hint: String,
    items: List<String>,                   // danh sách hiện tại
    labelDB: String,                        // tên field trên DB
    viewModel: EditProfileViewModel = viewModel(),        // ViewModel để update
    modifier: Modifier = Modifier
) {
    val subTitleColor = if (!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White
    val titleBrush = if (!ThemeSingleton.isDark.value) Brush.linearGradient(
        colorStops = arrayOf(0.41f to Color.Black, 1f to Color.Black)
    ) else logoGradientBrush

    var currentItems by remember { mutableStateOf(items) }
    var newItem by remember { mutableStateOf("") }

    Column(modifier = modifier, verticalArrangement = Arrangement.spacedBy(5.dp)) {
        // Title
        Text(
            text = buildAnnotatedString {
                withStyle(SpanStyle(brush = titleBrush, fontWeight = FontWeight.Bold, fontSize = 20.sp)) {
                    append(title)
                }
            }
        )

        // Hint
        Text(text = hint, fontSize = 16.sp, color = subTitleColor)

        // Hiển thị các tag
        FlowRow(
            horizontalArrangement = Arrangement.spacedBy(8.dp), // Khoảng cách ngang
            verticalArrangement = Arrangement.spacedBy(8.dp) ,   // Khoảng cách dọc
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 1.dp,
                    color = Color.LightGray,
                    shape = RoundedCornerShape(16.dp)
                )
                .padding(10.dp)
        ) {
            currentItems.forEach { item ->
                TagItem(
                    text = item,
                    onRemove = {
                        currentItems = currentItems - item
                        viewModel.removeFromProfileList(labelDB, item)
                    }
                )
            }

            // Input thêm tag mới
            TagInputField(
                value = newItem,
                onValueChange = { newItem = it },
                onAdd = {
                    if (newItem.isNotBlank() && !currentItems.contains(newItem)) {
                        currentItems = currentItems + newItem
                        viewModel.addToProfileList(labelDB, newItem)
                        newItem = ""
                    }
                }
            )
        }
    }
}

@Composable
fun TagItem(text: String, onRemove: () -> Unit) {
    Box(
        modifier = Modifier
            .background(Color.Gray, RoundedCornerShape(12.dp))
            .padding(horizontal = 8.dp, vertical = 4.dp)
    ) {
        Row(horizontalArrangement = Arrangement.spacedBy(4.dp), verticalAlignment = Alignment.CenterVertically) {
            Text(text = text, fontSize = 14.sp, color = MaterialTheme.colorScheme.onBackground)
            IconButton(onClick = onRemove, modifier = Modifier.size(16.dp)) {
                Icon(imageVector = Icons.Default.Close, contentDescription = "Remove", tint = Color.Red)
            }
        }
    }
}

@Composable
fun TagInputField(value: String = "", onValueChange: (String) -> Unit, onAdd: () -> Unit) {
    Row(
        modifier = Modifier
            .border(1.dp, Color.Gray, RoundedCornerShape(12.dp))
            .padding(horizontal = 8.dp, vertical = 4.dp),
        horizontalArrangement = Arrangement.spacedBy(4.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
        BasicTextField(
            value = value,
            onValueChange = onValueChange,
            singleLine = true,
            textStyle = TextStyle(color = MaterialTheme.colorScheme.onBackground)
        )
        IconButton(onClick = onAdd, modifier = Modifier.size(20.dp)) {
            Icon(imageVector = Icons.Default.Check, contentDescription = "Add Tag", tint = Color.Green)
        }
    }
}
