package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Nightlight
import androidx.compose.material.icons.filled.WbSunny
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.AnimatedSwitch
import com.example.atry.ui.components.buttons.RedLinearBorderButton
import com.example.atry.ui.screens.functionalScreens.edit.editComponents.InformationBar
import com.example.atry.ui.screens.functionalScreens.settings.settingComponents.Slogan
import com.example.atry.ui.theme.ThemeSingleton
import kotlinx.coroutines.launch

@Composable
@Preview
fun SettingsScreen() {
    val scope = rememberCoroutineScope()

    Column(
        modifier = Modifier
            .fillMaxSize(),
        verticalArrangement = Arrangement.SpaceBetween
    ) {

        Column(
            verticalArrangement = Arrangement.spacedBy(30.dp, Alignment.Top),
            modifier = Modifier
                .weight(1f)
                .padding(20.dp)
        ) {
            Slogan()

            Column (
                verticalArrangement = Arrangement.spacedBy(15.dp),
                ){


                Text(
                    "Cài đặt",
                    color = MaterialTheme.colorScheme.onBackground,
                    fontSize = 20.sp,
                    fontWeight = FontWeight.Bold
                )


                Row(
                    modifier = Modifier
                        .fillMaxSize(),
                    horizontalArrangement = Arrangement.SpaceBetween
                ) {
                    Text(
                        "Giao diện",
                        style = TextStyle(
                            fontSize = 16.sp,
                            color = MaterialTheme.colorScheme.onBackground
                        )
                    )

                    val isDark = ThemeSingleton.isDark.value

                    AnimatedSwitch(
                        isOn = isDark,
                        onToggle = {
                            scope.launch {
                                ThemeSingleton.toggle()
                            }
                        },
                        onIcon = Icons.Default.Nightlight,
                        offIcon = Icons.Default.WbSunny,
                        onColor = Color(0xFF1E1E2F),
                        offColor = Color(0xFFFFF3B0)
                    )

                }
            }
        }
    }
}