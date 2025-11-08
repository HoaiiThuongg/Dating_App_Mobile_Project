@echo off
REM Show the latest test results
echo ========================================
echo Latest Test Results
echo ========================================
echo.

REM Find latest report
for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :found
)

:found
if defined LATEST_REPORT (
    echo ✅ Latest Report: %LATEST_REPORT%
    echo    Location: performance_results\%LATEST_REPORT%
    echo.
    
    REM Check for HTML report
    if exist "performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html" (
        echo ✅ Main HTML Report:
        echo    performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
        echo.
        echo To open:
        echo    start performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
        echo.
    ) else (
        echo ⚠️  HTML report not found in this report
        echo.
    )
    
    REM List all files
    echo Files in this report:
    echo.
    dir /s /b "performance_results\%LATEST_REPORT%\*.*" 2>nul | findstr /V /C:"Thumbs.db"
    echo.
    
    REM Check for metrics
    if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt" (
        echo ✅ Metrics file found:
        echo    performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
        echo.
    ) else (
        echo ⚠️  Metrics file not found
        echo    Run: .\extract_metrics_from_html.ps1
        echo.
    )
    
    REM Check for CSV
    if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.csv" (
        echo ✅ CSV file found:
        echo    performance_results\%LATEST_REPORT%\performance_metrics_detailed.csv
        echo.
    )
    
) else (
    echo ❌ No reports found in performance_results\
    echo.
    echo Check if tests were run successfully.
    echo.
)

REM Check build directory
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ Also found in build directory:
    echo    app\build\reports\androidTests\connected\debug\index.html
    echo.
) else (
    echo ⚠️  No reports in build directory
    echo    (They may have been collected)
    echo.
)

echo ========================================
echo QUICK ACTIONS
echo ========================================
echo.
if defined LATEST_REPORT (
    echo To view HTML report:
    echo   start performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
    echo.
    echo To extract metrics:
    echo   .\extract_metrics_from_html.ps1
    echo.
    echo To view all results:
    echo   explorer performance_results\%LATEST_REPORT%
    echo.
) else (
    echo To collect results:
    echo   .\collect_performance_results_simple.bat
    echo.
)

pause


