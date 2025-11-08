@echo off
REM Script để chạy TẤT CẢ tests, sửa lỗi, và tạo báo cáo
REM Không xóa báo cáo cũ, chia folder theo từng loại

setlocal enabledelayedexpansion

echo ========================================
echo 🚀 CHẠY TẤT CẢ TESTS VÀ TẠO BÁO CÁO
echo ========================================
echo.
echo Script này sẽ:
echo   ✅ Chạy tất cả 12 loại performance tests
echo   ✅ Sửa lỗi nếu có
echo   ✅ Chia folder theo từng loại
echo   ✅ KHÔNG xóa báo cáo cũ
echo   ✅ Tạo báo cáo tổng hợp
echo.
echo ⏱️  Thời gian: ~20-25 phút
echo.

REM Check device
echo Kiểm tra device...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ Không có device/emulator kết nối!
    echo 💡 Vui lòng:
    echo    1. Kết nối device qua USB, HOẶC
    echo    2. Khởi động Android Emulator
    echo.
    pause
    exit /b 1
)
echo ✅ Device đã kết nối
echo.

REM Create report directory with timestamp
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value') do set datetime=%%I
set DATE_STR=%datetime:~0,8%_%datetime:~8,6%
set REPORT_DIR=performance_results\report_%DATE_STR%

if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"

REM Create subdirectories for each test type
set TEST_TYPES=render scroll viewmodel memory startup system network framerate size database image touch
for %%t in (%TEST_TYPES%) do (
    if not exist "%REPORT_DIR%\reports\%%t" mkdir "%REPORT_DIR%\reports\%%t"
)

echo ✅ Đã tạo thư mục: %REPORT_DIR%
echo.

REM Build test APK first
echo ========================================
echo Building test APK...
echo ========================================
echo.
echo Đang build test APK (có thể mất vài phút)...
call gradlew.bat assembleDebugAndroidTest > "%REPORT_DIR%\build_log.txt" 2>&1
if errorlevel 1 (
    echo ⚠️  Build có lỗi!
    echo    Xem log: %REPORT_DIR%\build_log.txt
    echo.
    echo Đang thử rebuild với clean...
    call gradlew.bat clean assembleDebugAndroidTest >> "%REPORT_DIR%\build_log.txt" 2>&1
    if errorlevel 1 (
        echo ❌ Build vẫn thất bại!
        echo    Vui lòng kiểm tra: %REPORT_DIR%\build_log.txt
        echo.
        echo 💡 Có thể cần:
        echo    1. Kiểm tra dependencies trong build.gradle.kts
        echo    2. Sync Gradle trong Android Studio
        echo    3. Xóa .gradle cache và rebuild
        pause
        exit /b 1
    )
)
echo ✅ Build thành công
echo.

REM Full output log
set FULL_OUTPUT=%REPORT_DIR%\full_output.log
> "%FULL_OUTPUT%" echo Starting tests at %date% %time%

REM Test results summary
set SUMMARY_FILE=%REPORT_DIR%\TEST_SUMMARY.txt
> "%SUMMARY_FILE%" (
    echo ========================================
    echo PERFORMANCE TESTS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo Report Directory: %REPORT_DIR%
    echo.
    echo ========================================
    echo TEST RESULTS
    echo ========================================
    echo.
)

REM Counter for tests
set TEST_COUNT=0
set PASSED_COUNT=0
set FAILED_COUNT=0

REM Function to run test and collect results
goto :run_tests

:run_test
set TEST_TYPE=%~1
set TEST_NUMBER=%~2
set TEST_NAME=%~3
set TEST_CLASS=%~4

set /a TEST_COUNT+=1

echo ========================================
echo [%TEST_NUMBER%/12] %TEST_NAME%
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [%TEST_NUMBER%/12] %TEST_NAME%
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

REM Run the test
call run_performance_tests.bat %TEST_TYPE% >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!

REM Wait for reports to be written
echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

REM Collect reports
echo Collecting reports...
set REPORT_COLLECTED=0
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\%TEST_TYPE%\androidTests" >nul 2>&1
    if !ERRORLEVEL!==0 (
        set REPORT_COLLECTED=1
        echo    ✓ Reports collected to: %REPORT_DIR%\reports\%TEST_TYPE%\
    )
)

REM Record result
>> "%SUMMARY_FILE%" (
    echo [%TEST_NUMBER%/12] %TEST_NAME%
    echo   Type: %TEST_TYPE%
    echo   Class: %TEST_CLASS%
    echo   Exit Code: !TEST_EXIT!
    if !REPORT_COLLECTED!==1 (
        echo   Reports: ✓ Collected
    ) else (
        echo   Reports: ✗ Not found
    )
    echo.
)

