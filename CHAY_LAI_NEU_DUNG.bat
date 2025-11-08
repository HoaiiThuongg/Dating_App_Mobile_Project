@echo off
REM Script để kiểm tra và chạy lại nếu script đã dừng

setlocal enabledelayedexpansion

echo ========================================
echo 🔄 KIỂM TRA VÀ CHẠY LẠI NẾU CẦN
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
    echo    Chạy script chính: .\CHAY_TAT_CA_TESTS_TU_DONG.bat
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%
set LOG_FILE=%REPORT_DIR%\full_output.log

REM Check if log is being updated
if exist "%LOG_FILE%" (
    echo Kiểm tra log file...
    for %%F in ("%LOG_FILE%") do set LOG_SIZE=%%~zF
    timeout /t 5 /nobreak >nul
    for %%F in ("%LOG_FILE%") do set LOG_SIZE_NEW=%%~zF
    
    if !LOG_SIZE_NEW! GTR !LOG_SIZE! (
        echo ✅ Script đang chạy! Log đang được cập nhật.
        echo    Không cần chạy lại.
        pause
        exit /b 0
    ) else (
        echo ⚠️  Script có vẻ đã dừng. Log không thay đổi.
        echo.
    )
) else (
    echo ⚠️  Không tìm thấy log file.
    echo.
)

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
    echo    Không cần chạy lại.
    echo.
    echo Đang tạo báo cáo cuối cùng...
    call TAO_BAO_CAO_TONG_HOP.bat
    pause
    exit /b 0
)

REM Check device
echo Kiểm tra device...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ Không có device!
    echo    Vui lòng kết nối device/emulator trước.
    pause
    exit /b 1
)

echo ✅ Device OK
echo.
echo ========================================
echo Chạy tiếp các tests/metrics còn lại...
echo ========================================
echo.

REM Run remaining tests
call CHAY_TIEP_METRICS_CON_LAI.bat

pause

