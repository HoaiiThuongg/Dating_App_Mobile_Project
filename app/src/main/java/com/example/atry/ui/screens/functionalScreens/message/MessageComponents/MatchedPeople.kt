package com.example.atry.ui.screens.functionalScreens.message.MessageComponents

import androidx.compose.foundation.horizontalScroll
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.rememberScrollState
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.viewmodel.ConnectedPeople

@Composable
fun MatchedPeople(connectedPeople: List<ConnectedPeople>){
    Column(
        verticalArrangement = Arrangement.spacedBy(10.dp)
    ){
        Text("Đã ghép đôi", color = MaterialTheme.colorScheme.onSurface, fontSize = 16.sp)
        Row(
            horizontalArrangement = Arrangement.spacedBy(30.dp),
            modifier = Modifier
                .fillMaxWidth()
                .horizontalScroll(rememberScrollState()) // 👈 cho phép scroll ngang
        ) {
            if (connectedPeople.isNotEmpty()) {
                for (i in 0 until   (connectedPeople.size ) ) {
                    val profile = connectedPeople[i]
                    OnlineAvatar(profile)
                }
            }
        }
    }
}