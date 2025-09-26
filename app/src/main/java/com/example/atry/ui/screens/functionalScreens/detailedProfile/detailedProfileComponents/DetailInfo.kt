package com.example.atry.ui.screens.functionalScreens.detailedProfile.detailedProfileComponents

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Divider
import androidx.compose.material3.Icon
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.viewmodel.PartnerProfile

@Composable
fun DetailInfo(profile: PartnerProfile?) {
    Column(
    modifier = Modifier
    .padding(20.dp),
    verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Row(verticalAlignment = Alignment.CenterVertically) {
            Text(
                text = profile?.name ?: "Lỗi",
                fontSize = 22.sp,
                fontWeight = FontWeight.Bold
            )
            Spacer(modifier = Modifier.width(6.dp))
            Text(
                text = profile?.age ?: "Lỗi",
                fontSize = 22.sp,
                fontWeight = FontWeight.Bold,
                color = Color(0xFFE91E63) // hồng
            )
        }

        Row(verticalAlignment = Alignment.CenterVertically) {
            Icon(
                painter = painterResource(id = R.drawable.location),
                contentDescription = null,
                tint = Color.Gray,
                modifier = Modifier.size(16.dp)
            )
            Spacer(modifier = Modifier.width(4.dp))
            Text(text = "Hà Nội", color = Color.Gray, fontSize = 14.sp)
            Spacer(modifier = Modifier.width(8.dp))
            Text(text = "Cung Cự Giải", color = Color.Gray, fontSize = 14.sp)
        }

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        Text(text = "Bio", fontWeight = FontWeight.Bold)
        Text(
            text = profile?.bio ?: "Lỗi",
            fontSize = 14.sp,
            color = Color.Black
        )

        Divider(modifier = Modifier.padding(vertical = 8.dp))

        Text(text = "Sở thích", fontWeight = FontWeight.Bold)
        FlowRow(
            horizontalArrangement = Arrangement.spacedBy(8.dp),
            verticalArrangement = Arrangement.spacedBy(8.dp),
            modifier = Modifier.fillMaxWidth()
        ) {
            listOf("Ăn", "Ăn", "Thể thao", "Sách").forEach { tag ->
                Box(
                    modifier = Modifier
                        .border(1.dp, if (tag == "Ăn") Color(0xFFE91E63) else Color.Gray, RoundedCornerShape(50))
                        .padding(horizontal = 12.dp, vertical = 6.dp)
                ) {
                    Text(
                        text = tag,
                        color = if (tag == "Ăn") Color(0xFFE91E63) else Color.Gray,
                        fontSize = 14.sp
                    )
                }
            }
        }
    }
}