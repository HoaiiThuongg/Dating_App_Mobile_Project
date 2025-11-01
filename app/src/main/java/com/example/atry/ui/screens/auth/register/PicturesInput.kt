package com.example.atry.ui.screens.auth.register

import android.net.Uri
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.UserInfoSetupViewModel
import com.example.atry.viewmodel.composal.AlertViewModel

@Composable
fun PicturesInput(
    alertViewModel: AlertViewModel = viewModel(),
    viewModel: UserInfoSetupViewModel=viewModel()
) {
    var images by remember { mutableStateOf<List<Uri>>(emptyList()) }
    val context = LocalContext.current

    // Dùng State để Compose tự recompose khi ảnh thay đổi
    val imageUrlState = remember { androidx.compose.runtime.mutableStateOf(CurrentUser.user?.defaultImage) }

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

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Tải lên ảnh đại diện",
        topContent = {},
        bottomContent = {
            Text("Thêm ảnh", fontSize = 24.sp, color = Color.Black)

            Spacer(modifier = Modifier.size(30.dp))

            Row(
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(5.dp),
                verticalAlignment = Alignment.CenterVertically,
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                Column(
                    modifier = Modifier
                        .weight(1f),
                    verticalArrangement = Arrangement.spacedBy(10.dp),
                    horizontalAlignment = Alignment.CenterHorizontally
                ){
                    Text("Ảnh đại diện", fontWeight = FontWeight.Bold, color = Color.Black, fontSize = 16.sp)
                    Button(onClick = { launcher.launch("image/*") }) {
                        Text("Tải ảnh")
                    }
                }
                Box(
                    modifier = Modifier
                        .weight(1f)
                        .clip(CircleShape)
                        .background(Color.LightGray),
                    contentAlignment = Alignment.Center
                ) {
                    Image(
                        painter = rememberAsyncImagePainter(model = imageUrlState.value),
                        contentDescription = "Ảnh đại diện",
                        contentScale = ContentScale.Crop,
                        modifier = Modifier
                            .fillMaxSize()
                            .size(120.dp)
                    )
                }
            }


            Spacer(modifier = Modifier.size(30.dp))
            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("registerHobbiesInput") },
                Color.Black
            )
            CustomLinearButton(
                "Xong đăng kí", { alertViewModel.showAlert() },
                redOrangeLinear, Color.White
            )
        },
        alertMessage = "Đăng kí thành công!",
        onAlertAction = { navController.navigate("main") }
    )
}
