@echo off
REM Script MASTER - ĐẢM BẢO 100% CÓ KẾT QUẢ
REM Chạy script này và bạn CHẮC CHẮN sẽ có kết quả
setlocal enabledelayedexpansion

echo ========================================
echo 🚀 RUN TESTS - ĐẢM BẢO CÓ KẾT QUẢ
echo ========================================
echo.
echo Script này ĐẢM BẢO:
echo   ✅ Chạy tất cả tests
echo   ✅ Collect tất cả reports
echo   ✅ Extract metrics từ nhiều nguồn
echo   ✅ Tạo file metrics (dù thế nào)
echo   ✅ Tạo summary report
echo.
echo ⏱️  Thời gian: ~10-15 phút
echo.
pause
echo.

REM ========================================
REM BƯỚC 1: KIỂM TRA VÀ CHUẨN BỊ
REM ========================================
echo ========================================
echo BƯỚC 1: Kiểm tra và chuẩn bị
echo ========================================
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ KHÔNG CÓ DEVICE!
    echo    Vui lòng kết nối device hoặc start emulator
    echo.
    pause
    exit /b 1
)
echo ✅ Device đã kết nối
echo.

REM Create output directories
set OUTPUT_DIR=performance_results
set TIMESTAMP=%date:~-4,4%%date:~3,2%%date:~0,2%_%time:~0,2%%time:~3,2%%time:~6,2%
set TIMESTAMP=%TIMESTAMP: =0%
set REPORT_DIR=%OUTPUT_DIR%\report_%TIMESTAMP%

echo Tạo thư mục kết quả: %REPORT_DIR%
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
if not exist "%REPORT_DIR%\benchmarks" mkdir "%REPORT_DIR%\benchmarks"
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
echo ✅ Thư mục đã tạo
echo.

REM ========================================
REM BƯỚC 2: CHẠY TẤT CẢ TESTS VÀ CAPTURE OUTPUT
REM ========================================
echo ========================================
echo BƯỚC 2: Chạy tất cả tests
echo ========================================
echo.
echo ⏱️  Bắt đầu chạy tests... (10-15 phút)
echo    Output sẽ được capture vào file
echo.

set FULL_OUTPUT=%REPORT_DIR%\logs\full_test_output.txt
set CONSOLE_OUTPUT=%REPORT_DIR%\logs\console_output.txt

REM Run tests and capture ALL output
call run_all_performance_tests.bat > "%FULL_OUTPUT%" 2>&1
set TEST_EXIT_CODE=%ERRORLEVEL%

echo.
echo ✅ Tests đã chạy xong (Exit code: %TEST_EXIT_CODE%)
echo    Full output: %FULL_OUTPUT%
echo.

REM Wait for reports to be written
echo Đợi reports được ghi vào disk...
timeout /t 5 /nobreak >nul
echo.

REM ========================================
REM BƯỚC 3: COLLECT TẤT CẢ REPORTS
REM ========================================
echo ========================================
echo BƯỚC 3: Collect tất cả reports
echo ========================================
echo.

set COLLECTED_REPORTS=0

REM Collect HTML reports
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ Tìm thấy HTML reports
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    set COLLECTED_REPORTS=1
    echo    ✓ HTML reports đã copy
) else if exist "app\build\reports\androidTests\index.html" (
    echo ✅ Tìm thấy HTML reports (alternative location)
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    set COLLECTED_REPORTS=1
    echo    ✓ HTML reports đã copy
) else (
    echo ⚠️  Không tìm thấy HTML reports trong build directory
    echo    (Có thể tests fail sớm hoặc reports chưa được tạo)
)

REM Collect macrobenchmark results
if exist "app\build\outputs\connected_android_test_additional_output" (
    echo ✅ Tìm thấy macrobenchmark results
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    echo    ✓ Macrobenchmark results đã copy
) else (
    echo ⚠️  Không tìm thấy macrobenchmark results (có thể bình thường)
)

