package com.example.atry.ui.screens.auth.register

import android.util.Log
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
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.data.constants.AppConstants
import com.example.atry.data.singleton.CurrentUser
import com.example.atry.navigation.navController
import com.example.atry.ui.components.CustomDropdownField
import com.example.atry.ui.components.buttons.CustomLinearButton
import com.example.atry.ui.components.textfield.DateInputField
import com.example.atry.ui.components.textfield.UnderlineTextField
import com.example.atry.ui.screens.auth.AuthFormContainer
import com.example.atry.ui.theme.redOrangeLinear
import com.example.atry.viewmodel.auth.UserInfoSetupViewModel
import com.google.firebase.firestore.FirebaseFirestore
import java.text.SimpleDateFormat
import java.util.Locale

@Composable
@Preview
fun InfoInput1(
    viewModel: UserInfoSetupViewModel= viewModel()
) {
    val userId = "eRs2j5bEUUVd4vlgEjrOAJaWNOW2"
    FirebaseFirestore.getInstance().collection("users")
        .document(userId)
        .get()
        .addOnSuccessListener { doc ->
            CurrentUser.user = doc.toObject(User::class.java)
        }
        .addOnFailureListener { e ->
            Log.e("User", "Lỗi khi lấy user: ${e.message}")
        }
    FirebaseFirestore.getInstance().collection("userProfiles")
        .document(userId)
        .get()
        .addOnSuccessListener { doc ->
            CurrentUser.userProfile = doc.toObject(UserProfile::class.java)
        }
        .addOnFailureListener { e ->
            Log.e("UserProfile", "Lỗi khi lấy profile: ${e.message}")
        }

    var selectedPlace by remember { mutableStateOf<String?>(null) }
    // Lấy giá trị tên hiện tại
    var name by remember { mutableStateOf("") }
    var dob by remember { mutableStateOf("") }

    AuthFormContainer(
        title = "Tạo tài khoản",
        subtitle = "Nhập thông tin",
        topContent = {},
        bottomContent = {
            Text("Nhập thông tin", fontSize = 24.sp, color = Color.Black)
            Spacer(modifier = Modifier.size(30.dp))
            UnderlineTextField(
                value = name,
                onValueChange = { newName -> name = newName },
                label = "Tên"
            )
            DateInputField(
                label = "Ngày sinh",
                onValueChange = { newValue -> dob = newValue },
                onDateChange = { newDob -> dob = newDob }
            )

            CustomDropdownField(
                "Nơi ở",
                "Chọn địa điểm",
                options = AppConstants.vietnamProvinces,
                selectedOption = selectedPlace,
                onOptionSelected = { selectedPlace = it })
            Spacer(modifier = Modifier.size(20.dp))
            CustomLinearButton(
                "Tiếp theo", {
                    if (name.isBlank()) {
                        // báo lỗi
                        return@CustomLinearButton
                    }

                    if (dob.isBlank()) {
                        // báo lỗi
                        return@CustomLinearButton
                    }

                    val date = try {
                        SimpleDateFormat("dd/MM/yyyy", Locale.getDefault()).parse(dob)
                    } catch (e: Exception) {
                        null
                    }

                    if (date == null) {
                        // báo lỗi format sai
                        return@CustomLinearButton
                    }

                    viewModel.updateUserField("name", name)
                    viewModel.updateDob(date)
                    viewModel.updateUserProfileField("location", selectedPlace.toString())
                    navController.navigate("registerInfoInput2")
                },
                redOrangeLinear,
                Color.White
            )

        }
    )
}
