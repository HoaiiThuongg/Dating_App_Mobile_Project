package com.example.atry.ui.screens.auth

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.navigation.navController
import com.example.atry.ui.components.alert.Alert
import com.example.atry.ui.theme.redOrangeLinearBrush
import com.example.atry.viewmodel.AlertViewModel

@Composable
fun AuthFormContainer(
    haveBack : Boolean = true,
    title: String,
    subtitle: String,
    topContent: @Composable ColumnScope.() -> Unit,
    bottomContent: @Composable ColumnScope.() -> Unit,
    alertMessage:String="thông báo",
    viewModel: AlertViewModel = viewModel(),
    onAlertAction:()->Unit={viewModel.hideAlert()}
) {
    Box(
        modifier = Modifier
            .fillMaxSize()
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .background(
                    brush = redOrangeLinearBrush
                ),
            verticalArrangement = Arrangement.SpaceBetween
        ) {
            // Header
            Column(
                modifier = Modifier
                    .padding(20.dp, 20.dp),
                verticalArrangement = Arrangement.spacedBy(8.dp)
            ) {
                if (haveBack) {
                    IconButton(
                        onClick = { navController.navigate("splash") },
                        modifier = Modifier
                            .size(32.dp)
                    ) {
                        Icon(
                            painter = painterResource(id = R.drawable.back),
                            contentDescription = "notifications",
                            tint = Color.White,
                            modifier = Modifier.size(30.dp)
                        )
                    }
                }
                Text(
                    text = title,
                    fontSize = 36.sp,
                    fontWeight = FontWeight.Bold,
                    color = Color.White
                )
                Text(text = subtitle, fontSize = 20.sp, color = Color.White.copy(alpha = 0.8f))
            }

            Column(
                modifier = Modifier
                    .fillMaxWidth(),
                verticalArrangement = Arrangement.Center,
                horizontalAlignment = Alignment.CenterHorizontally,
                content = topContent
            )

            // Form content — truyền vào từng màn riêng
            Column(
                modifier = Modifier
                    .fillMaxWidth()
                    .clip(RoundedCornerShape(topStart = 30.dp, topEnd = 30.dp))
                    .background(Color.White)
                    .padding(top = 50.dp, start = 30.dp, end = 30.dp, bottom = 30.dp),
                verticalArrangement = Arrangement.spacedBy(10.dp, Alignment.CenterVertically),
                horizontalAlignment = Alignment.CenterHorizontally,
                content = bottomContent
            )
        }

        if(viewModel.isAlertVisible) {
            Alert(alertMessage,{onAlertAction()})
        }
    }
}
