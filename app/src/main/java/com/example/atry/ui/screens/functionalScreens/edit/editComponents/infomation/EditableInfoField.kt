package com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.material.icons.filled.Edit
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.focus.focusRequester
import androidx.compose.ui.focus.onFocusChanged
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.text.TextRange
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.input.TextFieldValue
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun EditableInfoField(
    label: String,
    initialName: String,
    labelDB: String, // Callback khi tên được lưu
    modifier: Modifier = Modifier,
    viewModel: EditProfileViewModel = viewModel()
) {
    val updateStatus by viewModel.updateStatus.collectAsState()
    val keyboardController = LocalSoftwareKeyboardController.current

    // 1. Quản lý trạng thái chỉnh sửa
    var isEditing by remember { mutableStateOf(false) }

    // 2. Quản lý giá trị TextFieldValue để điều khiển cursor
    var currentValue by remember {
        mutableStateOf(TextFieldValue(initialName, TextRange(initialName.length)))
    }

    // 3. Quản lý Focus
    val focusRequester = remember { FocusRequester() }

    // Logic xử lý khi nhấn nút Edit/Check
    val onToggleEdit: () -> Unit = {
        if (isEditing) {
            // Chế độ chỉnh sửa -> xem (lưu)
            if (currentValue.text.isNotBlank()) {
                viewModel.updateUserField(labelDB, currentValue.text)
            }
            isEditing = false
            keyboardController?.hide()
        } else {
            // Chế độ xem -> chỉnh sửa
            isEditing = true
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
            modifier = modifier
                .fillMaxWidth()
                .padding(vertical = 8.dp)
                .focusRequester(focusRequester)
                .onFocusChanged { focusState ->
                    if (!focusState.isFocused && isEditing) {
                        // Mất focus => tự lưu
                        if (currentValue.text.isNotBlank()) {
                            viewModel.updateUserField(labelDB, currentValue.text)
                        }
                        isEditing = false
                        keyboardController?.hide()
                    }
                },
            verticalAlignment = Alignment.CenterVertically
        ) {
            Row(
                modifier = Modifier
                    .weight(1f)
                    .clip(RoundedCornerShape(20.dp))
                    .border(
                        width = 1.dp,
                        color = Color.Black,
                        shape = RoundedCornerShape(20.dp)
                    )
                    .background(Color.White)
                    .padding(horizontal = 16.dp, vertical = 5.dp),
                verticalAlignment = Alignment.CenterVertically,
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                if (isEditing) {
                    // CHẾ ĐỘ CHỈNH SỬA
                    BasicTextField(
                        value = currentValue,
                        onValueChange = { currentValue = it },
                        textStyle = TextStyle(
                            color = Color(0xFF6A1B9A),
                            fontSize = 18.sp
                        ),

                    )

                    // Auto focus và đưa cursor ra cuối
                    LaunchedEffect(isEditing) {
                        if (isEditing) {
                            focusRequester.requestFocus()
                            currentValue = currentValue.copy(
                                selection = TextRange(currentValue.text.length)
                            )
                        }
                    }
                } else {
                    // CHẾ ĐỘ XEM
                    Text(
                        text = currentValue.text,
                        style = TextStyle(
                            color = Color(0xFF6A1B9A),
                            fontSize = 18.sp
                        )
                    )
                }

                // Nút Edit/Check
                IconButton(
                    onClick = onToggleEdit,
                    modifier = Modifier.size(48.dp)
                ) {
                    Icon(
                        imageVector = if (isEditing) Icons.Filled.Check else Icons.Filled.Edit,
                        contentDescription = if (isEditing) "Lưu tên" else "Chỉnh sửa tên",
                        tint = if (isEditing) MaterialTheme.colorScheme.primary else Color.Black
                    )
                }
            }
        }
    }
}
