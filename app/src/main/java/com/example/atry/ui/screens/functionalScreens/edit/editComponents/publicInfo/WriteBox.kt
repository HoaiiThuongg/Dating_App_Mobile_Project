package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.material.icons.filled.Edit
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.focus.focusRequester
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun WriteBox(
    title: String,
    hint: String,
    initialValue: String,
    labelDB: String, // tên field để update lên server
    modifier: Modifier = Modifier,
    viewModel: EditProfileViewModel = viewModel()
) {
    val updateStatus by viewModel.updateStatus.collectAsState()

    var isEditing by remember { mutableStateOf(false) }
    var currentValue by remember { mutableStateOf(initialValue) }

    val focusRequester = remember { FocusRequester() }

    val onToggleEdit = {
        if (isEditing) {
            // Nhấn tick → lưu giá trị
            if (currentValue.isNotBlank()) {
                viewModel.updateUserProfileField(labelDB, currentValue)
            }
            isEditing = false
        } else {
            // Nhấn bút → chuyển sang edit
            isEditing = true
        }
    }

    Column(modifier = modifier) {
        Text(
            text = title,
            fontWeight = FontWeight.Bold,
            fontSize = 20.sp,
            color = if (!ThemeSingleton.isDark.value) Color.Black else Color.White
        )
        Text(
            text = hint,
            fontSize = 16.sp,
            color = if (!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White
        )

        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 8.dp),
            verticalAlignment = Alignment.CenterVertically
        ) {
            Row(
                modifier = Modifier
                    .weight(1f)
                    .clip(RoundedCornerShape(20.dp))
                    .border(1.dp,MaterialTheme.colorScheme.onBackground, RoundedCornerShape(20.dp))
                    .background(Color.Transparent)
                    .padding(horizontal = 16.dp, vertical = 5.dp),
                verticalAlignment = Alignment.CenterVertically,
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                if (isEditing) {
                    BasicTextField(value = currentValue, onValueChange = { currentValue = it }, textStyle = TextStyle(
                            color = MaterialTheme.colorScheme.onBackground,
                            fontSize = 18.sp
                        ), modifier = Modifier.focusRequester(focusRequester))
                    LaunchedEffect(Unit) { focusRequester.requestFocus() }
                } else {
                    Text(
                        text = currentValue,
                        fontSize = 18.sp,
                        color = MaterialTheme.colorScheme.onBackground
                    )
                }

                IconButton(onClick = onToggleEdit, modifier = Modifier.size(48.dp)) {
                    Icon(
                        imageVector = if (isEditing) Icons.Filled.Check else Icons.Filled.Edit,
                        contentDescription = if (isEditing) "Lưu" else "Chỉnh sửa",
                        tint = if (isEditing) MaterialTheme.colorScheme.onBackground else Color.LightGray
                    )
                }
            }
        }
    }
}
