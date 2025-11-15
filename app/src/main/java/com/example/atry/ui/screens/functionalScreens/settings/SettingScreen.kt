package com.example.atry.ui.screens.functionalScreens

import android.app.Activity
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
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
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.data.singleton.LanguageSingleton
import com.example.atry.ui.components.switches.AnimatedSwitch
import com.example.atry.ui.screens.functionalScreens.settings.settingComponents.Slogan
import com.example.atry.data.singleton.ThemeSingleton
import kotlinx.coroutines.launch
import com.example.atry.R
import com.example.atry.ui.components.switches.PainterSwitch

@Composable
@Preview
fun SettingsScreen() {
    val scope = rememberCoroutineScope()
    val context = LocalContext.current

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
                    stringResource(id = R.string.settings),
                    color = MaterialTheme.colorScheme.onBackground,
                    fontSize = 20.sp,
                    fontWeight = FontWeight.Bold,
                    modifier = Modifier.testTag("settings:title")
                )
                Row(
                    modifier = Modifier
                        .fillMaxWidth(),
                    horizontalArrangement = Arrangement.SpaceBetween
                ) {
                    Text(
                        stringResource(id = R.string.theme),
                        style = TextStyle(
                            fontSize = 16.sp,
                            color = MaterialTheme.colorScheme.onBackground
                        ),
                        modifier = Modifier.testTag("settings:label_theme")
                    )

                    val isDark = ThemeSingleton.isDark.value

                    androidx.compose.foundation.layout.Box(modifier = Modifier.testTag("settings:theme_switch")) {
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

                Row(
                    modifier = Modifier.fillMaxWidth(),
                    horizontalArrangement = Arrangement.SpaceBetween
                ) {
                    Text(
                        stringResource(id = R.string.language),
                        style = TextStyle(fontSize = 16.sp, color = MaterialTheme.colorScheme.onBackground),
                        modifier = Modifier.testTag("settings:label_language")
                    )
                    val isEnglish = LanguageSingleton.isEnglish.value
                    androidx.compose.foundation.layout.Box(modifier = Modifier.testTag("settings:language_switch")) {
                        PainterSwitch(
                            isOn = isEnglish,
                            onToggle = {
                                scope.launch {
                                    LanguageSingleton.toggle()
                                    LanguageSingleton.updateLocale(context)
                                    (context as? Activity)?.recreate()
                                }
                            },
                            onPainter = painterResource(R.drawable.anh),
                            offPainter = painterResource(R.drawable.vietnam),
                            onColor = Color(0xFF1E88E5),
                            offColor = Color(0xFFD32F2F)
                        )
                    }
                }
            }
        }
    }
}
