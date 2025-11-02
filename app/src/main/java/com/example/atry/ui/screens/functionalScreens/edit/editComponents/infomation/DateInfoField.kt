package com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation

import android.app.DatePickerDialog
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.DateRange
import androidx.compose.material3.Button
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.viewmodel.functional.EditProfileViewModel
import java.util.Calendar

@Composable
fun DateInfoField(
    label:String,
    initialName: String,
    labelDB:String,
    modifier: Modifier = Modifier,
    viewModel: EditProfileViewModel= viewModel()
) {
    val updateStatus by viewModel.updateStatus.collectAsState()
    val context = LocalContext.current
    val calendar = Calendar.getInstance()
    var currentValue by remember { mutableStateOf(initialName) }

    val datePickerDialog = DatePickerDialog(
        context,
        { _, year, month, dayOfMonth ->
            val selectedDate = Calendar.getInstance()
            selectedDate.set(year, month, dayOfMonth)
            val date = selectedDate.time
            // cập nhật ViewModel
            viewModel.updateDob(date)
            // cập nhật hiển thị ngay
            currentValue = "${dayOfMonth}/${month + 1}/${year}" // hoặc format theo ý bé
        },
        calendar.get(Calendar.YEAR),
        calendar.get(Calendar.MONTH),
        calendar.get(Calendar.DAY_OF_MONTH)
    )



    val focusRequester = remember { FocusRequester() }

    Column(
        modifier = modifier
    ) {
        Text(
            text = label,
            style = MaterialTheme.typography.titleMedium,
            fontWeight = FontWeight.Bold,
            modifier = Modifier.padding(end = 8.dp),
            color = MaterialTheme.colorScheme.onBackground
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
                Text(currentValue,  color = Color(0xFF6A1B9A))
                IconButton(
                    onClick = { datePickerDialog.show() }
                ) {
                    Icon(
                        imageVector = Icons.Filled.DateRange,
                        contentDescription = "Chọn ngày sinh",
                        tint = MaterialTheme.colorScheme.primary
                    )
                }
            }
        }


    }
}
