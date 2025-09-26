package com.example.atry.ui.screens.functionalScreens.home

import SwipeCard
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.NavController
import com.example.atry.R
import com.example.atry.ui.components.general.Footer
import com.example.atry.ui.components.general.Header
import com.example.atry.ui.viewmodel.HomeViewModel

@Composable
fun HomeScreen( viewModel: HomeViewModel = viewModel()){
    val profiles by viewModel.profiles.collectAsState()
    val currentIndex by viewModel.currentIndex.collectAsState()

    Column(
        modifier = Modifier
        .fillMaxSize()
        .background(Color.White),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        Header("Humble",R.drawable.humble_logo)


        Box(modifier = Modifier
            .weight(1f)
            .background(
                color = Color.White
            )
            .padding(horizontal = 10.dp)

        ) {
            Box(
                modifier = Modifier
                    .fillMaxSize(),
                contentAlignment = Alignment.Center
            ) {
                Text("Không còn đối tượng để hiển thị!",color=Color.Black)
            }
            if (profiles.isNotEmpty() && currentIndex < profiles.size) {
                for (i in (profiles.size - 1) downTo 0) {
                    val profile = profiles[i]
                    SwipeCard(
                        modifier = Modifier.fillMaxSize(),
                        profile = profile,
                        onSwipeLeft = { viewModel.onSwipeLeft() },
                        onSwipeRight = { viewModel.onSwipeRight() }
                    )
                }
            }
        }

        var selected  by remember { mutableStateOf("home") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}


