@echo off
REM Script để tạo báo cáo từ reports đã có (không cần chạy lại tests)

echo ========================================
echo 📊 TẠO BÁO CÁO TỪ REPORTS ĐÃ CÓ
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

REM Extract metrics
echo ========================================
echo Extracting Metrics...
echo ========================================
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    REM Update script to use this report directory
    powershell -ExecutionPolicy Bypass -Command "$content = Get-Content 'EXTRACT_METRICS_SIMPLE.ps1' -Raw; $content = $content -replace '\\$ReportPath = \"[^\"]+\"', \"`$ReportPath = '%REPORT_DIR%'\"; Set-Content 'EXTRACT_METRICS_SIMPLE.ps1' -Value $content; & 'EXTRACT_METRICS_SIMPLE.ps1'"
    
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
echo 📊 BÁO CÁO
echo ========================================
echo.

if exist "%REPORT_DIR%\TEST_SUMMARY.txt" (
    echo ✅ Summary: %REPORT_DIR%\TEST_SUMMARY.txt
    echo.
    type "%REPORT_DIR%\TEST_SUMMARY.txt"
) else (
    echo ⚠️  Summary file not found
    echo    Creating summary...
    
    > "%REPORT_DIR%\TEST_SUMMARY.txt" (
        echo ========================================
        echo PERFORMANCE TESTS SUMMARY
        echo ========================================
        echo Generated: %date% %time%
        echo Report Directory: %REPORT_DIR%
        echo.
        echo ========================================
        echo REPORTS AVAILABLE
        echo ========================================
        echo.
    )
    
    set REPORT_COUNT=0
    if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Render Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Scroll Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ ViewModel Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Memory Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ App Startup
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ System Resource Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Network Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Frame Rate Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ App Size Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Database Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Image Loading Performance
        set /a REPORT_COUNT+=1
    )
    if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
        >> "%REPORT_DIR%\TEST_SUMMARY.txt" echo ✅ Touch Response Performance
        set /a REPORT_COUNT+=1
    )
    
    >> "%REPORT_DIR%\TEST_SUMMARY.txt" (
        echo.
        echo ========================================
        echo SUMMARY
        echo ========================================
        echo Total Reports: %REPORT_COUNT% / 12
        echo.
        echo Report Directory: %REPORT_DIR%
    )
    
    echo ✅ Summary created: %REPORT_DIR%\TEST_SUMMARY.txt
)

echo.
echo ========================================
echo 📁 REPORT LOCATIONS
echo ========================================
echo.
echo Base Directory: %REPORT_DIR%
echo.
echo Reports:
dir /B /AD "%REPORT_DIR%\reports" 2>nul
echo.
echo Files:
if exist "%REPORT_DIR%\TEST_SUMMARY.txt" echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" echo   - Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
if exist "%REPORT_DIR%\full_output.log" echo   - Full Output: %REPORT_DIR%\full_output.log
echo.

pause

