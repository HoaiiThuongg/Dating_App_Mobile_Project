package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import android.net.Uri
import androidx.activity.compose.rememberLauncherForActivityResult
import androidx.activity.result.contract.ActivityResultContracts
import androidx.compose.foundation.Image
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
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
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import coil.compose.rememberAsyncImagePainter
import com.example.atry.R
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun UploadAvatar(viewModel: EditProfileViewModel = viewModel()) {
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

    Row (
        modifier = Modifier
            .fillMaxWidth()
            .padding(top=25.dp),
        verticalAlignment = Alignment.CenterVertically,
        horizontalArrangement = Arrangement.SpaceAround
    ) {
        Button(
            onClick = { launcher.launch("image/*") },
            modifier = Modifier.padding(top = 16.dp)
        ) {
            Text(stringResource(id= R.string.upload_image))
        }
        Box(
            modifier = Modifier
                .size(200.dp)
                .clip(CircleShape)
                .border(2.dp, MaterialTheme.colorScheme.onBackground, CircleShape)
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
                    Text("Chọn ảnh", color = MaterialTheme.colorScheme.onBackground)
                }
            }
        }
    }
}

