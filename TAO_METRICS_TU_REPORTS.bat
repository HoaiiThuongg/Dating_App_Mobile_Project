@echo off
REM Tạo metrics file từ reports hiện có
echo ========================================
echo TẠO METRICS FILE TỪ REPORTS
echo ========================================
echo.

REM Find latest report
for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :found
)

:found
if not defined LATEST_REPORT (
    echo ❌ Không tìm thấy report nào
    echo.
    echo 💡 Cần chạy tests và collect reports trước:
    echo    .\RUN_TESTS_BAO_DAM_KET_QUA_SAFE.bat
    echo.
    pause
    exit /b 1
)

echo Tìm thấy report: %LATEST_REPORT%
echo.

set METRICS_FILE=performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
set SUMMARY_FILE=performance_results\%LATEST_REPORT%\SUMMARY.txt

REM Check if HTML reports exist
set HTML_FOUND=0
if exist "performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html" (
    set HTML_FOUND=1
    set HTML_PATH=performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug
) else if exist "app\build\reports\androidTests\connected\debug\index.html" (
    set HTML_FOUND=1
    set HTML_PATH=app\build\reports\androidTests\connected\debug
)

if %HTML_FOUND%==1 (
    echo ✅ Tìm thấy HTML reports
    echo    Location: %HTML_PATH%
    echo.
    echo Extracting metrics từ HTML reports...
    echo.
    
    REM Try PowerShell extraction
    if exist "extract_metrics_from_html.ps1" (
        powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1"
        if !ERRORLEVEL! EQU 0 (
            echo.
            echo ✅ Metrics đã được extract!
            echo.
            if exist "%METRICS_FILE%" (
                echo 📄 Metrics file:
                echo    %METRICS_FILE%
                echo.
                echo Xem metrics:
                echo    type "%METRICS_FILE%"
            )
        ) else (
            echo ⚠️  Extraction có vấn đề, nhưng đã thử
        )
    ) else (
        echo ❌ Script extract_metrics_from_html.ps1 không tìm thấy
    )
) else (
    echo ⚠️  Không tìm thấy HTML reports
    echo.
    echo 💡 Metrics được in ra console khi chạy tests
    echo    Nếu bạn đã chạy tests, metrics có trong console output
    echo.
    echo    Để có metrics file:
    echo    1. Chạy lại tests và capture: .\run_tests_with_metrics_capture.bat
    echo    2. Hoặc chạy script master: .\RUN_TESTS_BAO_DAM_KET_QUA_SAFE.bat
    echo.
    
    REM Create a placeholder metrics file with instructions
    (
        echo ========================================
        echo PERFORMANCE METRICS SUMMARY
        echo ========================================
        echo Generated: %date% %time%
        echo Report Location: performance_results\%LATEST_REPORT%
        echo.
        echo ⚠️  Metrics file chưa được tạo
        echo.
        echo Metrics được in ra console khi chạy tests qua println statements.
        echo.
        echo Để có metrics file:
        echo   1. Chạy lại tests và capture output:
        echo      .\run_tests_with_metrics_capture.bat
        echo.
        echo   2. Hoặc chạy script master (tự động extract):
        echo      .\RUN_TESTS_BAO_DAM_KET_QUA_SAFE.bat
        echo.
        echo   3. Hoặc xem console output khi chạy tests để copy metrics
        echo.
        echo ========================================
        echo REPORTS LOCATION
        echo ========================================
        echo.
        echo Reports có thể ở:
        echo   - performance_results\%LATEST_REPORT%\reports\
        echo   - app\build\reports\androidTests\
        echo.
    ) > "%METRICS_FILE%"
    
    echo ✅ Đã tạo placeholder metrics file với hướng dẫn
    echo    Location: %METRICS_FILE%
)

echo.
echo ========================================
echo KẾT QUẢ
echo ========================================
echo.

if exist "%METRICS_FILE%" (
    echo ✅ Metrics file: %METRICS_FILE%
    echo.
    echo Preview (first 20 lines):
    echo.
    powershell -Command "Get-Content '%METRICS_FILE%' -Head 20"
) else (
    echo ⚠️  Metrics file chưa được tạo
    echo    Xem hướng dẫn ở trên
)

echo.
pause

