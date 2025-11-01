package com.example.atry.ui.screens.functionalScreens.chat.chatComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import com.example.atry.backend.GameCard
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Text
import androidx.compose.ui.Alignment
import androidx.compose.ui.draw.clip
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.backend.User
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.ChatViewModel

@Composable
fun PartnerGameCard(
    gameCard: GameCard,
    otherUser: User?,
    modifier: Modifier = Modifier,
    viewModel: ChatViewModel = viewModel()
) {
    val currentUser = CurrentUser.user ?: return
    val currentUserId = currentUser.userId

    val alreadySelected = gameCard.pickedByAns1.contains(currentUserId) ||
            gameCard.pickedByAns2.contains(currentUserId)

    Column(
        modifier = modifier
            .padding(end = 50.dp)
            .fillMaxWidth()
            .background(Color(0xFFDBBEFF), RoundedCornerShape(16.dp))
            .padding(12.dp)
    ) {

        Text(
            text = gameCard.question ?: "",
            color = Color.Black,
            style = MaterialTheme.typography.bodyMedium
        )

        Spacer(Modifier.height(10.dp))


        GameOption(
            text = gameCard.ans1,
            pickedBy = gameCard.pickedByAns1,
            currentUser = currentUser,
            otherUser = otherUser,
            enabled = !alreadySelected
        ) {
            viewModel.updateUserChoice(
                gameCard.id.toString(),
                currentUserId,
                1
            )
        }

        Spacer(Modifier.height(8.dp))

        GameOption(
            text = gameCard.ans2,
            pickedBy = gameCard.pickedByAns2,
            currentUser = currentUser,
            otherUser = otherUser,
            enabled = !alreadySelected
        ) {
            viewModel.updateUserChoice(
                gameCard.id.toString(),
                currentUserId,
                2
            )
        }
    }
}
