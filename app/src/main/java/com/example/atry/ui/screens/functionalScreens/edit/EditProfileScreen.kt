package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.EditProfileImage
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.EditProfileNavBar
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.Information
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.PublicInformation
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.Selections

@Composable
@Preview()
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

