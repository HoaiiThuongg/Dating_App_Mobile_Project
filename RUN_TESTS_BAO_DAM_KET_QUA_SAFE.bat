@echo off
REM Script MASTER - ĐẢM BẢO 100% CÓ KẾT QUẢ
REM BẢO VỆ REPORTS - KHÔNG XÓA REPORTS GIỮA CÁC LẦN CHẠY
setlocal enabledelayedexpansion

echo ========================================
echo 🚀 RUN TESTS - ĐẢM BẢO CÓ KẾT QUẢ
echo ========================================
echo.
echo Script này ĐẢM BẢO:
echo   ✅ Chạy tất cả tests
echo   ✅ BẢO VỆ REPORTS - Không xóa reports giữa các lần chạy
echo   ✅ Collect reports sau MỖI loại test
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
if not exist "%REPORT_DIR%\benchmarks" mkdir "%REPORT_DIR%\benchmarks"
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
echo ✅ Thư mục đã tạo
echo.

REM ========================================
REM BƯỚC 2: CHẠY TỪNG LOẠI TEST VÀ COLLECT NGAY
REM ========================================
echo ========================================
echo BƯỚC 2: Chạy từng loại test và collect ngay
echo ========================================
echo.

set FULL_OUTPUT=%REPORT_DIR%\logs\full_test_output.txt
set CONSOLE_OUTPUT=%REPORT_DIR%\logs\console_output.txt

REM Clear previous output
> "%FULL_OUTPUT%" echo Starting tests at %date% %time%
> "%CONSOLE_OUTPUT%" echo Starting tests at %date% %time%

REM 1. Screen Render Performance Tests
echo ========================================
echo [1/12] Screen Render Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [1/5] Screen Render Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat render >> "%FULL_OUTPUT%" 2>&1
set TEST1_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

REM Collect reports ngay sau mỗi loại test
echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\render\androidTests" >nul 2>&1
    echo    ✓ Render test reports collected
)
echo.

REM 2. Scroll Performance Tests
echo ========================================
echo [2/12] Scroll Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [2/5] Scroll Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat scroll >> "%FULL_OUTPUT%" 2>&1
set TEST2_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\scroll\androidTests" >nul 2>&1
    echo    ✓ Scroll test reports collected
)
echo.

REM 3. ViewModel Performance Tests
echo ========================================
echo [3/12] ViewModel Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [3/5] ViewModel Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat viewmodel >> "%FULL_OUTPUT%" 2>&1
set TEST3_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\viewmodel\androidTests" >nul 2>&1
    echo    ✓ ViewModel test reports collected
)
echo.

REM 4. Memory Performance Tests
echo ========================================
echo [4/12] Memory Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [4/5] Memory Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat memory >> "%FULL_OUTPUT%" 2>&1
set TEST4_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\memory\androidTests" >nul 2>&1
    echo    ✓ Memory test reports collected
)
echo.

REM 5. App Startup Benchmarks (Macrobenchmark)
echo ========================================
echo [5/12] App Startup Benchmarks
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [5/12] App Startup Benchmarks
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_macrobenchmark.bat >> "%FULL_OUTPUT%" 2>&1
set TEST5_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\startup\androidTests" >nul 2>&1
    echo    ✓ Startup test reports collected
)
if exist "app\build\outputs\connected_android_test_additional_output" (
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    echo    ✓ Macrobenchmark results collected
)
echo.

REM 6. System Resource Performance Tests
echo ========================================
echo [6/12] System Resource Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [6/12] System Resource Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat system >> "%FULL_OUTPUT%" 2>&1
set TEST6_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\system\androidTests" >nul 2>&1
    echo    ✓ System resource test reports collected
)
echo.

REM 7. Network Performance Tests
echo ========================================
echo [7/12] Network Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [7/12] Network Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat network >> "%FULL_OUTPUT%" 2>&1
set TEST7_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\network\androidTests" >nul 2>&1
    echo    ✓ Network test reports collected
)
echo.

REM 8. Frame Rate Performance Tests
echo ========================================
echo [8/12] Frame Rate Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [8/12] Frame Rate Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat framerate >> "%FULL_OUTPUT%" 2>&1
set TEST8_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\framerate\androidTests" >nul 2>&1
    echo    ✓ Frame rate test reports collected
)
echo.

