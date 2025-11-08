@echo off
REM Simple batch version for viewing test progress

echo ========================================
echo XEM LOG TEST DANG CHAY
echo ========================================
echo.

REM Find latest report directory
set LATEST_REPORT=
for /f "delims=" %%D in ('dir /b /ad /o-d "ui_test_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%D
    goto :found
)
:found

if "!LATEST_REPORT!"=="" (
    echo Chua co report directory nao.
    echo Script co the chua bat dau.
    pause
    exit /b 0
)

echo Latest report: ui_test_results\!LATEST_REPORT!
echo.

REM Show all log files
echo ========================================
echo Test Log Files:
echo ========================================
echo.

set COUNT=0
for %%F in ("ui_test_results\!LATEST_REPORT!\*.log") do (
    set /a COUNT+=1
    echo [!COUNT!] %%~nxF
    echo     Size: %%~zF bytes
    echo     Modified: %%~tF
    echo.
)

echo Total: !COUNT! log files
echo.

REM Show latest log content
echo ========================================
echo Latest Log Content (last 20 lines):
echo ========================================
echo.

set LATEST_LOG=
set LATEST_TIME=1900-01-01
for %%F in ("ui_test_results\!LATEST_REPORT!\*.log") do (
    for %%T in ("%%F") do (
        if "%%~tF" GTR "!LATEST_TIME!" (
            set LATEST_LOG=%%F
            set LATEST_TIME=%%~tF
        )
    )
)

if not "!LATEST_LOG!"=="" (
    echo File: !LATEST_LOG!
    echo.
    powershell -Command "Get-Content '!LATEST_LOG!' -Tail 20"
) else (
    echo No log files found yet.
)

echo.
echo ========================================
echo.
echo Press any key to refresh, or close to exit...
pause >nul

REM Refresh
call "%~f0"

