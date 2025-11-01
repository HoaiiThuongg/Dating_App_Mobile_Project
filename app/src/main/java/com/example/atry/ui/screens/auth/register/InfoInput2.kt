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
import com.example.atry.data.constants.AppConstants
import com.example.atry.navigation.navController
import com.example.atry.ui.components.CustomDropdownField
import com.example.atry.ui.components.buttons.CustomBorderButton
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.CustomTextField
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.UserInfoSetupViewModel

@Composable
@Preview
fun InfoInput2(
    viewModel: UserInfoSetupViewModel= viewModel()
) {
    var selectedGender by remember { mutableStateOf<String?>(null) }
    // Lấy giá trị tên hiện tại
    var phoneNumber by remember { mutableStateOf("") }
    var bio by remember { mutableStateOf("") }

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập thông tin",
        topContent = {},
        bottomContent = {
            Text("Nhập thông tin", fontSize = 24.sp, color = Color.Black)
            Spacer(modifier = Modifier.size(30.dp))
            UnderlineTextField(
                value = phoneNumber,
                onValueChange = { newPhoneNumber -> phoneNumber = newPhoneNumber },
                label = "Số điện thoại"
            )
            CustomDropdownField(
                "Giới tính",
                "Chọn giới tính",
                options = AppConstants.gender,
                selectedOption = selectedGender,
                onOptionSelected = { selectedGender = it })
            CustomTextField(
                "Giới thiệu",
                bio,
                onValueChange = { newPhoneNumber -> phoneNumber = newPhoneNumber },
            )
            CustomBorderButton(
                "Quay Lại",
                { navController.navigate("registerInfoInput1") },
                Color.Black
            )
            CustomLinearButton(
                "Tếp theo", {
                    viewModel.updateUserProfileField("phone",phoneNumber)
                    viewModel.updateUserProfileField("bio",bio)
                    viewModel.updateUserField("gender",selectedGender.toString())
                    navController.navigate("registerHobbiesInput")
                            },
                redOrangeLinear, Color.White
            )

        }
    )
}
