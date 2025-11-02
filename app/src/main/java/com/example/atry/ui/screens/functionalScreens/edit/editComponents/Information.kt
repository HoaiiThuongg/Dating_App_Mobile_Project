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
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.data.constants.AppConstants
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

    LazyColumn(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ) {
        val dobString = CurrentUser.userProfile?.dob?.let { date ->
            SimpleDateFormat("yyyy-MM-dd", Locale.getDefault()).format(date)
        } ?: "Chưa có ngày sinh"
        item{ Spacer(Modifier.size(0.dp)) }
        item { EditableInfoField(stringResource(id = R.string.name), CurrentUser.user?.name ?: "", "name") }
        item { EditableDropdownField(stringResource(id = R.string.gender), CurrentUser.user?.gender ?: "", "gender",
            AppConstants.gender) }
        item { DateInfoField(stringResource(id = R.string.birthday), dobString, "dob") }
        item { EditableDropdownField(stringResource(id = R.string.location), CurrentUser.userProfile?.location ?: "","location",
            AppConstants.vietnamProvinces) }
        item {
            EditableInfoField(
                stringResource(id = R.string.phone),
                CurrentUser.userProfile?.phone ?: "",
                "phone"
            )
        }
        item { EditableInfoField("Email", CurrentUser.user?.email ?: "", "email") }

    }
}