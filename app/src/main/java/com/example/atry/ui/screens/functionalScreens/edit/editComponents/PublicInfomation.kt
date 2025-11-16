package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo.EditProfileImage
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo.Selections
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo.UploadAvatar

@Composable
@Preview
fun PublicInformation() {
    val scrollState = rememberScrollState()

    Column(
        modifier = Modifier
            .fillMaxSize()
            .verticalScroll(scrollState),
        verticalArrangement = Arrangement.spacedBy(30.dp)
    ) {
        UploadAvatar()
        EditProfileImage()  // vẫn dùng LazyVerticalGrid
        Selections()
        Spacer(Modifier.size(20.dp))
    }
}