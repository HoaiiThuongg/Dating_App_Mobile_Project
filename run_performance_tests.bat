@echo off
REM Batch file để chạy Performance Tests (không cần PowerShell execution policy)
REM Usage: run_performance_tests.bat [test_type]
REM test_type: all, startup, render, scroll, viewmodel, memory

set TEST_TYPE=%1
if "%TEST_TYPE%"=="" set TEST_TYPE=all

echo 🚀 Running Performance Tests...
echo.

REM Check if device is connected
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected. Please connect a device or start an emulator.
    exit /b 1
) else (
    echo ✅ Device connected
)

REM Check if gradlew exists
if not exist "gradlew.bat" (
    echo ❌ gradlew.bat not found!
    exit /b 1
)

REM Clean build
echo 🧹 Cleaning build...
call gradlew.bat clean

REM Build test APK
echo 🔨 Building test APK...
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo ❌ Build failed!
    exit /b 1
)

REM Run tests based on type
if /i "%TEST_TYPE%"=="startup" (
    echo 📊 Running App Startup Benchmarks...
    echo ⚠️  Lưu ý: Macrobenchmark yêu cầu non-debuggable build
    echo 💡 Đang build benchmark variant...
    call gradlew.bat assembleBenchmark installBenchmark
    if errorlevel 1 (
        echo ❌ Build failed!
        exit /b 1
    )
    call gradlew.bat connectedBenchmarkAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
) else if /i "%TEST_TYPE%"=="render" (
    echo 📊 Running Screen Render Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
) else if /i "%TEST_TYPE%"=="scroll" (
    echo 📊 Running Scroll Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest
) else if /i "%TEST_TYPE%"=="viewmodel" (
    echo 📊 Running ViewModel Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest
) else if /i "%TEST_TYPE%"=="memory" (
    echo 📊 Running Memory Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest
) else if /i "%TEST_TYPE%"=="all" (
    echo 📊 Running All Performance Tests...
    echo.
    
    echo 1️⃣ App Startup Benchmarks...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
    
    echo.
    echo 2️⃣ Screen Render Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
    
    echo.
    echo 3️⃣ Scroll Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest
    
    echo.
    echo 4️⃣ ViewModel Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest
    
    echo.
    echo 5️⃣ Memory Performance Tests...
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest
) else (
    echo ❌ Invalid test type: %TEST_TYPE%
    echo Valid types: all, startup, render, scroll, viewmodel, memory
    exit /b 1
)

if errorlevel 1 (
    echo.
    echo ❌ Performance tests failed!
    exit /b 1
) else (
    echo.
    echo ✅ Performance tests completed successfully!
    echo.
    echo 📊 View results:
    echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
    echo   - Test Reports: app\build\reports\androidTests\
)

