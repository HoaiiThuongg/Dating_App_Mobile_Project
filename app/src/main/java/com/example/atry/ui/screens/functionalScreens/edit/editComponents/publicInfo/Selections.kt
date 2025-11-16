package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.runtime.Composable
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser

@Composable
@Preview
fun Selections() {
    // Sở thích
    Column(
        verticalArrangement = Arrangement.spacedBy(20.dp)
    ) {
        SelectionBox(
            title = stringResource(id = R.string.hobbies),
            hint = stringResource(id = R.string.hobbies_suggestion),
            items = CurrentUser.userProfile?.interests ?: emptyList(),
            labelDB = "interests"
        )
        SelectionBox(
            title = stringResource(id = R.string.preferred_type),
            hint = stringResource(id = R.string.preferred_type_suggestion),
            items = CurrentUser.userProfile?.partnerPreferences ?: emptyList(),
            labelDB = "partnerPreferences"
        )
        SelectionBox(
            title = stringResource(id = R.string.religion),
            hint = stringResource(id = R.string.religion_suggestion),
            items = CurrentUser.userProfile?.religions ?: emptyList(),
            labelDB = "religions"
        )

        WriteBox(
            title = stringResource(id = R.string.bio),
            hint = stringResource(id = R.string.bio_suggestion),
            initialValue = CurrentUser.userProfile?.bio ?: "",
            labelDB = "bio"
        )
        WriteBox(
            title = stringResource(id = R.string.life_style),
            hint = stringResource(id = R.string.life_style_suggestion),
            initialValue = CurrentUser.userProfile?.lifestyle ?: "",
            labelDB = "lifestyle"
        )
    }
}