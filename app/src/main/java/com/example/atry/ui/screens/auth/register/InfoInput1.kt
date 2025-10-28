package com.example.atry.ui.screens.auth.register

import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.components.CustomDropdownField
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.DateInputField
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.UserInfoSetupViewModel

@Composable
@Preview
fun InfoInput1(
    viewModel: UserInfoSetupViewModel= viewModel()
) {
    var selectedPlace by remember { mutableStateOf<String?>(null) }
    val userProfile by viewModel.userprofile.collectAsState()
    val user by viewModel.user.collectAsState()

    // Lấy giá trị tên hiện tại
    val currentName = user?.name ?: ""
    val age = userProfile?.age ?: ""
    val location = userProfile?.location ?: ""

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập thông tin",
        topContent = {},
        bottomContent = {
            Text("Nhập thông tin", fontSize = 24.sp, color = Color.Black)
            Spacer(modifier = Modifier.size(30.dp))
            UnderlineTextField(
                value = currentName,
                onValueChange = { newName ->
                    viewModel.updateName(newName)
                                },
                label = "Tên"
            )
            UnderlineTextField(
                value = age.toString(),
                onValueChange = { },
                label = "Tuổi"
            )
            DateInputField("Ngày sinh", {}, {})
            CustomDropdownField(
                "Nơi ở",
                "Chọn địa điểm",
                options = listOf("Hà Nội", "Hồ Chí Minh", "Khác"),
                selectedOption = selectedPlace,
                onOptionSelected = { selectedPlace = it })
            Spacer(modifier = Modifier.size(20.dp))

            CustomLinearButton(
                "Tếp theo", { navController.navigate("registerInfoInput2") },
                redOrangeLinear, Color.White
            )

        }
    )
}
