# Script to measure code coverage from test cases
param(
    [switch]$Clean = $false,
    [switch]$GenerateReport = $true
)

Write-Host "📊 Code Coverage Measurement Script" -ForegroundColor Cyan
Write-Host "=================================" -ForegroundColor Cyan

if ($Clean) {
    Write-Host "`n🧹 Cleaning previous build..." -ForegroundColor Yellow
    ./gradlew clean
}

Write-Host "`n🔨 Building project with coverage..." -ForegroundColor Yellow
./gradlew assembleDebugAndroidTest

if ($LASTEXITCODE -ne 0) {
    Write-Host "❌ Build failed!" -ForegroundColor Red
    exit 1
}

Write-Host "`n🧪 Running all tests with coverage..." -ForegroundColor Yellow
./gradlew connectedAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.ui.screens.auth.login.LoginScreenMockTest

# Run all test classes
$testClasses = @(
    "com.example.atry.ui.screens.auth.SplashScreenTest",
    "com.example.atry.ui.screens.auth.login.LoginScreenMockTest",
    "com.example.atry.ui.screens.auth.register.RegisterEntryScreenTest",
    "com.example.atry.ui.screens.functionalScreens.home.HomeScreenTest",
    "com.example.atry.ui.screens.functionalScreens.ProfileScreenTest"
)

Write-Host "`n📈 Generating coverage report..." -ForegroundColor Yellow
./gradlew createDebugCoverageReport

if ($LASTEXITCODE -eq 0) {
    $reportPath = "app/build/reports/coverage/debug/index.html"
    if (Test-Path $reportPath) {
        Write-Host "`n✅ Coverage report generated!" -ForegroundColor Green
        Write-Host "📄 Report location: $reportPath" -ForegroundColor Cyan
        Write-Host "`n💡 To view the report, open: $reportPath" -ForegroundColor Yellow
    } else {
        Write-Host "⚠️  Report file not found at expected location" -ForegroundColor Yellow
    }
} else {
    Write-Host "❌ Coverage report generation failed!" -ForegroundColor Red
    exit 1
}

Write-Host "`n✅ Coverage measurement completed!" -ForegroundColor Green




