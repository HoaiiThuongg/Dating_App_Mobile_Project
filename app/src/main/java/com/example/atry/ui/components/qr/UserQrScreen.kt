package com.example.atry.ui.components.qr

import android.graphics.Bitmap
import android.graphics.Color
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.asImageBitmap
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.redGradientBrush
import com.google.zxing.BarcodeFormat
import com.google.zxing.qrcode.QRCodeWriter

@Composable
fun UserQrScreen(userId: String) {
    val qrBitmap = remember { generateQrCode(userId) }

    Box(
        modifier = Modifier
            .fillMaxSize()
            .padding(16.dp),
        contentAlignment = Alignment.Center
    ) {
        IconButton(
            onClick = { navController.navigate("main_profile") },
            modifier = Modifier
                .size(32.dp)
                .align(Alignment.TopStart)
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
                tint = androidx.compose.ui.graphics.Color.White
            )
        }
        Column(
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Text(
                text = "Mã QR của bạn",
                fontSize = 22.sp,
                fontWeight = FontWeight.Bold,
                modifier = Modifier.padding(bottom = 16.dp)
            )

            Image(
                bitmap = qrBitmap.asImageBitmap(),
                contentDescription = "QR Code của người dùng",
                modifier = Modifier
                    .size(250.dp)
                    .padding(8.dp)
            )

            Spacer(modifier = Modifier.height(8.dp))

            Text(text = "ID: $userId", fontSize = 16.sp)
        }
    }
}

fun generateQrCode(content: String): Bitmap {
    val size = 512 // kích thước QR
    val bits = QRCodeWriter().encode(content, BarcodeFormat.QR_CODE, size, size)
    val bmp = Bitmap.createBitmap(size, size, Bitmap.Config.RGB_565)
    for (x in 0 until size) {
        for (y in 0 until size) {
            bmp.setPixel(x, y, if (bits[x, y]) Color.BLACK else Color.WHITE)
        }
    }
    return bmp
}
