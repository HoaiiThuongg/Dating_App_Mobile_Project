package com.example.atry.ui.components.textfield

import android.app.DatePickerDialog
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.DateRange
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.onFocusChanged
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import java.util.Calendar

@Composable
fun DateInputField(
    label: String,
    onValueChange: (String) -> Unit,
    onDateChange: (String) -> Unit
) {
    val context = LocalContext.current
    val calendar = Calendar.getInstance()
    val year = calendar.get(Calendar.YEAR)
    val month = calendar.get(Calendar.MONTH)
    val day = calendar.get(Calendar.DAY_OF_MONTH)

    var date by remember { mutableStateOf("") }
    var isDialogShowing by remember { mutableStateOf(false) }

    val datePickerDialog = DatePickerDialog(
        context,
        { _, y, m, d ->
            val selectedDate = String.format("%02d/%02d/%04d", d, m + 1, y)
            date = selectedDate
            onDateChange(selectedDate)
        },
        year, month, day
    ).apply {
        setOnDismissListener { isDialogShowing = false }
    }

    Column {
        TextField(
            value = date,
            onValueChange = { newValue ->
                if (newValue.matches(Regex("[0-9/]*"))) onValueChange(newValue)
            },
            readOnly = false,
            label = {
                Text(
                    label,
                    color = if (date.isNotEmpty()) Color(0xFFFF0468) else Color(0xFF3D3D3D),
                    modifier = Modifier.offset(x = (-15).dp)
                )
            },
            textStyle = TextStyle(color = Color.Black, fontSize = 16.sp),
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 4.dp)
                .fillMaxWidth()
                .onFocusChanged {
                    if (it.isFocused) {
                        datePickerDialog.show()
                        isDialogShowing = true
                    }
                },
            colors = TextFieldDefaults.colors(
                focusedIndicatorColor = Color(0xFFFF0468),
                unfocusedIndicatorColor = Color(0xFFFF4081),
                focusedContainerColor = Color.Transparent,
                unfocusedContainerColor = Color.Transparent,
                cursorColor = Color(0xFFFF0468)
            ),
            placeholder = { Text("dd/MM/yyyy") },
            trailingIcon = {
                IconButton(
                    onClick = {
                        if (isDialogShowing) {
                            datePickerDialog.dismiss() // đóng nếu đang mở
                        } else {
                            datePickerDialog.show()    // mở nếu đang đóng
                            isDialogShowing = true
                        }
                    }
                ) {
                    Icon(
                        imageVector = Icons.Default.DateRange,
                        contentDescription = "Chọn ngày",
                        tint = Color(0xFFFF5C8D)
                    )
                }
            },
            singleLine = true
        )
    }
}
