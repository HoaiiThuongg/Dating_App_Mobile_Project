package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation.DateInfoField
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation.EditableDropdownField
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.infomation.EditableInfoField
import com.example.atry.viewmodel.functional.EditProfileViewModel
import java.text.SimpleDateFormat
import java.util.Locale

@Composable
@Preview
fun Information(
    viewModel: EditProfileViewModel= viewModel()
) {
    val updateStatus by viewModel.updateStatus.collectAsState()
    val genderOptions = listOf("Nam", "Nữ", "Khác")

    LazyColumn(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.spacedBy(15.dp)
    ) {
        val dobString = CurrentUser.userProfile?.dob?.let { date ->
            SimpleDateFormat("yyyy-MM-dd", Locale.getDefault()).format(date)
        } ?: "Chưa có ngày sinh"
        item{ Spacer(Modifier.size(0.dp)) }
        item { EditableInfoField("Tên", CurrentUser.user?.name ?: "Lỗi tên", "name") }
        item { EditableDropdownField("Giới tính", CurrentUser.user?.gender ?: "Lỗi", "gender",genderOptions) }
        item { DateInfoField("Ngày sinh", dobString, "dob") }
        item { EditableInfoField("Nơi ở", CurrentUser.userProfile?.location ?: "Lỗi", "location") }
        item {
            EditableInfoField(
                "Số điện thoại",
                CurrentUser.userProfile?.phone ?: "Lỗi",
                "phone"
            )
        }
        item { EditableInfoField("Email", CurrentUser.user?.email ?: "Lỗi", "email") }

    }
}