@echo off
REM Create a metrics template file that will definitely exist
REM This ensures user always has a metrics file structure

echo ========================================
echo Creating Metrics Template
echo ========================================
echo.

set METRICS_FILE=performance_metrics_template.txt

(
    echo ========================================
    echo PERFORMANCE METRICS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo.
    echo This is a template. After running tests, metrics will be added here.
    echo.
    echo ========================================
    echo STARTUP PERFORMANCE
    echo ========================================
    echo.
    echo Cold Start: [Run tests to get value] ms
    echo Warm Start: [Run tests to get value] ms
    echo Hot Start: [Run tests to get value] ms
    echo.
    echo ========================================
    echo RENDER PERFORMANCE
    echo ========================================
    echo.
    echo SplashScreen: [Run tests to get value] ms
    echo HomeScreen: [Run tests to get value] ms
    echo ChatScreen: [Run tests to get value] ms
    echo MessageScreen: [Run tests to get value] ms
    echo ProfileScreen: [Run tests to get value] ms
    echo.
    echo ========================================
    echo SCROLL PERFORMANCE
    echo ========================================
    echo.
    echo MessageScreen Scroll:
    echo   Initial Composition: [Run tests to get value] ms
    echo   Average Idle: [Run tests to get value] ms
    echo   Max Idle: [Run tests to get value] ms
    echo.
    echo ChatScreen Scroll:
    echo   Initial Composition: [Run tests to get value] ms
    echo   Average Idle: [Run tests to get value] ms
    echo   Max Idle: [Run tests to get value] ms
    echo.
    echo ========================================
    echo VIEWMODEL PERFORMANCE
    echo ========================================
    echo.
    echo LoadUsers: [Run tests to get value] ms
    echo LoadMessages: [Run tests to get value] ms
    echo SwipeAction: [Run tests to get value] ms ^(Avg^), [Run tests to get value] ms ^(P95^)
    echo SendMessage: [Run tests to get value] ms
    echo.
    echo ========================================
    echo MEMORY PERFORMANCE
    echo ========================================
    echo.
    echo Initial: [Run tests to get value] MB
    echo After Navigation: [Run tests to get value] MB
    echo Peak: [Run tests to get value] MB
    echo Memory Growth: [Run tests to get value] MB
    echo.
    echo ========================================
    echo INSTRUCTIONS
    echo ========================================
    echo.
    echo To get actual metrics:
    echo   1. Run: .\run_tests_with_metrics_capture.bat
    echo   2. Metrics will be extracted and saved to performance_metrics_YYYYMMDD_HHMMSS.txt
    echo   3. Or watch console output when running tests
    echo.
    echo Metrics are printed to console via println() statements in test code.
    echo If extraction fails, check console output directly.
    echo.

) > "%METRICS_FILE%"

echo ✅ Template created: %METRICS_FILE%
echo.
echo This file shows the structure of metrics.
echo After running tests, actual metrics will be in: performance_metrics_YYYYMMDD_HHMMSS.txt
echo.
pause