REM 9. App Size Performance Tests
echo ========================================
echo [9/12] App Size Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [9/12] App Size Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat size >> "%FULL_OUTPUT%" 2>&1
set TEST9_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\size\androidTests" >nul 2>&1
    echo    ✓ App size test reports collected
)
echo.

REM 10. Database Performance Tests
echo ========================================
echo [10/12] Database Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [10/12] Database Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat database >> "%FULL_OUTPUT%" 2>&1
set TEST10_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\database\androidTests" >nul 2>&1
    echo    ✓ Database test reports collected
)
echo.

REM 11. Image Loading Performance Tests
echo ========================================
echo [11/12] Image Loading Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [11/12] Image Loading Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat image >> "%FULL_OUTPUT%" 2>&1
set TEST11_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\image\androidTests" >nul 2>&1
    echo    ✓ Image loading test reports collected
)
echo.

REM 12. Touch Response Performance Tests
echo ========================================
echo [12/12] Touch Response Performance Tests
echo ========================================
echo.
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo [12/12] Touch Response Performance Tests
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

call run_performance_tests.bat touch >> "%FULL_OUTPUT%" 2>&1
set TEST12_EXIT=%ERRORLEVEL%

echo Đợi reports được ghi...
timeout /t 3 /nobreak >nul

echo Collecting reports...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\touch\androidTests" >nul 2>&1
    echo    ✓ Touch response test reports collected
)
echo.

REM Final collection - collect latest reports
echo ========================================
echo Final collection - Collecting latest reports
echo ========================================
echo.
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\androidTests" >nul 2>&1
    echo    ✓ Final reports collected
)
if exist "app\build\outputs\connected_android_test_additional_output" (
    xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
    echo    ✓ Final macrobenchmark collected
)
echo.

REM ========================================
REM BƯỚC 3: EXTRACT METRICS
REM ========================================
echo ========================================
echo BƯỚC 3: Extract metrics từ nhiều nguồn
echo ========================================
echo.

set METRICS_FILE=%REPORT_DIR%\performance_metrics_detailed.txt
set METRICS_CSV=%REPORT_DIR%\performance_metrics_detailed.csv

REM Extract from full output (GUARANTEED to have something)
echo [3.1] Extracting từ console output...
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
    echo [3.2] Extracting từ HTML reports (nếu có)...
    powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1" 2>nul
    if !ERRORLEVEL! EQU 0 (
        echo    ✓ HTML extraction completed
    )
    echo.
)

REM ========================================
REM BƯỚC 4: TẠO SUMMARY REPORT
REM ========================================
echo ========================================
echo BƯỚC 4: Tạo summary report
echo ========================================
echo.

set SUMMARY_FILE=%REPORT_DIR%\SUMMARY.txt

REM Count collected reports
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
if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" set /a REPORT_COUNT+=1

