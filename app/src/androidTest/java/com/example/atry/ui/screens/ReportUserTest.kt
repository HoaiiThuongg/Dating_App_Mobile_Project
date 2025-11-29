package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.Button
import androidx.compose.material3.RadioButton
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
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
import androidx.compose.ui.test.performTextInput
import androidx.compose.ui.unit.dp
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ReportUserTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testReportUser_BasicFunctionality() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserTestContent()
            }
        }
        
        // Click report user button
        composeTestRule.onNodeWithTag("report_user_button")
            .performClick()
        
        // Verify report dialog is shown
        composeTestRule.onNodeWithTag("report_dialog")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_SelectReason() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserReasonTest()
            }
        }
        
        // Open report dialog
        composeTestRule.onNodeWithTag("report_button_reason")
            .performClick()
        
        // Select a reason
        composeTestRule.onNodeWithTag("reason_inappropriate")
            .performClick()
        
        // Verify reason is selected
        composeTestRule.onNodeWithTag("reason_selected_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_CustomDescription() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserDescriptionTest()
            }
        }
        
        // Open report dialog
        composeTestRule.onNodeWithTag("report_button_description")
            .performClick()
        
        // Enter custom description
        composeTestRule.onNodeWithTag("description_text_field")
            .performTextInput("This user is sending inappropriate messages")
        
        // Submit report
        composeTestRule.onNodeWithTag("submit_report_button")
            .performClick()
        
        // Verify report is submitted
        composeTestRule.onNodeWithTag("report_submitted_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_SubmitReport() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserSubmitTest()
            }
        }
        
        // Complete report submission
        composeTestRule.onNodeWithTag("complete_report_button")
            .performClick()
        
        // Select reason and submit
        composeTestRule.onNodeWithTag("reason_spam")
            .performClick()
        composeTestRule.onNodeWithTag("final_submit_button")
            .performClick()
        
        // Verify success
        composeTestRule.onNodeWithTag("report_success_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_CancelReport() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserCancelTest()
            }
        }
        
        // Start report process
        composeTestRule.onNodeWithTag("start_report_button")
            .performClick()
        
        // Cancel report
        composeTestRule.onNodeWithTag("cancel_report_button")
            .performClick()
        
        // Verify report is cancelled
        composeTestRule.onNodeWithTag("report_cancelled_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_MultipleReports() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserMultipleTest()
            }
        }
        
        // Submit multiple reports
        repeat(2) {
            composeTestRule.onNodeWithTag("report_multiple_button")
                .performClick()
            composeTestRule.onNodeWithTag("reason_harassment")
                .performClick()
            composeTestRule.onNodeWithTag("submit_multiple_report")
                .performClick()
        }
        
        composeTestRule.onNodeWithTag("multiple_reports_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testReportUser_EmptyDescription() {
        composeTestRule.setContent {
            TryTheme {
                ReportUserEmptyDescriptionTest()
            }
        }
        
        // Try to submit with empty description
        composeTestRule.onNodeWithTag("report_empty_button")
            .performClick()
        composeTestRule.onNodeWithTag("submit_empty_report")
            .performClick()
        
        // Verify error message
        composeTestRule.onNodeWithTag("empty_description_error")
            .assertIsDisplayed()
    }
}

@Composable
private fun ReportUserTestContent() {
    var showDialog by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .fillMaxSize()
            .testTag("report_user_container")
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("report_user_button")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            ReportDialog(
                onDismiss = { showDialog = false }
            )
        }
    }
}

@Composable
private fun ReportDialog(onDismiss: () -> Unit) {
    AlertDialog(
        onDismissRequest = onDismiss,
        title = { Text("Report User") },
        text = { Text("Why are you reporting this user?") },
        confirmButton = {
            Button(onClick = onDismiss) {
                Text("Submit")
            }
        },
        dismissButton = {
            Button(onClick = onDismiss) {
                Text("Cancel")
            }
        },
        modifier = Modifier.testTag("report_dialog")
    )
}

@Composable
private fun ReportUserReasonTest() {
    var showDialog by remember { mutableStateOf(false) }
    var selectedReason by remember { mutableStateOf("") }
    
    Box(
        modifier = Modifier
            .testTag("report_reason_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("report_button_reason")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Select Reason") },
                text = {
                    Column {
                        ReportReasonItem(
                            text = "Inappropriate content",
                            selected = selectedReason == "inappropriate",
                            onSelect = { selectedReason = "inappropriate" },
                            modifier = Modifier.testTag("reason_inappropriate")
                        )
                        ReportReasonItem(
                            text = "Spam",
                            selected = selectedReason == "spam",
                            onSelect = { selectedReason = "spam" },
                            modifier = Modifier.testTag("reason_spam")
                        )
                        ReportReasonItem(
                            text = "Harassment",
                            selected = selectedReason == "harassment",
                            onSelect = { selectedReason = "harassment" },
                            modifier = Modifier.testTag("reason_harassment")
                        )
                    }
                },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                        },
                        enabled = selectedReason.isNotEmpty()
                    ) {
                        Text("Next")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (selectedReason.isNotEmpty()) {
            Box(
                modifier = Modifier.testTag("reason_selected_indicator")
            ) {
                Text("Reason selected: $selectedReason")
            }
        }
    }
}

