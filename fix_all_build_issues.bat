@echo off
echo ========================================
echo Fix All Build Issues
echo ========================================
echo.
echo This will fix:
echo   1. Corrupted build directory
echo   2. Missing dependencies in test APK
echo   3. Old test APK on device
echo.
echo ⚠️ IMPORTANT: Close Android Studio before running this!
echo.
pause
echo.

echo [1/5] Stopping Gradle daemons...
call gradlew.bat --stop
if %ERRORLEVEL% NEQ 0 (
    echo ⚠️ Warning: Could not stop all daemons
)
echo.

echo [2/5] Waiting 3 seconds for processes to release locks...
timeout /t 3 /nobreak >nul
echo.

echo [3/5] Deleting corrupted dex directory...
if exist "app\build\intermediates\dex" (
    rd /s /q "app\build\intermediates\dex" 2>nul
    if %ERRORLEVEL% EQU 0 (
        echo   ✓ Deleted corrupted dex directory
    ) else (
        echo   ⚠️ Could not delete (may be locked)
    )
)
echo.

echo [4/5] Uninstalling old APKs from device...
adb uninstall com.example.datingapp.test >nul 2>&1
adb uninstall com.example.datingapp >nul 2>&1
echo   ✓ Uninstalled old APKs (if they existed)
echo.

echo [5/5] Rebuilding and installing...
call gradlew.bat assembleDebug assembleDebugAndroidTest installDebugAndroidTest --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ Build/Install failed!
    echo.
    echo Please try:
    echo   1. Close Android Studio completely
    echo   2. Kill Java processes: taskkill /F /IM java.exe
    echo   3. Run this script again
    echo.
    pause
    exit /b 1
) else (
    echo.
    echo ✅ All fixed! Build and install successful!
    echo.
    echo You can now run tests:
    echo   .\run_performance_tests.bat render
    echo.
)
echo.

pause

