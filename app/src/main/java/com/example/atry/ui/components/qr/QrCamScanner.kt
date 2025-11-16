package com.example.atry.ui.components.qr

import android.Manifest
import android.app.Activity
import android.content.Context
import android.content.ContextWrapper
import android.content.pm.PackageManager
import android.net.Uri
import androidx.camera.core.CameraSelector
import androidx.camera.core.ExperimentalGetImage
import androidx.camera.core.ImageAnalysis
import androidx.camera.lifecycle.ProcessCameraProvider
import androidx.camera.view.PreviewView
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Close
import androidx.compose.material3.*
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawWithCache
import androidx.compose.ui.graphics.BlendMode
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.LocalLifecycleOwner
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.AndroidView
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.redGradientBrush
import com.example.atry.viewmodel.functional.QRViewModel
import com.google.accompanist.permissions.ExperimentalPermissionsApi
import com.google.accompanist.permissions.isGranted
import com.google.accompanist.permissions.rememberPermissionState
import com.google.gson.Gson
import com.google.mlkit.vision.barcode.BarcodeScanning
import com.google.mlkit.vision.common.InputImage
import androidx.compose.runtime.livedata.observeAsState

@OptIn(ExperimentalPermissionsApi::class)
@Composable
fun CameraPermissionContent() {
    val cameraPermission = Manifest.permission.CAMERA
    val permissionState = rememberPermissionState(permission = cameraPermission)
    val context = LocalContext.current

    var permissionRequested by remember { mutableStateOf(false) }

    // Launch Accompanist permission request once
    LaunchedEffect(Unit) {
        if (!permissionRequested) {
            permissionState.launchPermissionRequest()
            permissionRequested = true
        }
    }

    if (permissionState.status.isGranted) {
        QrCamScannerScreen()
    } else {
        // Request permission directly from Activity as fallback
        LaunchedEffect(Unit) {
            ActivityCompat.requestPermissions(
                context.findActivity(),
                arrayOf(Manifest.permission.CAMERA),
                123
            )
        }
        Text("Cần cấp quyền camera để quét QR 💫", modifier = Modifier.padding(16.dp))
    }
}

@Suppress("UnsafeOptInUsageError")
@Composable
fun QrCamScannerScreen(
    viewModel: QRViewModel = viewModel()
) {
    val context = LocalContext.current
    val lifecycleOwner = LocalLifecycleOwner.current
    val gson = Gson()
    val user by viewModel.user.observeAsState()
    val cameraProviderFuture = remember { ProcessCameraProvider.getInstance(context) }

    var scannedCode by remember { mutableStateOf<String?>(null) }
    var hasNavigated by remember { mutableStateOf(false) }

    Box(modifier = Modifier.fillMaxSize()) {

        // Camera preview
        AndroidView(
            modifier = Modifier.fillMaxSize(),
            factory = { ctx ->
                val previewView = PreviewView(ctx)
                val cameraProvider = cameraProviderFuture.get()
                val preview = androidx.camera.core.Preview.Builder().build().also {
                    it.setSurfaceProvider(previewView.surfaceProvider)
                }

                val scanner = BarcodeScanning.getClient()
                val analysis = ImageAnalysis.Builder()
                    .setBackpressureStrategy(ImageAnalysis.STRATEGY_KEEP_ONLY_LATEST)
                    .build()

                analysis.setAnalyzer(ContextCompat.getMainExecutor(ctx)) { imageProxy ->
                    val mediaImage = imageProxy.image
                    if (mediaImage != null) {
                        val image = InputImage.fromMediaImage(
                            mediaImage,
                            imageProxy.imageInfo.rotationDegrees
                        )
                        scanner.process(image)
                            .addOnSuccessListener { barcodes ->
                                barcodes.firstOrNull()?.rawValue?.let { code ->
                                    if (scannedCode == null) {
                                        scannedCode = code
                                        viewModel.getUserById(code)
                                    }
                                }
                            }
                            .addOnCompleteListener { imageProxy.close() }
                    } else {
                        imageProxy.close()
                    }
                }

                try {
                    cameraProvider.unbindAll()
                    cameraProvider.bindToLifecycle(
                        lifecycleOwner,
                        CameraSelector.DEFAULT_BACK_CAMERA,
                        preview,
                        analysis
                    )
                } catch (e: Exception) {
                    e.printStackTrace()
                }
                previewView
            }
        )

        // Overlay UI
        Column(
            modifier = Modifier.fillMaxSize()
        ) {
            IconButton(
                onClick = { navController.navigate("home") },
                modifier = Modifier
                    .size(32.dp)
                    .offset(x = 20.dp, y = 50.dp)
            ) {
                Icon(
                    imageVector = Icons.Default.Close,
                    contentDescription = "Close",
                    modifier = Modifier
                        .size(32.dp)
                        .graphicsLayer(alpha = 0.99f)
                        .drawWithCache {
                            onDrawWithContent {
                                drawContent()
                                drawRect(
                                    brush = redGradientBrush,
                                    size = this.size,
                                    blendMode = BlendMode.SrcAtop
                                )
                            }
                        },
                    tint = MaterialTheme.colorScheme.onBackground
                )
            }

            Column(
                modifier = Modifier
                    .fillMaxSize()
                    .weight(1f),
                verticalArrangement = Arrangement.Center,
                horizontalAlignment = Alignment.CenterHorizontally
            ) {
                when {
                    scannedCode == null -> Text("Đang quét QR...", color = Color.White)
                    user == null -> Text("Đang tải thông tin người dùng...", color = Color.White)
                    user != null && !hasNavigated -> {
                        hasNavigated = true
                        val userJson = gson.toJson(user)
                        navController.navigate("detailed_profile/${Uri.encode(userJson)}")
                    }
                }
            }
        }
    }
}

fun Context.findActivity(): Activity {
    var context = this
    while (context is ContextWrapper) {
        if (context is Activity) return context
        context = context.baseContext
    }
    throw IllegalStateException("Không tìm thấy Activity từ Context 😭")
}
