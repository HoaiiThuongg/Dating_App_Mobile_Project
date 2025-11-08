@echo off
setlocal enabledelayedexpansion

echo ========================================
echo Collecting Performance Test Results
echo ========================================
echo.

set OUTPUT_DIR=performance_results
set TIMESTAMP=%date:~-4,4%%date:~3,2%%date:~0,2%_%time:~0,2%%time:~3,2%%time:~6,2%
set TIMESTAMP=%TIMESTAMP: =0%
set REPORT_DIR=%OUTPUT_DIR%\report_%TIMESTAMP%

echo Creating output directory: %REPORT_DIR%
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
if not exist "%REPORT_DIR%\benchmarks" mkdir "%REPORT_DIR%\benchmarks"
if not exist "%REPORT_DIR%\screenshots" mkdir "%REPORT_DIR%\screenshots"
echo.

set FOUND_REPORTS=0
set FOUND_BENCHMARKS=0

echo [1/5] Searching for test reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo   Found reports at: app\build\reports\androidTests\connected\debug\
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    set FOUND_REPORTS=1
    echo   ✓ Test reports copied
) else if exist "app\build\reports\androidTests\index.html" (
    echo   Found reports at: app\build\reports\androidTests\
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    set FOUND_REPORTS=1
    echo   ✓ Test reports copied
) else if exist "app\build\reports\androidTests" (
    echo   Found reports directory: app\build\reports\androidTests\
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    set FOUND_REPORTS=1
    echo   ✓ Test reports copied
) else (
    echo   ❌ No test reports found
    echo   💡 Run tests first: .\run_test_simple.bat
)
echo.

echo [2/5] Searching for macrobenchmark results...
if exist "app\build\outputs\connected_android_test_additional_output" (
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    set FOUND_BENCHMARKS=1
    echo   ✓ Macrobenchmark results copied
) else (
    echo   ⚠ Macrobenchmark results not found
)
echo.

echo [3/5] Extracting metrics...
if %FOUND_REPORTS% EQU 1 (
    if exist "extract_metrics.ps1" (
        powershell -ExecutionPolicy Bypass -File "extract_metrics.ps1" -OutputDir "%REPORT_DIR%" 2>nul
        if !ERRORLEVEL! EQU 0 (
            echo   ✓ Metrics extracted
        ) else (
            echo   ⚠ Metrics extraction failed (non-critical)
        )
    ) else (
        echo   ⚠ extract_metrics.ps1 not found (non-critical)
    )
) else (
    echo   ⚠ Skipping (no reports)
)
echo.

echo [4/5] Generating summary...
if %FOUND_REPORTS% EQU 1 (
    if exist "generate_report.ps1" (
        powershell -ExecutionPolicy Bypass -File "generate_report.ps1" -OutputDir "%REPORT_DIR%" 2>nul
        if !ERRORLEVEL! EQU 0 (
            echo   ✓ Summary generated
        ) else (
            echo   ⚠ Summary generation failed (non-critical)
        )
    ) else (
        echo   ⚠ generate_report.ps1 not found (non-critical)
    )
) else (
    echo   ⚠ Skipping (no reports)
)
echo.

echo [5/5] Creating README...
echo Performance Test Results Summary > "%REPORT_DIR%\README.txt"
echo ================================= >> "%REPORT_DIR%\README.txt"
echo. >> "%REPORT_DIR%\README.txt"
echo Date: %date% %time% >> "%REPORT_DIR%\README.txt"
echo Report Directory: %REPORT_DIR% >> "%REPORT_DIR%\README.txt"
echo. >> "%REPORT_DIR%\README.txt"

if %FOUND_REPORTS% EQU 1 (
    echo ✅ Test Reports: FOUND >> "%REPORT_DIR%\README.txt"
    echo    Location: %REPORT_DIR%\reports\ >> "%REPORT_DIR%\README.txt"
) else (
    echo ❌ Test Reports: NOT FOUND >> "%REPORT_DIR%\README.txt"
    echo. >> "%REPORT_DIR%\README.txt"
    echo To generate reports, run: >> "%REPORT_DIR%\README.txt"
    echo   .\run_test_simple.bat >> "%REPORT_DIR%\README.txt"
    echo   .\run_performance_tests.bat render >> "%REPORT_DIR%\README.txt"
    echo   .\run_all_performance_tests.bat >> "%REPORT_DIR%\README.txt"
)
echo. >> "%REPORT_DIR%\README.txt"

