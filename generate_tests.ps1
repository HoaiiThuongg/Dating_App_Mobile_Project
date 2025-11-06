# Script tự động generate test templates
param(
    [string]$Type = "all",  # "viewmodel", "screen", "utility", "all"
    [string]$OutputDir = "app/src/test/java/com/example/atry"
)

Write-Host "🚀 Test Generator - Tự động tạo test templates" -ForegroundColor Cyan
Write-Host "Type: $Type" -ForegroundColor Yellow

# ViewModels cần test
$viewModels = @(
    "RegisterViewModel",
    "UserInfoSetupViewModel", 
    "HomeViewModel",
    "ChatViewModel",
    "MessageViewModel",
    "MyProfileViewModel",
    "EditProfileViewModel",
    "LikeYouViewModel",
    "DetailedProfileViewModel",
    "MatchDetailViewModel",
    "SwipeViewModel",
    "SendViewModel",
    "GeminiViewModel",
    "AiViewModel",
    "QRViewModel",
    "AlertViewModel",
    "NotificationViewModel",
    "WarningCardViewModel"
)

# Screens cần test
$screens = @(
    "EmailInputScreen",
    "OtpInputScreen",
    "InfoInput1",
    "InfoInput2",
    "HobbiesInput",
    "PicturesInput",
    "PasswordInputScreen",
    "ForgetPassword",
    "MessageScreen",
    "LikeYouScreen",
    "MyProfileScreen",
    "ChatScreen",
    "AiChatScreen",
    "DetailedProfileScreen",
    "EditProfileScreen",
    "SettingsScreen",
    "SupportScreen",
    "DevelopingScreen",
    "UserQrScreen"
)

