package com.example.atry.ui.screens.functionalScreens.edit.editComponents

import ImageUploadField
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.ui.theme.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun EditProfileImage(viewModel: EditProfileViewModel = viewModel()) {
    val context = LocalContext.current

    // Load ảnh remote nếu rỗng
    LaunchedEffect(Unit) {
        if (viewModel.images.isEmpty()) {
            val profileImages = CurrentUser.userProfile?.images ?: emptyList()
            viewModel.images.addAll(profileImages.map { ImageItem.Remote(it) })
        }
    }

    val titleBrush = if (!ThemeSingleton.isDark.value) Brush.linearGradient(
        colorStops = arrayOf(0.41f to Color.Black, 1.0f to Color.Black)
    ) else logoGradientBrush
    val subTitleColor = if (!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White

    Text(
        text = buildAnnotatedString {
            withStyle(SpanStyle(brush = titleBrush, fontWeight = FontWeight.Bold, fontSize = 20.sp)) {
                append("Ảnh của bạn")
            }
        }
    )
    Text("Ảnh này sẽ hiển thị trên hồ sơ của bạn", fontSize = 16.sp, color = subTitleColor)

    ImageUploadField(
        images = viewModel.images,
        onAddClick = { uri -> viewModel.addImage(context, uri) },
        onRemoveClick = { index -> viewModel.removeImage(index) }
    )
}
