@echo off
echo ========================================
echo Extract Performance Metrics
echo ========================================
echo.

echo Extracting metrics from test logs...
powershell -ExecutionPolicy Bypass -File "extract_metrics_from_logs.ps1"

if errorlevel 1 (
    echo.
    echo ⚠️  Extraction failed
    echo.
    echo Try:
    echo   1. Run tests first: .\run_all_performance_tests.bat
    echo   2. Check logs: app\build\outputs\androidTest-results\connected\
) else (
    echo.
    echo ✅ Metrics extracted!
    echo.
    echo Files created:
    for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
        echo   performance_results\%%i\performance_metrics_detailed.txt
        echo   performance_results\%%i\performance_metrics_detailed.csv
        goto :found
    )
    :found
)

echo.
pause

