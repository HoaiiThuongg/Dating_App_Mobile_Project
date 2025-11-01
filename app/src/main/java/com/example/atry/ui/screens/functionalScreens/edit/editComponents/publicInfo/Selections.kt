package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.runtime.Composable
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
            title = "Gu người yêu",
            hint = "Bạn thích kiểu người như nào?",
            items = CurrentUser.userProfile?.partnerPreferences ?: emptyList(),
            labelDB = "partnerPreferences"
        )
        SelectionBox(
            title = "Tôn giáo",
            hint = "Bạn theo tôn giáo nào?",
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
            hint = "Bạn nêu quan điểm sống nhé.",
            initialValue = CurrentUser.userProfile?.lifestyle ?: "",
            labelDB = "lifestyle"
        )
    }
}