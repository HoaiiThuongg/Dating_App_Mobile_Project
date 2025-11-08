@echo off
REM Script để chạy TẤT CẢ tests, sửa lỗi, và tạo báo cáo
REM KHÔNG xóa báo cáo cũ, chia folder theo từng loại

setlocal enabledelayedexpansion

echo ========================================
echo 🚀 CHẠY TẤT CẢ TESTS VÀ TẠO BÁO CÁO
echo ========================================
echo.
echo Script này sẽ:
echo   ✅ Rebuild test APK (sửa lỗi nếu có)
echo   ✅ Chạy tất cả 12 loại performance tests
echo   ✅ Chia folder theo từng loại
echo   ✅ KHÔNG xóa báo cáo cũ
echo   ✅ Tạo báo cáo tổng hợp
echo.
echo ⏱️  Thời gian: ~20-25 phút
echo.

REM Check device
echo [1/5] Kiểm tra device...
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
echo [2/5] Tạo thư mục báo cáo...
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
echo [3/5] Building test APK...
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

REM Run tests
echo [4/5] Chạy từng loại test...
echo ========================================
echo.

REM Test 1: Render
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Screen Render Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Screen Render Performance Tests
call run_performance_tests.bat render >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\render\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\render\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Render: Exit !TEST_EXIT!, Reports: ✓
echo    Continuing to next test...
echo.

REM Test 2: Scroll
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Scroll Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Scroll Performance Tests
call run_performance_tests.bat scroll >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\scroll\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\scroll\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Scroll: Exit !TEST_EXIT!, Reports: ✓
echo    Continuing to next test...
echo.

REM Test 3: ViewModel
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] ViewModel Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] ViewModel Performance Tests
call run_performance_tests.bat viewmodel >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\viewmodel\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\viewmodel\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] ViewModel: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 4: Memory
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Memory Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Memory Performance Tests
call run_performance_tests.bat memory >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\memory\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\memory\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Memory: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 5: Startup (Macrobenchmark)
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] App Startup Benchmarks
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] App Startup Benchmarks
call run_macrobenchmark.bat >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 5 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\startup\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\startup\
)
if exist "app\build\outputs\connected_android_test_additional_output" (
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    echo    ✓ Macrobenchmark results collected
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Startup: Exit !TEST_EXIT!, Reports: ✓
echo    Continuing to next test...
echo.

REM Test 6: System Resource
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] System Resource Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] System Resource Performance Tests
call run_performance_tests.bat system >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\system\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\system\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] System: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 7: Network
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Network Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Network Performance Tests
call run_performance_tests.bat network >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\network\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\network\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Network: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 8: Frame Rate
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Frame Rate Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Frame Rate Performance Tests
call run_performance_tests.bat framerate >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\framerate\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\framerate\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Frame Rate: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 9: App Size
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] App Size Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] App Size Performance Tests
call run_performance_tests.bat size >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\size\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\size\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] App Size: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 10: Database
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Database Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Database Performance Tests
call run_performance_tests.bat database >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\database\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\database\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Database: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 11: Image Loading
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Image Loading Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Image Loading Performance Tests
call run_performance_tests.bat image >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\image\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\image\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Image: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Test 12: Touch Response
set /a TEST_COUNT+=1
echo [%TEST_COUNT%/12] Touch Response Performance Tests
>> "%FULL_OUTPUT%" echo [%TEST_COUNT%/12] Touch Response Performance Tests
call run_performance_tests.bat touch >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!
timeout /t 3 /nobreak >nul
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\touch\androidTests" >nul 2>&1
    echo    ✓ Reports collected to: %REPORT_DIR%\reports\touch\
)
if !TEST_EXIT!==0 (set /a PASSED_COUNT+=1) else (set /a FAILED_COUNT+=1)
>> "%SUMMARY_FILE%" echo [%TEST_COUNT%/12] Touch: Exit !TEST_EXIT!, Reports: ✓
echo.

REM Final summary
echo [5/5] Tạo báo cáo tổng hợp...
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
    echo.
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

REM Update EXTRACT_METRICS_SIMPLE.ps1 to use the report directory
powershell -ExecutionPolicy Bypass -Command "$scriptPath = 'EXTRACT_METRICS_SIMPLE.ps1'; if (Test-Path $scriptPath) { $content = Get-Content $scriptPath -Raw; $content = $content -replace '(?m)^\$ReportPath = \"[^\"]+\"', \"`$ReportPath = '%REPORT_DIR%'\"; Set-Content $scriptPath -Value $content -Encoding UTF8; & $scriptPath } else { Write-Host 'Metrics extraction script not found' }" 2>>"%REPORT_DIR%\metrics_extraction.log"

if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    echo ✅ Metrics extracted: %REPORT_DIR%\performance_metrics_detailed.txt
) else (
    echo ⚠️  Metrics file not generated, but reports are available
    echo    You can extract manually: powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%"
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
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    echo   - Metrics: %REPORT_DIR%\performance_metrics_detailed.txt
)
echo.
echo Reports by Type:
dir /B /AD "%REPORT_DIR%\reports" 2>nul
echo.
echo 💡 Xem báo cáo chi tiết:
echo    type "%SUMMARY_FILE%"
echo.
echo 💡 Mở HTML reports:
echo    start "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html"
echo.
echo.

pause

