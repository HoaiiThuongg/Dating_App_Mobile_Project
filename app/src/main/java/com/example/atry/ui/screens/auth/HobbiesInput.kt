package com.example.atry.ui.screens.auth

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.TagGrid
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.theme.redOrangeLinear

@Composable
@Preview
fun HobbiesInput() {

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Chọn sở thích của bạn",
        topContent = {},
        bottomContent = {
            val healthyTags = listOf(
                "Ngủ", "Tập thể dục", "Uống nước", "Thiền",
                "Đi bộ", "Ăn rau", "Cười", "Đọc sách", "Không stress"
            )

            val simpleTags = listOf(
                "Ngủ", "Tập thể dục", "Uống nước", "Thiền",
                "Đi bộ", "Ăn rau", "Cười", "Đọc sách", "Không stress"
            )
            val scrollState = rememberScrollState()

            Text("Sở thích", fontSize = 24.sp, color = Color.Black, modifier = Modifier.align(Alignment.Start))

            Column(
                modifier = Modifier
                    .weight(1f) // chiếm toàn bộ phần còn lại giữa header & footer
                    .fillMaxWidth()
                    .verticalScroll(scrollState),
                verticalArrangement = Arrangement.spacedBy(20.dp)
            ){
                TagGrid(title = "Khỏe mạnh", tags = healthyTags)
                TagGrid(title = "Đơn giản", tags = simpleTags)
                TagGrid(title = "Đơn giản", tags = simpleTags)
            }

            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("registerInfoInput2")},
                Color.Black
            )
            CustomLinearButton("Tếp theo", { navController.navigate("picturesInput")},
                redOrangeLinear, Color.White)

        }
    )
}
