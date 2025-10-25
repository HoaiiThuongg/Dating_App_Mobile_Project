package com.example.atry.ui.screens.auth.register

import android.net.Uri
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.ui.components.ImageUploadField
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.composal.AlertViewModel

@Composable
fun PicturesInput(viewModel: AlertViewModel = viewModel()) {
    var images by remember { mutableStateOf<List<Uri>>(emptyList()) }

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Tải lên ít nhất 1 ảnh",
        topContent = {},
        bottomContent = {
            Text("Thêm ảnh", fontSize = 24.sp, color = Color.Black)

            Spacer(modifier = Modifier.size(30.dp))
            ImageUploadField(
                images = images,
                onAddClick = { uri -> images = images + uri },
                onRemoveClick = { index ->
                    images = images.toMutableList().apply { removeAt(index) }
                }
            )
            Spacer(modifier = Modifier.size(30.dp))
            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("registerHobbiesInput") },
                Color.Black
            )
            CustomLinearButton(
                "Xong đăng kí", { viewModel.showAlert() },
                redOrangeLinear, Color.White
            )
        },
        alertMessage = "Đăng kí thành công!",
        onAlertAction = { navController.navigate("splash") }
    )
}
