@echo off
setlocal enabledelayedexpansion

echo ========================================
echo DEBUG PERFORMANCE TEST
echo ========================================
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    pause
    exit /b 1
)

echo Device connected. Starting test...
echo.

REM Build test APK
echo [1/2] Building test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon
if errorlevel 1 (
    echo Build failed! Trying to continue anyway...
)

echo.
echo [2/2] Running a single Performance Test...
echo.

REM Run a single test
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest --continue --no-daemon

echo.
echo Collecting results...
echo.

REM Collect results
call collect_performance_results.bat

echo.
echo Done! Check performance_results\ folder for results.
echo.
pause