@echo off
REM Script đơn giản để kiểm tra và chạy tiếp tests

echo ========================================
echo 🔄 KIỂM TRA VÀ CHẠY TIẾP TESTS
echo ========================================
echo.

REM Find latest report
set LATEST_REPORT=
for /f "delims=" %%d in ('dir /B /AD /O-D performance_results\report_* 2^>nul') do (
    set LATEST_REPORT=%%d
    goto :found
)

:found
if "%LATEST_REPORT%"=="" (
    echo ❌ Không tìm thấy report!
    echo    Chạy: .\CHAY_TAT_CA_TESTS_VA_TAO_BAO_CAO.bat
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

echo Report: %LATEST_REPORT%
echo.

REM Count completed
set COUNT=0
if exist "%REPORT_DIR%\reports\render\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\scroll\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\viewmodel\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" set /a COUNT+=1
if exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" set /a COUNT+=1

echo Hoàn thành: %COUNT% / 12 tests
echo.

if %COUNT%==12 (
    echo ✅ Tất cả tests đã hoàn thành!
    echo.
    echo Đang tạo báo cáo cuối cùng...
    call TAO_BAO_CAO_TONG_HOP.bat
    echo.
    echo ✅ Báo cáo đã sẵn sàng!
    echo    Xem: .\GUI_BAO_CAO_KET_QUA.bat
    pause
    exit /b 0
)

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ Không có device!
    pause
    exit /b 1
)

echo ✅ Device OK
echo.
echo Đang chạy tiếp các tests còn lại...
echo.

REM Run remaining tests (tự động tiếp tục)
if not exist "%REPORT_DIR%\reports\memory\androidTests\connected\debug\index.html" (
    echo [4/12] Memory...
    call run_performance_tests.bat memory
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\memory\androidTests" >nul 2>&1
    )
    echo    → Tiếp tục test tiếp theo...
    echo.
)

if not exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    echo [5/12] Startup...
    call run_macrobenchmark.bat
    timeout /t 5 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\startup\androidTests" >nul 2>&1
    )
    echo    → Tiếp tục test tiếp theo...
    echo.
)

if not exist "%REPORT_DIR%\reports\system\androidTests\connected\debug\index.html" (
    echo [6/12] System Resource...
    call run_performance_tests.bat system
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\system\androidTests" >nul 2>&1
    )
    echo    → Tiếp tục test tiếp theo...
    echo.
)

if not exist "%REPORT_DIR%\reports\network\androidTests\connected\debug\index.html" (
    echo [7/12] Network...
    call run_performance_tests.bat network
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\network\androidTests" >nul 2>&1
    )
)

if not exist "%REPORT_DIR%\reports\framerate\androidTests\connected\debug\index.html" (
    echo [8/12] Frame Rate...
    call run_performance_tests.bat framerate
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\framerate\androidTests" >nul 2>&1
    )
)

if not exist "%REPORT_DIR%\reports\size\androidTests\connected\debug\index.html" (
    echo [9/12] App Size...
    call run_performance_tests.bat size
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\size\androidTests" >nul 2>&1
    )
)

if not exist "%REPORT_DIR%\reports\database\androidTests\connected\debug\index.html" (
    echo [10/12] Database...
    call run_performance_tests.bat database
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\database\androidTests" >nul 2>&1
    )
)

if not exist "%REPORT_DIR%\reports\image\androidTests\connected\debug\index.html" (
    echo [11/12] Image Loading...
    call run_performance_tests.bat image
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\image\androidTests" >nul 2>&1
    )
)

if not exist "%REPORT_DIR%\reports\touch\androidTests\connected\debug\index.html" (
    echo [12/12] Touch Response...
    call run_performance_tests.bat touch
    timeout /t 3 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\touch\androidTests" >nul 2>&1
    )
    echo    → Tất cả tests đã hoàn thành!
    echo.
)

echo.
echo ========================================
echo ✅ ĐÃ CHẠY XONG TẤT CẢ TESTS CÒN LẠI
echo ========================================
echo.

REM Count final
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

REM Extract metrics and create report
echo Đang tạo báo cáo cuối cùng...
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

