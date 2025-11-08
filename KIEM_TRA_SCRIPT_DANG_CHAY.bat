@echo off
REM Script để kiểm tra xem script có còn đang chạy hay không

setlocal enabledelayedexpansion

echo ========================================
echo 🔍 KIỂM TRA SCRIPT ĐANG CHẠY
echo ========================================
echo.

REM Check for running batch processes
echo [1/4] Kiểm tra processes đang chạy...
echo.

tasklist /FI "IMAGENAME eq cmd.exe" /FO LIST | findstr /C:"cmd.exe" >nul
if errorlevel 1 (
    echo ⚠️  Không thấy cmd.exe processes
) else (
    echo ✅ Có cmd.exe processes đang chạy
    tasklist /FI "IMAGENAME eq cmd.exe" /FO TABLE | findstr "cmd.exe"
)
echo.

REM Check for gradle processes
echo [2/4] Kiểm tra Gradle processes...
echo.

tasklist /FI "IMAGENAME eq java.exe" /FO LIST | findstr /C:"java.exe" >nul
if errorlevel 1 (
    echo ⚠️  Không thấy Java/Gradle processes
) else (
    echo ✅ Có Java/Gradle processes đang chạy
    tasklist /FI "IMAGENAME eq java.exe" /FO TABLE | findstr "java.exe"
)
echo.

REM Check latest report directory
echo [3/4] Kiểm tra tiến độ tests...
echo.

set LATEST_REPORT=
for /f "delims=" %%d in ('dir /B /AD /O-D performance_results\report_* 2^>nul') do (
    set LATEST_REPORT=%%d
    goto :found
)

:found
if "%LATEST_REPORT%"=="" (
    echo ❌ Không tìm thấy report directory!
    echo    Script có thể chưa chạy hoặc đã dừng
    goto :check_log
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %LATEST_REPORT%
echo.

REM Count completed tests
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
    echo    Script có thể đã dừng (hoàn thành)
) else (
    echo ⏳ Còn %COUNT% / 12 tests đã hoàn thành
    echo    Script có thể đang chạy hoặc đã dừng
)
echo.

:check_log
REM Check log file
echo [4/4] Kiểm tra log file...
echo.

if exist "%REPORT_DIR%\full_output.log" (
    echo ✅ Log file tồn tại: %REPORT_DIR%\full_output.log
    echo.
    echo Dòng cuối cùng trong log (10 dòng):
    echo ========================================
    powershell -Command "Get-Content '%REPORT_DIR%\full_output.log' -Tail 10 -ErrorAction SilentlyContinue"
    echo ========================================
    echo.
    
    REM Check last modified time
    for %%F in ("%REPORT_DIR%\full_output.log") do (
        set LAST_MODIFIED=%%~tF
    )
    echo Last modified: !LAST_MODIFIED!
    echo.
    
    REM Check if log was recently modified (within last 5 minutes)
    powershell -Command "$log = Get-Item '%REPORT_DIR%\full_output.log' -ErrorAction SilentlyContinue; if ($log) { $age = (Get-Date) - $log.LastWriteTime; if ($age.TotalMinutes -lt 5) { Write-Host '✅ Log được cập nhật gần đây (trong 5 phút)' -ForegroundColor Green } else { Write-Host '⚠️  Log không được cập nhật gần đây (hơn 5 phút)' -ForegroundColor Yellow; Write-Host ('   Last modified: ' + $log.LastWriteTime) -ForegroundColor Gray } }"
) else (
    echo ⚠️  Log file không tồn tại
    echo    Script có thể chưa chạy hoặc đã dừng
)
echo.

REM Summary
echo ========================================
echo 📊 TÓM TẮT
echo ========================================
echo.

if %COUNT%==12 (
    echo ✅ Tất cả tests đã hoàn thành!
    echo    Script có thể đã dừng (hoàn thành)
    echo.
    echo 💡 Chạy: .\TAO_BAO_CAO_TONG_HOP.bat để tạo báo cáo cuối cùng
) else (
    echo ⏳ Còn %COUNT% / 12 tests đã hoàn thành
    echo.
    echo 💡 Nếu script đã dừng, chạy tiếp:
    echo    .\CHAY_TIEP_METRICS_CON_LAI.bat
    echo.
    echo 💡 Hoặc chạy lại từ đầu:
    echo    .\CHAY_TAT_CA_TESTS_TU_DONG.bat
)

echo.
pause
