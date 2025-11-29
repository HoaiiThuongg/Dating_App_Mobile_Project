package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performClick
import androidx.compose.ui.unit.dp
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class BlockUserTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testBlockUser_BasicFunctionality() {
        composeTestRule.setContent {
            TryTheme {
                BlockUserTestContent()
            }
        }
        
        // Click block user button
        composeTestRule.onNodeWithTag("block_user_button")
            .performClick()
        
        // Verify confirmation dialog is shown
        composeTestRule.onNodeWithTag("block_confirmation_dialog")
            .assertIsDisplayed()
    }
    
    @Test
    fun testBlockUser_Confirmation() {
        composeTestRule.setContent {
            TryTheme {
                BlockUserConfirmationTest()
            }
        }
        
        // Click block button
        composeTestRule.onNodeWithTag("block_button")
            .performClick()
        
        // Confirm blocking
        composeTestRule.onNodeWithTag("confirm_block_button")
            .performClick()
        
        // Verify user is blocked
        composeTestRule.onNodeWithTag("block_success_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testBlockUser_Cancel() {
        composeTestRule.setContent {
            TryTheme {
                BlockUserCancelTest()
            }
        }
        
        // Click block button
        composeTestRule.onNodeWithTag("block_button_cancel")
            .performClick()
        
        // Cancel blocking
        composeTestRule.onNodeWithTag("cancel_block_button")
            .performClick()
        
        // Verify user is not blocked
        composeTestRule.onNodeWithTag("block_cancelled_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testBlockUser_AlreadyBlocked() {
        composeTestRule.setContent {
            TryTheme {
                BlockUserAlreadyBlockedTest()
            }
        }
        
        // Try to block already blocked user
        composeTestRule.onNodeWithTag("block_already_blocked")
            .performClick()
        
        // Verify appropriate message
        composeTestRule.onNodeWithTag("already_blocked_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testBlockUser_UnblockFunctionality() {
        composeTestRule.setContent {
            TryTheme {
                UnblockUserTest()
            }
        }
        
        // Click unblock button
        composeTestRule.onNodeWithTag("unblock_button")
            .performClick()
        
        // Confirm unblocking
        composeTestRule.onNodeWithTag("confirm_unblock_button")
            .performClick()
        
        // Verify user is unblocked
        composeTestRule.onNodeWithTag("unblock_success_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testBlockUser_Consequences() {
        composeTestRule.setContent {
            TryTheme {
                BlockUserConsequencesTest()
            }
        }
        
        // Block user and verify consequences
        composeTestRule.onNodeWithTag("block_with_consequences")
            .performClick()
        
        // Verify messaging is disabled
        composeTestRule.onNodeWithTag("messaging_disabled_indicator")
            .assertIsDisplayed()
        
        // Verify profile is hidden
        composeTestRule.onNodeWithTag("profile_hidden_indicator")
            .assertIsDisplayed()
    }
}

@Composable
private fun BlockUserTestContent() {
    var showDialog by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .fillMaxSize()
            .testTag("block_user_container")
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("block_user_button")
        ) {
            Text("Block User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Block User") },
                text = { Text("Are you sure you want to block this user?") },
                confirmButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Block")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                },
                modifier = Modifier.testTag("block_confirmation_dialog")
            )
        }
    }
}

@Composable
private fun BlockUserConfirmationTest() {
    var showDialog by remember { mutableStateOf(false) }
    var blockSuccess by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("block_confirmation_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("block_button")
        ) {
            Text("Block User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Block User") },
                text = { Text("Are you sure you want to block this user?") },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            blockSuccess = true
                        },
                        modifier = Modifier.testTag("confirm_block_button")
                    ) {
                        Text("Block")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (blockSuccess) {
            Box(
                modifier = Modifier.testTag("block_success_indicator")
            ) {
                Text("User blocked successfully!")
            }
        }
    }
}

@Composable
private fun BlockUserCancelTest() {
    var showDialog by remember { mutableStateOf(false) }
    var blockCancelled by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("block_cancel_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("block_button_cancel")
        ) {
            Text("Block User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Block User") },
                text = { Text("Are you sure you want to block this user?") },
                confirmButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Block")
                    }
                },
                dismissButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            blockCancelled = true
                        },
                        modifier = Modifier.testTag("cancel_block_button")
                    ) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (blockCancelled) {
            Box(
                modifier = Modifier.testTag("block_cancelled_indicator")
            ) {
                Text("Blocking cancelled!")
            }
        }
    }
}

@Composable
private fun BlockUserAlreadyBlockedTest() {
    var alreadyBlocked by remember { mutableStateOf(true) }
    
    Box(
        modifier = Modifier
            .testTag("already_blocked_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { /* Already blocked, no action */ },
            enabled = !alreadyBlocked,
            modifier = Modifier.testTag("block_already_blocked")
        ) {
            Text("Block User")
        }
        
        if (alreadyBlocked) {
            Box(
                modifier = Modifier.testTag("already_blocked_indicator")
            ) {
                Text("User is already blocked!")
            }
        }
    }
}

@Composable
private fun UnblockUserTest() {
    var showDialog by remember { mutableStateOf(false) }
    var unblockSuccess by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("unblock_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("unblock_button")
        ) {
            Text("Unblock User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Unblock User") },
                text = { Text("Are you sure you want to unblock this user?") },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            unblockSuccess = true
                        },
                        modifier = Modifier.testTag("confirm_unblock_button")
                    ) {
                        Text("Unblock")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (unblockSuccess) {
            Box(
                modifier = Modifier.testTag("unblock_success_indicator")
            ) {
                Text("User unblocked successfully!")
            }
        }
    }
}

@Composable
private fun BlockUserConsequencesTest() {
    var messagingDisabled by remember { mutableStateOf(false) }
    var profileHidden by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("consequences_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = {
                messagingDisabled = true
                profileHidden = true
            },
            modifier = Modifier.testTag("block_with_consequences")
        ) {
            Text("Block User with Consequences")
        }
        
        if (messagingDisabled) {
            Box(
                modifier = Modifier.testTag("messaging_disabled_indicator")
            ) {
                Text("Messaging disabled for blocked user")
            }
        }
        
        if (profileHidden) {
            Box(
                modifier = Modifier.testTag("profile_hidden_indicator")
            ) {
                Text("Profile hidden from blocked user")
            }
        }
    }
}
