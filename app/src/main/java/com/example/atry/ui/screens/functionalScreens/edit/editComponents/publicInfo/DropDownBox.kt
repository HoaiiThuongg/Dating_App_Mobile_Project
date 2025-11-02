package com.example.atry.ui.screens.functionalScreens.edit.editComponents.publicInfo

import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Check
import androidx.compose.material.icons.filled.Edit
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.focus.focusRequester
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.ThemeSingleton
import com.example.atry.ui.theme.logoGradientBrush
import com.example.atry.viewmodel.functional.EditProfileViewModel

@Composable
fun DropDownBox(
    title: String,
    hint: String,
    options: List<String>,
    selectedOption: String?,
    labelDB: String, // tên field để update server
    viewModel: EditProfileViewModel = viewModel(),
    modifier: Modifier = Modifier
) {
    var expanded by remember { mutableStateOf(false) }
    val subTitleColor = if (!ThemeSingleton.isDark.value) Color(0xFF626262) else Color.White
    val titleBrush = if (!ThemeSingleton.isDark.value) Brush.linearGradient(
        colorStops = arrayOf(0.41f to Color.Black, 1f to Color.Black)
    ) else logoGradientBrush

    var currentValue by remember { mutableStateOf(selectedOption) }

    Column(modifier = modifier) {
        Text(
            text = buildAnnotatedString {
                withStyle(
                    SpanStyle(
                        brush = titleBrush,
                        fontWeight = FontWeight.Bold,
                        fontSize = 20.sp
                    )
                ) {
                    append(title)
                }
            }
        )
        Text(
            text = hint,
            fontSize = 16.sp,
            color = subTitleColor
        )

        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(vertical = 8.dp)
                .clip(RoundedCornerShape(20.dp))
                .border(1.dp, MaterialTheme.colorScheme.onBackground, RoundedCornerShape(20.dp))
                .background(Color.Transparent)
                .clickable { expanded = !expanded }
                .padding(horizontal = 16.dp, vertical = 12.dp),
            verticalAlignment = Alignment.CenterVertically,
            horizontalArrangement = Arrangement.SpaceBetween
        ) {
            Text(
                text = currentValue ?: "Chọn...",
                fontSize = 18.sp,
                color = if (currentValue != null) MaterialTheme.colorScheme.onBackground else Color.LightGray,
                modifier = Modifier.weight(1f)
            )

            Icon(
                imageVector = if (expanded) Icons.Default.Check else Icons.Default.Edit,
                contentDescription = null,
                tint = MaterialTheme.colorScheme.onBackground
            )
        }

        if (expanded) {
            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .background(MaterialTheme.colorScheme.surface)
                    .border(1.dp, MaterialTheme.colorScheme.onBackground, RoundedCornerShape(12.dp))
            ) {
                options.forEach { option ->
                    Text(
                        text = option,
                        fontSize = 16.sp,
                        color = MaterialTheme.colorScheme.onBackground,
                        modifier = Modifier
                            .fillMaxWidth()
                            .clickable {
                                currentValue = option
                                viewModel.updateUserProfileField(labelDB, option)
                                expanded = false
                            }
                            .padding(12.dp)
                    )
                }
            }
        }
    }
}
