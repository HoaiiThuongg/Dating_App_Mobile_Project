@echo off
REM Script để monitor tiến độ tests và tạo báo cáo khi hoàn tất

setlocal enabledelayedexpansion

echo ========================================
echo 📊 MONITOR TESTS VÀ TẠO BÁO CÁO
echo ========================================
echo.

REM Find latest report directory
set LATEST_REPORT=
for /f "delims=" %%d in ('dir /B /AD /O-D performance_results\report_* 2^>nul') do (
    set LATEST_REPORT=%%d
    goto :found
)

:found
if "%LATEST_REPORT%"=="" (
    echo ❌ Không tìm thấy report directory!
    echo    Script có thể chưa bắt đầu chạy
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %REPORT_DIR%
echo.

REM Wait for tests to complete
echo Đang đợi tests hoàn tất...
echo (Kiểm tra mỗi 30 giây)
echo.

:check_loop
timeout /t 30 /nobreak >nul

REM Check if all 12 test types have reports or if script is still running
set COMPLETE_COUNT=0
set STILL_RUNNING=0

if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a COMPLETE_COUNT+=1

REM Check if full_output.log is still being written (script running)
if exist "%REPORT_DIR%\full_output.log" (
    REM Check if last line contains test number
    findstr /C:"[12/12]" "%REPORT_DIR%\full_output.log" >nul 2>&1
    if errorlevel 1 (
        set STILL_RUNNING=1
    )
)

echo [%time%] Completed: %COMPLETE_COUNT% / 12 tests

if %COMPLETE_COUNT%==12 (
    echo.
    echo ✅ Tất cả tests đã hoàn tất!
    goto :create_report
)

if %STILL_RUNNING%==0 (
    REM Check if script has been running for more than 30 minutes
    REM If so, assume it's done or stuck
    echo    (Script có thể đã hoàn tất hoặc gặp lỗi)
    goto :create_report
)

goto :check_loop

:create_report
echo.
echo ========================================
echo TẠO BÁO CÁO TỔNG HỢP
echo ========================================
echo.

REM Extract metrics
if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    echo Extracting metrics...
    powershell -ExecutionPolicy Bypass -Command "$content = Get-Content 'EXTRACT_METRICS_SIMPLE.ps1' -Raw; $content = $content -replace '(?m)^\$ReportPath = \"[^\"]+\"', \"`$ReportPath = '%REPORT_DIR%'\"; Set-Content 'EXTRACT_METRICS_SIMPLE.ps1' -Value $content -Encoding UTF8; & 'EXTRACT_METRICS_SIMPLE.ps1'" 2>>"%REPORT_DIR%\metrics_extraction.log"
    
    if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
        echo ✅ Metrics extracted
    )
)

echo.
echo ========================================
echo 📊 BÁO CÁO ĐÃ SẴN SÀNG
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo Files:
if exist "%REPORT_DIR%\TEST_SUMMARY.txt" echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" echo   - Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
if exist "%REPORT_DIR%\full_output.log" echo   - Full Output: %REPORT_DIR%\full_output.log
echo.
echo Reports by Type:
dir /B /AD "%REPORT_DIR%\reports" 2>nul
echo.

pause

