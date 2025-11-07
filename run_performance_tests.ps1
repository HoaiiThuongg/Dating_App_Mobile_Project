# Script để chạy Performance Tests
# Usage: .\run_performance_tests.ps1 [test_type]
# test_type: all, startup, render, scroll, viewmodel, memory

param(
    [string]$TestType = "all"
)

Write-Host "🚀 Running Performance Tests..." -ForegroundColor Green
Write-Host ""

# Check if device is connected
$devices = adb devices
if ($devices -match "device$") {
    Write-Host "✅ Device connected" -ForegroundColor Green
} else {
    Write-Host "❌ No device connected. Please connect a device or start an emulator." -ForegroundColor Red
    exit 1
}

# Clean build
Write-Host "🧹 Cleaning build..." -ForegroundColor Yellow
.\gradlew clean

# Build test APK
Write-Host "🔨 Building test APK..." -ForegroundColor Yellow
.\gradlew assembleDebugAndroidTest

if ($LASTEXITCODE -ne 0) {
    Write-Host "❌ Build failed!" -ForegroundColor Red
    exit 1
}

# Run tests based on type
switch ($TestType.ToLower()) {
    "startup" {
        Write-Host "📊 Running App Startup Benchmarks..." -ForegroundColor Cyan
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
    }
    "render" {
        Write-Host "📊 Running Screen Render Performance Tests..." -ForegroundColor Cyan
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
    }
    "scroll" {
        Write-Host "📊 Running Scroll Performance Tests..." -ForegroundColor Cyan
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest
    }
    "viewmodel" {
        Write-Host "📊 Running ViewModel Performance Tests..." -ForegroundColor Cyan
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest
    }
    "memory" {
        Write-Host "📊 Running Memory Performance Tests..." -ForegroundColor Cyan
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest
    }
    "all" {
        Write-Host "📊 Running All Performance Tests..." -ForegroundColor Cyan
        Write-Host ""
        
        Write-Host "1️⃣ App Startup Benchmarks..." -ForegroundColor Yellow
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
        
        Write-Host ""
        Write-Host "2️⃣ Screen Render Performance Tests..." -ForegroundColor Yellow
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
        
        Write-Host ""
        Write-Host "3️⃣ Scroll Performance Tests..." -ForegroundColor Yellow
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest
        
        Write-Host ""
        Write-Host "4️⃣ ViewModel Performance Tests..." -ForegroundColor Yellow
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest
        
        Write-Host ""
        Write-Host "5️⃣ Memory Performance Tests..." -ForegroundColor Yellow
        .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest
    }
    default {
        Write-Host "❌ Invalid test type: $TestType" -ForegroundColor Red
        Write-Host "Valid types: all, startup, render, scroll, viewmodel, memory" -ForegroundColor Yellow
        exit 1
    }
}

if ($LASTEXITCODE -eq 0) {
    Write-Host ""
    Write-Host "✅ Performance tests completed successfully!" -ForegroundColor Green
    Write-Host ""
    Write-Host "📊 View results:" -ForegroundColor Cyan
    Write-Host "  - Macrobenchmark: app/build/outputs/connected_android_test_additional_output/" -ForegroundColor White
    Write-Host "  - Test Reports: app/build/reports/androidTests/" -ForegroundColor White
} else {
    Write-Host ""
    Write-Host "❌ Performance tests failed!" -ForegroundColor Red
    exit 1
}

