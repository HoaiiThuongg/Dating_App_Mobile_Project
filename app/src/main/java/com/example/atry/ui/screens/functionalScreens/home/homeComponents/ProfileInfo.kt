package com.example.atry.ui.screens.functionalScreens.home.homeComponents

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.theme.RedLinear
import com.example.atry.ui.viewmodel.Profile

@Composable
fun ProfileInfo(
    modifier: Modifier = Modifier,
    profile: Profile
) {
    Column(
        modifier = modifier
            .padding(20.dp),
        verticalArrangement = Arrangement.Bottom
    ) {
        // Tên + tuổi
        Row(
            horizontalArrangement = Arrangement.SpaceBetween,
            modifier = Modifier.fillMaxWidth()
        ) {
            Column (
                verticalArrangement = Arrangement.spacedBy(5.dp)
            ) {
                Text(
                    text = profile.name,
                    style = TextStyle(
                        brush = Brush.linearGradient(
                            colors = listOf(Color(0xFFFF7487), Color(0xFFF33A75))
                        )
                    ),
                    fontSize = 28.sp,
                    fontWeight = FontWeight.Bold
                )
                Text(
                    text = profile.age + " tuổi",
                    color = Color.White,
                    fontSize = 18.sp
                )
            }

            Image(
                painter = painterResource(id = R.drawable.heart_love),
                contentDescription = "like",
                modifier = Modifier.width(58.dp)
            )
        }


        Spacer(Modifier.height(16.dp))

        InfoBox("Điểm chung","Hà Nội")
    }
    Spacer(modifier = Modifier.height(16.dp))
}