echo.

REM ========================================
REM BƯỚC 4: EXTRACT METRICS TỪ NHIỀU NGUỒN
REM ========================================
echo ========================================
echo BƯỚC 4: Extract metrics từ nhiều nguồn
echo ========================================
echo.

set METRICS_FILE=%REPORT_DIR%\performance_metrics_detailed.txt
set METRICS_CSV=%REPORT_DIR%\performance_metrics_detailed.csv

REM Extract from full output (GUARANTEED to have something)
echo [4.1] Extracting từ console output...
(
    echo ========================================
    echo PERFORMANCE METRICS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo Report Location: %REPORT_DIR%
    echo.
    echo ========================================
    echo METRICS TỪ CONSOLE OUTPUT
    echo ========================================
    echo.
    
    REM Extract render times
    findstr /C:"render time" "%FULL_OUTPUT%" 2>nul
    
    REM Extract scroll metrics
    findstr /C:"scrollable" "%FULL_OUTPUT%" 2>nul
    findstr /C:"Average idle" "%FULL_OUTPUT%" 2>nul
    findstr /C:"Max:" "%FULL_OUTPUT%" 2>nul | findstr /C:"ms"
    findstr /C:"Initial:" "%FULL_OUTPUT%" 2>nul | findstr /C:"ms"
    
    REM Extract ViewModel metrics
    findstr /C:"Avg:" "%FULL_OUTPUT%" 2>nul
    findstr /C:"P95:" "%FULL_OUTPUT%" 2>nul
    findstr /C:"LoadUsers" /C:"LoadMessages" /C:"SwipeAction" /C:"SendMessage" "%FULL_OUTPUT%" 2>nul | findstr /C:"ms"
    
    REM Extract memory metrics
    findstr /C:"memory usage" "%FULL_OUTPUT%" 2>nul
    findstr /C:"Initial memory" /C:"Peak memory" /C:"After navigation" "%FULL_OUTPUT%" 2>nul
    findstr /C:"MB" "%FULL_OUTPUT%" 2>nul | findstr /C:"memory" /C:"Memory"
    
    echo.
    echo ========================================
    echo TẤT CẢ DÒNG CÓ METRICS (Raw)
    echo ========================================
    echo.
    findstr /C:"ms" /C:"MB" "%FULL_OUTPUT%" 2>nul | findstr /C:"render" /C:"scroll" /C:"memory" /C:"Avg" /C:"P95" /C:"Load" /C:"Swipe" /C:"Send" /C:"Start" /C:"time"
    
    echo.
    echo ========================================
    echo FULL OUTPUT LOCATION
    echo ========================================
    echo %FULL_OUTPUT%
    echo.
    echo Nếu metrics trên rỗng, check file full output ở trên.
    echo Tất cả println() statements từ tests đều có trong file đó.
    echo.
    
) > "%METRICS_FILE%"

echo    ✓ Metrics extracted từ console output
echo.

REM Try PowerShell extraction from HTML
if exist "extract_metrics_from_html.ps1" (
    echo [4.2] Extracting từ HTML reports (nếu có)...
    powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1" 2>nul
    if !ERRORLEVEL! EQU 0 (
        echo    ✓ HTML extraction completed
    )
    echo.
)

REM ========================================
REM BƯỚC 5: TẠO SUMMARY REPORT
REM ========================================
echo ========================================
echo BƯỚC 5: Tạo summary report
echo ========================================
echo.

set SUMMARY_FILE=%REPORT_DIR%\SUMMARY.txt