function Generate-ViewModelTest {
    param([string]$ViewModelName)
    
    $package = if ($ViewModelName -match "auth") { "viewmodel.auth" } 
               elseif ($ViewModelName -match "composal") { "viewmodel.composal" }
               else { "viewmodel.functional" }
    
    $testContent = @"
package com.example.atry.$($package.Replace('/', '.').Replace('\', '.').ToLower())

import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.test.runTest
import org.junit.Test
import org.junit.Assert.*
import org.junit.Before
import org.mockito.Mock
import org.mockito.MockitoAnnotations
import org.mockito.kotlin.whenever

@OptIn(ExperimentalCoroutinesApi::class)
class ${ViewModelName}Test {
    
    @Mock
    private lateinit var mockDependency: Any // TODO: Replace with actual dependency type
    
    private lateinit var viewModel: $ViewModelName
    
    @Before
    fun setUp() {
        MockitoAnnotations.openMocks(this)
        // TODO: Initialize viewModel with mocked dependencies
        // viewModel = $ViewModelName(mockDependency)
    }
    
    @Test
    fun `initial state is correct`() = runTest {
        // Arrange
        // Act
        // val state = viewModel.state.first()
        
        // Assert
        // assertFalse("Initial state should not be loading", state.isLoading)
    }
    
    @Test
    fun `action success updates state correctly`() = runTest {
        // Arrange
        // whenever(mockDependency.someMethod()).thenReturn(mockResult)
        
        // Act
        // viewModel.someAction()
        
        // Assert
        // assertEquals(expected, actual)
    }
    
    @Test
    fun `action failure shows error`() = runTest {
        // Arrange
        // whenever(mockDependency.someMethod()).thenThrow(Exception("Error"))
        
        // Act
        // viewModel.someAction()
        
        // Assert
        // assertNotNull(viewModel.state.value.error)
    }
    
    @Test
    fun `loading state is set during action`() = runTest {
        // Arrange
        // Act
        // viewModel.someAction()
        
        // Assert
        // assertTrue("State should be loading", viewModel.state.value.isLoading)
    }
    
    @Test
    fun `edge case null input is handled`() = runTest {
        // Arrange
        // Act
        // viewModel.someAction(null)
        
        // Assert
        // assertNotNull(viewModel.state.value.error)
    }
}
"@
    
    $dir = "$OutputDir/$($package.Replace('.', '/'))"
    if (-not (Test-Path $dir)) {
        New-Item -ItemType Directory -Force -Path $dir | Out-Null
    }
    $file = "$dir/${ViewModelName}Test.kt"
    $testContent | Out-File -FilePath $file -Encoding UTF8 -Force
    Write-Host "✅ Generated: $file" -ForegroundColor Green
}

function Generate-ScreenTest {
    param([string]$ScreenName)
    
    $package = if ($ScreenName -match "auth|register|login|forget") { "ui.screens.auth" }
               elseif ($ScreenName -match "register") { "ui.screens.auth.register" }
               elseif ($ScreenName -match "forget") { "ui.screens.auth.forgetPassword" }
               else { "ui.screens.functionalScreens" }
    
    $testContent = @"
package com.example.atry.$($package.Replace('/', '.').Replace('\', '.').ToLower())

import androidx.activity.ComponentActivity
import androidx.compose.ui.test.junit4.createAndroidComposeRule
import androidx.test.ext.junit.runners.AndroidJUnit4
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
class ${ScreenName}Test {
    
    @get:Rule
    val composeRule = createAndroidComposeRule<ComponentActivity>()
    
    @Test
    fun `screen displays correctly`() {
        composeRule.setContent {
            $ScreenName(/* TODO: Add parameters */)
        }
        
        // TODO: Add assertions
        // composeRule.onNodeWithText("Expected Text").assertIsDisplayed()
    }
    
    @Test
    fun `user interactions work correctly`() {
        composeRule.setContent {
            $ScreenName(/* TODO: Add parameters */)
        }
        
        // TODO: Test user interactions
        // composeRule.onNodeWithTag("button").performClick()
    }
    
    @Test
    fun `loading state displays correctly`() {
        composeRule.setContent {
            $ScreenName(/* TODO: Add parameters with loading state */)
        }
        
        // TODO: Assert loading UI
        // composeRule.onNodeWithText("Loading...").assertIsDisplayed()
    }
    
    @Test
    fun `error state displays correctly`() {
        composeRule.setContent {
            $ScreenName(/* TODO: Add parameters with error state */)
        }
        
        // TODO: Assert error UI
        // composeRule.onNodeWithText("Error message").assertIsDisplayed()
    }
}
"@
    
    $dir = "$($OutputDir.Replace('test', 'androidTest'))/$($package.Replace('.', '/'))"
    New-Item -ItemType Directory -Force -Path $dir | Out-Null
    $file = "$dir/${ScreenName}Test.kt"
    $testContent | Out-File -FilePath $file -Encoding UTF8
    Write-Host "✅ Generated: $file" -ForegroundColor Green
}

# Generate tests
if ($Type -eq "all" -or $Type -eq "viewmodel") {
    Write-Host "`n📝 Generating ViewModel tests..." -ForegroundColor Cyan
    foreach ($vm in $viewModels) {
        try {
            Generate-ViewModelTest -ViewModelName $vm
        } catch {
            Write-Host "⚠️  Error generating $vm : $_" -ForegroundColor Yellow
        }
    }
}

if ($Type -eq "all" -or $Type -eq "screen") {
    Write-Host "`n📝 Generating Screen tests..." -ForegroundColor Cyan
    foreach ($screen in $screens) {
        Generate-ScreenTest -ScreenName $screen
    }
}

Write-Host "`n✨ Done! Generated test templates." -ForegroundColor Green
Write-Host "⚠️  Remember to:" -ForegroundColor Yellow
Write-Host "   1. Fill in TODO comments" -ForegroundColor Yellow
Write-Host "   2. Add proper dependencies" -ForegroundColor Yellow
Write-Host "   3. Implement actual test logic" -ForegroundColor Yellow
Write-Host "   4. Run tests to verify" -ForegroundColor Yellow

