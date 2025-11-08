@echo off
REM Capture test output to file for metrics extraction
setlocal enabledelayedexpansion

echo ========================================
echo Running Tests and Capturing Output
echo ========================================
echo.

set OUTPUT_FILE=test_output_%date:~-4,4%%date:~3,2%%date:~0,2%_%time:~0,2%%time:~3,2%%time:~6,2%.txt
set OUTPUT_FILE=%OUTPUT_FILE: =0%

echo Output will be saved to: %OUTPUT_FILE%
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected!
    pause
    exit /b 1
)

echo Running all performance tests...
echo This will capture all console output including metrics.
echo.

REM Run tests and capture output
call run_all_performance_tests.bat > "%OUTPUT_FILE%" 2>&1

echo.
echo ✅ Tests completed!
echo.
echo Output saved to: %OUTPUT_FILE%
echo.
echo Extracting metrics from output...
powershell -ExecutionPolicy Bypass -Command "Get-Content '%OUTPUT_FILE%' | Select-String -Pattern 'render time|scroll|memory|Avg:|P95:' | Out-File 'metrics_from_output.txt'"

if exist "metrics_from_output.txt" (
    echo ✅ Metrics extracted to: metrics_from_output.txt
    type metrics_from_output.txt
) else (
    echo ⚠️  No metrics found in output
)

echo.
pause

