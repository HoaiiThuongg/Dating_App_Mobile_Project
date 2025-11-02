package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import ImageUploadField
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.data.singleton.ThemeSingleton
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

    Column(
        verticalArrangement = Arrangement.spacedBy(5.dp)
    ) {
        Text(
            text = buildAnnotatedString {
                withStyle(
                    SpanStyle(
                        brush = titleBrush,
                        fontWeight = FontWeight.Bold,
                        fontSize = 20.sp
                    )
                ) {
                    stringResource(id= R.string.your_photos)
                }
            }
        )
        Text(stringResource(id= R.string.photos_display_notice), fontSize = 16.sp, color = subTitleColor)

        ImageUploadField(
            images = viewModel.images,
            onAddClick = { uri -> viewModel.addImage(context, uri) },
            onRemoveClick = { index -> viewModel.removeImage(index) }
        )
    }
}
