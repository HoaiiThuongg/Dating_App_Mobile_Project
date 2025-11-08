@echo off
REM Script để tạo báo cáo tổng hợp từ reports đã có

setlocal enabledelayedexpansion

echo ========================================
echo 📊 TẠO BÁO CÁO TỔNG HỢP
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
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %REPORT_DIR%
echo.

REM Count reports
set REPORT_COUNT=0
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1

echo Reports đã có: %REPORT_COUNT% / 12
echo.

REM Extract metrics
echo ========================================
echo Extracting Metrics...
echo ========================================
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>>"%REPORT_DIR%\metrics_extraction.log"
    
    if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
        echo ✅ Metrics extracted: %REPORT_DIR%\performance_metrics_detailed.txt
    ) else (
        echo ⚠️  Metrics file not generated
    )
) else (
    echo ❌ Metrics extraction script not found!
)

echo.
echo ========================================
echo 📊 BÁO CÁO TỔNG HỢP
echo ========================================
echo.

REM Create comprehensive report
set FINAL_REPORT=%REPORT_DIR%\BAO_CAO_TONG_HOP.txt
> "%FINAL_REPORT%" (
    echo ========================================
    echo BÁO CÁO TỔNG HỢP PERFORMANCE TESTS
    echo ========================================
    echo.
    echo Generated: %date% %time%
    echo Report Directory: %REPORT_DIR%
    echo.
    echo ========================================
    echo TỔNG QUAN
    echo ========================================
    echo.
    echo Total Reports: %REPORT_COUNT% / 12
    echo.
    echo ========================================
    echo REPORTS THEO TỪNG LOẠI
    echo ========================================
    echo.
)

if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Render Performance: %REPORT_DIR%\reports\render\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Render Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Scroll Performance: %REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Scroll Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ ViewModel Performance: %REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ ViewModel Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Memory Performance: %REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Memory Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ App Startup: %REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ App Startup: Chưa có
)

if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ System Resource Performance: %REPORT_DIR%\reports\system\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ System Resource Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Network Performance: %REPORT_DIR%\reports\network\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Network Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Frame Rate Performance: %REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Frame Rate Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ App Size Performance: %REPORT_DIR%\reports\size\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ App Size Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Database Performance: %REPORT_DIR%\reports\database\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Database Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Image Loading Performance: %REPORT_DIR%\reports\image\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Image Loading Performance: Chưa có
)

if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
    >> "%FINAL_REPORT%" echo ✅ Touch Response Performance: %REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html
) else (
    >> "%FINAL_REPORT%" echo ⏳ Touch Response Performance: Chưa có
)

>> "%FINAL_REPORT%" (
    echo.
    echo ========================================
    echo METRICS
    echo ========================================
    echo.
)

if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    type "%REPORT_DIR%\performance_metrics_detailed.txt" >> "%FINAL_REPORT%"
) else (
    >> "%FINAL_REPORT%" echo Metrics file chưa được tạo.
    >> "%FINAL_REPORT%" echo Chạy: powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%"
)

>> "%FINAL_REPORT%" (
    echo.
    echo ========================================
    echo FILES
    echo ========================================
    echo.
    echo - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
    echo - Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
    echo - Full Output: %REPORT_DIR%\full_output.log
    echo - Build Log: %REPORT_DIR%\build_log.txt
    echo - Comprehensive Report: %REPORT_DIR%\BAO_CAO_TONG_HOP.txt
    echo.
)

echo ✅ Báo cáo tổng hợp đã được tạo: %FINAL_REPORT%
echo.
echo 💡 Xem báo cáo:
echo    type "%FINAL_REPORT%"
echo.

pause


