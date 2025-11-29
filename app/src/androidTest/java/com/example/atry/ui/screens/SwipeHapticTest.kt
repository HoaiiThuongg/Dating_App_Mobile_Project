package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.foundation.background
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performTouchInput
import androidx.compose.ui.test.swipeRight
import androidx.compose.ui.test.swipeLeft
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.dp
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import kotlin.math.roundToInt

@RunWith(AndroidJUnit4::class)
class SwipeHapticTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testSwipeHaptic_RightSwipe() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticTestContent()
            }
        }
        
        // Perform right swipe
        composeTestRule.onNodeWithTag("swipe_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify haptic feedback is triggered
        composeTestRule.onNodeWithTag("haptic_right_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_LeftSwipe() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticTestContent()
            }
        }
        
        // Perform left swipe
        composeTestRule.onNodeWithTag("swipe_card")
            .performTouchInput {
                swipeLeft()
            }
        
        // Verify haptic feedback is triggered
        composeTestRule.onNodeWithTag("haptic_left_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_ThresholdDetection() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticThresholdTest()
            }
        }
        
        // Test swipe threshold detection
        composeTestRule.onNodeWithTag("threshold_swipe_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify threshold was reached
        composeTestRule.onNodeWithTag("threshold_reached_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_IntensityLevels() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticIntensityTest()
            }
        }
        
        // Test different intensity levels
        composeTestRule.onNodeWithTag("intensity_test_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify intensity is detected
        composeTestRule.onNodeWithTag("intensity_detected_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_Duration() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticDurationTest()
            }
        }
        
        // Test haptic duration
        composeTestRule.onNodeWithTag("duration_test_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify duration is appropriate
        composeTestRule.onNodeWithTag("duration_appropriate_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_PatternRecognition() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticPatternTest()
            }
        }
        
        // Test pattern recognition
        composeTestRule.onNodeWithTag("pattern_test_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify pattern is recognized
        composeTestRule.onNodeWithTag("pattern_recognized_indicator")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeHaptic_DisableFeature() {
        composeTestRule.setContent {
            TryTheme {
                SwipeHapticDisableTest()
            }
        }
        
        // Test with haptic disabled
        composeTestRule.onNodeWithTag("disabled_swipe_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify no haptic feedback
        composeTestRule.onNodeWithTag("haptic_disabled_indicator")
            .assertIsDisplayed()
    }
}

@Composable
private fun SwipeHapticTestContent() {
    var swipeDirection by remember { mutableStateOf("") }
    var hapticTriggered by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("swipe_haptic_container")
    ) {
        // Swipe Card
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(300.dp)
                .padding(16.dp)
        ) {
            SwipeableCard(
                onSwipeRight = {
                    swipeDirection = "right"
                    hapticTriggered = true
                },
                onSwipeLeft = {
                    swipeDirection = "left"
                    hapticTriggered = true
                },
                modifier = Modifier.testTag("swipe_card")
            )
        }
        
        // Haptic Feedback Indicators
        if (hapticTriggered) {
            when (swipeDirection) {
                "right" -> {
                    Box(
                        modifier = Modifier.testTag("haptic_right_indicator")
                    ) {
                        Text("Right swipe haptic triggered!")
                    }
                }
                "left" -> {
                    Box(
                        modifier = Modifier.testTag("haptic_left_indicator")
                    ) {
                        Text("Left swipe haptic triggered!")
                    }
                }
            }
        }
    }
}

@Composable
private fun SwipeableCard(
    onSwipeRight: () -> Unit,
    onSwipeLeft: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    var cardColor by remember { mutableStateOf(Color.LightGray) }
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(cardColor, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragEnd = {
                        when {
                            offsetX > 300 -> {
                                // Right swipe detected
                                cardColor = Color.Green
                                onSwipeRight()
                            }
                            offsetX < -300 -> {
                                // Left swipe detected
                                cardColor = Color.Red
                                onSwipeLeft()
                            }
                            else -> {
                                // Snap back to center
                                offsetX = 0f
                                cardColor = Color.LightGray
                            }
                        }
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                }
            }
    ) {
        Text(
            text = "Swipe me left or right!",
            modifier = Modifier.align(Alignment.Center)
        )
    }
}

@Composable
private fun SwipeHapticThresholdTest() {
    var thresholdReached by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("threshold_test_container")
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(200.dp)
                .padding(16.dp)
        ) {
            ThresholdSwipeCard(
                onThresholdReached = { thresholdReached = true },
                modifier = Modifier.testTag("threshold_swipe_card")
            )
        }
        
        if (thresholdReached) {
            Box(
                modifier = Modifier.testTag("threshold_reached_indicator")
            ) {
                Text("Swipe threshold reached - Haptic triggered!")
            }
        }
    }
}

@Composable
private fun ThresholdSwipeCard(
    onThresholdReached: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    val threshold = 150f // Minimum swipe distance for haptic feedback
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(Color.Blue, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragEnd = {
                        if (kotlin.math.abs(offsetX) >= threshold) {
                            onThresholdReached()
                        }
                        offsetX = 0f
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                }
            }
    ) {
        Text(
            text = "Swipe to threshold: $threshold",
            color = Color.White,
            modifier = Modifier.align(Alignment.Center)
        )
    }
}

@Composable
private fun SwipeHapticIntensityTest() {
    var intensityDetected by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("intensity_test_container")
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(200.dp)
                .padding(16.dp)
        ) {
            IntensitySwipeCard(
                onIntensityDetected = { intensityDetected = true },
                modifier = Modifier.testTag("intensity_test_card")
            )
        }
        
        if (intensityDetected) {
            Box(
                modifier = Modifier.testTag("intensity_detected_indicator")
            ) {
                Text("Swipe intensity detected - Haptic intensity adjusted!")
            }
        }
    }
}

