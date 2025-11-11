@echo off
setlocal enabledelayedexpansion

echo ========================================
echo RUN PERFORMANCE TESTS (12 TESTS)
echo ========================================
echo.
echo This script will run 12 Performance Tests and collect metrics.
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    exit /b 1
)

REM Build test APK first
echo Building test APK...
call gradlew.bat assembleDebugAndroidTest --quiet
if errorlevel 1 (
    echo Build failed!
    exit /b 1
)

REM Create log file
set LOG_FILE=performance_test_log_%date:~-4,4%%date:~3,2%%date:~0,2%_%time:~0,2%%time:~3,2%.txt
set LOG_FILE=!LOG_FILE: =0!

echo ======================================== > "!LOG_FILE!"
echo PERFORMANCE TESTS LOG >> "!LOG_FILE!"
echo Started: %date% %time% >> "!LOG_FILE!"
echo ======================================== >> "!LOG_FILE!"
echo. >> "!LOG_FILE!"

set TEST_COUNT=0
set PASSED_COUNT=0
set FAILED_COUNT=0

REM Define test classes
set TESTS[1]=ScreenRenderPerformanceTest
set TESTS[2]=ScrollPerformanceTest
set TESTS[3]=ViewModelPerformanceTest
set TESTS[4]=MemoryPerformanceTest
set TESTS[5]=SystemResourcePerformanceTest
set TESTS[6]=NetworkPerformanceTest
set TESTS[7]=FrameRatePerformanceTest
set TESTS[8]=AppSizePerformanceTest
set TESTS[9]=DatabasePerformanceTest
set TESTS[10]=ImageLoadingPerformanceTest
set TESTS[11]=TouchResponsePerformanceTest

REM Run tests 1-11
for /L %%i in (1,1,11) do (
    set /a TEST_COUNT+=1
    set TEST_NAME=!TESTS[%%i]!
    
    echo.
    echo ========================================
    echo TEST !TEST_COUNT!/12: !TEST_NAME!
    echo ========================================
    echo.
    
    echo TEST !TEST_COUNT!/12: !TEST_NAME! >> "!LOG_FILE!"
    echo Started: %date% %time% >> "!LOG_FILE!"
    
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.!TEST_NAME! --continue --quiet >nul 2>&1
    
    if errorlevel 1 (
        set /a FAILED_COUNT+=1
        echo [FAILED] !TEST_NAME!
        echo Status: FAILED >> "!LOG_FILE!"
    ) else (
        set /a PASSED_COUNT+=1
        echo [PASSED] !TEST_NAME!
        echo Status: PASSED >> "!LOG_FILE!"
    )
    
    echo Finished: %date% %time% >> "!LOG_FILE!"
    echo. >> "!LOG_FILE!"
    
    REM Wait a bit between tests
    ping 127.0.0.1 -n 3 >nul
)

REM Test 12: Macrobenchmark (skip if it requires special setup)
echo.
echo ========================================
echo TEST 12/12: App Startup Benchmark
echo ========================================
echo.
echo NOTE: Skipping macrobenchmark (requires non-debuggable build)
echo You can run it manually using: run_macrobenchmark.bat
echo.

REM Wait for reports
echo Waiting for reports to be written...
ping 127.0.0.1 -n 6 >nul

REM Summary
echo.
echo ========================================
echo TEST SUMMARY
echo ========================================
echo.
echo Total tests: !TEST_COUNT!
echo Passed: !PASSED_COUNT!
echo Failed: !FAILED_COUNT!
echo.

echo ======================================== >> "!LOG_FILE!"
echo SUMMARY >> "!LOG_FILE!"
echo Total: !TEST_COUNT! >> "!LOG_FILE!"
echo Passed: !PASSED_COUNT! >> "!LOG_FILE!"
echo Failed: !FAILED_COUNT! >> "!LOG_FILE!"
echo Finished: %date% %time% >> "!LOG_FILE!"
echo ======================================== >> "!LOG_FILE!"

echo Log file: !LOG_FILE!
echo.

REM Collect results
echo Collecting results...
call collect_performance_results.bat

echo.
echo Done! Check performance_results\ folder for results.
echo.