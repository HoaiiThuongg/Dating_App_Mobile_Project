# Script to run all UI tests and generate coverage report
param(
    [switch]$Clean = $false
)

Write-Host "🧪 Running All UI Tests and Generating Coverage Report" -ForegroundColor Cyan
Write-Host "=====================================================" -ForegroundColor Cyan
Write-Host ""

if ($Clean) {
    Write-Host "🧹 Cleaning previous build..." -ForegroundColor Yellow
    ./gradlew clean
    if ($LASTEXITCODE -ne 0) {
        Write-Host "❌ Clean failed!" -ForegroundColor Red
        exit 1
    }
}

Write-Host "🔨 Building project..." -ForegroundColor Yellow
./gradlew assembleDebugAndroidTest
if ($LASTEXITCODE -ne 0) {
    Write-Host "❌ Build failed!" -ForegroundColor Red
    exit 1
}

Write-Host "`n🧪 Running all UI tests..." -ForegroundColor Yellow

# Run all test classes
$testClasses = @(
    "com.example.atry.ui.screens.auth.SplashScreenTest",
    "com.example.atry.ui.screens.auth.login.LoginScreenMockTest",
    "com.example.atry.ui.screens.auth.register.RegisterEntryScreenTest",
    "com.example.atry.ui.screens.auth.register.ProfileCreationTest",
    "com.example.atry.ui.screens.functionalScreens.home.HomeScreenTest",
    "com.example.atry.ui.screens.functionalScreens.home.HomeScreenSwipeTest",
    "com.example.atry.ui.screens.functionalScreens.home.MenuNavigationTest",
    "com.example.atry.ui.screens.functionalScreens.MessageScreenTest",
    "com.example.atry.ui.screens.functionalScreens.chat.ChatScreenTest",
    "com.example.atry.ui.screens.functionalScreens.LikeYouScreenTest",
    "com.example.atry.ui.screens.functionalScreens.MyProfileScreenTest",
    "com.example.atry.ui.screens.functionalScreens.SettingsScreenTest",
    "com.example.atry.ui.screens.functionalScreens.EditProfileScreenTest",
    "com.example.atry.ui.screens.functionalScreens.SupportScreenTest",
    "com.example.atry.ui.screens.functionalScreens.AiChatScreenTest",
    "com.example.atry.ui.screens.functionalScreens.DetailedProfileScreenTest",
    "com.example.atry.ui.screens.functionalScreens.QRCodeTest",
    "com.example.atry.ui.screens.functionalScreens.NotificationScreenTest",
    "com.example.atry.ui.screens.functionalScreens.ProfileScreenTest",
    "com.example.atry.ui.screens.functionalScreens.UnmatchTest"
)

$passedTests = @()
$failedTests = @()

foreach ($testClass in $testClasses) {
    Write-Host "  Running: $testClass" -ForegroundColor Cyan
    ./gradlew connectedAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=$testClass 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) {
        $passedTests += $testClass
        Write-Host "    ✅ Passed" -ForegroundColor Green
    } else {
        $failedTests += $testClass
        Write-Host "    ⚠️  Failed or skipped" -ForegroundColor Yellow
    }
}

Write-Host "`n📊 Test Results Summary:" -ForegroundColor Cyan
Write-Host "  ✅ Passed: $($passedTests.Count)" -ForegroundColor Green
Write-Host "  ⚠️  Failed/Skipped: $($failedTests.Count)" -ForegroundColor Yellow

if ($failedTests.Count -gt 0) {
    Write-Host "`n⚠️  Failed/Skipped Tests:" -ForegroundColor Yellow
    foreach ($test in $failedTests) {
        Write-Host "  - $test" -ForegroundColor Yellow
    }
}

Write-Host "`n📈 Generating coverage report..." -ForegroundColor Yellow
./gradlew createDebugCoverageReport

if ($LASTEXITCODE -eq 0) {
    $reportPath = "app/build/outputs/code_coverage/debugAndroidTest/connected/index.html"
    if (Test-Path $reportPath) {
        Write-Host "`n✅ Coverage report generated!" -ForegroundColor Green
        Write-Host "📄 Report location: $reportPath" -ForegroundColor Cyan
        Write-Host "`n💡 To view the report, open: $reportPath in your browser" -ForegroundColor Yellow
    } else {
        Write-Host "⚠️  Report file not found at expected location" -ForegroundColor Yellow
    }
} else {
    Write-Host "❌ Coverage report generation failed!" -ForegroundColor Red
}

Write-Host "`n✅ All tests completed!" -ForegroundColor Green


