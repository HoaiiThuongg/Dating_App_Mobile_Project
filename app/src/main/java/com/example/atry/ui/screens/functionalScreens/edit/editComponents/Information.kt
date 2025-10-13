package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp

@Composable
fun Information() {
    LazyColumn(
        modifier = Modifier
            .fillMaxSize()
            .padding(0.dp, 20.dp),
        verticalArrangement = Arrangement.spacedBy(40.dp)
    ) {
        item { InformationBar("Số điện thoại", "987654312") }
        item { InformationBar("Ngày sinh", "01/01/2000") }
        items(10) {
            InformationBar("Nơi ở", "Hà Nội")
        }
    }
}