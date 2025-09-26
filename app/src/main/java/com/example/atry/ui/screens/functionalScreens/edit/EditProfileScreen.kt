package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.ui.components.general.Footer
import com.example.atry.ui.components.general.Header
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.EditProfileImage
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.Selections

@Composable
@Preview
fun EditProfileScreen(){

    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        Header("Sửa hồ sơ", R.drawable.humble_logo)

        Column(
            modifier = Modifier
                .padding(20.dp)
                .weight(1f),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {
            //main
            EditProfileImage()

            Spacer(modifier = Modifier.height(20.dp))

            Selections()
        }
        var selected  by remember { mutableStateOf("profile") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}


