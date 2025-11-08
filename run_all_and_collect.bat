@echo off
echo ========================================
echo 🚀 Run ALL Performance Tests and Collect Results
echo ========================================
echo.
echo This will:
echo   1. Run all performance tests
echo   2. Wait for reports to be generated
echo   3. Collect and extract all metrics
echo   4. Generate summary report
echo.
echo ⚠️  This may take 10-15 minutes
echo.
pause
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected!
    echo Please connect a device or start an emulator.
    pause
    exit /b 1
)

echo ✅ Device connected
echo.

REM Step 1: Run all tests
echo ========================================
echo Step 1: Running ALL Performance Tests
echo ========================================
echo.
call run_all_performance_tests.bat
if errorlevel 1 (
    echo.
    echo ⚠️  Some tests may have failed, but continuing...
)
echo.

REM Step 2: Wait for reports
echo ========================================
echo Step 2: Waiting for reports to be written...
echo ========================================
echo.
echo Waiting 5 seconds for reports to be finalized...
timeout /t 5 /nobreak >nul
echo.

REM Step 3: Verify reports
echo ========================================
echo Step 3: Verifying reports...
echo ========================================
echo.
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ Test reports found!
) else if exist "app\build\reports\androidTests\index.html" (
    echo ✅ Test reports found!
) else (
    echo ⚠️  Test reports not found!
    echo    Reports may still be generating...
    echo    Waiting additional 5 seconds...
    timeout /t 5 /nobreak >nul
)
echo.

REM Step 4: Collect results
echo ========================================
echo Step 4: Collecting results...
echo ========================================
echo.
call collect_performance_results_simple.bat
if errorlevel 1 (
    echo.
    echo ⚠️  Collection had issues, but continuing...
)
echo.

REM Step 5: Extract detailed metrics
echo ========================================
echo Step 5: Extracting detailed metrics...
echo ========================================
echo.
if exist "extract_metrics_from_html.ps1" (
    powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1"
    if !ERRORLEVEL! EQU 0 (
        echo ✅ Detailed metrics extracted from HTML reports
    ) else (
        echo ⚠️  HTML extraction failed, trying logs...
        if exist "extract_metrics_from_logs.ps1" (
            powershell -ExecutionPolicy Bypass -File "extract_metrics_from_logs.ps1" 2>nul
        )
    )
) else if exist "extract_metrics_from_logs.ps1" (
    powershell -ExecutionPolicy Bypass -File "extract_metrics_from_logs.ps1"
    if !ERRORLEVEL! EQU 0 (
        echo ✅ Detailed metrics extracted from logs
    ) else (
        echo ⚠️  Log extraction failed (non-critical)
    )
) else (
    echo ⚠️  Metrics extraction scripts not found
    echo    Metrics are in HTML reports: app\build\reports\androidTests\connected\debug\index.html
    echo    And in console output when running tests
)
echo.

echo ========================================
echo ✅ ALL DONE!
echo ========================================
echo.
echo 📊 Results location:
for /f "delims=" %%i in ('dir /b /ad /o-d "%OUTPUT_DIR%\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :found
)
:found
if defined LATEST_REPORT (
    echo   performance_results\%LATEST_REPORT%
    echo.
    echo 📄 Files:
    echo   - README.txt: performance_results\%LATEST_REPORT%\README.txt
    echo   - HTML Report: performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
    echo   - Metrics CSV: performance_results\%LATEST_REPORT%\metrics.csv (if generated)
    echo   - Summary: performance_results\%LATEST_REPORT%\summary.md (if generated)
    echo.
    echo To view HTML report:
    echo   start performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
) else (
    echo   Check: performance_results\report_*
)
echo.
pause

