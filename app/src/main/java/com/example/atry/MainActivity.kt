package com.example.atry

import UploadImageScreen
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import androidx.core.view.WindowCompat
import androidx.lifecycle.lifecycleScope
import com.example.atry.ui.theme.TryTheme
import com.example.atry.navigation.NavGraph
import com.example.atry.navigation.navController
import com.example.atry.ui.theme.ThemeSingleton
import kotlinx.coroutines.launch

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        WindowCompat.setDecorFitsSystemWindows(window, false)
        
        val context = this
        lifecycleScope.launch { ThemeSingleton.load(context) }

        setContent {
            TryTheme {
                NavGraph()
            }
        }
        handleDeepLink(intent)

    }

    override fun onNewIntent(intent: Intent) {
        super.onNewIntent(intent)
        handleDeepLink(intent)
    }

    private fun handleDeepLink(intent: Intent?) {
        if (Intent.ACTION_VIEW == intent?.action) {
            intent.let { nonNullIntent ->

                // Bây giờ bạn có thể gọi .action, .data an toàn
                if (Intent.ACTION_VIEW == nonNullIntent.action) {

                    nonNullIntent.data?.let { uri ->
                        if (uri.host == "deeplink" && uri.path?.startsWith("/setpassword") == true) {
                            val email = uri.getQueryParameter("email")
                            if (!email.isNullOrEmpty()) {
                                // ... Điều hướng bằng navController ...
                                navController.navigate("passwordInput/${email}")
                            }
                        }
                    }
                }
            }
        }
    }
}

object DeepLinkHandler {
    var currentLink: String? = null
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    TryTheme {
        NavGraph()
    }
}