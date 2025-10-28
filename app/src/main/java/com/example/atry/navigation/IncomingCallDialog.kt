package com.example.atry.navigation

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Button
import androidx.compose.material3.Card
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.compose.ui.window.Dialog

@Composable
fun IncomingCallDialog(callerId: String, onAccept: (String)->Unit, onDecline: ()->Unit) {
    Dialog(onDismissRequest = {}) {
        Card(Modifier.fillMaxWidth().padding(16.dp)) {
            Column(Modifier.padding(16.dp), horizontalAlignment = Alignment.CenterHorizontally) {
                Text(text = "$callerId đang gọi bạn", style = MaterialTheme.typography.titleLarge)
                Spacer(Modifier.height(12.dp))
                Row {
                    Button(onClick = { onDecline() }) { Text("Từ chối") }
                    Spacer(Modifier.width(8.dp))
                    Button(onClick = { onAccept(callerId) }) { Text("Nhận") }
                }
            }
        }
    }
}