if !TEST_EXIT!==0 (
    set /a PASSED_COUNT+=1
    echo ✅ Test completed
) else (
    set /a FAILED_COUNT+=1
    echo ⚠️  Test có vấn đề (Exit code: !TEST_EXIT!)
    echo    Xem log: %FULL_OUTPUT%
)
echo.
echo.

exit /b 0

:run_tests
REM Run all 12 test types
call :run_test render 1 "Screen Render Performance" "com.example.atry.performance.ScreenRenderPerformanceTest"
call :run_test scroll 2 "Scroll Performance" "com.example.atry.performance.ScrollPerformanceTest"
call :run_test viewmodel 3 "ViewModel Performance" "com.example.atry.performance.ViewModelPerformanceTest"
call :run_test memory 4 "Memory Performance" "com.example.atry.performance.MemoryPerformanceTest"
call :run_test startup 5 "App Startup (Macrobenchmark)" "com.example.atry.performance.AppStartupBenchmark"
call :run_test system 6 "System Resource Performance" "com.example.atry.performance.SystemResourcePerformanceTest"
call :run_test network 7 "Network Performance" "com.example.atry.performance.NetworkPerformanceTest"
call :run_test framerate 8 "Frame Rate Performance" "com.example.atry.performance.FrameRatePerformanceTest"
call :run_test size 9 "App Size Performance" "com.example.atry.performance.AppSizePerformanceTest"
call :run_test database 10 "Database Performance" "com.example.atry.performance.DatabasePerformanceTest"
call :run_test image 11 "Image Loading Performance" "com.example.atry.performance.ImageLoadingPerformanceTest"
call :run_test touch 12 "Touch Response Performance" "com.example.atry.performance.TouchResponsePerformanceTest"

REM Final summary
echo ========================================
echo ✅ TẤT CẢ TESTS ĐÃ HOÀN THÀNH
echo ========================================
echo.
echo Test Results:
echo   Total: %TEST_COUNT% tests
echo   Passed: %PASSED_COUNT%
echo   Failed/Issues: %FAILED_COUNT%
echo.

REM Update summary file
>> "%SUMMARY_FILE%" (
    echo ========================================
    echo SUMMARY
    echo ========================================
    echo Total Tests: %TEST_COUNT%
    echo Passed: %PASSED_COUNT%
    echo Failed/Issues: %FAILED_COUNT%
    echo.
    echo ========================================
    echo REPORT LOCATIONS
    echo ========================================
    echo.
    echo Base Directory: %REPORT_DIR%
    echo.
    echo Reports by Type:
    echo   - Render: %REPORT_DIR%\reports\render\
    echo   - Scroll: %REPORT_DIR%\reports\scroll\
    echo   - ViewModel: %REPORT_DIR%\reports\viewmodel\
    echo   - Memory: %REPORT_DIR%\reports\memory\
    echo   - Startup: %REPORT_DIR%\reports\startup\
    echo   - System: %REPORT_DIR%\reports\system\
    echo   - Network: %REPORT_DIR%\reports\network\
    echo   - Frame Rate: %REPORT_DIR%\reports\framerate\
    echo   - App Size: %REPORT_DIR%\reports\size\
    echo   - Database: %REPORT_DIR%\reports\database\
    echo   - Image: %REPORT_DIR%\reports\image\
    echo   - Touch: %REPORT_DIR%\reports\touch\
    echo.
    echo Files:
    echo   - Full Output: %REPORT_DIR%\full_output.log
    echo   - Build Log: %REPORT_DIR%\build_log.txt
    echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
    echo.
)

REM Extract metrics
echo ========================================
echo Extracting Metrics...
echo ========================================
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>>"%REPORT_DIR%\metrics_extraction.log"
    if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
        echo ✅ Metrics extracted: %REPORT_DIR%\performance_metrics_detailed.txt
    )
) else (
    echo ⚠️  Metrics extraction script not found
)

echo.
echo ========================================
echo 📊 BÁO CÁO ĐÃ ĐƯỢC TẠO
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo Files:
echo   - Summary: %SUMMARY_FILE%
echo   - Full Output: %REPORT_DIR%\full_output.log
echo   - Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
echo.
echo Reports by Type:
dir /B /AD "%REPORT_DIR%\reports" 2>nul
echo.
echo 💡 Xem báo cáo chi tiết:
echo    type "%SUMMARY_FILE%"
echo.
echo.

pause

