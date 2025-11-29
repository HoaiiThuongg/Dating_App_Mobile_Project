package com.example.atry.ui.screens.functionalScreens.home.homeComponents

import android.media.MediaPlayer
import androidx.compose.animation.AnimatedVisibility
import androidx.compose.animation.EnterTransition
import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.FastOutSlowInEasing
import androidx.compose.animation.core.LinearOutSlowInEasing
import androidx.compose.animation.core.tween
import androidx.compose.animation.fadeOut
import androidx.compose.foundation.Image
import androidx.compose.foundation.gestures.detectDragGestures
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Card
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.*
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.rotate
import androidx.compose.ui.graphics.graphicsLayer
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.platform.testTag
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import com.example.atry.R
import com.example.atry.backend.User
import com.example.atry.backend.UserProfile
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.InfoBox
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.InfoListBox
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.ProfileImage
import com.example.atry.ui.screens.functionalScreens.home.homeComponents.ProfileInfo
import com.example.atry.viewmodel.functional.HomeViewModel
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import kotlin.math.abs

@Composable
fun SwipeCard(
    modifier: Modifier,
    user: User,
    onSwipeLeft: () -> Unit,
    onSwipeRight: () -> Unit,
    homeViewModel: HomeViewModel= viewModel()
) {
    val scope = rememberCoroutineScope()
    val offsetX = remember { Animatable(0f) }
    val offsetY = remember { Animatable(0f) }
    var visible by remember { mutableStateOf(true) }
    val scrollState = rememberScrollState()

    var showLeftHeart by remember { mutableStateOf(false) }
    var showRightHeart by remember { mutableStateOf(false) }

    val screenWidth = 1000f // fix cứng, sau có thể lấy LocalConfiguration

    LaunchedEffect(user.userId) {
        homeViewModel.getUserProfileById(user.userId)
    }
    val profileCache by homeViewModel.profileCache.collectAsState()
    val profile = profileCache[user.userId]


    Box(
        modifier = Modifier.fillMaxSize()
    ) {
        if (visible) {
            Card(
                modifier = modifier
                    .fillMaxSize()
                    .offset { IntOffset(offsetX.value.toInt(), offsetY.value.toInt()) }
                    .rotate(offsetX.value / 30)
                    .clip(RoundedCornerShape(20.dp))
                    .testTag("swipe_card:${user.userId}")
                    .pointerInput(Unit) {
                        detectDragGestures(
                            onDragEnd = {
                                val threshold = screenWidth * 0.25f
                                when {
                                    abs(offsetX.value) > threshold -> {
                                        val targetX =
                                            if (offsetX.value > 0) screenWidth else -screenWidth
                                        scope.launch {
                                            offsetX.animateTo(targetX, tween(300))
                                            visible = false
                                            if (targetX > 0) {
                                                showRightHeart = true
                                                onSwipeRight()
                                            } else {
                                                showLeftHeart = true
                                                onSwipeLeft()
                                            }
                                            // reset icon sau 1.2s
                                            delay(1200)
                                            showLeftHeart = false
                                            showRightHeart = false
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
                    containerColor = MaterialTheme.colorScheme.surfaceContainer
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
                            .height(682.dp)
                            .clip(RoundedCornerShape(20.dp))
                    ) {

                        ProfileImage(user)
                        ProfileInfo(
                            modifier = Modifier
                                .align(Alignment.BottomStart)
                                .testTag("profile_info:${user.userId}"),
                            user,
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
                        InfoBox(title = stringResource(id = R.string.location), content = profile?.location?:"Không muốn chia sẻ")
                        InfoBox(title = stringResource(id = R.string.bio), content = profile?.bio?:"Không muốn chia sẻ")
                        InfoBox(title = stringResource(id = R.string.life_style), content = profile?.lifestyle?:"Không muốn chia sẻ")
                        InfoListBox(title = stringResource(id = R.string.hobbies),list = profile?.interests)
                    }
                }
            }
        }
        // Trái tim

        AnimatedHeart(
            visible = showLeftHeart,
            painter = painterResource(id = R.drawable.dislike_heart),
            modifier = Modifier
                .align(Alignment.CenterStart),
            soundResId = R.raw.dislike
        )

        //  Tim đỏ (bên phải)
        AnimatedHeart(
            visible = showRightHeart,
            painter = painterResource(id = R.drawable.like_heart),
            modifier = Modifier
                .align(Alignment.CenterEnd),
            soundResId = R.raw.like
        )
    }

}


@Composable
fun AnimatedHeart(
    visible: Boolean,
    painter: Painter,
    modifier: Modifier = Modifier,
    soundResId: Int
) {
    val context = LocalContext.current

    val alpha = remember { Animatable(1f) }
    val offsetY = remember { Animatable(0f) }

    LaunchedEffect(visible) {
        if (visible) {
            // 1. Reset trạng thái
            alpha.snapTo(1f)
            offsetY.snapTo(0f)

            // 2. Chạy Animation (mượt mà bằng GPU)
            launch {
                offsetY.animateTo(
                    targetValue = -250f,
                    animationSpec = tween(durationMillis = 1500, easing = LinearOutSlowInEasing)
                )
            }
            launch {
                alpha.animateTo(
                    targetValue = 0f,
                    animationSpec = tween(durationMillis = 1500, easing = FastOutSlowInEasing)
                )
            }

            // 3. Xử lý Âm thanh
            val mediaPlayer = MediaPlayer.create(context, soundResId)
            mediaPlayer?.start()
            mediaPlayer?.setOnCompletionListener { it.release() }
        }
    }

    AnimatedVisibility(
        visible = visible,
        // **QUAN TRỌNG:** Loại bỏ animation Enter, chỉ dùng animation Exit.
        enter = EnterTransition.None,
        exit = fadeOut(tween(500)),

        // **QUAN TRỌNG:** Dùng clipToBounds để xử lý ranh giới container
        modifier = modifier
            .graphicsLayer( // Dùng GPU cho animation
                alpha = alpha.value,
                translationY = offsetY.value
            )
    ) {
        Image(
            painter = painter,
            contentDescription = null,
            modifier = Modifier
                .size(100.dp)
        )
    }
}