package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.data.singleton.CurrentUser

@Composable
@Preview
fun Information() {
    LazyColumn(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.spacedBy(30.dp)
    ) {
        item{ Spacer(Modifier.size(0.dp)) }
        item { EditableInfoField("Tên", CurrentUser.user?.name?:"Lỗi tên", { newName ->CurrentUser.user?.name}) }
        item { EditableInfoField("Giới tính", CurrentUser.user?.gender?:"Lỗi", { newName ->CurrentUser.user?.gender}) }
        item { EditableInfoField("Sở thích", CurrentUser.user?.interests?:"Lỗi", { newName ->CurrentUser.user?.interests}) }

        item{ Spacer(Modifier.size(0.dp)) }

    }
}