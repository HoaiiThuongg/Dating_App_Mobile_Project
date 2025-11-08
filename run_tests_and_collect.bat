@echo off
echo ========================================
echo Run Tests and Collect Results
echo ========================================
echo.
echo This will:
echo   1. Run a simple performance test
echo   2. Collect the results
echo   3. Show you where the reports are
echo.
pause
echo.

echo [1/3] Running simple test...
call run_test_simple.bat
if errorlevel 1 (
    echo.
    echo ⚠️ Test failed, but continuing to collect any available reports...
)
echo.

echo [2/3] Waiting 2 seconds for reports to be written...
timeout /t 2 /nobreak >nul
echo.

echo [3/3] Collecting results...
call collect_performance_results.bat
echo.

echo ========================================
echo ✅ Done!
echo ========================================
echo.
pause


