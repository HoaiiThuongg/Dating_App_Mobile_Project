@echo off
REM Run tests and capture metrics from console output
REM This script GUARANTEES a metrics file will be created
setlocal enabledelayedexpansion

echo ========================================
echo Run Tests and Capture Metrics
echo ========================================
echo.

set METRICS_FILE=performance_metrics_%date:~-4,4%%date:~3,2%%date:~0,2%_%time:~0,2%%time:~3,2%%time:~6,2%.txt
set METRICS_FILE=%METRICS_FILE: =0%

echo Metrics will be saved to: %METRICS_FILE%
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected!
    pause
    exit /b 1
)

echo ✅ Device connected
echo.
echo Running all performance tests...
echo (This will capture console output including metrics)
echo.

REM Create temp file for full output
set TEMP_OUTPUT=%TEMP%\test_output_%RANDOM%.txt

REM Run tests and capture ALL output (including stderr)
echo Starting tests... This may take 10-15 minutes.
echo.
call run_all_performance_tests.bat > "%TEMP_OUTPUT%" 2>&1

echo.
echo ✅ Tests completed!
echo.
echo Extracting metrics from output...
echo.

REM Create metrics file - GUARANTEED to be created
(
    echo ========================================
    echo PERFORMANCE METRICS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo.
    echo Metrics extracted from console output:
    echo.
    echo ----------------------------------------
    echo STARTUP PERFORMANCE
    echo ----------------------------------------
    
    REM Extract startup metrics
    findstr /C:"Cold" /C:"Warm" /C:"Hot" /C:"startup" /C:"Start" "%TEMP_OUTPUT%" 2>nul | findstr /C:"ms" /C:"time"
    
    echo.
    echo ----------------------------------------
    echo RENDER PERFORMANCE
    echo ----------------------------------------
    
    REM Extract render times - Pattern: "ScreenName render time: XXXms"
    findstr /C:"render time" "%TEMP_OUTPUT%" 2>nul
    
    REM Also try without "render time" pattern
    findstr /C:"Screen" "%TEMP_OUTPUT%" 2>nul | findstr /C:"ms"
    
    echo.
    echo ----------------------------------------
    echo SCROLL PERFORMANCE
    echo ----------------------------------------
    
    REM Extract scroll metrics
    findstr /C:"scrollable" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"Average idle" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"Max:" "%TEMP_OUTPUT%" 2>nul | findstr /C:"ms"
    findstr /C:"Initial:" "%TEMP_OUTPUT%" 2>nul | findstr /C:"ms"
    
    echo.
    echo ----------------------------------------
    echo VIEWMODEL PERFORMANCE
    echo ----------------------------------------
    
    REM Extract ViewModel metrics
    findstr /C:"Avg:" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"P95:" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"LoadUsers" /C:"LoadMessages" /C:"SwipeAction" /C:"SendMessage" "%TEMP_OUTPUT%" 2>nul | findstr /C:"ms"
    
    echo.
    echo ----------------------------------------
    echo MEMORY PERFORMANCE
    echo ----------------------------------------
    
    REM Extract memory metrics
    findstr /C:"memory usage" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"Initial memory" /C:"Peak memory" /C:"After navigation" "%TEMP_OUTPUT%" 2>nul
    findstr /C:"MB" "%TEMP_OUTPUT%" 2>nul | findstr /C:"memory" /C:"Memory"
    
    echo.
    echo ========================================
    echo RAW CONSOLE OUTPUT (All metrics)
    echo ========================================
    echo.
    echo Searching for all println statements that contain metrics:
    echo.
    
    REM Show all lines that might contain metrics
    findstr /C:"ms" /C:"MB" "%TEMP_OUTPUT%" 2>nul | findstr /C:"render" /C:"scroll" /C:"memory" /C:"Avg" /C:"P95" /C:"Load" /C:"Swipe" /C:"Send" /C:"Start"
    
    echo.
    echo ========================================
    echo FULL OUTPUT LOCATION
    echo ========================================
    echo %TEMP_OUTPUT%
    echo.
    echo If metrics above are empty, check the full output file above.
    echo All println() statements from tests are in that file.
    echo.
    
) > "%METRICS_FILE%"

REM Also try PowerShell extraction from HTML if available
if exist "extract_metrics_from_html.ps1" (
    echo.
    echo Extracting from HTML reports (if available)...
    powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1" 2>nul
    if !ERRORLEVEL! EQU 0 (
        echo ✅ HTML extraction completed
    )
)

echo.
echo ========================================
echo ✅ METRICS FILE CREATED!
echo ========================================
echo.
echo 📄 File: %METRICS_FILE%
echo.
echo Showing metrics found:
echo.
type "%METRICS_FILE%"
echo.

REM Check if file has content
for %%F in ("%METRICS_FILE%") do set SIZE=%%~zF
if !SIZE! LSS 500 (
    echo ⚠️  WARNING: Metrics file is small. Metrics may not have been extracted.
    echo.
    echo 💡 TIP: Metrics are printed to console during test execution.
    echo    Check the full output file: %TEMP_OUTPUT%
    echo    Or run tests again and watch console output.
    echo.
) else (
    echo ✅ Metrics file created successfully with content!
    echo.
)

echo ========================================
echo 📊 NEXT STEPS
echo ========================================
echo.
echo 1. Review metrics file: %METRICS_FILE%
echo 2. Check full output: %TEMP_OUTPUT%
echo 3. View HTML reports: performance_results\report_*\reports\androidTests\connected\debug\index.html
echo.
echo 💡 If metrics are empty, metrics are printed to console.
echo    Run tests and watch console output, or check the full output file above.
echo.
pause

REM Don't delete temp file - user might need it
echo.
echo Note: Full output saved to: %TEMP_OUTPUT%
echo (Not deleted - you can check it for all metrics)
