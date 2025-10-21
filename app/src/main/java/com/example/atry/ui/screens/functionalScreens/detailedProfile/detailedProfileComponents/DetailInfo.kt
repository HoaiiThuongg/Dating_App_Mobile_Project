package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Divider
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.ui.theme.purpleGradientBrush
import com.example.atry.viewmodel.DetailProfileViewModel

@Composable
@Preview
fun DetailInfo(viewModel: DetailProfileViewModel= viewModel()) {
    val profile by viewModel.profile.collectAsState()
    Column(
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Row(verticalAlignment = Alignment.CenterVertically) {
            Text(
                text = profile?.name ?: "Đang tải...",
                fontSize = 20.sp,
                fontWeight = FontWeight.Bold,
                color = MaterialTheme.colorScheme.onBackground
            )
            Spacer(modifier = Modifier.width(6.dp))
            Text(
                text = "${profile?.age ?: "..."} tuổi",
                fontSize = 16.sp,
                fontWeight = FontWeight.Bold,
                color = Color(0xFFE91E63) // hồng
            )
        }
        Column(
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 2.dp,
                    brush = purpleGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .padding(16.dp)
                .background(Color.Transparent, shape = RoundedCornerShape(12.dp)),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {

            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = profile?.location ?: "Đang tải...", color = Color.Gray, fontSize = 14.sp)
            }
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = "Cung Cự Giải", color = Color.Gray, fontSize = 14.sp)
            }

        }


        Divider(modifier = Modifier.padding(vertical = 8.dp))

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 2.dp,
                    brush = purpleGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .padding(16.dp)
                .background(Color.Transparent, shape = RoundedCornerShape(12.dp)),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {

            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = profile?.location ?: "Đang tải...", color = Color.Gray, fontSize = 14.sp)
            }
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = "Cung Cự Giải", color = Color.Gray, fontSize = 14.sp)
            }

        }
        Divider(modifier = Modifier.padding(vertical = 8.dp))

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 2.dp,
                    brush = purpleGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .padding(16.dp)
                .background(Color.Transparent, shape = RoundedCornerShape(12.dp)),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {

            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = profile?.location ?: "Đang tải...", color = Color.Gray, fontSize = 14.sp)
            }
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = "Cung Cự Giải", color = Color.Gray, fontSize = 14.sp)
            }

        }
        Divider(modifier = Modifier.padding(vertical = 8.dp))

        Column(
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 2.dp,
                    brush = purpleGradientBrush,
                    shape = RoundedCornerShape(20.dp)
                )
                .padding(16.dp)
                .background(Color.Transparent, shape = RoundedCornerShape(12.dp)),
            verticalArrangement = Arrangement.spacedBy(5.dp)
        ) {

            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(
                    painter = painterResource(id = R.drawable.location),
                    contentDescription = null,
                    tint = Color.Gray,
                    modifier = Modifier.size(16.dp)
                )
                Spacer(modifier = Modifier.width(4.dp))
                Text(text = profile?.bio ?: "Đang tải...", color = Color.Gray, fontSize = 14.sp)
            }


        }

        }
}