@Composable
private fun ReportReasonItem(
    text: String,
    selected: Boolean,
    onSelect: () -> Unit,
    modifier: Modifier = Modifier
) {
    Box(
        modifier = modifier
            .padding(vertical = 4.dp)
            .clickable { onSelect() }
    ) {
        RadioButton(
            selected = selected,
            onClick = onSelect
        )
        Text(
            text = text,
            modifier = Modifier.padding(start = 32.dp, top = 12.dp)
        )
    }
}

@Composable
private fun ReportUserDescriptionTest() {
    var showDialog by remember { mutableStateOf(false) }
    var description by remember { mutableStateOf("") }
    var reportSubmitted by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("report_description_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("report_button_description")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Additional Details") },
                text = {
                    TextField(
                        value = description,
                        onValueChange = { description = it },
                        label = { Text("Description (optional)") },
                        modifier = Modifier.testTag("description_text_field"),
                        placeholder = { Text("Please provide more details...") }
                    )
                },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            reportSubmitted = true
                        },
                        modifier = Modifier.testTag("submit_report_button")
                    ) {
                        Text("Submit Report")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (reportSubmitted) {
            Box(
                modifier = Modifier.testTag("report_submitted_indicator")
            ) {
                Text("Report submitted successfully!")
            }
        }
    }
}

@Composable
private fun ReportUserSubmitTest() {
    var showDialog by remember { mutableStateOf(false) }
    var selectedReason by remember { mutableStateOf("") }
    var reportSuccess by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("submit_report_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("complete_report_button")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Complete Report") },
                text = {
                    Column {
                        Text("Select a reason:")
                        ReportReasonItem(
                            text = "Spam",
                            selected = selectedReason == "spam",
                            onSelect = { selectedReason = "spam" },
                            modifier = Modifier.testTag("reason_spam")
                        )
                    }
                },
                confirmButton = {
                    Button(
                        onClick = {
                            if (selectedReason.isNotEmpty()) {
                                showDialog = false
                                reportSuccess = true
                            }
                        },
                        modifier = Modifier.testTag("final_submit_button"),
                        enabled = selectedReason.isNotEmpty()
                    ) {
                        Text("Submit Report")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (reportSuccess) {
            Box(
                modifier = Modifier.testTag("report_success_indicator")
            ) {
                Text("Report submitted successfully!")
            }
        }
    }
}

@Composable
private fun ReportUserCancelTest() {
    var showDialog by remember { mutableStateOf(false) }
    var reportCancelled by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("report_cancel_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("start_report_button")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = {
                    showDialog = false
                    reportCancelled = true
                },
                title = { Text("Report User") },
                text = { Text("Cancel reporting this user?") },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            reportCancelled = true
                        },
                        modifier = Modifier.testTag("cancel_report_button")
                    ) {
                        Text("Cancel Report")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Continue")
                    }
                }
            )
        }
        
        if (reportCancelled) {
            Box(
                modifier = Modifier.testTag("report_cancelled_indicator")
            ) {
                Text("Report cancelled!")
            }
        }
    }
}

@Composable
private fun ReportUserMultipleTest() {
    var reportCount by remember { mutableStateOf(0) }
    var showMultiple by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("multiple_reports_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { 
                reportCount++
                if (reportCount >= 2) showMultiple = true
            },
            modifier = Modifier.testTag("report_multiple_button")
        ) {
            Text("Report User")
        }
        
        if (showMultiple) {
            AlertDialog(
                onDismissRequest = { showMultiple = false },
                title = { Text("Report User") },
                text = {
                    Column {
                        Text("Select a reason:")
                        ReportReasonItem(
                            text = "Harassment",
                            selected = true,
                            onSelect = { },
                            modifier = Modifier.testTag("reason_harassment")
                        )
                    }
                },
                confirmButton = {
                    Button(
                        onClick = {
                            showMultiple = false
                        },
                        modifier = Modifier.testTag("submit_multiple_report")
                    ) {
                        Text("Submit Report")
                    }
                },
                dismissButton = {
                    Button(onClick = { showMultiple = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (reportCount >= 2) {
            Box(
                modifier = Modifier.testTag("multiple_reports_indicator")
            ) {
                Text("Multiple reports submitted!")
            }
        }
    }
}

@Composable
private fun ReportUserEmptyDescriptionTest() {
    var showDialog by remember { mutableStateOf(false) }
    var showError by remember { mutableStateOf(false) }
    
    Box(
        modifier = Modifier
            .testTag("empty_description_container")
            .fillMaxSize()
    ) {
        Button(
            onClick = { showDialog = true },
            modifier = Modifier.testTag("report_empty_button")
        ) {
            Text("Report User")
        }
        
        if (showDialog) {
            AlertDialog(
                onDismissRequest = { showDialog = false },
                title = { Text("Report User") },
                text = {
                    Column {
                        Text("Custom description is required")
                        TextField(
                            value = "",
                            onValueChange = { },
                            label = { Text("Description *") },
                            modifier = Modifier.testTag("description_required_field")
                        )
                    }
                },
                confirmButton = {
                    Button(
                        onClick = {
                            showDialog = false
                            showError = true
                        },
                        modifier = Modifier.testTag("submit_empty_report")
                    ) {
                        Text("Submit")
                    }
                },
                dismissButton = {
                    Button(onClick = { showDialog = false }) {
                        Text("Cancel")
                    }
                }
            )
        }
        
        if (showError) {
            Box(
                modifier = Modifier.testTag("empty_description_error")
            ) {
                Text("Description cannot be empty!")
            }
        }
    }
}
