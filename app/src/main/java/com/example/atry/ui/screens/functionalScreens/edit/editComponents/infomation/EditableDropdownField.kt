package com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.material.icons.filled.Edit
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.text.font.FontWeight
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.viewmodel.functional.EditProfileViewModel

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun EditableDropdownField(
    label: String,
    initialValue: String,
    labelDB: String,
    options: List<String>,
    modifier: Modifier = Modifier,
    viewModel: EditProfileViewModel = viewModel()
) {
    var isEditing by remember { mutableStateOf(false) }
    var selectedValue by remember { mutableStateOf(initialValue) }
    var expanded by remember { mutableStateOf(false) }

    val onToggleEdit: () -> Unit = {
        if (isEditing) {
            viewModel.updateUserField(labelDB, selectedValue)
            isEditing = false
            expanded = false
        } else {
            isEditing = true
            expanded = true
        }
    }

    Column(modifier = modifier) {
        Text(
            text = label,
            style = MaterialTheme.typography.titleMedium,
            fontWeight = FontWeight.Bold,
            modifier = Modifier.padding(end = 8.dp),
            color = MaterialTheme.colorScheme.onBackground
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
                    .border(1.dp, Color.Black, RoundedCornerShape(20.dp))
                    .background(Color.White, RoundedCornerShape(20.dp))
                    .padding(horizontal = 16.dp, vertical = 5.dp),
                verticalAlignment = Alignment.CenterVertically,
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                if (isEditing) {
                    ExposedDropdownMenuBox(
                        expanded = expanded,
                        onExpandedChange = { expanded = it }
                    ) {
                        // TextField phải enable để nhận click
                        TextField(
                            value = selectedValue,
                            onValueChange = {},
                            readOnly = true,
                            trailingIcon = { ExposedDropdownMenuDefaults.TrailingIcon(expanded = expanded) },
                            modifier = Modifier.fillMaxWidth()
                        )
                        ExposedDropdownMenu(
                            expanded = expanded,
                            onDismissRequest = {
                                expanded = false
                                isEditing=false
                            }
                        ) {
                            options.forEach { option ->
                                DropdownMenuItem(
                                    text = { Text(option) },
                                    onClick = {
                                        selectedValue = option
                                        expanded = false
                                        viewModel.updateUserField(labelDB, selectedValue)
                                        isEditing = false
                                    }
                                )
                            }
                        }
                    }
                } else {
                    Text(
                        text = selectedValue,
                        fontSize = 18.sp,
                        color = Color(0xFF6A1B9A)
                    )
                }

                IconButton(onClick = onToggleEdit) {
                    Icon(
                        imageVector = if (isEditing) Icons.Filled.Check else Icons.Filled.Edit,
                        contentDescription = if (isEditing) "Lưu" else "Chỉnh sửa",
                        tint = if (isEditing) MaterialTheme.colorScheme.primary else Color.Black
                    )
                }
            }
        }
    }
}