(
    echo ========================================
    echo TEST RESULTS SUMMARY
    echo ========================================
    echo Generated: %date% %time%
    echo.
    echo Test Status: 
    echo   Render Tests: 
    if %TEST1_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST1_EXIT%)
    echo   Scroll Tests: 
    if %TEST2_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST2_EXIT%)
    echo   ViewModel Tests: 
    if %TEST3_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST3_EXIT%)
    echo   Memory Tests: 
    if %TEST4_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST4_EXIT%)
    echo   Startup Tests: 
    if %TEST5_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST5_EXIT%)
    echo   System Resource Tests: 
    if %TEST6_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST6_EXIT%)
    echo   Network Tests: 
    if %TEST7_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST7_EXIT%)
    echo   Frame Rate Tests: 
    if %TEST8_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST8_EXIT%)
    echo   App Size Tests: 
    if %TEST9_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST9_EXIT%)
    echo   Database Tests: 
    if %TEST10_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST10_EXIT%)
    echo   Image Loading Tests: 
    if %TEST11_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST11_EXIT%)
    echo   Touch Response Tests: 
    if %TEST12_EXIT%==0 (echo     ✅ Passed) else (echo     ⚠️  Exit code: %TEST12_EXIT%)
    echo.
    echo Reports Collected: %REPORT_COUNT% sets
    echo.
    if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
        echo   ✅ Render Reports: %REPORT_DIR%\reports\render\androidTests\connected\debug\index.html
    )
    if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
        echo   ✅ Scroll Reports: %REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html
    )
    if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
        echo   ✅ ViewModel Reports: %REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html
    )
    if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
        echo   ✅ Memory Reports: %REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html
    )
    if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
        echo   ✅ Startup Reports: %REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html
    )
    if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
        echo   ✅ System Resource Reports: %REPORT_DIR%\reports\system\
    )
    if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
        echo   ✅ Network Reports: %REPORT_DIR%\reports\network\
    )
    if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
        echo   ✅ Frame Rate Reports: %REPORT_DIR%\reports\framerate\
    )
    if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
        echo   ✅ App Size Reports: %REPORT_DIR%\reports\size\
    )
    if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
        echo   ✅ Database Reports: %REPORT_DIR%\reports\database\
    )
    if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
        echo   ✅ Image Loading Reports: %REPORT_DIR%\reports\image\
    )
    if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
        echo   ✅ Touch Response Reports: %REPORT_DIR%\reports\touch\
    )
    if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" (
        echo   ✅ Final Reports: %REPORT_DIR%\reports\androidTests\connected\debug\index.html
    )
    echo.
    if exist "%REPORT_DIR%\benchmarks" (
        echo   ✅ Macrobenchmark: %REPORT_DIR%\benchmarks\
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
    echo 4. Reports: %REPORT_DIR%\reports\
    echo    - Render: %REPORT_DIR%\reports\render\
    echo    - Scroll: %REPORT_DIR%\reports\scroll\
    echo    - ViewModel: %REPORT_DIR%\reports\viewmodel\
    echo    - Memory: %REPORT_DIR%\reports\memory\
    echo    - Startup: %REPORT_DIR%\reports\startup\
    echo.
    echo ========================================
    echo QUICK ACTIONS
    echo ========================================
    echo.
    echo Xem metrics:
    echo   type "%METRICS_FILE%"
    echo.
    echo Xem HTML reports:
    if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" (
        echo   start "%REPORT_DIR%\reports\androidTests\connected\debug\index.html"
    ) else (
        echo   Check individual test reports in %REPORT_DIR%\reports\
    )
    echo.
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
REM BƯỚC 5: HIỂN THỊ KẾT QUẢ
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
echo 3. Reports Collected: %REPORT_COUNT% sets
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" (
    echo    - Render: %REPORT_DIR%\reports\render\
)
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" (
    echo    - Scroll: %REPORT_DIR%\reports\scroll\
)
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" (
    echo    - ViewModel: %REPORT_DIR%\reports\viewmodel\
)
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    echo    - Memory: %REPORT_DIR%\reports\memory\
)
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
        echo    - Startup: %REPORT_DIR%\reports\startup\
    )
    if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
        echo    - System Resource: %REPORT_DIR%\reports\system\
    )
    if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
        echo    - Network: %REPORT_DIR%\reports\network\
    )
    if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
        echo    - Frame Rate: %REPORT_DIR%\reports\framerate\
    )
    if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
        echo    - App Size: %REPORT_DIR%\reports\size\
    )
    if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
        echo    - Database: %REPORT_DIR%\reports\database\
    )
    if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
        echo    - Image Loading: %REPORT_DIR%\reports\image\
    )
    if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
        echo    - Touch Response: %REPORT_DIR%\reports\touch\
    )
if exist "%REPORT_DIR%\reports\androidTests\connected\debug\index.html" (
    echo    - Final: %REPORT_DIR%\reports\androidTests\
)
echo.
echo 4. Full Output:
echo    %FULL_OUTPUT%
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
echo Reports: %REPORT_COUNT% sets collected
echo.
echo Dù tests pass hay fail, bạn đều có:
echo   ✅ Metrics file (từ console output)
echo   ✅ Full output (tất cả logs)
echo   ✅ Summary report (tổng hợp)
echo   ✅ Reports từ TỪNG loại test (bảo vệ khỏi bị xóa)
if %REPORT_COUNT% GTR 0 (
    echo   ✅ HTML reports (đã collect)
)
echo.
pause

