package com.example.atry.ui.components.textfield

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Visibility
import androidx.compose.material.icons.filled.VisibilityOff
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusDirection
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.SolidColor
import androidx.compose.ui.platform.LocalFocusManager
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation

@Composable
fun UnderlineTextField(
    label: String,
    value: String,
    onValueChange: (String) -> Unit,
    // THAY ĐỔI 1: Thêm 'modifier' để nhận testTag và các thuộc tính khác
    modifier: Modifier = Modifier,
    // THAY ĐỔI 2: Thêm 'enabled' để có thể vô hiệu hóa
    enabled: Boolean = true,
    imeAction: ImeAction = ImeAction.Next,
    isPassword: Boolean = false
) {
    // THAY ĐỔI 3: Loại bỏ 'var text' bên trong.
    // Component này sẽ được kiểm soát hoàn toàn bởi 'value' được truyền vào.
    var passwordVisible by remember { mutableStateOf(false) }
    val keyboardController = LocalSoftwareKeyboardController.current
    val focusManager = LocalFocusManager.current
    Column(modifier = Modifier.fillMaxWidth()) {

        TextField(
            // THAY ĐỔI 4: Sử dụng trực tiếp 'value' và 'onValueChange'
            value = value,
            onValueChange = onValueChange,
            // THAY ĐỔI 5: Truyền 'enabled'
            enabled = enabled,
            label = {
                Text(
                    label,
                    // THAY ĐỔI 6: Dùng 'value.isNotEmpty()'
                    color = if (value.isNotEmpty()) Color(0xFFFF0468) else Color(0xFF3D3D3D),
                    modifier = Modifier.offset(x = (-15).dp)
                )
            },
            textStyle = TextStyle(
                color = Color.Black,
                fontSize = 16.sp
            ),
            // THAY ĐỔI 7: Áp dụng 'modifier' được truyền vào
            modifier = modifier
                .fillMaxWidth()
                .padding(vertical = 4.dp),
            colors = TextFieldDefaults.colors(
                focusedIndicatorColor = Color(0xFFFF0468),
                unfocusedIndicatorColor = Color(0xFFFF4081),
                // Cập nhật màu khi bị vô hiệu hóa
                disabledIndicatorColor = Color.Transparent,
                disabledTextColor = Color.Gray,
                disabledLabelColor = Color.Gray,
                errorIndicatorColor = Color.Red,
                focusedContainerColor = Color.Transparent,
                unfocusedContainerColor = Color.Transparent,
                disabledContainerColor = Color.Transparent,
                errorContainerColor = Color.Transparent,
                cursorColor = Color(0xFFFF0468)
            ),
            keyboardOptions = KeyboardOptions(
                imeAction = imeAction,
                keyboardType = if (isPassword) KeyboardType.Password else KeyboardType.Text
            ),
            keyboardActions = KeyboardActions(
                onNext = { focusManager.moveFocus(FocusDirection.Down) }, // Chuyển xuống dưới
                onDone = { keyboardController?.hide() }
            ),
            singleLine = true,
            visualTransformation = if (isPassword && !passwordVisible)
                PasswordVisualTransformation()
            else
                VisualTransformation.None,
            trailingIcon = {
                if (isPassword) {
                    val image = if (passwordVisible)
                        Icons.Default.Visibility
                    else
                        Icons.Default.VisibilityOff

                    IconButton(onClick = { passwordVisible = !passwordVisible }) {
                        Icon(
                            imageVector = image,
                            contentDescription = if (passwordVisible) "Ẩn mật khẩu" else "Hiện mật khẩu",
                            tint = Color(0xFFFF0468)
                        )
                    }
                }
            }
        )
    }
}