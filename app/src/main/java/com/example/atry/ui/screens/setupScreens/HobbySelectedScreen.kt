package com.example.atry.ui.screens.setupScreens

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material3.Button
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import androidx.navigation.compose.rememberNavController
import com.example.atry.ui.components.InputTitle
import com.example.atry.ui.components.ListPresentBox
import com.example.atry.ui.components.buttons.RedLinearBorderButton

@Preview
@Composable
fun HobbySelectedScreenPreview() {
    HobbySelectedScreen(navController = rememberNavController())
}

@Composable
fun HobbySelectedScreen(
    navController: NavHostController = com.example.atry.navigation.navController,
    modifier: Modifier = Modifier
) {
    // keep same labels as original code ("Button 0", "Button 1", ...)
    val buttonLabels = List(10) { index -> "Button $index" }

    Column(
        modifier = modifier
            .fillMaxSize()
            .background(Color.White)
            .padding(24.dp),
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        // Back button: chỉ thêm testTag không thay đổi UI
        IconButton(
            onClick = { /* handle back */ },
            modifier = Modifier.testTag("back_button")
        ) {
            Icon(
                imageVector = Icons.Filled.ArrowBack,
                contentDescription = "Back"
            )
        }

        Column(
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.spacedBy(30.dp, Alignment.CenterVertically),
        ) {
            // Title: bọc với testTag (không thay đổi cách hiển thị)
            Box(modifier = Modifier.testTag("hobby_title")) {
                InputTitle("Sở thích của bạn")
            }

            // List of items - giữ nguyên nội dung, chỉ thêm testTag cho mỗi Button để test dễ dàng
            ListPresentBox(items = buttonLabels) { label ->
                Box(
                    modifier = Modifier
                        .fillMaxWidth()
                        .padding(vertical = 6.dp),
                    contentAlignment = Alignment.Center
                ) {
                    Button(
                        onClick = { /* xử lý click */ },
                        // thêm testTag cho từng button (không ảnh hưởng UI)
                        modifier = Modifier.testTag("hobby_button_$label")
                    ) {
                        Text(label)
                    }
                }
            }
        }

        // Skip/Next button: chỉ thêm testTag quanh vùng không làm thay đổi giao diện
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .testTag("skip_button_box"),
            contentAlignment = Alignment.Center
        ) {
            RedLinearBorderButton("Bỏ qua", {
                navController.navigate("uploadPhoto")
            }
            )
        }
    }
}