(
    echo ========================================
    echo TEST RESULTS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo.
    echo Test Status: 
    if %TEST_EXIT_CODE%==0 (
        echo   ✅ Tests completed successfully
    ) else (
        echo   ⚠️  Tests completed with exit code: %TEST_EXIT_CODE%
        echo      (Some tests may have failed, but metrics are still captured)
    )
    echo.
    echo Reports Collected:
    if %COLLECTED_REPORTS%==1 (
        echo   ✅ HTML Reports: YES
        echo      Location: %REPORT_DIR%\reports\androidTests\connected\debug\index.html
    ) else (
        echo   ⚠️  HTML Reports: NO (check full output for metrics)
    )
    echo.
    if exist "%REPORT_DIR%\benchmarks" (
        echo   ✅ Macrobenchmark: YES
        echo      Location: %REPORT_DIR%\benchmarks\
    ) else (
        echo   ⚠️  Macrobenchmark: NO (may be normal)
    )
    echo.
    echo Metrics File:
    echo   ✅ Created: %METRICS_FILE%
    echo.
    echo Full Output:
    echo   ✅ Saved: %FULL_OUTPUT%
    echo.
    echo ========================================
    echo FILES CREATED
    echo ========================================
    echo.
    echo 1. Metrics: %METRICS_FILE%
    echo 2. Full Output: %FULL_OUTPUT%
    echo 3. Summary: %SUMMARY_FILE%
    if %COLLECTED_REPORTS%==1 (
        echo 4. HTML Report: %REPORT_DIR%\reports\androidTests\connected\debug\index.html
    )
    echo.
    echo ========================================
    echo QUICK ACTIONS
    echo ========================================
    echo.
    echo Xem metrics:
    echo   type "%METRICS_FILE%"
    echo.
    if %COLLECTED_REPORTS%==1 (
        echo Xem HTML report:
        echo   start "%REPORT_DIR%\reports\androidTests\connected\debug\index.html"
        echo.
    )
    echo Xem full output:
    echo   type "%FULL_OUTPUT%"
    echo.
    echo Mở thư mục kết quả:
    echo   explorer "%REPORT_DIR%"
    echo.
    
) > "%SUMMARY_FILE%"

echo ✅ Summary report created
echo.

REM ========================================
REM BƯỚC 6: HIỂN THỊ KẾT QUẢ
REM ========================================
echo ========================================
echo ✅ HOÀN TẤT!
echo ========================================
echo.
echo 📊 KẾT QUẢ ĐÃ ĐƯỢC TẠO:
echo.
echo 1. Metrics File:
echo    %METRICS_FILE%
echo.
echo 2. Summary Report:
echo    %SUMMARY_FILE%
echo.
if %COLLECTED_REPORTS%==1 (
    echo 3. HTML Report:
    echo    %REPORT_DIR%\reports\androidTests\connected\debug\index.html
    echo.
)
echo 4. Full Output:
echo    %FULL_OUTPUT%
echo.
echo ========================================
echo XEM KẾT QUẢ
echo ========================================
echo.
echo Để xem metrics:
echo   type "%METRICS_FILE%"
echo.
if %COLLECTED_REPORTS%==1 (
    echo Để xem HTML report:
    echo   start "%REPORT_DIR%\reports\androidTests\connected\debug\index.html"
    echo.
)
echo Để mở thư mục kết quả:
echo   explorer "%REPORT_DIR%"
echo.

REM Show first few lines of metrics
echo ========================================
echo PREVIEW METRICS (First 30 lines)
echo ========================================
echo.
if exist "%METRICS_FILE%" (
    powershell -Command "Get-Content '%METRICS_FILE%' -Head 30"
) else (
    echo ⚠️  Metrics file not found (should not happen)
)
echo.

echo ========================================
echo ✅ ĐẢM BẢO: BẠN ĐÃ CÓ KẾT QUẢ!
echo ========================================
echo.
echo File metrics: %METRICS_FILE%
echo File summary: %SUMMARY_FILE%
echo.
echo Dù tests pass hay fail, bạn đều có:
echo   ✅ Metrics file (từ console output)
echo   ✅ Full output (tất cả logs)
echo   ✅ Summary report (tổng hợp)
if %COLLECTED_REPORTS%==1 (
    echo   ✅ HTML reports (nếu có)
)
echo.
pause


