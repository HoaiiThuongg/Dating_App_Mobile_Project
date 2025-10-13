package com.example.atry.navigation

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.imePadding
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import com.example.atry.ui.components.headerWithBackButton.HeaderWithBackButton

@Composable
fun ScaffoldWithBackButton(
    screenName:String,
    screenHeaderTitle: String,
    iconRes: Int,
    route:String,
    content: @Composable () -> Unit
) {
    Box(
        modifier = Modifier
            .fillMaxSize()
            .imePadding()
    ) {
        Column(
            modifier = Modifier.fillMaxSize()
        ) {

            HeaderWithBackButton(screenName,screenHeaderTitle,iconRes,route) {
                content()
            }
        }

    }

}