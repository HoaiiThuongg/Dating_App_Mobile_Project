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
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.SolidColor
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation
//
//@Composable
//fun UnderlineTextField(
//    label: String,
//    value: String,
//    onValueChange: (String) -> Unit
//) {
//    var text by remember { mutableStateOf("") }
//    val keyboardController = LocalSoftwareKeyboardController.current
//
//    Column(modifier = Modifier.fillMaxWidth()) {
//
//        TextField(
//            value = text,
//            onValueChange = {newText -> text = newText },
//            label = {
//                Text(
//                    label,
//                    color = if (text.isNotEmpty()) Color(0xFFFF0468) else Color(0xFF3D3D3D),
//                    modifier = Modifier.offset(x = (-15).dp)
//                )
//            },
//            textStyle = TextStyle(
//                color = Color.Black,
//                fontSize = 16.sp
//            ),
//            modifier = Modifier
//                .fillMaxWidth()
//                .padding(vertical = 4.dp),
//            colors = TextFieldDefaults.colors(
//                focusedIndicatorColor = Color(0xFFFF0468),
//                unfocusedIndicatorColor = Color(0xFFFF4081),
//                disabledIndicatorColor = Color.Transparent,
//                errorIndicatorColor = Color.Red,
//                focusedContainerColor = Color.Transparent, // nền trong suốt
//                unfocusedContainerColor = Color.Transparent,
//                disabledContainerColor = Color.Transparent,
//                errorContainerColor = Color.Transparent,
//                cursorColor = Color(0xFFFF0468)
//            ),
//            keyboardOptions = KeyboardOptions(imeAction = ImeAction.Done),
//            keyboardActions = KeyboardActions(
//                onDone = { keyboardController?.hide() }
//            ),
//            singleLine = true
//        )
//    }
//}

@Composable
fun UnderlineTextField(
    label: String,
    value: String,
    onValueChange: (String) -> Unit,
    isPassword: Boolean = false
) {
    var text by remember { mutableStateOf(value) }
    var passwordVisible by remember { mutableStateOf(false) }
    val keyboardController = LocalSoftwareKeyboardController.current

    Column(modifier = Modifier.fillMaxWidth()) {

        TextField(
            value = text,
            onValueChange = {
                text = it
                onValueChange(it)
            },
            label = {
                Text(
                    label,
                    color = if (text.isNotEmpty()) Color(0xFFFF0468) else Color(0xFF3D3D3D),
                    modifier = Modifier.offset(x = (-15).dp)
                )
            },
            textStyle = TextStyle(
                color = Color.Black,
                fontSize = 16.sp
            ),
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 4.dp),
            colors = TextFieldDefaults.colors(
                focusedIndicatorColor = Color(0xFFFF0468),
                unfocusedIndicatorColor = Color(0xFFFF4081),
                disabledIndicatorColor = Color.Transparent,
                errorIndicatorColor = Color.Red,
                focusedContainerColor = Color.Transparent,
                unfocusedContainerColor = Color.Transparent,
                disabledContainerColor = Color.Transparent,
                errorContainerColor = Color.Transparent,
                cursorColor = Color(0xFFFF0468)
            ),
            keyboardOptions = KeyboardOptions(
                imeAction = ImeAction.Done,
                keyboardType = if (isPassword) KeyboardType.Password else KeyboardType.Text
            ),
            keyboardActions = KeyboardActions(
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
