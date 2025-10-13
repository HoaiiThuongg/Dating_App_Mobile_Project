package com.example.atry

import UploadImageScreen
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import androidx.lifecycle.lifecycleScope
import com.example.atry.ui.theme.TryTheme
import com.example.atry.navigation.NavGraph
import com.example.atry.ui.theme.ThemeSingleton
import kotlinx.coroutines.launch

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        val context = this
        lifecycleScope.launch { ThemeSingleton.load(context) }

        setContent {
            TryTheme {
                NavGraph()
            }
        }
    }
}



@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    TryTheme {
        NavGraph()
    }
}