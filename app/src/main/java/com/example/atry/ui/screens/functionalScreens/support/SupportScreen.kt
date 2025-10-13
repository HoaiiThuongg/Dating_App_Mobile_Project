package com.example.atry.ui.screens.functionalScreens

import android.content.Intent
import android.net.Uri
import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Email
import androidx.compose.material.icons.filled.Facebook
import androidx.compose.material.icons.filled.Phone
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.alpha
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.R
import com.example.atry.ui.theme.dynamicGradientBrush
import com.example.atry.ui.theme.redGradientBrush

@Composable
@Preview
fun SupportScreen() {
    val gradientBrush = Brush.linearGradient(
        colors = listOf(Color(0xFFFF8BE7), Color(0xFFB388FF))
    )
    val context = LocalContext.current

    Column(
        modifier = Modifier
            .padding(20.dp),
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(30.dp)
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(250.dp),
            contentAlignment = Alignment.Center
        ) {
            Image(
                painter = painterResource(id = R.drawable.support),
                contentDescription = "Menu",
                modifier = Modifier
                    .fillMaxSize()
                    .alpha(0.6f)
            )
            Text(
                text = "Chúng tôi luôn ở đây\nđể hỗ trợ bạn",
                fontWeight = FontWeight.Bold,
                style = TextStyle(
                    fontSize = 32.sp,
                    brush = dynamicGradientBrush()
                ),
                textAlign = TextAlign.Center
            )
        }
        // ✨ Mô tả
        Text(
            text = "Nếu bạn có bất cứ thắc mắc, phản ánh nào, hãy liên lạc với chúng tôi, chúng tôi luôn sẵn sàng hỗ trợ hết mình!",
            style = TextStyle(
                fontSize = 16.sp,
                brush = dynamicGradientBrush()
            ),
            textAlign = TextAlign.Center,
            modifier = Modifier.padding(horizontal = 10.dp)
        )


        Column (
            verticalArrangement = Arrangement.spacedBy(20.dp)
        ){
            ContactItem(
                icon = Icons.Default.Phone,
                text = "+84 0123456789",
                gradientBrush = gradientBrush,
                {
                    val intent = Intent(Intent.ACTION_DIAL, Uri.parse("tel:+84123456789"))
                    context.startActivity(intent)
                }

            )

            ContactItem(
                icon = Icons.Default.Email,
                text = "humble@gmail.com",
                gradientBrush = gradientBrush,
                {
                    val intent = Intent(Intent.ACTION_SENDTO).apply {
                        data = Uri.parse("mailto:humble@gmail.com")
                        putExtra(Intent.EXTRA_SUBJECT, "Hỗ trợ người dùng")
                        putExtra(Intent.EXTRA_TEXT, "Xin chào Humble, mình cần hỗ trợ về...")
                    }
                    context.startActivity(intent)
                },
            )

            ContactItem(
                icon = Icons.Default.Facebook,
                text = "humble_fanpage.facebook.com",
                gradientBrush = gradientBrush,
                {
                    val intent = Intent(Intent.ACTION_VIEW, Uri.parse("https://facebook.com/humble_fanpage"))
                    context.startActivity(intent)
                }
            )
        }

    }
}

@Composable
fun ContactItem(
    icon: androidx.compose.ui.graphics.vector.ImageVector,
    text: String,
    gradientBrush: Brush,
    onClick:()-> Unit
) {
    Row(
        verticalAlignment = Alignment.CenterVertically,
        horizontalArrangement = Arrangement.spacedBy(5.dp),
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 1.5.dp,
                brush = gradientBrush,
                shape = RoundedCornerShape(20.dp)
            )
            .padding(horizontal = 16.dp, vertical = 10.dp)
    ) {
        IconButton(
            onClick = {onClick()}
        ) {
            Icon(
                imageVector = icon,
                contentDescription = null,
                modifier = Modifier
                    .size(22.dp)
                    .graphicsLayer(alpha = 0.99f) // để hỗ trợ blend
                    .drawWithCache {
                        onDrawWithContent {
                            drawContent()
                            drawRect(
                                brush = gradientBrush,
                                size = this.size, // 🩵 bắt buộc: vẽ gradient phủ toàn icon
                                blendMode = BlendMode.SrcAtop
                            )
                        }
                    },
                tint = Color.White,
            )
        }

        Text(text = text, color = MaterialTheme.colorScheme.onBackground, fontSize = 14.sp)
    }
}