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

@Composable
@Preview
fun Selections() {
    // Sở thích
    Column(
        verticalArrangement = Arrangement.spacedBy(20.dp)
    ) {
        SelectionBox(title = "Sở thích", hint = "Khi rảnh bạn tường làm gì")

        // Gu người iu
        SelectionBox(title = "Gu người yêu", hint = "Bạn thích kiểu người như nào?")
        SelectionBox(title = "Gu người yêu", hint = "Bạn thích kiểu người như nào?")

        SelectionBox(title = "Gu người yêu", hint = "Bạn thích kiểu người như nào?")


        // Bio
        WriteBox(title = "Bio", hint = "Bạn giới thiệu về bản thân mình nhé.")
    }
}