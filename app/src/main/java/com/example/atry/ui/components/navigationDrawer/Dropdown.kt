package com.example.atry.ui.components.navigationDrawer

import androidx.compose.foundation.border
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
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.example.atry.ui.theme.ThemeSingleton
import kotlinx.coroutines.launch

@Composable
fun Dropdown() {
    var expanded by remember { mutableStateOf(false) } // trạng thái mở/đóng dropdown
    var selectedOption by remember { mutableStateOf("Mặc định") }

    val options = listOf("Mặc định", "Tối")
    val scope = rememberCoroutineScope()
    Row (
        modifier = Modifier
            .fillMaxWidth()
            .border(
                width = 2.dp,
                color = Color.White,
                shape = RoundedCornerShape(
                    20.dp
                )
            )
            .padding(10.dp),
        horizontalArrangement = Arrangement.SpaceBetween,
        verticalAlignment = Alignment.CenterVertically
    ) {
        Text("Giao diện", color = Color.White)
        Row(
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                text = selectedOption,
                color = Color.Gray
            )
            Box {
                IconButton(
                    onClick = { expanded = !expanded },
                    modifier = Modifier
                        .size(20.dp)
                ) {
                    Icon(
                        imageVector = Icons.Default.ArrowDropDown,
                        contentDescription = "ArrowDropDown",
                        tint = Color.White
                    )
                }

                DropdownMenu(
                    expanded = expanded,
                    onDismissRequest = { expanded = false }
                ) {
                    options.forEach { option ->
                        DropdownMenuItem(
                            text = { Text(option) },
                            onClick = {
                                selectedOption = option
                                expanded = false
                                if (option == "Tối") {
                                    scope.launch {
                                        ThemeSingleton.turnOnDarkMode()
                                    }
                                } else {
                                    scope.launch {
                                        ThemeSingleton.turnOffDarkMode()
                                    }
                                }
                            }
                        )
                    }
                }
            }
        }
    }

}
