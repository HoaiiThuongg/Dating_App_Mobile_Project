@echo off
REM Script để chạy Macrobenchmark tests với benchmark variant
REM Usage: run_macrobenchmark.bat

echo 🚀 Running Macrobenchmark Tests...
echo.
echo ⚠️  Lưu ý: Macrobenchmark yêu cầu non-debuggable build
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

REM Clean build (skip if files are locked)
echo 🧹 Cleaning build...
call gradlew.bat clean 2>nul
if errorlevel 1 (
    echo ⚠️  Clean failed (files may be locked), continuing anyway...
)

REM Build benchmark variant
echo 🔨 Building benchmark variant (non-debuggable)...
call gradlew.bat assembleBenchmark
if errorlevel 1 (
    echo ❌ Build failed!
    exit /b 1
)

REM Install benchmark APK
echo 📦 Installing benchmark APK...
call gradlew.bat installBenchmark
if errorlevel 1 (
    echo ⚠️  Install failed, but continuing...
)

REM Build and install debug test APK (tests chạy với app benchmark đã install)
echo 🔨 Building test APK...
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo ❌ Build test APK failed!
    exit /b 1
)

REM Run macrobenchmark tests
echo.
echo 📊 Running App Startup Benchmarks...
echo.
echo ⚠️  Note: App benchmark đã được install, tests sẽ chạy với app đó
echo.
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark

if errorlevel 1 (
    echo.
    echo ❌ Macrobenchmark tests failed!
    echo.
    echo 💡 Lưu ý:
    echo   - Macrobenchmark yêu cầu non-debuggable build
    echo   - Nếu đang dùng emulator, có thể cần device thật
    echo   - Hoặc dùng custom performance tests thay thế:
    echo     .\run_performance_tests.bat render
    echo     .\run_performance_tests.bat scroll
    exit /b 1
) else (
    echo.
    echo ✅ Macrobenchmark tests completed successfully!
    echo.
    echo 📊 View results:
    echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
    echo   - Test Reports: app\build\reports\androidTests\
)

