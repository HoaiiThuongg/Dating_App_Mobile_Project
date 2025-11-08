@echo off
REM Script để gửi báo cáo kết quả cho người dùng

setlocal enabledelayedexpansion

echo ========================================
echo 📊 BÁO CÁO KẾT QUẢ PERFORMANCE TESTS
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

echo ========================================
echo TỔNG QUAN
echo ========================================
echo.
echo Reports đã có: %REPORT_COUNT% / 12
echo.

if %REPORT_COUNT%==12 (
    echo ✅ TẤT CẢ TESTS ĐÃ HOÀN THÀNH!
) else (
    echo ⏳ Tests đang chạy... (%REPORT_COUNT% / 12 hoàn thành)
    echo    Script đang tiếp tục chạy các tests còn lại
)
echo.

REM Extract metrics if not already done
if not exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    echo Đang extract metrics...
    if exist "EXTRACT_METRICS_SIMPLE.ps1" (
        powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>>"%REPORT_DIR%\metrics_extraction.log"
    )
)

REM Create comprehensive report
call TAO_BAO_CAO_TONG_HOP.bat

echo.
echo ========================================
echo 📁 CẤU TRÚC THƯ MỤC
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo Reports theo từng loại:
echo.
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
    echo ✅ Render: %REPORT_DIR%\reports\render\
) else (
    echo ⏳ Render: Chưa có
)
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
    echo ✅ Scroll: %REPORT_DIR%\reports\scroll\
) else (
    echo ⏳ Scroll: Chưa có
)
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
    echo ✅ ViewModel: %REPORT_DIR%\reports\viewmodel\
) else (
    echo ⏳ ViewModel: Chưa có
)
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    echo ✅ Memory: %REPORT_DIR%\reports\memory\
) else (
    echo ⏳ Memory: Chưa có
)
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    echo ✅ Startup: %REPORT_DIR%\reports\startup\
) else (
    echo ⏳ Startup: Chưa có
)
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
    echo ✅ System: %REPORT_DIR%\reports\system\
) else (
    echo ⏳ System: Chưa có
)
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
    echo ✅ Network: %REPORT_DIR%\reports\network\
) else (
    echo ⏳ Network: Chưa có
)
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
    echo ✅ Frame Rate: %REPORT_DIR%\reports\framerate\
) else (
    echo ⏳ Frame Rate: Chưa có
)
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
    echo ✅ App Size: %REPORT_DIR%\reports\size\
) else (
    echo ⏳ App Size: Chưa có
)
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
    echo ✅ Database: %REPORT_DIR%\reports\database\
) else (
    echo ⏳ Database: Chưa có
)
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
    echo ✅ Image: %REPORT_DIR%\reports\image\
) else (
    echo ⏳ Image: Chưa có
)
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
    echo ✅ Touch: %REPORT_DIR%\reports\touch\
) else (
    echo ⏳ Touch: Chưa có
)

echo.
echo ========================================
echo 📄 FILES BÁO CÁO
echo ========================================
echo.
if exist "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt" (
    echo ✅ Báo cáo tổng hợp: %REPORT_DIR%\BAO_CAO_TONG_HOP.txt
) else (
    echo ⏳ Báo cáo tổng hợp: Chưa có
)
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    echo ✅ Metrics chi tiết: %REPORT_DIR%\performance_metrics_detailed.txt
) else (
    echo ⏳ Metrics chi tiết: Chưa có
)
if exist "%REPORT_DIR%\TEST_SUMMARY.txt" (
    echo ✅ Test summary: %REPORT_DIR%\TEST_SUMMARY.txt
) else (
    echo ⏳ Test summary: Chưa có
)
if exist "%REPORT_DIR%\full_output.log" (
    echo ✅ Full output log: %REPORT_DIR%\full_output.log
) else (
    echo ⏳ Full output log: Chưa có
)

echo.
echo ========================================
echo 💡 XEM BÁO CÁO
echo ========================================
echo.
echo 1. Báo cáo tổng hợp:
echo    type "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt"
echo.
echo 2. Metrics chi tiết:
echo    type "%REPORT_DIR%\performance_metrics_detailed.txt"
echo.
echo 3. Test summary:
echo    type "%REPORT_DIR%\TEST_SUMMARY.txt"
echo.
echo 4. Mở HTML reports:
echo    start "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html"
echo.

if %REPORT_COUNT% LSS 12 (
    echo ========================================
    echo ⏳ TESTS ĐANG CHẠY
    echo ========================================
    echo.
    echo Còn %REPORT_COUNT% / 12 tests đã hoàn thành
    echo Script đang tiếp tục chạy các tests còn lại...
    echo.
    echo Để kiểm tra tiến độ:
    echo    .\CHECK_TEST_PROGRESS.bat
    echo.
    echo Để tạo lại báo cáo khi tests hoàn tất:
    echo    .\TAO_BAO_CAO_TONG_HOP.bat
    echo.
)

pause

