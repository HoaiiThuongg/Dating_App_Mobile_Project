package com.example.atry.ui.components.navigationDrawer

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.redGradientBrush
import com.example.atry.viewmodel.composal.WarningCardViewModel

@Composable
fun DrawerContent(
    onclick:()->Unit,
    viewModel: WarningCardViewModel = viewModel()
) {

    Column(
        modifier = Modifier
            .fillMaxHeight()
            .width(240.dp)
            .background(
                color = MaterialTheme.colorScheme.surfaceVariant,
                shape = RoundedCornerShape(
                    topStart = 0.dp,
                    topEnd = 20.dp,
                    bottomEnd = 20.dp,
                    bottomStart = 0.dp
                )
            )
//            .border(
//                width = 2.dp,
//                color = Color.White,
//                shape = RoundedCornerShape(
//                    topStart = 0.dp,
//                    topEnd = 20.dp,
//                    bottomEnd = 20.dp,
//                    bottomStart = 0.dp
//                )
//            )
            .padding(20.dp,40.dp,20.dp,20.dp),
        verticalArrangement = Arrangement.spacedBy(20.dp)
    ) {
        Row(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            Image(
                painter = painterResource(id = R.drawable.humble_logo),
                contentDescription = null,
                modifier = Modifier.size(32.dp),
                contentScale = ContentScale.Crop
            )
            IconButton(
                onClick = { onclick()},
                modifier = Modifier
                    .size(32.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Close,
                    contentDescription = "Close",
                    modifier = Modifier
                        .size(32.dp)
                        .graphicsLayer(alpha = 0.99f) // để hỗ trợ blend
                        .drawWithCache {
                            onDrawWithContent {
                                drawContent()
                                drawRect(
                                    brush = redGradientBrush,
                                    size = this.size, // 🩵 bắt buộc: vẽ gradient phủ toàn icon
                                    blendMode = BlendMode.SrcAtop
                                )
                            }
                        },
                    tint = Color.White
                )
            }
        }
        Dropdown()
        Option("Mã QR của bạn",{ navController.navigate("user_qr") })
        Option("Quét Mã QR",{navController.navigate("cam_scan_qr")})
        Spacer(modifier = Modifier.weight(1f))
        Button (
            onClick = {
                viewModel.showWarning()
                CurrentUser.clear()
                      },
            modifier = Modifier
                .fillMaxWidth()
                .border(
                    width = 2.dp,
                    brush = redGradientBrush,
                    shape = RoundedCornerShape(
                        10.dp
                    )
                ),
            colors = ButtonDefaults.buttonColors(
                containerColor = Color.Transparent
            ),
            shape = RoundedCornerShape(10.dp),
            contentPadding = PaddingValues()
        ) {
            Text(
                text = buildAnnotatedString {
                    withStyle(
                        style = SpanStyle(
                            redGradientBrush,
                            fontWeight = FontWeight.Bold,
                            fontSize = 20.sp
                        )
                    ) {
                        append("Thoát")
                    }
                },
                modifier = Modifier
                    .fillMaxWidth(),
                textAlign = TextAlign.Center,
            )
        }
    }
}