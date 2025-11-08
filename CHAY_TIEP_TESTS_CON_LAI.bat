@echo off
REM Script để chạy tiếp các tests còn lại

setlocal enabledelayedexpansion

echo ========================================
echo 🚀 CHẠY TIẾP CÁC TESTS CÒN LẠI
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
    echo ❌ Không tìm thấy report directory!
    echo    Chạy script chính: .\CHAY_TAT_CA_TESTS_VA_TAO_BAO_CAO.bat
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report Directory: %REPORT_DIR%
echo.

REM Check which tests are done
set DONE_COUNT=0
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a DONE_COUNT+=1

echo Tests đã hoàn thành: %DONE_COUNT% / 12
echo.

if %DONE_COUNT%==12 (
    echo ✅ Tất cả tests đã hoàn thành!
    echo    Chạy: .\TAO_BAO_CAO_TONG_HOP.bat để tạo báo cáo cuối cùng
    pause
    exit /b 0
)

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ Không có device/emulator kết nối!
    pause
    exit /b 1
)

echo ✅ Device đã kết nối
echo.

REM Full output log
set FULL_OUTPUT=%REPORT_DIR%\full_output.log
>> "%FULL_OUTPUT%" echo.
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo Continuing tests at %date% %time%
>> "%FULL_OUTPUT%" echo ========================================
>> "%FULL_OUTPUT%" echo.

REM Run remaining tests
echo ========================================
echo Chạy các tests còn lại...
echo ========================================
echo.

REM Test 4: Memory
if not exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    echo [4/12] Memory Performance Tests
    >> "%FULL_OUTPUT%" echo [4/12] Memory Performance Tests
    call run_performance_tests.bat memory >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\memory\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 5: Startup
if not exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    echo [5/12] App Startup Benchmarks
    >> "%FULL_OUTPUT%" echo [5/12] App Startup Benchmarks
    call run_macrobenchmark.bat >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\startup\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    if exist "app\build\outputs\connected_android_test_additional_output" (
        xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
        echo    ✓ Macrobenchmark results collected
    )
    echo.
)

REM Test 6: System Resource
if not exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
    echo [6/12] System Resource Performance Tests
    >> "%FULL_OUTPUT%" echo [6/12] System Resource Performance Tests
    call run_performance_tests.bat system >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\system\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 7: Network
if not exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
    echo [7/12] Network Performance Tests
    >> "%FULL_OUTPUT%" echo [7/12] Network Performance Tests
    call run_performance_tests.bat network >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\network\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 8: Frame Rate
if not exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
    echo [8/12] Frame Rate Performance Tests
    >> "%FULL_OUTPUT%" echo [8/12] Frame Rate Performance Tests
    call run_performance_tests.bat framerate >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\framerate\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 9: App Size
if not exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
    echo [9/12] App Size Performance Tests
    >> "%FULL_OUTPUT%" echo [9/12] App Size Performance Tests
    call run_performance_tests.bat size >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\size\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 10: Database
if not exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
    echo [10/12] Database Performance Tests
    >> "%FULL_OUTPUT%" echo [10/12] Database Performance Tests
    call run_performance_tests.bat database >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\database\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 11: Image Loading
if not exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
    echo [11/12] Image Loading Performance Tests
    >> "%FULL_OUTPUT%" echo [11/12] Image Loading Performance Tests
    call run_performance_tests.bat image >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\image\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Test 12: Touch Response
if not exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
    echo [12/12] Touch Response Performance Tests
    >> "%FULL_OUTPUT%" echo [12/12] Touch Response Performance Tests
    call run_performance_tests.bat touch >> "%FULL_OUTPUT%" 2>&1
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\touch\androidTests" >nul 2>&1
        echo    ✓ Reports collected
    )
    echo.
)

REM Final summary
echo ========================================
echo ✅ ĐÃ CHẠY XONG TẤT CẢ TESTS CÒN LẠI
echo ========================================
echo.

REM Count final reports
set FINAL_COUNT=0
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a FINAL_COUNT+=1

echo Final count: %FINAL_COUNT% / 12 tests
echo.

REM Extract metrics and create final report
echo ========================================
echo Tạo báo cáo cuối cùng...
echo ========================================
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>>"%REPORT_DIR%\metrics_extraction.log"
)

call TAO_BAO_CAO_TONG_HOP.bat

echo.
echo ========================================
echo 📊 BÁO CÁO ĐÃ SẴN SÀNG
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo 💡 Xem báo cáo:
echo    .\GUI_BAO_CAO_KET_QUA.bat
echo.

pause

