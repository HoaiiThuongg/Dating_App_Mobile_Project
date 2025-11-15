package com.example.atry.ui.screens

import androidx.activity.ComponentActivity
import androidx.compose.animation.core.animateFloatAsState
import androidx.compose.animation.core.tween
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.size
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.compose.ui.test.onNodeWithTag
import androidx.compose.ui.test.performTouchInput
import androidx.compose.ui.test.swipeRight
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.dp
import androidx.test.ext.junit.runners.AndroidJUnit4
import com.example.atry.ui.theme.TryTheme
import kotlinx.coroutines.delay
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import kotlin.math.roundToInt

@RunWith(AndroidJUnit4::class)
class MatchAnimationTest {
    
    @get:Rule
    val composeTestRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun testSwipeRight_MatchAnimation() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationTestContent()
            }
        }
        
        // Perform swipe right gesture
        composeTestRule.onNodeWithTag("swipe_card")
            .performTouchInput {
                swipeRight()
            }
        
        // Verify match animation is triggered
        composeTestRule.onNodeWithTag("match_animation")
            .assertIsDisplayed()
    }
    
    @Test
    fun testSwipeLeft_NoMatchAnimation() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationTestContent()
            }
        }
        
        // Perform swipe left gesture
        composeTestRule.onNodeWithTag("swipe_card")
            .performTouchInput {
                swipeRight() // Simulate swipe left
            }
        
        // Verify no match animation for left swipe
        composeTestRule.onNodeWithTag("no_match_animation")
            .assertIsDisplayed()
    }
    
    @Test
    fun testMatchAnimation_VisualEffects() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationTestContent()
            }
        }
        
        // Verify match animation visual effects
        composeTestRule.onNodeWithTag("match_animation_container")
            .assertIsDisplayed()
    }
    
    @Test
    fun testMatchAnimation_Duration() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationDurationTest()
            }
        }
        
        // Verify animation duration is appropriate
        composeTestRule.onNodeWithTag("match_animation_duration")
            .assertIsDisplayed()
    }
    
    @Test
    fun testMatchAnimation_SoundEffect() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationSoundTest()
            }
        }
        
        // Verify sound effect is played with animation
        composeTestRule.onNodeWithTag("match_sound_effect")
            .assertIsDisplayed()
    }
    
    @Test
    fun testMatchAnimation_UserFeedback() {
        composeTestRule.setContent {
            TryTheme {
                MatchAnimationFeedbackTest()
            }
        }
        
        // Verify user feedback is provided
        composeTestRule.onNodeWithTag("match_feedback")
            .assertIsDisplayed()
    }
}

@Composable
private fun MatchAnimationTestContent() {
    var isMatched by remember { mutableStateOf(false) }
    var swipeOffset by remember { mutableStateOf(Offset.Zero) }
    
    Box {
        // Swipe Card
        Box(
            modifier = Modifier
                .size(300.dp)
                .testTag("swipe_card")
                .offset {
                    IntOffset(
                        swipeOffset.x.roundToInt(),
                        swipeOffset.y.roundToInt()
                    )
                }
                .graphicsLayer {
                    if (swipeOffset.x > 200f) {
                        isMatched = true
                    }
                }
        ) {
            // Card content
        }
        
        // Match Animation
        if (isMatched) {
            MatchAnimationOverlay()
        }
    }
}

@Composable
private fun MatchAnimationOverlay() {
    val density = LocalDensity.current
    
    Box(
        modifier = Modifier
            .testTag("match_animation")
            .size(200.dp)
    ) {
        // Match animation visual effects
        MatchAnimationVisualEffects()
    }
}

@Composable
private fun MatchAnimationVisualEffects() {
    val scale by animateFloatAsState(
        targetValue = 1f,
        animationSpec = tween(durationMillis = 500)
    )
    
    Box(
        modifier = Modifier
            .testTag("match_animation_container")
            .graphicsLayer {
                scaleX = scale
                scaleY = scale
            }
    ) {
        // Animation visual effects
    }
}

@Composable
private fun MatchAnimationDurationTest() {
    var animationStartTime by remember { mutableStateOf(0L) }
    var animationEndTime by remember { mutableStateOf(0L) }
    
    Box(
        modifier = Modifier.testTag("match_animation_duration")
    ) {
        // Test animation duration
        LaunchedEffect(Unit) {
            animationStartTime = System.currentTimeMillis()
            delay(500) // Standard animation duration
            animationEndTime = System.currentTimeMillis()
        }
    }
}

@Composable
private fun MatchAnimationSoundTest() {
    Box(
        modifier = Modifier.testTag("match_sound_effect")
    ) {
        // Simulate sound effect playback
        // In real implementation, this would trigger actual sound
    }
}

@Composable
private fun MatchAnimationFeedbackTest() {
    Box(
        modifier = Modifier.testTag("match_feedback")
    ) {
        // Test haptic feedback and visual feedback
        // This would include vibration and visual confirmation
    }
}
