import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.tween
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Card
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.rotate
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalConfiguration
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.dp
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.InfoBox
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.ProfileImage
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.ProfileInfo
import com.example.atry.ui.viewmodel.Profile
import kotlinx.coroutines.launch
import kotlin.math.abs

@Composable
fun SwipeCard(
    modifier: Modifier,
    profile: Profile,
    onSwipeLeft: () -> Unit,
    onSwipeRight: () -> Unit
) {
    val scope = rememberCoroutineScope()
    val offsetX = remember { Animatable(0f) }
    val offsetY = remember { Animatable(0f) }
    var visible by remember { mutableStateOf(true) }

    val scrollState = rememberScrollState()

    val screenWidth = 1000f // fix cứng, sau có thể lấy LocalConfiguration

    if (visible) {
        Card(
            modifier = modifier
                .fillMaxSize()
                .offset { IntOffset(offsetX.value.toInt(), offsetY.value.toInt()) }
                .rotate(offsetX.value / 30)
//                .border(
//                    width = 2.dp,
//                    brush = Brush.linearGradient(
//                        colors = listOf(Color(0xFFBE55BF),Color(0xFFFF9DD3)),
//                        start = Offset(0f, 0f),
//                        end = Offset(400f, 400f)
//                    ),
//                    shape = RoundedCornerShape(20.dp)
//                )
                .clip(RoundedCornerShape(20.dp))
                .pointerInput(Unit) {
                    detectDragGestures(
                        onDragEnd = {
                            val threshold = screenWidth * 0.25f
                            when {
                                abs(offsetX.value) > threshold -> {
                                    val targetX = if (offsetX.value > 0) screenWidth else -screenWidth
                                    scope.launch {
                                        offsetX.animateTo(targetX, tween(300))
                                        visible = false
                                        if (targetX > 0) onSwipeRight() else onSwipeLeft()
                                    }
                                }
                                else -> {
                                    scope.launch {
                                        offsetX.animateTo(0f, tween(200))
                                        offsetY.animateTo(0f, tween(200))
                                    }
                                }
                            }
                        }
                    ) { change, dragAmount ->
                        change.consume()
                        scope.launch {
                            if (abs(dragAmount.x) > abs(dragAmount.y)) {
                                offsetX.snapTo(offsetX.value + dragAmount.x)
                                offsetY.snapTo(offsetY.value + dragAmount.y)
                            }
                        }
                    }
                },
            shape = RoundedCornerShape(16.dp),
            colors = androidx.compose.material3.CardDefaults.cardColors(
                containerColor = Color(0xFFF2f2F2) // 👈 nền card trong suốt
            )
        ) {
            Column(
                modifier = Modifier
                    .verticalScroll(scrollState)
                    .padding(bottom = 10.dp)
            ) {
                // ảnh
                Box(
                    modifier = Modifier
                        .fillMaxWidth()
                        .height(670.dp)
                        .clip(RoundedCornerShape(16.dp))
                ) {

                    ProfileImage()
                    ProfileInfo(
                        modifier = Modifier.align(Alignment.BottomStart),
                        profile
                    )
                }

                // thông tin profile lấy từ viewModel
                Column(
                    verticalArrangement = Arrangement.spacedBy(20.dp),
                    modifier = Modifier
                        .offset(y = 10.dp)
                        .padding(10.dp)
                ) {
                    InfoBox(title = "My bio", content = profile.bio)
                    InfoBox(title = "Về tôi", content = profile.zodiac)
                    InfoBox(title = "Sở thích", content = profile.hobbies)
                    InfoBox(title = "Châm ngôn sống", content = profile.motto)
                }
            }
        }
    }
}


