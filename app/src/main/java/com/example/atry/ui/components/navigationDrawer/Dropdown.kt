package com.example.atry.ui.components.navigationDrawer

import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowDropDown
import androidx.compose.material3.DropdownMenu
import androidx.compose.material3.DropdownMenuItem
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import com.example.atry.R
import com.example.atry.data.singleton.ThemeSingleton
import kotlinx.coroutines.launch

@Composable
fun Dropdown() {

    var expanded by remember { mutableStateOf(false) }
    var selectedDark by remember { mutableStateOf(ThemeSingleton.isDark.value) }

    val selectedOption = stringResource(
        if (selectedDark) R.string.dark_mode else R.string.default_text
    )

    val scope = rememberCoroutineScope()

    Row(
        modifier = Modifier
            .clickable { expanded = !expanded }
            .fillMaxWidth()
            .border(2.dp, Color.White, RoundedCornerShape(20.dp))
            .padding(10.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically
    ) {

        Text(
            text = stringResource(id = R.string.theme),
            color = Color.White
        )

        Row(verticalAlignment = Alignment.CenterVertically) {
            Text(text = selectedOption, color = Color.Gray)

            Box {
                IconButton(
                    onClick = { expanded = !expanded },
                    modifier = Modifier.size(20.dp)
                ) {
                    Icon(
                        Icons.Default.ArrowDropDown,
                        contentDescription = null,
                        tint = Color.White
                    )
                }

                DropdownMenu(
                    expanded = expanded,
                    onDismissRequest = { expanded = false }
                ) {
                    DropdownMenuItem(
                        text = { Text(stringResource(id = R.string.default_text)) },
                        onClick = {
                            selectedDark = false
                            expanded = false
                            scope.launch { ThemeSingleton.turnOffDarkMode() }
                        }
                    )

                    DropdownMenuItem(
                        text = { Text(stringResource(id = R.string.dark_mode)) },
                        onClick = {
                            selectedDark = true
                            expanded = false
                            scope.launch { ThemeSingleton.turnOnDarkMode() }
                        }
                    )
                }
            }
        }
    }
}
