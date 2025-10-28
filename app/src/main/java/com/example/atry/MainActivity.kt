package com.example.atry


import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.core.view.WindowCompat
import androidx.lifecycle.lifecycleScope
import com.example.atry.ui.theme.TryTheme
import com.example.atry.navigation.NavGraph
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.ThemeSingleton
import kotlinx.coroutines.launch
import io.agora.rtc2.Constants
import android.Manifest
import android.content.Intent
import android.util.Log
import com.example.atry.navigation.AppRoot

class MainActivity : ComponentActivity() {

    private val PERMISSION_REQ_ID = 22

    private fun getRequiredPermissions(): Array<String> {
        return arrayOf(
            Manifest.permission.RECORD_AUDIO,
            Manifest.permission.CAMERA
        )
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

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
                // Chúng ta sẽ xử lý intent trong NavGraph
//                NavGraph(
//                    // Truyền Intent ban đầu vào Composable
//                    initialIntent = intent,
//                    activity = this
//                )
                AppRoot(
                    // Truyền Intent ban đầu vào Composable
                    initialIntent = intent,
                    activity = this
                )
            }
        }
        // Bỏ handleDeepLink(intent) ở đây!
    }

    override fun onNewIntent(intent: Intent) {
        super.onNewIntent(intent)
        // Thay vì gọi handleDeepLink, chúng ta lưu Intent mới vào DeepLinkHandler
        DeepLinkHandler.currentLink = intent.dataString
        Log.d("MainActivity", "New Intent data: ${intent.dataString}")

    }

    private fun handleDeepLink(intent: Intent?) {
        if (Intent.ACTION_VIEW == intent?.action) {
            intent.data?.let { uri ->

                // Chỉ xử lý nếu đây là Custom Deeplink (do web redirect đến)
                if (uri.scheme == "app" && uri.host == "deeplink" && uri.path?.startsWith("/setpassword") == true) {

                    val oobCode = uri.getQueryParameter("oobCode")
                    val email = uri.getQueryParameter("email")

                    if (oobCode != null && !email.isNullOrEmpty()) {

                        // TODO: GỌI HÀM FIREBASE AUTH ĐỂ HOÀN TẤT XÁC MINH/ĐĂNG NHẬP
                        // VÍ DỤ: FirebaseAuth.getInstance().applyActionCode(oobCode)

                        // SAU KHI GỌI THÀNH CÔNG:
                        navController.navigate("passwordInput/${email}")

                        // Thoát khỏi hàm xử lý deeplink
                        return
                    }
                }
            }
        }
    }

    // --- LOGIC XỬ LÝ QUYỀN ---

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

    // --- OTHER COMPONENTS ---

    object DeepLinkHandler {
        // Biến này sẽ lưu trữ URI của Intent mới (từ onNewIntent)
        var currentLink: String? = null
    }
}
//
//@Preview(showBackground = true)
//@Composable
//fun GreetingPreview() {
//    TryTheme {
//        NavGraph()
//    }
//}
