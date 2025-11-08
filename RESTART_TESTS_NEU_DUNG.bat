@echo off
REM Script để restart tests nếu script đã dừng

setlocal enabledelayedexpansion

echo ========================================
echo 🔄 RESTART TESTS NẾU ĐÃ DỪNG
echo ========================================
echo.

REM Check latest report
set LATEST_REPORT=
for /f "delims=" %%d in ('dir /B /AD /O-D performance_results\report_* 2^>nul') do (
    set LATEST_REPORT=%%d
    goto :found
)

:found
if "%LATEST_REPORT%"=="" (
    echo ❌ Không tìm thấy report directory!
    echo    Chạy script chính: .\CHAY_TAT_CA_TESTS_TU_DONG.bat
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %LATEST_REPORT%
echo.

REM Count completed
set COUNT=0
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a COUNT+=1

echo Tests đã hoàn thành: %COUNT% / 12
echo.

if %COUNT%==12 (
    echo ✅ Tất cả tests đã hoàn thành!
    echo    Không cần restart
    echo.
    echo 💡 Chạy: .\TAO_BAO_CAO_TONG_HOP.bat để tạo báo cáo cuối cùng
    pause
    exit /b 0
)

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ Không có device/emulator kết nối!
    echo    Vui lòng kết nối device trước
    pause
    exit /b 1
)

echo ✅ Device đã kết nối
echo.

REM Check if log was recently modified
if exist "%REPORT_DIR%\full_output.log" (
    echo Kiểm tra log file...
    powershell -Command "$log = Get-Item '%REPORT_DIR%\full_output.log' -ErrorAction SilentlyContinue; if ($log) { $age = (Get-Date) - $log.LastWriteTime; if ($age.TotalMinutes -lt 5) { Write-Host '⚠️  Log được cập nhật gần đây (trong 5 phút)' -ForegroundColor Yellow; Write-Host '   Script có thể vẫn đang chạy!' -ForegroundColor Yellow; Write-Host ''; Write-Host 'Bạn có muốn restart không? (có thể chạy song song)' -ForegroundColor Cyan; $response = Read-Host 'Nhấn Y để tiếp tục, N để hủy'; if ($response -ne 'Y' -and $response -ne 'y') { exit 1 } } }"
)

echo.
echo ========================================
echo 🔄 RESTART TESTS
echo ========================================
echo.
echo Đang chạy tiếp các tests/metrics còn lại...
echo.

REM Run the continue script
call CHAY_TIEP_METRICS_CON_LAI.bat

pause


