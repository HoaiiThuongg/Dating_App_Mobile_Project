@echo off
REM Script robust để chạy tiếp các metrics/tests còn lại
REM Không dừng lại khi gặp lỗi

setlocal enabledelayedexpansion

echo ========================================
echo CHAY TIEP CAC METRICS/TESTS CON LAI (ROBUST)
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
    echo Khong tim thay report directory!
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

echo Tests da hoan thanh: %DONE_COUNT% / 12
echo.

if %DONE_COUNT%==12 (
    echo Tat ca tests da hoan thanh!
    call TAO_BAO_CAO_TONG_HOP.bat
    pause
    exit /b 0
)

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo Khong co device!
    pause
    exit /b 1
)

echo Device da ket noi
echo.

REM Full output log
set FULL_OUTPUT=%REPORT_DIR%\full_output.log
echo. >> "%FULL_OUTPUT%"
echo ======================================== >> "%FULL_OUTPUT%"
echo Continuing tests >> "%FULL_OUTPUT%"
echo ======================================== >> "%FULL_OUTPUT%"
echo. >> "%FULL_OUTPUT%"

REM Function to run test safely
goto :run_tests

:run_test_safe
set TEST_NAME=%~1
set TEST_NUM=%~2
set TEST_TYPE=%~3
set TEST_SCRIPT=%~4

if exist "%REPORT_DIR%\reports\%TEST_TYPE%\androidTests\connected\debug\index.html" (
    goto :eof
)

echo [%TEST_NUM%/12] %TEST_NAME%
>> "%FULL_OUTPUT%" echo [%TEST_NUM%/12] %TEST_NAME%

REM Run test, capture exit code but continue anyway
call %TEST_SCRIPT% >> "%FULL_OUTPUT%" 2>&1
set TEST_EXIT=!ERRORLEVEL!

timeout /t 3 /nobreak >nul

REM Collect reports if available
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\%TEST_TYPE%\androidTests" >nul 2>&1
    echo    Reports collected
)

if !TEST_EXIT! NEQ 0 (
    echo    Test co loi (exit: !TEST_EXIT!), nhung tiep tuc...
)

echo    Tiep tuc test tiep theo...
echo.
goto :eof

:run_tests
REM Test 4: Memory
call :run_test_safe "Memory Performance Tests" "4" "memory" "run_performance_tests.bat memory"

REM Test 5: Startup (Macrobenchmark) - skip if already done
if not exist "%REPORT_DIR%\reports\startup\androidTests\connected\debug\index.html" (
    echo [5/12] App Startup Benchmarks
    >> "%FULL_OUTPUT%" echo [5/12] App Startup Benchmarks
    call run_macrobenchmark.bat >> "%FULL_OUTPUT%" 2>&1
    set MACRO_EXIT=!ERRORLEVEL!
    timeout /t 5 /nobreak >nul
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\startup\androidTests" >nul 2>&1
        echo    Reports collected
    )
    if exist "app\build\outputs\connected_android_test_additional_output" (
        xcopy /E /I /Y "app\build\outputs\connected_android_test_additional_output" "%REPORT_DIR%\benchmarks" >nul 2>&1
        echo    Macrobenchmark results collected
    )
    if !MACRO_EXIT! NEQ 0 (
        echo    Macrobenchmark co loi, nhung tiep tuc...
    )
    echo    Tiep tuc test tiep theo...
    echo.
)

REM Test 6: System Resource
call :run_test_safe "System Resource Performance Tests" "6" "system" "run_performance_tests.bat system"

REM Test 7: Network
call :run_test_safe "Network Performance Tests" "7" "network" "run_performance_tests.bat network"

REM Test 8: Frame Rate
call :run_test_safe "Frame Rate Performance Tests" "8" "framerate" "run_performance_tests.bat framerate"

REM Test 9: App Size
call :run_test_safe "App Size Performance Tests" "9" "size" "run_performance_tests.bat size"

REM Test 10: Database
call :run_test_safe "Database Performance Tests" "10" "database" "run_performance_tests.bat database"

REM Test 11: Image Loading
call :run_test_safe "Image Loading Performance Tests" "11" "image" "run_performance_tests.bat image"

REM Test 12: Touch Response
call :run_test_safe "Touch Response Performance Tests" "12" "touch" "run_performance_tests.bat touch"

REM Final summary
echo ========================================
echo DA CHAY XONG TAT CA TESTS CON LAI
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
echo ========================================
echo Tao bao cao cuoi cung...
echo ========================================
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>>"%REPORT_DIR%\metrics_extraction.log"
)

call TAO_BAO_CAO_TONG_HOP.bat

echo.
echo ========================================
echo BAO CAO DA SAN SANG
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo Xem bao cao:
echo    .\GUI_BAO_CAO_KET_QUA.bat
echo.

pause

