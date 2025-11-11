@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY PERFORMANCE TESTS VA THU THAP METRICS
echo ========================================
echo.
echo Script nay se:
echo   1. Chay 12 Performance Tests
echo   2. Thu thap metrics tu ca test pass va fail
echo   3. Luu ket qua vao performance_results\
echo.
echo Thoi gian uoc tinh: 15-20 phut
echo.
pause
echo.

REM Check device
echo Checking device connection...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo.
    echo ERROR: No device connected!
    echo Please connect a device or start an emulator.
    echo.
    pause
    exit /b 1
) else (
    echo Device connected.
    echo.
)

REM Stop Gradle daemon to avoid file lock issues
echo Stopping Gradle daemon to avoid file locks...
call gradlew.bat --stop >nul 2>&1
echo.

REM Clean build
echo Cleaning build...
call gradlew.bat clean >nul 2>&1
echo Clean done.
echo.

REM Build test APK
echo Building test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon
if errorlevel 1 (
    echo.
    echo WARNING: Build failed! Trying to continue anyway...
    echo.
)
echo.

REM Run performance tests using the existing script
echo ========================================
echo Running Performance Tests...
echo ========================================
echo.
echo This will run all 12 performance tests.
echo Metrics will be collected from both passed and failed tests.
echo.
call run_all_performance_tests.bat
echo.

REM Wait for reports to be written
echo Waiting 10 seconds for reports to be written...
ping 127.0.0.1 -n 11 >nul
echo.

REM Collect results
echo ========================================
echo Collecting Results...
echo ========================================
echo.
call collect_performance_results.bat
echo.

echo ========================================
echo DONE!
echo ========================================
echo.
echo Performance tests completed!
echo Results have been saved to: performance_results\
echo.
echo NOTE: Metrics have been collected from both passed and failed tests.
echo.
pause