if %FOUND_BENCHMARKS% EQU 1 (
    echo ✅ Macrobenchmark Results: FOUND >> "%REPORT_DIR%\README.txt"
    echo    Location: %REPORT_DIR%\benchmarks\ >> "%REPORT_DIR%\README.txt"
) else (
    echo ⚠️ Macrobenchmark Results: NOT FOUND >> "%REPORT_DIR%\README.txt"
    echo    Run: .\run_macrobenchmark.bat >> "%REPORT_DIR%\README.txt"
)
echo. >> "%REPORT_DIR%\README.txt"

echo Report Locations: >> "%REPORT_DIR%\README.txt"
if %FOUND_REPORTS% EQU 1 (
    if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" (
        echo   - HTML Reports: %REPORT_DIR%\reports\androidTests\connected\debug\index.html >> "%REPORT_DIR%\README.txt"
    ) else if exist "%REPORT_DIR%\reports\androidTests\index.html" (
        echo   - HTML Reports: %REPORT_DIR%\reports\androidTests\index.html >> "%REPORT_DIR%\README.txt"
    ) else (
        echo   - HTML Reports: %REPORT_DIR%\reports\ (check subdirectories) >> "%REPORT_DIR%\README.txt"
    )
) else (
    echo   - HTML Reports: NOT AVAILABLE (run tests first) >> "%REPORT_DIR%\README.txt"
)
echo   - Macrobenchmark: %REPORT_DIR%\benchmarks\ >> "%REPORT_DIR%\README.txt"
echo   - Summary: %REPORT_DIR%\summary.md (if generated) >> "%REPORT_DIR%\README.txt"
echo   - Metrics CSV: %REPORT_DIR%\metrics.csv (if generated) >> "%REPORT_DIR%\README.txt"
echo. >> "%REPORT_DIR%\README.txt"

if %FOUND_REPORTS% EQU 0 (
    echo ⚠️ IMPORTANT: No test reports found! >> "%REPORT_DIR%\README.txt"
    echo. >> "%REPORT_DIR%\README.txt"
    echo Next steps: >> "%REPORT_DIR%\README.txt"
    echo   1. Run tests: .\run_test_simple.bat >> "%REPORT_DIR%\README.txt"
    echo   2. Wait for tests to complete >> "%REPORT_DIR%\README.txt"
    echo   3. Run this script again: .\collect_performance_results.bat >> "%REPORT_DIR%\README.txt"
)

echo   ✓ README created
echo.

echo ========================================
if %FOUND_REPORTS% EQU 1 (
    echo ✅ Results collected successfully!
    echo.
    echo 📊 Reports found and copied to: %REPORT_DIR%
) else (
    echo ⚠️ No test results found!
    echo.
    echo 📋 To generate reports:
    echo   1. Run: .\run_test_simple.bat
    echo   2. Wait for completion
    echo   3. Run this script again
)
echo ========================================
echo.
echo 📊 Results location: %REPORT_DIR%
echo 📄 Summary: %REPORT_DIR%\README.txt
echo.

if %FOUND_REPORTS% EQU 1 (
    if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" (
        echo To view HTML reports:
        echo   start "" "%REPORT_DIR%\reports\androidTests\connected\debug\index.html"
    ) else if exist "%REPORT_DIR%\reports\androidTests\index.html" (
        echo To view HTML reports:
        echo   start "" "%REPORT_DIR%\reports\androidTests\index.html"
    ) else (
        echo HTML reports location:
        echo   %REPORT_DIR%\reports\
    )
) else (
    echo ⚠️ No HTML reports available.
    echo   Run tests first: .\run_test_simple.bat
)
echo.
pause
