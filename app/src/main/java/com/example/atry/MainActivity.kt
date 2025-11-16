package com.example.atry


import android.content.pm.PackageManager
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.core.view.WindowCompat
import androidx.lifecycle.lifecycleScope
import com.example.atry.ui.theme.TryTheme
import com.example.atry.navigation.NavGraph
import com.example.atry.data.singleton.ThemeSingleton
import kotlinx.coroutines.launch
import android.Manifest
import android.content.Intent
import android.net.Uri
import android.widget.Toast
import com.example.atry.backend.EmailLinkAuthService
import com.example.atry.backend.TestActivity
import com.google.firebase.auth.FirebaseAuth

class MainActivity : ComponentActivity() {

    private val PERMISSION_REQ_ID = 22

    private fun getRequiredPermissions(): Array<String> {
        return arrayOf(
            Manifest.permission.RECORD_AUDIO,
            Manifest.permission.CAMERA
        )
    }
    companion object {
        var currentLink: Uri? = null
    }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        processEmailLink(intent)

        WindowCompat.setDecorFitsSystemWindows(window, false)

        val context = this
        lifecycleScope.launch { ThemeSingleton.load(context) }

        // Kiểm tra và yêu cầu quyền khi ứng dụng khởi động
        if (!checkPermissions()) {
            requestPermissions()
        }

        // Bỏ việc gọi handleDeepLink(intent) ở đây!
        setContent {
            TryTheme {
                NavGraph()
            }
        }
    }

    override fun onNewIntent(intent: Intent) {
        super.onNewIntent(intent)
        processEmailLink(intent)

    }
    private val firebaseAuth = FirebaseAuth.getInstance()

    private fun processEmailLink(intent: Intent?) {
        val deepLink = intent?.data ?: return
        val authService = EmailLinkAuthService(applicationContext)

        authService.handleVerifyEmail(deepLink, object : EmailLinkAuthService.AuthCallback {
            override fun onSuccess(message: String) {
                Toast.makeText(applicationContext, message, Toast.LENGTH_SHORT).show()

                // Chuyển tới màn set password
                val next = Intent(applicationContext, TestActivity::class.java)
                next.flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
                startActivity(next)
            }

            override fun onFailure(error: String) {
                Toast.makeText(applicationContext, "Lỗi: $error", Toast.LENGTH_SHORT).show()
            }

            override fun onEmailSent(message: String) {}
        })
    }



    private fun checkPermissions(): Boolean {
        for (permission in getRequiredPermissions()) {
            if (ContextCompat.checkSelfPermission(this, permission) != PackageManager.PERMISSION_GRANTED) {
                return false
            }
        }
        return true
    }
    private fun requestPermissions() {
        ActivityCompat.requestPermissions(this, getRequiredPermissions(), PERMISSION_REQ_ID)
    }
    /**
     * Sửa lỗi: Đã thay đổi chữ ký 'permissions: Array<out String>' thành 'permissions: Array<String>'.
     * Đây là chữ ký chuẩn của ActivityCompat.onRequestPermissionsResult.
     */
    override fun onRequestPermissionsResult(requestCode: Int, permissions: Array<String>, grantResults: IntArray) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)

        if (requestCode == PERMISSION_REQ_ID) {
            if (checkPermissions()) {
                // Tùy chọn: Khi tất cả quyền được cấp, bạn có thể thực hiện hành động tiếp theo
                // Ví dụ: viewModel.initializeCallManager()
            } else {
                // Xử lý trường hợp người dùng từ chối
            }
        }
    }

    object DeepLinkHandler {
        // Biến này sẽ lưu trữ URI của Intent mới (từ onNewIntent)
        var currentLink: String? = null
    }
}
