package com.example.atry.ui.screens.functionalScreens

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.navigation.NavController
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.components.general.Footer
import com.example.atry.ui.components.general.GrayBorderButton
import com.example.atry.ui.components.general.Header
import com.example.atry.ui.screens.functionalScreens.settings.settingComponents.InformationBar
import com.example.atry.ui.screens.functionalScreens.settings.settingComponents.Slogan

@Composable
@Preview
fun SettingsScreen() {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(Color.White) ,
        verticalArrangement = Arrangement.SpaceBetween
    ) {
        // Header
        Header("Cài đặt", R.drawable.like)

        Column(
            verticalArrangement = Arrangement.spacedBy(15.dp,Alignment.Top) ,
            modifier = Modifier
                .weight(1f)
                .padding(20.dp)
        ){
            Slogan()

            Text("Cài đặt", fontSize = 20.sp, fontWeight = FontWeight.Bold)

            Column(
                verticalArrangement = Arrangement.spacedBy(20.dp)
            ) {
                InformationBar("Số điện thoại","987654312")
                InformationBar("Ngày sinh","Hà nội")
                InformationBar("Email","Hà nội")
                InformationBar("Nơi ở","Hà nội")
            }


        }

        GrayBorderButton("Xong",{ navController.navigate("profile") })

        var selected  by remember { mutableStateOf("profile") }
        Footer(selected = selected, onSelect = { selected = it })
    }
}