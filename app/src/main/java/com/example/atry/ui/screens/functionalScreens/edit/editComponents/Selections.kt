package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowForward
import androidx.compose.material3.Icon
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.data.singleton.CurrentUser

@Composable
@Preview
fun Selections() {
    // Sở thích
    Column(
        verticalArrangement = Arrangement.spacedBy(20.dp)
    ) {
        SelectionBox(
            title = "Sở thích",
            hint = "Bạn thích kiểu người như nào?",
            items = CurrentUser.userProfile?.interests ?: emptyList(),
            labelDB = "interests"
        )
        SelectionBox(
            title = "Gu ngươời yêu",
            hint = "Bạn thích kiểu người như nào?",
            items = CurrentUser.userProfile?.partnerPreferences ?: emptyList(),
            labelDB = "partnerPreferences"
        )
        SelectionBox(
            title = "Tôn giáo",
            hint = "Bạn thích kiểu người như nào?",
            items = CurrentUser.userProfile?.religions ?: emptyList(),
            labelDB = "religions"
        )

        WriteBox(
            title = "Bio",
            hint = "Bạn giới thiệu về bản thân mình nhé.",
            initialValue = CurrentUser.userProfile?.bio ?: "",
            labelDB = "bio"
        )
        WriteBox(
            title = "Quan điểm sống",
            hint = "Bạn giới thiệu về bản thân mình nhé.",
            initialValue = CurrentUser.userProfile?.lifestyle ?: "",
            labelDB = "lifestyle"
        )
    }
}