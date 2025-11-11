@echo off
setlocal enabledelayedexpansion

echo ========================================
echo RUN PERFORMANCE TESTS - SIMPLE VERSION
echo ========================================
echo.
echo This script will run Performance Tests and collect metrics.
echo Metrics will be collected from both passed and failed tests.
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    pause
    exit /b 1
)

echo Device connected. Starting tests...
echo.

REM Build test APK
echo [1/3] Building test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon --no-daemon
if errorlevel 1 (
    echo Build failed! Trying to continue anyway...
)

echo.
echo [2/3] Running Performance Tests...
echo.

REM List of performance test classes
set TEST_LIST=ScreenRenderPerformanceTest ScrollPerformanceTest ViewModelPerformanceTest MemoryPerformanceTest SystemResourcePerformanceTest NetworkPerformanceTest FrameRatePerformanceTest AppSizePerformanceTest DatabasePerformanceTest ImageLoadingPerformanceTest TouchResponsePerformanceTest

set TEST_NUM=0
for %%T in (%TEST_LIST%) do (
    set /a TEST_NUM+=1
    echo.
    echo --- Test !TEST_NUM!/11: %%T ---
    
    REM Run test with --continue to not stop on failure
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.%%T --continue --no-daemon 2>nul
    
    REM Wait a bit between tests
    ping 127.0.0.1 -n 2 >nul
)

echo.
echo [3/3] Collecting results...
echo.

REM Wait for reports
ping 127.0.0.1 -n 5 >nul

REM Collect results
call collect_performance_results.bat

echo.
echo Done! Check performance_results\ folder for results.
echo.
pause