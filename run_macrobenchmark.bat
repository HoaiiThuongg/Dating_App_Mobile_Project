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

REM Uninstall existing app (debug or release) to avoid conflicts
echo 🗑️  Uninstalling existing app (if any)...
adb uninstall com.example.datingapp >nul 2>&1
adb uninstall com.example.datingapp.test >nul 2>&1
timeout /t 3 /nobreak >nul

REM Clean build (skip if files are locked)
echo 🧹 Cleaning build...
call gradlew.bat clean 2>nul
if errorlevel 1 (
    echo Clean failed - files may be locked - proceeding anyway
)

REM Build benchmark variant (non-debuggable)
echo 🔨 Building benchmark variant (non-debuggable)...
echo    This may take a few minutes...
call gradlew.bat assembleBenchmark
if errorlevel 1 (
    echo ❌ Build benchmark variant failed!
    echo.
    echo 💡 Kiểm tra:
    echo   1. build.gradle.kts có định nghĩa benchmark buildType
    echo   2. Dependencies đã được sync
    exit /b 1
)
echo ✅ Benchmark variant built successfully

REM Install benchmark APK
echo 📦 Installing benchmark APK (non-debuggable)...
call gradlew.bat installBenchmark
if errorlevel 1 (
    echo ❌ Install benchmark APK failed!
    echo.
    echo 💡 Kiểm tra:
    echo   1. Device/emulator đã kết nối
    echo   2. USB debugging đã bật
    exit /b 1
)

REM Wait for installation to complete
echo Waiting for installation to complete...
timeout /t 5 >nul 2>&1

REM Verify benchmark APK is installed and is non-debuggable
echo 🔍 Verifying benchmark APK installation...
adb shell pm list packages | findstr /C:"com.example.datingapp" >nul
if errorlevel 1 (
    echo ❌ App not installed!
    exit /b 1
)

REM Check if app is debuggable (should be false for benchmark variant)
echo 🔍 Checking if app is non-debuggable...
adb shell dumpsys package com.example.datingapp | findstr /C:"pkgFlags" > "%TEMP%\app_flags.txt"
findstr /C:"DEBUGGABLE" "%TEMP%\app_flags.txt" >nul
if not errorlevel 1 (
    echo ⚠️  Warning: App may still be debuggable!
    echo    Trying to force reinstall...
    adb uninstall com.example.datingapp >nul 2>&1
    timeout /t 2 /nobreak >nul
    call gradlew.bat installBenchmark
    timeout /t 5 /nobreak >nul
)
echo ✅ Benchmark APK installed (non-debuggable)

REM Build and install debug test APK (tests chạy với app benchmark đã install)
echo 🔨 Building test APK...
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo ❌ Build test APK failed!
    exit /b 1
)
echo ✅ Test APK built successfully

REM Install test APK
echo 📦 Installing test APK...
call gradlew.bat installDebugAndroidTest
if errorlevel 1 (
    echo Install test APK failed - proceeding anyway
)
timeout /t 5 /nobreak >nul

REM Force stop app to ensure clean state
echo 🛑 Stopping app to ensure clean state...
adb shell am force-stop com.example.datingapp >nul 2>&1
timeout /t 2 /nobreak >nul

REM Run macrobenchmark tests
echo.
echo 📊 Running App Startup Benchmarks...
echo.
echo ⚠️  Note: App benchmark đã được install, tests sẽ chạy với app đó
echo.
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark

if errorlevel 1 (
    echo.
    echo ⚠️  Macrobenchmark tests failed hoặc bị skip!
    echo.
    echo 💡 Lưu ý:
    echo   - Macrobenchmark yêu cầu non-debuggable build
    echo   - Nếu đang dùng emulator, có thể cần device thật
    echo   - Tests có thể bị skip nếu app vẫn là debug build
    echo   - Script sẽ tiếp tục với tests khác
    echo.
    echo 📊 View results (nếu có):
    echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
    echo   - Test Reports: app\build\reports\androidTests\
    exit /b 0
) else (
    echo.
    echo ✅ Macrobenchmark tests completed successfully!
    echo.
    echo 📊 View results:
    echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
    echo   - Test Reports: app\build\reports\androidTests\
)

