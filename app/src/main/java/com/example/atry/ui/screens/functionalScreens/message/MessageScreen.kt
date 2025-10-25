package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.backend.MatchedUser
import com.example.atry.backend.User
import com.example.atry.ui.components.HeartLoading
import com.example.atry.ui.components.nothingToLoad.NothingToLoad
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.ChatRow
import com.example.atry.ui.screens.functionalScreens.message.MessageComponents.MatchedPeople
import com.example.atry.ui.theme.primaryPurple
import com.example.atry.viewmodel.functional.MessageViewModel
import kotlin.collections.List

@Composable
fun MessageScreen(viewModel: MessageViewModel = viewModel()) {
    val state by viewModel.state.collectAsState()
    LaunchedEffect(Unit) {
        viewModel.loadMyMatches()
    }
    val isLoading = state.isLoading
    val matchedUsers: List<MatchedUser> = state.matchedUsers

    Box(
        modifier = Modifier
        .fillMaxSize()
    ) {
        if (isLoading) {
            HeartLoading() // vòng loading
        } else if (matchedUsers.isEmpty()) {
            NothingToLoad("Bạn chưa kết nối với ai","Hãy đi ghép đôi với mọi người nào")
        }
        Column(
            modifier = Modifier
                .fillMaxSize(),
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
                MatchedPeople(matchedUsers)

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

                        if (state.matchedUsers.isNotEmpty()) {
                            for (i in 0 until (matchedUsers.size)) {
                                val user = matchedUsers[i]
                                ChatRow(user)
                            }
                        }

                    }
                }
            }

        }

    }
}