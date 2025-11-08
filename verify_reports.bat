@echo off
echo ========================================
echo Verifying Test Reports
echo ========================================
echo.

set HAS_REPORTS=0

echo Checking for test reports...
echo.

if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ FOUND: Main HTML Report
    echo    Location: app\build\reports\androidTests\connected\debug\index.html
    echo.
    
    REM Get file size
    for %%A in ("app\build\reports\androidTests\connected\debug\index.html") do (
        echo    Size: %%~zA bytes
    )
    echo.
    
    REM Count HTML files
    set /a HTML_COUNT=0
    for /r "app\build\reports\androidTests" %%f in (*.html) do (
        set /a HTML_COUNT+=1
    )
    echo    Total HTML files: %HTML_COUNT%
    echo.
    
    REM Check for CSS and JS
    if exist "app\build\reports\androidTests\connected\debug\css\style.css" (
        echo ✅ CSS files found
    )
    if exist "app\build\reports\androidTests\connected\debug\js\report.js" (
        echo ✅ JavaScript files found
    )
    echo.
    
    set HAS_REPORTS=1
) else (
    echo ❌ NOT FOUND: Main HTML Report
    echo    Expected: app\build\reports\androidTests\connected\debug\index.html
)

if exist "app\build\reports\androidTests\connected\debug\com.example.atry.performance.ScreenRenderPerformanceTest.html" (
    echo ✅ FOUND: ScreenRenderPerformanceTest report
) else (
    echo ⚠️  NOT FOUND: ScreenRenderPerformanceTest report
)

echo.
echo ========================================
if %HAS_REPORTS% EQU 1 (
    echo ✅ Reports are properly generated!
    echo.
    echo To view reports:
    echo   start app\build\reports\androidTests\connected\debug\index.html
    echo.
    echo To collect results:
    echo   .\collect_performance_results_simple.bat
) else (
    echo ❌ Reports NOT found!
    echo.
    echo Run tests first:
    echo   .\run_test_simple.bat
    echo   .\run_all_performance_tests.bat
)
echo ========================================
echo.
pause


