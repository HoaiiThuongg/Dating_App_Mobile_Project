@echo off
REM Tìm tất cả kết quả test hiệu năng
echo ========================================
echo TÌM KẾT QUẢ TEST HIỆU NĂNG
echo ========================================
echo.

set FOUND_ANY=0

echo [1] Kiểm tra HTML Reports trong build directory...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo    ✅ TÌM THẤY!
    echo    Location: app\build\reports\androidTests\connected\debug\index.html
    echo    Mở: start app\build\reports\androidTests\connected\debug\index.html
    echo.
    set FOUND_ANY=1
) else (
    echo    ❌ Không tìm thấy
    echo    (Có thể đã bị collect hoặc tests chưa tạo reports)
    echo.
)

echo [2] Kiểm tra Collected Results...
for /f "delims=" %%i in ('dir /b /ad /o-d "performance_results\report_*" 2^>nul') do (
    set LATEST_REPORT=%%i
    goto :check_collected
)
:check_collected
if defined LATEST_REPORT (
    echo    ✅ Tìm thấy report: %LATEST_REPORT%
    echo    Location: performance_results\%LATEST_REPORT%
    echo.
    
    if exist "performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html" (
        echo    ✅ HTML Report có trong collected results!
        echo    Location: performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
        echo    Mở: start performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
        echo.
        set FOUND_ANY=1
    ) else (
        echo    ⚠️  Collected nhưng không có HTML files
        echo    (Có thể reports chưa được tạo khi collect)
        echo.
    )
    
    if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt" (
        echo    ✅ Metrics file có!
        echo    Location: performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
        echo.
        set FOUND_ANY=1
    )
) else (
    echo    ❌ Không có collected results
    echo.
)

echo [3] Kiểm tra Macrobenchmark Results...
if exist "app\build\outputs\connected_android_test_additional_output" (
    echo    ✅ Tìm thấy macrobenchmark results
    echo    Location: app\build\outputs\connected_android_test_additional_output\
    echo.
    set FOUND_ANY=1
) else (
    echo    ⚠️  Không tìm thấy (có thể bình thường nếu macrobenchmark bị skip)
    echo.
)

echo [4] Kiểm tra Metrics Files...
if exist "performance_metrics_*.txt" (
    echo    ✅ Tìm thấy metrics files trong root:
    dir /b "performance_metrics_*.txt"
    echo.
    set FOUND_ANY=1
) else (
    echo    ❌ Không tìm thấy metrics files
    echo.
)

echo ========================================
echo TÓM TẮT
echo ========================================
echo.

if %FOUND_ANY%==1 (
    echo ✅ Đã tìm thấy một số kết quả!
    echo.
    echo Các file kết quả:
    echo.
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        echo   - HTML Report: app\build\reports\androidTests\connected\debug\index.html
    )
    if defined LATEST_REPORT (
        if exist "performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html" (
            echo   - HTML Report ^(collected^): performance_results\%LATEST_REPORT%\reports\androidTests\connected\debug\index.html
        )
        if exist "performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt" (
            echo   - Metrics: performance_results\%LATEST_REPORT%\performance_metrics_detailed.txt
        )
    )
    if exist "performance_metrics_*.txt" (
        echo   - Metrics ^(root^): performance_metrics_*.txt
    )
) else (
    echo ❌ KHÔNG TÌM THẤY KẾT QUẢ!
    echo.
    echo Có thể:
    echo   1. Tests chưa chạy xong
    echo   2. Tests fail sớm và không tạo reports
    echo   3. Reports đã bị xóa
    echo.
    echo Hành động đề xuất:
    echo   1. Chạy lại tests: .\run_all_performance_tests.bat
    echo   2. Collect results: .\collect_performance_results_simple.bat
    echo   3. Extract metrics: .\extract_metrics_from_html.ps1
    echo   4. Hoặc capture metrics: .\run_tests_with_metrics_capture.bat
)

echo.
echo ========================================
echo QUICK ACTIONS
echo ========================================
echo.
echo Để collect results:
echo   .\collect_performance_results_simple.bat
echo.
echo Để extract metrics:
echo   .\extract_metrics_from_html.ps1
echo.
echo Để capture metrics từ console:
echo   .\run_tests_with_metrics_capture.bat
echo.
pause

