package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
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
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
fun EditableInfoField(
    label:String,
    initialName: String,
    onNameUpdated: (String) -> Unit, // Callback khi tên được lưu
    modifier: Modifier = Modifier
) {
    // 1. Quản lý trạng thái chỉnh sửa
    var isEditing by remember { mutableStateOf(false) }

    // 2. Quản lý giá trị Text (sử dụng remember để giữ trạng thái khi chỉnh sửa)
    var currentName by remember { mutableStateOf(initialName) }

    // 3. Quản lý Focus (để tự động mở bàn phím khi chuyển sang chế độ chỉnh sửa)
    val focusRequester = remember { FocusRequester() }

    // Logic xử lý khi chuyển đổi chế độ
    val onToggleEdit = {
        if (isEditing) {
            // Chế độ chỉnh sửa -> Chế độ xem (Lưu)
            if (currentName.isNotBlank()) {
                onNameUpdated(currentName) // Gọi callback để lưu tên mới
            }
            isEditing = false
        } else {
            // Chế độ xem -> Chế độ chỉnh sửa
            isEditing = true
            // Cần LaunchedEffect nếu dùng BasicTextField bên trong Box
        }
    }
    Column(
        modifier = modifier
    ) {
        Text(
            text = label,
            style = MaterialTheme.typography.titleMedium,
            fontWeight = FontWeight.Bold,
            modifier = Modifier.padding(end = 8.dp)
        )
    // Khung chứa chính (Row)
    Row(
        modifier = modifier
            .fillMaxWidth()
            .padding(vertical = 8.dp),
        verticalAlignment = Alignment.CenterVertically
    ) {
            Row(
                modifier = Modifier
                    .weight(1f) // Chiếm hết không gian còn lại
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
                        value = currentName,
                        onValueChange = { currentName = it },
                        textStyle = TextStyle(
                            color = Color(0xFF6A1B9A), // Màu tím đậm cho text đang chỉnh sửa
                            fontSize = 18.sp
                        ),
                        modifier = Modifier.focusRequester(focusRequester)
                    )
                    // Tự động yêu cầu focus khi chuyển sang chế độ chỉnh sửa
                    if (isEditing) {
                        androidx.compose.runtime.LaunchedEffect(Unit) {
                            focusRequester.requestFocus()
                        }
                    }
                } else {
                    // CHẾ ĐỘ XEM
                    Text(
                        text = currentName,
                        style = TextStyle(
                            color = Color(0xFF6A1B9A), // Màu tím đậm
                            fontSize = 18.sp
                        )
                    )
                }
                // Nút Edit/Check
                IconButton(
                    onClick = onToggleEdit,
                    modifier = Modifier
                        .size(48.dp) // Kích thước icon button để dễ nhấn
                ) {
                    Icon(
                        // Thay đổi icon dựa trên trạng thái chỉnh sửa
                        imageVector = if (isEditing) Icons.Filled.Check else Icons.Filled.Edit,
                        contentDescription = if (isEditing) "Lưu tên" else "Chỉnh sửa tên",
                        tint = if (isEditing) MaterialTheme.colorScheme.primary else Color.Black
                    )
                }
            }
        }


    }
}
