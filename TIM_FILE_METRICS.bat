@echo off
REM Tìm file metrics
echo ========================================
echo TÌM FILE METRICS
echo ========================================
echo.

set FOUND=0

echo [1] Tìm trong performance_results...
for /f "delims=" %%i in ('dir /s /b "performance_results\*metrics*.txt" 2^>nul') do (
    echo    ✅ Tìm thấy: %%i
    set FOUND=1
)
if %FOUND%==0 (
    echo    ❌ Không tìm thấy
)
echo.

set FOUND=0
echo [2] Tìm trong root directory...
for /f "delims=" %%i in ('dir /b "performance_metrics_*.txt" 2^>nul') do (
    echo    ✅ Tìm thấy: %%i
    set FOUND=1
)
if %FOUND%==0 (
    echo    ❌ Không tìm thấy
)
echo.

set FOUND=0
echo [3] Tìm CSV files...
for /f "delims=" %%i in ('dir /s /b "performance_results\*metrics*.csv" 2^>nul') do (
    echo    ✅ Tìm thấy: %%i
    set FOUND=1
)
if %FOUND%==0 (
    echo    ❌ Không tìm thấy
)
echo.

echo ========================================
echo TÓM TẮT
echo ========================================
echo.

REM Check latest report
for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :check_latest
)
:check_latest

if defined LATEST_REPORT (
    echo Report mới nhất: %LATEST_REPORT%
    echo.
    
    if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt" (
        echo ✅ Metrics file có trong report mới nhất:
        echo    performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
        echo.
    ) else (
        echo ⚠️  Metrics file KHÔNG có trong report mới nhất
        echo.
        echo 💡 Cần extract metrics từ reports:
        echo    .\extract_metrics_from_html.ps1
        echo.
    )
    
    if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.csv" (
        echo ✅ CSV file có trong report mới nhất:
        echo    performance_results\%LATEST_REPORT%\performance_metrics_detailed.csv
        echo.
    )
) else (
    echo ❌ Không tìm thấy report nào
    echo.
)

echo ========================================
echo HÀNH ĐỘNG
echo ========================================
echo.
echo Nếu KHÔNG tìm thấy metrics file:
echo.
echo 1. Extract từ HTML reports:
echo    .\extract_metrics_from_html.ps1
echo.
echo 2. Hoặc capture từ console output:
echo    .\run_tests_with_metrics_capture.bat
echo.
echo 3. Hoặc chạy script master (có metrics):
echo    .\RUN_TESTS_BAO_DAM_KET_QUA_SAFE.bat
echo.
pause


