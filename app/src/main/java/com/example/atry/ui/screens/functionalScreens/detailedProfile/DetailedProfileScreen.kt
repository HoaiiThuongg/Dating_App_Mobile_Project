package com.example.atry.ui.screens.functionalScreens.detailedProfile

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.LineHeightStyle
import androidx.compose.ui.unit.dp
import com.example.atry.ui.components.general.Footer

import androidx.navigation.NavController
import com.example.atry.navigation.navController
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailInfo
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailedProfileImage
import com.example.atry.ui.viewmodel.PartnerProfile

@Composable
fun DetailScreen(){

    val profile = navController.previousBackStackEntry
        ?.savedStateHandle
        ?.get<PartnerProfile>("profile")


    Column(modifier = Modifier
        .fillMaxSize()
        .background(Color.White),
        verticalArrangement = Arrangement.SpaceBetween
    ) {

        DetailedProfileImage()
        //in4
        DetailInfo(profile)
        var selected  by remember { mutableStateOf("likeYou") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}