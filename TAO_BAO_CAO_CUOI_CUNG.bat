@echo off
echo ========================================
echo TAO BAO CAO CUOI CUNG
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

REM Count completed tests
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

echo Tests da hoan thanh: %COUNT% / 12
echo.

echo Dang tao bao cao...
echo.

REM Extract metrics
if exist "EXTRACT_METRICS_SIMPLE.ps1" (
    powershell -ExecutionPolicy Bypass -File "EXTRACT_METRICS_SIMPLE.ps1" -ReportPath "%REPORT_DIR%" 2>nul
)

REM Create summary report
call TAO_BAO_CAO_TONG_HOP.bat

echo.
echo ========================================
echo HOAN TAT!
echo ========================================
echo.
echo Report Directory: %REPORT_DIR%
echo.
echo Files:
if exist "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt" (
    echo   BAO_CAO_TONG_HOP.txt
)
if exist "%REPORT_DIR%\performance_metrics_detailed.txt" (
    echo   performance_metrics_detailed.txt
)
if exist "%REPORT_DIR%\performance_metrics_detailed.csv" (
    echo   performance_metrics_detailed.csv
)
echo.
echo Xem bao cao:
echo   type "%REPORT_DIR%\BAO_CAO_TONG_HOP.txt"
echo.

pause

