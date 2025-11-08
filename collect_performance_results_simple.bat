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
echo.

set FOUND_REPORTS=0
set FOUND_BENCHMARKS=0

echo [1/4] Copying test reports...
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

echo [2/4] Copying macrobenchmark results...
if exist "app\build\outputs\connected_android_test_additional_output" (
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    set FOUND_BENCHMARKS=1
    echo   ✓ Macrobenchmark results copied
) else (
    echo   ⚠ Macrobenchmark results not found
)
echo.

echo [3/4] Extracting metrics...
if %FOUND_REPORTS% EQU 1 (
    if exist "extract_metrics.ps1" (
        powershell -ExecutionPolicy Bypass -File "extract_metrics.ps1" -OutputDir "%REPORT_DIR%" 2>nul
        if !ERRORLEVEL! EQU 0 (
            echo   ✓ Metrics extracted
        ) else (
            echo   ⚠ Metrics extraction failed
        )
    ) else (
        echo   ⚠ extract_metrics.ps1 not found
    )
) else (
    echo   ⚠ Skipping (no reports)
)
echo.

echo [4/4] Generating summary...
if %FOUND_REPORTS% EQU 1 (
    if exist "generate_report.ps1" (
        powershell -ExecutionPolicy Bypass -File "generate_report.ps1" -OutputDir "%REPORT_DIR%" 2>nul
        if !ERRORLEVEL! EQU 0 (
            echo   ✓ Summary generated
        ) else (
            echo   ⚠ Summary generation failed
        )
    ) else (
        echo   ⚠ generate_report.ps1 not found
    )
) else (
    echo   ⚠ Skipping (no reports)
)
echo.

REM Create simple README
echo Creating README...
(
    echo Performance Test Results Summary
    echo =================================
    echo.
    echo Date: %date% %time%
    echo Report Directory: %REPORT_DIR%
    echo.
    echo Test Reports: 
    if %FOUND_REPORTS% EQU 1 (
        echo   Status: FOUND
        echo   Location: %REPORT_DIR%\reports\
    ) else (
        echo   Status: NOT FOUND
        echo   Run tests first: .\run_test_simple.bat
    )
    echo.
    echo Macrobenchmark:
    if %FOUND_BENCHMARKS% EQU 1 (
        echo   Status: FOUND
        echo   Location: %REPORT_DIR%\benchmarks\
    ) else (
        echo   Status: NOT FOUND
    )
    echo.
    echo To view HTML reports:
    if %FOUND_REPORTS% EQU 1 (
        echo   %REPORT_DIR%\reports\androidTests\connected\debug\index.html
    ) else (
        echo   Run tests first to generate reports
    )
) > "%REPORT_DIR%\README.txt"
echo   ✓ README created
echo.

echo ========================================
if %FOUND_REPORTS% EQU 1 (
    echo ✅ Results collected successfully!
) else (
    echo ⚠️ No test reports found!
    echo   Run: .\run_test_simple.bat
)
echo ========================================
echo.
echo 📊 Results: %REPORT_DIR%
echo 📄 README: %REPORT_DIR%\README.txt
echo.
pause

