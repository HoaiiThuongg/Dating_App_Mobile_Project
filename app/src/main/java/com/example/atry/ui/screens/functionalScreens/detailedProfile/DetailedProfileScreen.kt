package com.example.atry.ui.screens.functionalScreens.detailedProfile

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.WindowInsets
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.navigationBars
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.windowInsetsPadding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.ui.components.headerAndFooter.Footer
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailInfo
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailedProfileImage
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.ActionButtons
import com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents.DetailedProfileHeader

@Composable
fun DetailScreen(user: User){
    val scrollState = rememberScrollState()

    Column(modifier = Modifier
        .fillMaxSize()
        .background(MaterialTheme.colorScheme.surface)
        .windowInsetsPadding(WindowInsets.navigationBars)
    ) {
        DetailedProfileHeader(user)
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .weight(1f)
                .padding(horizontal = 20.dp)
                .verticalScroll(scrollState),
            verticalArrangement = Arrangement.spacedBy(10.dp),
            horizontalAlignment = Alignment.CenterHorizontally,

        ) {

            DetailedProfileImage(user)

            DetailInfo(user)

            ActionButtons()
        }
    }
}