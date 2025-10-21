package com.example.atry.ui.screens.auth

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.atry.navigation.navController
import com.example.atry.ui.components.CustomDropdownField
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.DateInputField
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.theme.redOrangeLinear

@Composable
@Preview
fun InfoInput1() {
    var selectedPlace by remember { mutableStateOf<String?>(null) }

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập thông tin",
        topContent = {},
        bottomContent = {
            Text("Nhập thông tin", fontSize = 24.sp, color = Color.Black)
            Spacer(modifier = Modifier.size(30.dp))
            UnderlineTextField(
                value = "",
                onValueChange = {  },
                label = "Tên"
            )
            UnderlineTextField(
                value = "",
                onValueChange = {  },
                label = "Mật khẩu",
                isPassword = true
            )
            DateInputField("Ngày sinh",{},{})
            CustomDropdownField(
                "Nơi ở",
                "Chọn địa điểm",
                options = listOf("Hà Nội", "Hồ Chí Minh", "Khác"),
                selectedOption = selectedPlace,
                onOptionSelected = { selectedPlace = it })
            Spacer(modifier = Modifier.size(20.dp))

            CustomLinearButton("Tếp theo", { navController.navigate("registerInfoInput2")},
                redOrangeLinear, Color.White)

        }
    )
}
