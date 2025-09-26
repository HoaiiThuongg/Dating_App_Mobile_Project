package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.Canvas
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.components.general.Footer
import com.example.atry.ui.components.general.Header
import androidx.compose.ui.graphics.Path
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.NavController
import com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents.DatingButton
import com.example.atry.ui.screens.functionalScreens.myProfile.myProfileComponents.MyProfileContent

@Composable
fun MyProfileScreen() {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White),
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        Header("Hồ sơ", R.drawable.humble_logo)

        // Main content
        Column(
            modifier = Modifier
                .weight(1f)
                .fillMaxWidth(),
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Box(
                modifier = Modifier
                    .fillMaxWidth()
            ) {
                // Nền cong
                Canvas(
                    modifier = Modifier
                        .fillMaxWidth()
                        .height(550.dp)
                ) {
                    val width = size.width
                    val height = size.height

                    val path = Path().apply {
                        moveTo(0f, 0f)
                        lineTo(0f, height * 0.85f)
                        quadraticBezierTo(
                            width / 2, height,
                            width, height * 0.85f
                        )
                        lineTo(width, 0f)
                        close()
                    }

                    drawPath(
                        path = path,
                        brush = Brush.verticalGradient(
                            colors = listOf(Color.White, Color(0xFFFA98BF)),
                            startY = 0f,
                            endY = height
                        )
                    )
                }

                // Nội dung nằm trên nền cong
                MyProfileContent()

            }
// Nút hẹn hò
            DatingButton()
        }
        var selected  by remember { mutableStateOf("profile") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}


