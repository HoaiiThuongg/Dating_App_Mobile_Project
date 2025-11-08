@echo off
REM Script để chạy tất cả tests, sửa lỗi, và tạo báo cáo theo từng loại
REM KHÔNG XÓA BÁO CÁO CŨ

setlocal enabledelayedexpansion

echo ========================================
echo 🚀 CHẠY TẤT CẢ TESTS VÀ TẠO BÁO CÁO
echo ========================================
echo.

REM Kiểm tra device
adb devices | findstr /C:"device" >nul 2>&1
if errorlevel 1 (
    echo ❌ No device connected. Please connect a device or start an emulator.
    pause
    exit /b 1
)

echo ✅ Device connected
echo.

REM Tạo thư mục báo cáo với timestamp
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value') do set datetime=%%I
set REPORT_DIR=performance_results\report_%datetime:~0,8%_%datetime:~8,6%
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"

REM Tạo folder cho từng loại test
if not exist "%REPORT_DIR%\reports\render" mkdir "%REPORT_DIR%\reports\render"
if not exist "%REPORT_DIR%\reports\scroll" mkdir "%REPORT_DIR%\reports\scroll"
if not exist "%REPORT_DIR%\reports\viewmodel" mkdir "%REPORT_DIR%\reports\viewmodel"
if not exist "%REPORT_DIR%\reports\memory" mkdir "%REPORT_DIR%\reports\memory"
if not exist "%REPORT_DIR%\reports\startup" mkdir "%REPORT_DIR%\reports\startup"
if not exist "%REPORT_DIR%\reports\system" mkdir "%REPORT_DIR%\reports\system"
if not exist "%REPORT_DIR%\reports\network" mkdir "%REPORT_DIR%\reports\network"
if not exist "%REPORT_DIR%\reports\framerate" mkdir "%REPORT_DIR%\reports\framerate"
if not exist "%REPORT_DIR%\reports\size" mkdir "%REPORT_DIR%\reports\size"
if not exist "%REPORT_DIR%\reports\database" mkdir "%REPORT_DIR%\reports\database"
if not exist "%REPORT_DIR%\reports\image" mkdir "%REPORT_DIR%\reports\image"
if not exist "%REPORT_DIR%\reports\touch" mkdir "%REPORT_DIR%\reports\touch"

echo 📁 Report directory: %REPORT_DIR%
echo.

REM Chạy từng loại test và collect ngay
set TEST_TYPES=render scroll viewmodel memory startup system network framerate size database image touch
set TEST_NAMES=Render Scroll ViewModel Memory Startup System Network FrameRate AppSize Database Image Touch

set INDEX=0
for %%T in (%TEST_TYPES%) do (
    set /a INDEX+=1
    call :RunTest %%T !INDEX!
    timeout /t 2 /nobreak >nul
)

echo.
echo ========================================
echo ✅ TẤT CẢ TESTS ĐÃ HOÀN THÀNH
echo ========================================
echo.

REM Extract metrics từ tất cả reports
echo Đang extract metrics...
powershell -ExecutionPolicy Bypass -Command "$ReportPath = '%REPORT_DIR%'; $outputFile = \"$ReportPath\performance_metrics_detailed.txt\"; & '.\EXTRACT_METRICS_SIMPLE.ps1' -ReportPath $ReportPath" 2>nul

REM Tạo summary report
call :CreateSummaryReport

echo.
echo ========================================
echo 📊 BÁO CÁO ĐÃ ĐƯỢC TẠO
echo ========================================
echo.
echo 📁 Location: %REPORT_DIR%
echo.
echo 📂 Các folder báo cáo:
dir /B /AD "%REPORT_DIR%\reports" 2>nul
echo.
echo 📄 Files chính:
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" echo   ✅ Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
if exist "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt" echo   ✅ Summary: %REPORT_DIR%\BAO_CAO_TONG_HOP.txt
echo.
echo 💡 Các báo cáo cũ KHÔNG bị xóa!
echo.

pause
exit /b 0

:RunTest
set TEST_TYPE=%~1
set TEST_NUM=%~2

echo ========================================
echo [%TEST_NUM%/12] Running %TEST_TYPE% tests...
echo ========================================
echo.

REM Chạy test
echo    Đang chạy %TEST_TYPE% tests...
call run_performance_tests.bat %TEST_TYPE%
set TEST_EXIT=%ERRORLEVEL%

REM Đợi reports được ghi
timeout /t 3 /nobreak >nul

REM Collect reports vào folder riêng
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\%TEST_TYPE%\androidTests" >nul 2>&1
    echo    ✓ %TEST_TYPE% reports collected
) else (
    echo    ⚠️  No reports found for %TEST_TYPE%
)

REM Collect macrobenchmark nếu có
if "%TEST_TYPE%"=="startup" (
    if exist "app\build\outputs\connected_android_test_additional_output" (
        xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
        echo    ✓ Macrobenchmark results collected
    )
)

echo.
exit /b

:CreateSummaryReport
set SUMMARY_FILE=%REPORT_DIR%\BAO_CAO_TONG_HOP.txt

(
    echo ========================================
    echo BÁO CÁO TỔNG HỢP PERFORMANCE TESTS
    echo ========================================
    echo.
    echo Generated: %date% %time%
    echo Report Location: %REPORT_DIR%
    echo.
    echo ========================================
    echo DANH SÁCH BÁO CÁO THEO LOẠI
    echo ========================================
    echo.
) > "%SUMMARY_FILE%"

REM Liệt kê các reports có sẵn
for %%T in (render scroll viewmodel memory startup system network framerate size database image touch) do (
    if exist "%REPORT_DIR%\reports\%%T\androidTests\connected\debug\index.html" (
        (
            echo ✅ %%T Tests:
            echo    Location: %REPORT_DIR%\reports\%%T\androidTests\connected\debug\index.html
            echo.
        ) >> "%SUMMARY_FILE%"
    )
)

(
    echo ========================================
    echo METRICS SUMMARY
    echo ========================================
    echo.
) >> "%SUMMARY_FILE%"

if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    type "%REPORT_DIR%\performance_metrics_detailed.txt" >> "%SUMMARY_FILE%"
) else (
    (
        echo ⚠️  Metrics file chưa được tạo
        echo    Chạy: powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%"
    ) >> "%SUMMARY_FILE%"
)

exit /b

