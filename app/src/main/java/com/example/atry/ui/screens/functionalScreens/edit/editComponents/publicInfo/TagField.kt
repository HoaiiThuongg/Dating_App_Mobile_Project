package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Add
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.text.input.TextFieldValue
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.tooling.preview.Preview
import kotlinx.coroutines.delay
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.focus.focusRequester
import androidx.compose.ui.platform.LocalFocusManager
@Composable
@Preview
fun TagInputField(
    modifier: Modifier = Modifier,
//    initialTags: List<String> = listOf("Thể thao", "Chơi game"),
//    onTagsChanged: (List<String>) -> Unit = {}
) {
    val     initialTags: List<String> = listOf("Thể thao", "Chơi game")

    var tags by remember { mutableStateOf(initialTags.toMutableList()) }
    var newTag by remember { mutableStateOf(TextFieldValue("")) }
    var adding by remember { mutableStateOf(false) }

    val focusRequester = remember { FocusRequester() }
    val focusManager = LocalFocusManager.current

    FlowRow(
        horizontalArrangement = Arrangement.spacedBy(8.dp),
        verticalArrangement = Arrangement.spacedBy(8.dp),
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 1.dp, // Độ dày của viền
                color = Color(0xFFC4C4C4), // Màu viền xám
                shape = RoundedCornerShape(20.dp) // Bo góc 12dp
            )
            .padding(15.dp)
    ) {
        tags.forEach { tag ->
            Row(
                modifier = Modifier
                    .background(Color(0xFFE0E0E0), RoundedCornerShape(50))
                    .padding(horizontal = 12.dp, vertical = 6.dp),
                verticalAlignment = Alignment.CenterVertically
            ) {
                Text("💜 $tag", fontSize = 14.sp,color = MaterialTheme.colorScheme.onBackground)
            }
        }

        if (adding) {
            TextField(
                value = newTag,
                onValueChange = { newTag = it },
                modifier = Modifier
                    .widthIn(min = 80.dp, max = 160.dp)
                    .focusRequester(focusRequester)
                    ,
                placeholder = { Text("Nhập tag...") },
                singleLine = true,
                keyboardActions = KeyboardActions(
                    onDone = {
                        val clean = newTag.text.trim()
                        if (clean.isNotEmpty()) tags.add(clean)
                        newTag = TextFieldValue("")
                        adding = false
                        focusManager.clearFocus()
                    }
                ),
                keyboardOptions = KeyboardOptions.Default.copy(imeAction = ImeAction.Done)
            )

            // 🔹 Tự động focus khi hiện ô nhập
            LaunchedEffect(Unit) {
                delay(100)
                focusRequester.requestFocus()
            }
        } else {
            Icon(
                imageVector = Icons.Default.Add,
                contentDescription = "Thêm tag",
                tint = Color.Gray,
                modifier = Modifier
                    .size(28.dp)
                    .clickable { adding = true }
                    .align(Alignment.CenterVertically)
            )
        }
    }
}