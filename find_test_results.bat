@echo off
REM Find all test results after running tests
echo ========================================
echo Finding Test Results
echo ========================================
echo.

echo Searching for test results...
echo.

REM Check HTML reports
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ HTML REPORTS FOUND
    echo.
    echo Main Report:
    echo   app\build\reports\androidTests\connected\debug\index.html
    echo.
    echo All HTML files:
    dir /s /b "app\build\reports\androidTests\*.html" 2>nul
    echo.
) else (
    echo ❌ HTML Reports NOT FOUND
    echo    Expected: app\build\reports\androidTests\connected\debug\index.html
    echo.
)

REM Check macrobenchmark results
if exist "app\build\outputs\connected_android_test_additional_output" (
    echo ✅ MACROBENCHMARK RESULTS FOUND
    echo    Location: app\build\outputs\connected_android_test_additional_output\
    echo.
    dir /s /b "app\build\outputs\connected_android_test_additional_output\*.json" 2>nul
    echo.
) else (
    echo ⚠️  Macrobenchmark Results NOT FOUND
    echo    (This is normal if macrobenchmark was skipped)
    echo.
)

REM Check performance results directory
if exist "performance_results" (
    echo ✅ PERFORMANCE RESULTS DIRECTORY FOUND
    echo    Location: performance_results\
    echo.
    dir /s /b "performance_results\*.txt" "performance_results\*.html" "performance_results\*.csv" 2>nul
    echo.
) else (
    echo ⚠️  Performance Results directory NOT FOUND
    echo    (Run collect_performance_results_simple.bat to collect)
    echo.
)

REM Check metrics files in root
if exist "performance_metrics_*.txt" (
    echo ✅ METRICS FILES FOUND (in root)
    echo.
    dir /b "performance_metrics_*.txt"
    echo.
) else (
    echo ⚠️  Metrics files NOT FOUND in root
    echo    (Run run_tests_with_metrics_capture.bat to create)
    echo.
)

echo ========================================
echo SUMMARY
echo ========================================
echo.

if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ HTML Reports: YES
    echo    Open: start app\build\reports\androidTests\connected\debug\index.html
) else (
    echo ❌ HTML Reports: NO
)

if exist "app\build\outputs\connected_android_test_additional_output" (
    echo ✅ Macrobenchmark: YES
) else (
    echo ⚠️  Macrobenchmark: NO (may be normal)
)

if exist "performance_results" (
    echo ✅ Collected Results: YES
) else (
    echo ⚠️  Collected Results: NO (run collect script)
)

if exist "performance_metrics_*.txt" (
    echo ✅ Metrics Files: YES
) else (
    echo ⚠️  Metrics Files: NO (run capture script)
)

echo.
echo ========================================
echo QUICK ACTIONS
echo ========================================
echo.
echo To view HTML report:
echo   start app\build\reports\androidTests\connected\debug\index.html
echo.
echo To collect all results:
echo   .\collect_performance_results_simple.bat
echo.
echo To extract metrics:
echo   .\run_tests_with_metrics_capture.bat
echo   (or .\extract_metrics_from_html.ps1)
echo.
pause


