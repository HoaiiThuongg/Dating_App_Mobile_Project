package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.EditProfileNavBar
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.Information
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.PublicInformation

@Composable
@Preview
fun EditProfileScreen() {
    var openPublicInformation by remember { mutableStateOf(true) }

    Box(
        modifier = Modifier
            .fillMaxSize()
    ) {
        Column(
            modifier = Modifier
                .padding(20.dp, 10.dp)
        ) {
            EditProfileNavBar(
                openPublicInformation,
                { openPublicInformation = true },
                { openPublicInformation = false }
            )

            if (openPublicInformation) {
                PublicInformation()
            } else {
                Information()
            }

        }
    }
}

