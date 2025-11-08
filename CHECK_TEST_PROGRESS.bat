@echo off
REM Script để kiểm tra tiến độ tests và tạo báo cáo từ reports đã có

echo ========================================
echo 📊 KIỂM TRA TIẾN ĐỘ TESTS
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
    echo ❌ Không tìm thấy report directory nào!
    echo    Có thể tests chưa bắt đầu chạy
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %REPORT_DIR%
echo.

REM Check which test types have reports
echo ========================================
echo Reports đã có:
echo ========================================
echo.

set REPORT_COUNT=0

if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
    echo ✅ Render Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Render Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
    echo ✅ Scroll Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Scroll Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
    echo ✅ ViewModel Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ ViewModel Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    echo ✅ Memory Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Memory Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    echo ✅ App Startup
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ App Startup - Chưa có
)

if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
    echo ✅ System Resource Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ System Resource Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
    echo ✅ Network Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Network Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
    echo ✅ Frame Rate Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Frame Rate Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
    echo ✅ App Size Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ App Size Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
    echo ✅ Database Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Database Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
    echo ✅ Image Loading Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Image Loading Performance - Chưa có
)

if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
    echo ✅ Touch Response Performance
    set /a REPORT_COUNT+=1
) else (
    echo ⏳ Touch Response Performance - Chưa có
)

echo.
echo ========================================
echo Tổng Kết
echo ========================================
echo Reports đã có: %REPORT_COUNT% / 12
echo.

REM Check if full output log exists
if exist "%REPORT_DIR%\full_output.log" (
    echo ✅ Full output log: %REPORT_DIR%\full_output.log
    echo    (Kiểm tra tiến độ tests)
) else (
    echo ⏳ Full output log - Chưa có
)

echo.
echo 💡 Để xem báo cáo:
echo    type "%REPORT_DIR%\TEST_SUMMARY.txt"
echo.
echo 💡 Để extract metrics từ reports đã có:
echo    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%"
echo.

pause

