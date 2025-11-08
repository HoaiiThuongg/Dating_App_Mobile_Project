@echo off
REM Script đơn giản để kiểm tra trạng thái

echo ========================================
echo KIEM TRA TRANG THAI SCRIPT
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
    echo Khong tim thay report!
    pause
    exit /b 1
)

set REPORT_DIR=performance_results\%LATEST_REPORT%

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

echo Tests da hoan thanh: %COUNT% / 12
echo.

REM Check log file
if exist "%REPORT_DIR%\full_output.log" (
    echo Log file: %REPORT_DIR%\full_output.log
    echo.
    echo Dong cuoi cung (5 dong):
    echo ========================================
    powershell -ExecutionPolicy Bypass -Command "Get-Content \"%REPORT_DIR%\full_output.log\" -Tail 5"
    echo ========================================
    echo.
) else (
    echo Log file khong ton tai
)

echo.
echo ========================================
echo TRANG THAI
echo ========================================
echo.

if %COUNT%==12 (
    echo Tat ca tests da hoan thanh!
    echo Script da dung (hoan thanh)
) else (
    echo Con %COUNT% / 12 tests
    echo.
    echo De kiem tra script co dang chay:
    echo - Xem log file co duoc cap nhat gan day khong
    echo - Neu log khong cap nhat trong 5+ phut - Script da dung
    echo.
    echo Neu script da dung, chay:
    echo    .\CHAY_TIEP_METRICS_CON_LAI.bat
)

echo.
pause

