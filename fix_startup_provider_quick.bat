@echo off
echo ========================================
echo Quick Fix: Startup Provider Error
echo ========================================
echo.
echo This will:
echo   1. Uninstall old test APK from device
echo   2. Rebuild test APK with startup dependency
echo   3. Install new test APK
echo.
pause
echo.

echo [1/3] Uninstalling old test APK...
adb uninstall com.example.datingapp.test 2>nul
if %ERRORLEVEL% EQU 0 (
    echo   ✓ Test APK uninstalled
) else (
    echo   ⚠️ Test APK not found or already uninstalled
)
echo.

echo [2/3] Rebuilding test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ Build failed!
    echo.
    echo Please try:
    echo   1. Close Android Studio
    echo   2. Run: .\gradlew --stop
    echo   3. Run this script again
    echo.
    pause
    exit /b 1
)
echo.

echo [3/3] Installing new test APK...
call gradlew.bat installDebugAndroidTest --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ⚠️ Install failed!
    echo.
    echo Please check:
    echo   - Device/emulator is connected: adb devices
    echo   - Device is unlocked
    echo.
    pause
    exit /b 1
) else (
    echo.
    echo ✅ Test APK rebuilt and installed successfully!
    echo.
    echo You can now run tests:
    echo   .\run_performance_tests.bat render
    echo.
)
echo.

pause


