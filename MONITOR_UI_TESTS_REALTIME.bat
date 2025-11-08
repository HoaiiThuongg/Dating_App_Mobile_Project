@echo off
setlocal enabledelayedexpansion

echo ========================================
echo REAL-TIME MONITOR - UI TESTS PROGRESS
echo ========================================
echo.
echo This will refresh every 10 seconds.
echo Press Ctrl+C to stop monitoring.
echo.

:loop
cls
echo ========================================
echo REAL-TIME MONITOR - UI TESTS PROGRESS
echo ========================================
echo Last updated: %date% %time%
echo.

REM Find latest report directory
set LATEST_REPORT=
for /f "delims=" %%D in ('dir /b /ad /o-d "ui_test_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%D
    goto :found
)
:found

if "!LATEST_REPORT!"=="" (
    echo [STATUS] No report directory found yet.
    echo           Script may not have started or build is in progress.
    echo.
    goto :check_process
)

echo [REPORT DIR] ui_test_results\!LATEST_REPORT!
echo.

REM Count test logs
set COUNT=0
set LATEST_LOG=
set LATEST_TIME=
for %%F in ("ui_test_results\!LATEST_REPORT!\*.log" 2^>nul) do (
    set /a COUNT+=1
    for %%T in ("%%F") do (
        set LATEST_LOG=%%~nxF
        set LATEST_TIME=%%~tT
    )
)

echo [TEST LOGS] Total: !COUNT! log files
if not "!LATEST_LOG!"=="" (
    echo            Latest: !LATEST_LOG!
    echo            Updated: !LATEST_TIME!
)
echo.

REM Check reports
if exist "ui_test_results\!LATEST_REPORT!\reports\index.html" (
    echo [REPORTS] HTML report available!
    echo           Location: ui_test_results\!LATEST_REPORT!\reports\index.html
) else (
    echo [REPORTS] HTML report not yet created
)
echo.

REM Check coverage
if exist "ui_test_results\!LATEST_REPORT!\coverage\index.html" (
    echo [COVERAGE] HTML report available!
    echo            Location: ui_test_results\!LATEST_REPORT!\coverage\index.html
) else (
    echo [COVERAGE] HTML report not yet created
)
echo.

:check_process
REM Check if Gradle is running
tasklist | findstr /i "java.exe" >nul
if errorlevel 1 (
    echo [PROCESS] No Java/Gradle process running
    echo          Tests may have completed
) else (
    echo [PROCESS] Java/Gradle process RUNNING
    echo          Tests are in progress...
)

echo.
echo ========================================
echo Refreshing in 10 seconds...
echo Press Ctrl+C to stop
echo ========================================

timeout /t 10 /nobreak >nul
goto :loop

