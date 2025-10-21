package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.ChatRow
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.MatchedPeople
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.MessageViewModel

@Composable
fun MessageScreen(messageViewModel: MessageViewModel = viewModel()) {
    val connectedPeople = messageViewModel.connected_profiles.collectAsState().value


    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(color = MaterialTheme.colorScheme.surface),
        verticalArrangement = Arrangement.SpaceBetween
    ) {

        //main
        Column(
            modifier = Modifier
                .weight(1f)
                .padding(20.dp),
            verticalArrangement = Arrangement.spacedBy(20.dp)
        ) {
            // Da Ket Noi
            MatchedPeople(connectedPeople)

            Column(
                verticalArrangement = Arrangement.spacedBy(15.dp)
            ) {
                Text(
                    "Tin nhắn",
                    fontSize = 20.sp,
                    color = primaryPurple,
                    fontWeight = FontWeight.Bold
                )
                Column(
                    modifier = Modifier
                        .fillMaxWidth()
                        .verticalScroll(rememberScrollState()),
                    verticalArrangement = Arrangement.spacedBy(20.dp)
                ) {

                    if (connectedPeople.isNotEmpty()) {
                        for (i in 0 until (connectedPeople.size)) {
                            val profile = connectedPeople[i]
                            ChatRow(profile)
                        }
                    }

                }
            }
        }

    }
}