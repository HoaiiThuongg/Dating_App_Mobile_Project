package com.example.atry.ui.components.headerWithBackButton

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.DrawerValue
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.ModalNavigationDrawer
import androidx.compose.material3.rememberDrawerState
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import com.example.atry.navigation.innerNavController
import com.example.atry.navigation.navController
import com.example.atry.ui.components.headerAndFooter.Footer
import com.example.atry.ui.components.headerAndFooter.Header
import com.example.atry.ui.components.headerAndFooter.HeaderWithBack
import com.example.atry.ui.components.notificationDrawer.NotificationRightDrawer
import com.example.atry.ui.theme.TryTheme

@Composable
fun HeaderWithBackButton(
    screenName: String,
    screenHeaderTitle: String,
    iconRes: Int,
    route: String,
    content: @Composable () -> Unit
) {
    TryTheme {
        var isNotificationDrawerOpen by remember { mutableStateOf(false) }

        val bgrColor =
            if (isNotificationDrawerOpen) MaterialTheme.colorScheme.scrim.copy(alpha = 0.5f)
            else Color.Transparent

        Box(modifier = Modifier.fillMaxSize()) {
            Column(
                modifier = Modifier
                    .fillMaxSize()
                    .background(MaterialTheme.colorScheme.background),
                verticalArrangement = Arrangement.SpaceBetween
            ) {
                HeaderWithBack(
                    screenHeaderTitle,
                    iconRes,
                    { navController.navigate(route) },
                    { isNotificationDrawerOpen = true })
                Box(
                    modifier = Modifier.weight(1f)
                ) {
                    content()
                }
                var selected by remember { mutableStateOf(screenName) }
                FooterWithBack(selected = selected, onSelect = { selected = it })

            }
            Box(
                modifier = Modifier
                    .fillMaxSize()
                    .background(bgrColor)
            )
            {}
            // Drawer bên phải
            NotificationRightDrawer(
                isNotificationDrawerOpen,
                { isNotificationDrawerOpen = false })
        }
    }
}
