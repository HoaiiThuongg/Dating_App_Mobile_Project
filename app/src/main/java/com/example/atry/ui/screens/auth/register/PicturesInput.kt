package com.example.atry.ui.screens.auth.register

import android.net.Uri
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
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
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
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
    val context = LocalContext.current
    var selectedImage by remember { mutableStateOf<Uri?>(null) }
    val currentImageUrl = CurrentUser.user?.defaultImage

    val launcher = rememberLauncherForActivityResult(
        contract = ActivityResultContracts.GetContent()
    ) { uri: Uri? ->
        uri?.let {
            selectedImage = it // update ngay để hiển thị
            viewModel.addAvatar(context, it) { uploadedUrl ->
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

            Row (
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(16.dp),
                verticalAlignment = Alignment.CenterVertically,
                horizontalArrangement = Arrangement.SpaceAround
            ) {
                Button(
                    onClick = { launcher.launch("image/*") },
                    modifier = Modifier.padding(top = 16.dp)
                ) {
                    Text("Tải ảnh")
                }
                Spacer(Modifier.size(5.dp))

                Box(
                    modifier = Modifier
                        .size(200.dp)
                        .clip(CircleShape)
                        .border(2.dp, Color.Black, CircleShape)
                        .clickable { launcher.launch("image/*") },
                    contentAlignment = Alignment.Center
                ) {
                    when {
                        selectedImage != null -> {
                            Image(
                                painter = rememberAsyncImagePainter(selectedImage),
                                contentDescription = "Ảnh mới chọn",
                                contentScale = ContentScale.Crop,
                                modifier = Modifier.fillMaxSize()
                            )
                        }
                        currentImageUrl != null -> {
                            Image(
                                painter = rememberAsyncImagePainter(currentImageUrl),
                                contentDescription = "Ảnh đại diện hiện tại",
                                contentScale = ContentScale.Crop,
                                modifier = Modifier.fillMaxSize()
                            )
                        }
                        else -> {
                            Text("Chọn ảnh", color = Color.Black)
                        }
                    }
                }
            }

            Spacer(modifier = Modifier.size(30.dp))
            CustomLinearButton(
                "Xong đăng kí", { alertViewModel.showAlert() },
                redOrangeLinear, Color.White
            )
        },
        alertMessage = "Đăng kí thành công!",
        onAlertAction = {
            navController.navigate("main")
        }
    )
}
