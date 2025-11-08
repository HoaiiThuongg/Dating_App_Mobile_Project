@echo off
REM Script đơn giản để kiểm tra trạng thái script

echo ========================================
echo 🔍 KIỂM TRA TRẠNG THÁI SCRIPT
echo ========================================
echo.

REM Find latest report
set LATEST_REPORT=
for /f "delims=" %%d in ('dir /B /AD /O-D performance_results\report_* 2^>nul') do (
    set LATEST_REPORT=%%d
    goto :found
)

:found
if "%LATEST_REPORT%"=="" (
    echo ❌ Không tìm thấy report!
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

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

REM Check log file
if exist "%REPORT_DIR%\full_output.log" (
    echo Log file: %REPORT_DIR%\full_output.log
    for %%F in ("%REPORT_DIR%\full_output.log") do (
        echo Last modified: %%~tF
    )
    echo.
    echo Dòng cuối cùng (3 dòng):
    powershell -ExecutionPolicy Bypass -Command "Get-Content '%REPORT_DIR%\full_output.log' -Tail 3 -ErrorAction SilentlyContinue"
) else (
    echo Log file không ton tai
)

echo.
echo ========================================
echo 📊 TRẠNG THÁI
echo ========================================
echo.

if %COUNT%==12 (
    echo ✅ Tất cả tests đã hoàn thành!
    echo    Script đã dừng (hoàn thành)
) else (
    echo ⏳ Còn %COUNT% / 12 tests
    echo.
    echo 💡 Để kiểm tra script có đang chạy:
    echo    - Xem log file có được cập nhật gần đây không
    echo    - Nếu log không cập nhật trong 5+ phút → Script đã dừng
    echo.
    echo 💡 Nếu script đã dừng, chạy:
    echo    .\CHAY_TIEP_METRICS_CON_LAI.bat
)

echo.
pause

