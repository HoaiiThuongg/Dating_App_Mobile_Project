package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import android.net.Uri
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
@Preview
fun UploadAvatar(viewModel: EditProfileViewModel = viewModel()) {
    val context = LocalContext.current

    // Dùng State để Compose tự recompose khi ảnh thay đổi
    val imageUrlState = remember { mutableStateOf(CurrentUser.user?.defaultImage) }

    val launcher = rememberLauncherForActivityResult(
        contract = ActivityResultContracts.GetContent()
    ) { uri: Uri? ->
        uri?.let {
            viewModel.addAvatar(context, it) { newUrl ->
                // Cập nhật State khi upload xong
                imageUrlState.value = newUrl
            }
        }
    }

    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(vertical = 15.dp),
        verticalAlignment = Alignment.CenterVertically,
        horizontalArrangement = Arrangement.SpaceBetween
    ) {
        Column(
            modifier = Modifier
                .weight(1f),
            verticalArrangement = Arrangement.spacedBy(10.dp),
            horizontalAlignment = Alignment.CenterHorizontally
        ){
            Text("Ảnh đại diện", fontWeight = FontWeight.Bold, color = MaterialTheme.colorScheme.onBackground, fontSize = 16.sp)
            Button(
                onClick = { launcher.launch("image/*") },
                colors = ButtonDefaults.buttonColors(
                    containerColor = Color(0xFFFF4A7D) // Màu nền của nút (giá trị 0xFFFF4A7D)
                ),
            ) {
                Text("Tải ảnh", color = Color.White)
            }
        }
        Box(
            modifier = Modifier
                .weight(1f)
                .clip(CircleShape),
            contentAlignment = Alignment.Center
        ) {
            Box(
                modifier = Modifier
                    .clip(CircleShape)
                    .size(150.dp),
            ){
                Image(
                    painter = rememberAsyncImagePainter(model = imageUrlState.value),
                    contentDescription = "Ảnh đại diện",
                    contentScale = ContentScale.Crop,
                    modifier = Modifier
                        .fillMaxSize()
                        .background(Color.LightGray)
                )
            }

        }


    }
}
