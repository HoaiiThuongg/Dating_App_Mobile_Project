@echo off
REM Extract metrics ngay từ reports hiện có
echo ========================================
echo EXTRACT METRICS TỪ REPORTS
echo ========================================
echo.

REM Find latest report
for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :found
)

:found
if defined LATEST_REPORT (
    echo Tìm thấy report: %LATEST_REPORT%
    echo.
    
    REM Check if HTML reports exist
    if exist "performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html" (
        echo ✅ HTML reports có trong report
        echo    Extracting metrics...
        echo.
        
        REM Try PowerShell extraction
        if exist "extract_metrics_from_html.ps1" (
            powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1"
            if !ERRORLEVEL! EQU 0 (
                echo.
                echo ✅ Metrics đã được extract!
                echo.
                if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt" (
                    echo 📄 Metrics file:
                    echo    performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
                    echo.
                    echo Xem metrics:
                    echo    type "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt"
                )
            ) else (
                echo ⚠️  Extraction failed
            )
        ) else (
            echo ❌ Script extract_metrics_from_html.ps1 không tìm thấy
        )
    ) else (
        echo ⚠️  HTML reports không tìm thấy trong report
        echo    Kiểm tra: performance_results\%LATEST_REPORT%\reports\
        echo.
        
        echo    Hoặc kiểm tra build directory:
        if exist "app\build\reports\androidTests\connected\debug\index.html" (
            echo    ✅ HTML reports có trong build directory
            echo    Extracting...
            echo.
            powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1"
        ) else (
            echo    ❌ HTML reports không có trong build directory
        )
    )
) else (
    echo ❌ Không tìm thấy report nào
    echo.
    echo Kiểm tra build directory:
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        echo    ✅ HTML reports có trong build directory
        echo    Extracting...
        echo.
        powershell -ExecutionPolicy Bypass -File "extract_metrics_from_html.ps1"
    ) else (
        echo    ❌ HTML reports không có
        echo.
        echo 💡 Cần chạy tests trước:
        echo    .\run_all_performance_tests.bat
    )
)

echo.
pause