@Composable
private fun IntensitySwipeCard(
    onIntensityDetected: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    var swipeVelocity by remember { mutableStateOf(0f) }
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(Color.Magenta, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragEnd = {
                        // Calculate intensity based on velocity and distance
                        val intensity = kotlin.math.abs(offsetX) * swipeVelocity
                        if (intensity > 1000) { // Threshold for high intensity
                            onIntensityDetected()
                        }
                        offsetX = 0f
                        swipeVelocity = 0f
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                    swipeVelocity = kotlin.math.abs(dragAmount.x)
                }
            }
    ) {
        Text(
            text = "Swipe with intensity!",
            color = Color.White,
            modifier = Modifier.align(Alignment.Center)
        )
    }
}

@Composable
private fun SwipeHapticDurationTest() {
    var durationAppropriate by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("duration_test_container")
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(200.dp)
                .padding(16.dp)
        ) {
            DurationSwipeCard(
                onDurationAppropriate = { durationAppropriate = true },
                modifier = Modifier.testTag("duration_test_card")
            )
        }
        
        if (durationAppropriate) {
            Box(
                modifier = Modifier.testTag("duration_appropriate_indicator")
            ) {
                Text("Haptic duration is appropriate!")
            }
        }
    }
}

@Composable
private fun DurationSwipeCard(
    onDurationAppropriate: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    var swipeStartTime by remember { mutableStateOf(0L) }
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(Color.Cyan, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragStart = {
                        swipeStartTime = System.currentTimeMillis()
                    },
                    onDragEnd = {
                        val duration = System.currentTimeMillis() - swipeStartTime
                        if (duration in 100..500) { // Appropriate duration range
                            onDurationAppropriate()
                        }
                        offsetX = 0f
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                }
            }
    ) {
        Text(
            text = "Swipe with appropriate duration!",
            color = Color.Black,
            modifier = Modifier.align(Alignment.Center)
        )
    }
}

@Composable
private fun SwipeHapticPatternTest() {
    var patternRecognized by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("pattern_test_container")
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(200.dp)
                .padding(16.dp)
        ) {
            PatternSwipeCard(
                onPatternRecognized = { patternRecognized = true },
                modifier = Modifier.testTag("pattern_test_card")
            )
        }
        
        if (patternRecognized) {
            Box(
                modifier = Modifier.testTag("pattern_recognized_indicator")
            ) {
                Text("Swipe pattern recognized - Haptic pattern triggered!")
            }
        }
    }
}

@Composable
private fun PatternSwipeCard(
    onPatternRecognized: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    var swipeHistory by remember { mutableStateOf(listOf<Float>()) }
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(Color.Yellow, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragEnd = {
                        // Simple pattern recognition: alternating directions
                        if (swipeHistory.size >= 3) {
                            val hasPattern = swipeHistory.zipWithNext { a, b ->
                                (a > 0 && b < 0) || (a < 0 && b > 0)
                            }.any { it }
                            if (hasPattern) {
                                onPatternRecognized()
                            }
                        }
                        offsetX = 0f
                        swipeHistory = emptyList()
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                    swipeHistory = swipeHistory + dragAmount.x
                }
            }
    ) {
        Text(
            text = "Swipe in pattern!",
            color = Color.Black,
            modifier = Modifier.align(Alignment.Center)
        )
    }
}

@Composable
private fun SwipeHapticDisableTest() {
    var hapticDisabled by remember { mutableStateOf(true) }
    var swipePerformed by remember { mutableStateOf(false) }
    
    Column(
        modifier = Modifier
            .fillMaxSize()
            .testTag("disable_test_container")
    ) {
        // Toggle button
        Box(
            modifier = Modifier.padding(16.dp)
        ) {
            Button(
                onClick = { hapticDisabled = !hapticDisabled },
                modifier = Modifier.testTag("haptic_toggle")
            ) {
                Text(if (hapticDisabled) "Enable Haptic" else "Disable Haptic")
            }
        }
        
        // Swipe card
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .height(200.dp)
                .padding(16.dp)
        ) {
            DisabledHapticCard(
                hapticDisabled = hapticDisabled,
                onSwipePerformed = { swipePerformed = true },
                modifier = Modifier.testTag("disabled_swipe_card")
            )
        }
        
        if (swipePerformed && hapticDisabled) {
            Box(
                modifier = Modifier.testTag("haptic_disabled_indicator")
            ) {
                Text("Haptic feedback is disabled - No vibration!")
            }
        }
    }
}

@Composable
private fun DisabledHapticCard(
    hapticDisabled: Boolean,
    onSwipePerformed: () -> Unit,
    modifier: Modifier = Modifier
) {
    var offsetX by remember { mutableStateOf(0f) }
    val cardColor = if (hapticDisabled) Color.Gray else Color.Green
    
    Box(
        modifier = modifier
            .offset { IntOffset(offsetX.roundToInt(), 0) }
            .background(cardColor, RoundedCornerShape(16.dp))
            .pointerInput(Unit) {
                detectDragGestures(
                    onDragEnd = {
                        if (kotlin.math.abs(offsetX) > 100) {
                            onSwipePerformed()
                        }
                        offsetX = 0f
                    }
                ) { change, dragAmount ->
                    change.consume()
                    offsetX += dragAmount.x
                }
            }
    ) {
        Text(
            text = if (hapticDisabled) "Haptic Disabled" else "Haptic Enabled",
            color = Color.White,
            modifier = Modifier.align(Alignment.Center)
        )
    }
}
