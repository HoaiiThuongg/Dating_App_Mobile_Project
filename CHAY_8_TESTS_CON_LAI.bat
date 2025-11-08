@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY 8 TESTS CON LAI
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

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo Khong co device!
    pause
    exit /b 1
)

echo Device da ket noi
echo.

set TESTS[1]=startup
set TESTS[2]=system
set TESTS[3]=network
set TESTS[4]=framerate
set TESTS[5]=size
set TESTS[6]=database
set TESTS[7]=image
set TESTS[8]=touch

set COUNT=0
set TOTAL=8

for /L %%i in (1,1,%TOTAL%) do (
    set TEST_TYPE=!TESTS[%%i]!
    set TEST_PATH=%REPORT_DIR%\reports\!TEST_TYPE!\androidTests\connected\debug\index.html
    
    if exist "!TEST_PATH!" (
        echo [%%i/%TOTAL%] !TEST_TYPE! - Da co report
        set /a COUNT+=1
    ) else (
        echo [%%i/%TOTAL%] Dang chay: !TEST_TYPE!
        echo.
        
        if "!TEST_TYPE!"=="startup" (
            call run_macrobenchmark.bat >nul 2>&1
        ) else (
            call run_performance_tests.bat !TEST_TYPE! >nul 2>&1
        )
        
        timeout /t 3 >nul 2>&1
        
        if exist "app\build\reports\androidTests\connected\debug\index.html" (
            set DEST=%REPORT_DIR%\reports\!TEST_TYPE!\androidTests
            if not exist "!DEST!" mkdir "!DEST!"
            xcopy /E /I /Y "app\build\reports\androidTests" "!DEST!" >nul 2>&1
            echo    Reports collected
            set /a COUNT+=1
        ) else (
            echo    No reports yet
        )
        echo.
    )
)

echo ========================================
echo HOAN TAT
echo ========================================
echo.
echo Tests da hoan thanh: %COUNT% / %TOTAL%
echo.

REM Create final report
echo Dang tao bao cao cuoi cung...
echo.

if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>nul
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
echo   type "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt"
echo.

pause

