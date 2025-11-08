@echo off
echo ========================================
echo Rebuilding Test APK with Dependencies
echo ========================================
echo.
echo This will rebuild the test APK to include androidx.startup dependency.
echo.
echo ⚠️ IMPORTANT: Close Android Studio before running this script!
echo.
pause
echo.

echo [1/4] Stopping Gradle daemons...
call gradlew.bat --stop
if %ERRORLEVEL% NEQ 0 (
    echo ⚠️ Warning: Could not stop all daemons
)
echo.

echo [2/4] Refreshing dependencies...
call gradlew.bat --refresh-dependencies --no-daemon 2>nul
echo.

echo [3/4] Building test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ Build failed!
    echo.
    echo Please try:
    echo   1. Close Android Studio completely
    echo   2. Sync Gradle in Android Studio (File → Sync Project with Gradle Files)
    echo   3. Build → Rebuild Project
    echo   4. Try running this script again
    echo.
    echo Or see: FIX_STARTUP_PROVIDER_ERROR.md
    echo.
    pause
    exit /b 1
)
echo.

echo [4/4] Installing test APK...
call gradlew.bat installDebugAndroidTest --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ⚠️ Install failed, but test APK was built successfully
    echo You can try running tests now
    echo.
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

