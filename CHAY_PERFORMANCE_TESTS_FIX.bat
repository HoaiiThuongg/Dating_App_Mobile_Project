@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY PERFORMANCE TESTS (12 TESTS)
echo ========================================
echo.
echo Script nay se:
echo   1. Clean build de tranh file lock
echo   2. Chay 12 Performance Tests
echo   3. Thu thap metrics tu ca test pass va fail
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

REM Clean build to avoid file lock issues
echo ========================================
echo STEP 0: Cleaning build...
echo ========================================
echo.
echo Cleaning previous build to avoid file lock issues...
call gradlew.bat clean 2>nul
if errorlevel 1 (
    echo Warning: Clean failed, trying to delete lock files...
    REM Try to delete lock files manually
    if exist "app\build\outputs\androidTest-results\connected\debug\*.lck" (
        del /F /Q "app\build\outputs\androidTest-results\connected\debug\*.lck" 2>nul
    )
) else (
    echo Clean successful!
)
echo.

REM Build test APK
echo ========================================
echo STEP 1: Building test APK...
echo ========================================
echo.
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo.
    echo ERROR: Build failed!
    echo Please check the errors above.
    echo.
    pause
    exit /b 1
)
echo.
echo Build successful!
echo.

REM Create report directory
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value 2^>nul') do set datetime=%%I
if "!datetime!"=="" (
    set datetime=%date:~-4,4%%date:~-7,2%%date:~-10,2%_%time:~0,2%%time:~3,2%%time:~6,2%
    set datetime=!datetime: =0!
)
set TIMESTAMP=!datetime:~0,8!_!datetime:~8,6!
set REPORT_DIR=performance_results\report_!TIMESTAMP!
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"

echo Report directory: %REPORT_DIR%
echo.

REM Run each performance test individually
set TEST_COUNT=0
set PASSED_COUNT=0
set FAILED_COUNT=0

REM Test 1: Screen Render Performance
echo ========================================
echo TEST 1/12: Screen Render Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Screen Render Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Screen Render Performance
)
echo.

REM Test 2: Scroll Performance
echo ========================================
echo TEST 2/12: Scroll Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Scroll Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Scroll Performance
)
echo.

REM Test 3: ViewModel Performance
echo ========================================
echo TEST 3/12: ViewModel Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] ViewModel Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] ViewModel Performance
)
echo.

REM Test 4: Memory Performance
echo ========================================
echo TEST 4/12: Memory Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Memory Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Memory Performance
)
echo.

REM Test 5: System Resource Performance
echo ========================================
echo TEST 5/12: System Resource Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.SystemResourcePerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] System Resource Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] System Resource Performance
)
echo.

REM Test 6: Network Performance
echo ========================================
echo TEST 6/12: Network Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.NetworkPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Network Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Network Performance
)
echo.

REM Test 7: Frame Rate Performance
echo ========================================
echo TEST 7/12: Frame Rate Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.FrameRatePerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Frame Rate Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Frame Rate Performance
)
echo.

REM Test 8: App Size Performance
echo ========================================
echo TEST 8/12: App Size Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppSizePerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] App Size Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] App Size Performance
)
echo.

REM Test 9: Database Performance
echo ========================================
echo TEST 9/12: Database Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.DatabasePerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Database Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Database Performance
)
echo.

REM Test 10: Image Loading Performance
echo ========================================
echo TEST 10/12: Image Loading Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ImageLoadingPerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Image Loading Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Image Loading Performance
)
echo.

REM Test 11: Touch Response Performance
echo ========================================
echo TEST 11/12: Touch Response Performance
echo ========================================
echo.
set /a TEST_COUNT+=1
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.TouchResponsePerformanceTest --continue
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED] Touch Response Performance
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] Touch Response Performance
)
echo.

REM Test 12: App Startup Benchmark (Macrobenchmark)
echo ========================================
echo TEST 12/12: App Startup Benchmark
echo ========================================
echo.
echo NOTE: Macrobenchmark requires non-debuggable build
echo.
set /a TEST_COUNT+=1
call run_macrobenchmark.bat
if errorlevel 1 (
    set /a FAILED_COUNT+=1
    echo [FAILED/SKIPPED] App Startup Benchmark
) else (
    set /a PASSED_COUNT+=1
    echo [PASSED] App Startup Benchmark
)
echo.

REM Wait for reports to be written
echo Waiting 5 seconds for reports to be written...
ping 127.0.0.1 -n 6 >nul
echo.

REM Collect results
echo ========================================
echo STEP 2: Collecting Results
echo ========================================
echo.
call collect_performance_results.bat
echo.

REM Summary
echo ========================================
echo TEST SUMMARY
echo ========================================
echo.
echo Total tests: !TEST_COUNT!
echo Passed: !PASSED_COUNT!
echo Failed: !FAILED_COUNT!
echo.
if !TEST_COUNT! GTR 0 (
    set /a PASS_RATE=(!PASSED_COUNT! * 100) / !TEST_COUNT!
    echo Pass rate: !PASS_RATE!%%
)
echo.
echo NOTE: Metrics have been collected from both passed and failed tests.
echo.
echo Results location: %REPORT_DIR%
echo.
pause


