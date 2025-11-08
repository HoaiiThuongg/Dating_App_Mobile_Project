@echo off
echo ========================================
echo Checking for Test Reports
echo ========================================
echo.

set FOUND=0

echo Searching for test reports...
echo.

REM Check standard locations
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ FOUND: app\build\reports\androidTests\connected\debug\index.html
    set FOUND=1
) else (
    echo ❌ NOT FOUND: app\build\reports\androidTests\connected\debug\index.html
)

if exist "app\build\reports\androidTests\index.html" (
    echo ✅ FOUND: app\build\reports\androidTests\index.html
    set FOUND=1
) else (
    echo ❌ NOT FOUND: app\build\reports\androidTests\index.html
)

if exist "app\build\reports\androidTests" (
    echo ✅ Directory exists: app\build\reports\androidTests
    echo    Contents:
    dir /b "app\build\reports\androidTests" 2>nul
    set FOUND=1
) else (
    echo ❌ Directory NOT FOUND: app\build\reports\androidTests
)

echo.
echo Searching for any HTML files in reports...
for /r "app\build\reports" %%f in (*.html) do (
    echo ✅ Found: %%f
    set FOUND=1
    goto :found
)

:found
if %FOUND% EQU 0 (
    echo.
    echo ❌ NO REPORTS FOUND!
    echo.
    echo To generate reports:
    echo   1. Run: .\run_test_simple.bat
    echo   2. Or: .\run_performance_tests.bat render
) else (
    echo.
    echo ✅ Reports found! You can now run:
    echo   .\collect_performance_results.bat
)
echo.
pause

