@echo off
setlocal enabledelayedexpansion

echo ========================================
echo COPY REPORTS TU BUILD DIRECTORY
echo ========================================
echo.

REM Check if HTML report exists in build directory
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo [OK] HTML report found in build directory!
    echo.
    
    REM Create report directory with timestamp
    for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value 2^>nul') do set datetime=%%I
    if "!datetime!"=="" (
        set datetime=%date:~-4,4%%date:~-7,2%%date:~-10,2%_%time:~0,2%%time:~3,2%%time:~6,2%
        set datetime=!datetime: =0!
    )
    set TIMESTAMP=!datetime:~0,8!_!datetime:~8,6!
    set REPORT_DIR=ui_test_results\report_!TIMESTAMP!
    
    echo Creating report directory: %REPORT_DIR%
    if not exist "ui_test_results" mkdir "ui_test_results"
    if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
    if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
    if not exist "%REPORT_DIR%\test-results" mkdir "%REPORT_DIR%\test-results"
    if not exist "%REPORT_DIR%\coverage" mkdir "%REPORT_DIR%\coverage"
    echo.
    
    REM Copy HTML reports
    echo Copying HTML reports...
    xcopy /E /I /Y "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\"
    echo.
    
    if exist "%REPORT_DIR%\reports\index.html" (
        echo [OK] HTML report copied successfully!
        echo Location: %REPORT_DIR%\reports\index.html
        echo.
    ) else (
        echo [ERROR] Failed to copy HTML report
        echo.
        pause
        exit /b 1
    )
    
    REM Copy XML test results
    if exist "app\build\outputs\androidTest-results\connected" (
        echo Copying XML test results...
        xcopy /E /I /Y "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results\"
        echo [OK] XML test results copied
        echo.
    )
    
    REM Copy coverage
    if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
        echo Copying coverage reports...
        xcopy /E /I /Y "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage\"
        echo [OK] Coverage reports copied
        echo.
    )
    
    REM Create summary
    (
        echo ========================================
        echo UI TEST RESULTS SUMMARY
        echo ========================================
        echo.
        echo Report Date: %date% %time%
        echo Report Directory: %REPORT_DIR%
        echo.
        echo Report Locations:
        echo   - HTML Test Report: %REPORT_DIR%\reports\index.html
        echo   - XML Test Results: %REPORT_DIR%\test-results\
        echo   - Coverage Report: %REPORT_DIR%\coverage\index.html
        echo.
        echo This report was copied from build directory.
        echo.
        echo ========================================
    ) > "%REPORT_DIR%\TEST_SUMMARY.txt"
    
    echo Summary created: %REPORT_DIR%\TEST_SUMMARY.txt
    echo.
    
    echo ========================================
    echo DONE!
    echo ========================================
    echo.
    echo Report directory: %REPORT_DIR%
    echo.
    echo Opening report directory and HTML report...
    explorer "%REPORT_DIR%"
    timeout /t 2 /nobreak >nul
    start "" "%REPORT_DIR%\reports\index.html"
    
) else (
    echo [ERROR] HTML report NOT found in build directory
    echo.
    echo Expected location: app\build\reports\androidTests\connected\debug\index.html
    echo.
    echo Possible reasons:
    echo   1. Tests have not been run yet
    echo   2. Build directory was cleaned
    echo   3. Tests failed before generating reports
    echo.
    echo To generate reports, run:
    echo   .\CHAY_TESTS_VA_TAO_BAO_CAO_NGAY.bat
    echo   or
    echo   .\RUN_UI_TESTS_AUTO.bat
    echo.
    pause
    exit /b 1
)

pause



