package com.example.atry.ui.screens.auth.register

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.data.constants.AppConstants
import com.example.atry.navigation.navController
import com.example.atry.ui.components.TagGrid
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear

@Composable
@Preview
fun HobbiesInput() {

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Chọn sở thích của bạn",
        topContent = {},
        bottomContent = {
            val healthyTags = AppConstants.healthy
            val joyTags =  AppConstants.joy
            val intellectualTags =  AppConstants.intellectual
            val uniqueTags =  AppConstants.unique


            val scrollState = rememberScrollState()
            var selectedTags by remember { mutableStateOf(listOf<String>()) }

            Text(
                "Sở thích",
                fontSize = 24.sp,
                color = Color.Black,
                modifier = Modifier.align(Alignment.Start)
            )

            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .height(400.dp)
                    .verticalScroll(scrollState),
                verticalArrangement = Arrangement.spacedBy(20.dp)
            ) {
                TagGrid(title = "Khỏe mạnh", tags = healthyTags,
                    selectedTags = selectedTags,
                    color=Color(0xFF039A3D),
                    selectedColor = Color(0xFF015E31),
                    onTagToggle = { tag ->
                        selectedTags = if (tag in selectedTags) {
                            selectedTags - tag
                        } else {
                            selectedTags + tag
                        }
                    })
                TagGrid(title = "Vui vẻ", tags = joyTags,
                    color=Color(0xFFB63A01),
                    selectedColor = Color(0xFF7E2A01),
                    selectedTags = selectedTags,
                    onTagToggle = { tag ->
                        selectedTags = if (tag in selectedTags) {
                            selectedTags - tag
                        } else {
                            selectedTags + tag
                        }
                    })
                TagGrid(title = "Tri thức", tags = intellectualTags,
                    color = Color(0xFF1B6EFF),
                    selectedColor = Color(0xFF03368F),
                    selectedTags = selectedTags,
                    onTagToggle = { tag ->
                        selectedTags = if (tag in selectedTags) {
                            selectedTags - tag
                        } else {
                            selectedTags + tag
                        }
                    })
                TagGrid(title = "Kì dị", tags = uniqueTags,
                    color = Color(0xFFFF479B),
                    selectedColor = Color(0xFF880642),
                    selectedTags = selectedTags,
                    onTagToggle = { tag ->
                        selectedTags = if (tag in selectedTags) {
                            selectedTags - tag
                        } else {
                            selectedTags + tag
                        }
                    })
            }

            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("registerInfoInput2") },
                Color.Black
            )
            CustomLinearButton(
                "Tếp theo", { navController.navigate("picturesInput") },
                redOrangeLinear, Color.White
            )

        }
    )
}
