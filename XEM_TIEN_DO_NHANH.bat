@echo off
REM Quick view of test progress
cls

echo ========================================
echo QUICK VIEW - UI TESTS PROGRESS
echo ========================================
echo Updated: %date% %time%
echo.

REM Find latest report
set LATEST_REPORT=
for /f "delims=" %%D in ('dir /b /ad /o-d "ui_test_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%D
    goto :found
)
:found

if "!LATEST_REPORT!"=="" (
    echo [STATUS] No report directory - script not started yet
    goto :check_process
)

echo [REPORT] !LATEST_REPORT!
echo.

REM Count logs
set COUNT=0
for %%F in ("ui_test_results\!LATEST_REPORT!\*.log" 2^>nul) do set /a COUNT+=1
echo [LOGS] !COUNT! test classes completed
echo.

REM Check if done
if exist "ui_test_results\!LATEST_REPORT!\TEST_SUMMARY.txt" (
    echo [STATUS] Tests completed!
    echo.
    type "ui_test_results\!LATEST_REPORT!\TEST_SUMMARY.txt"
) else (
    echo [STATUS] Tests in progress...
)

:check_process
tasklist | findstr /i "java.exe" >nul
if errorlevel 1 (
    echo [PROCESS] No Java running - may be done
) else (
    echo [PROCESS] Java running - tests active
)

echo.
echo ========================================
echo Press any key to refresh...
pause >nul
call "%~f0"

