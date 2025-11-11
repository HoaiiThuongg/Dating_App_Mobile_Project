@echo off
setlocal enabledelayedexpansion

echo ========================================
echo KIEM TRA VA TAO BAO CAO
echo ========================================
echo.

REM Check if ui_test_results exists
echo Checking ui_test_results directory...
if exist "ui_test_results" (
    echo [OK] ui_test_results directory exists
    echo.
    echo Contents:
    dir /b "ui_test_results" 2>nul
    echo.
) else (
    echo [INFO] ui_test_results directory does not exist
    echo Creating it...
    mkdir "ui_test_results" 2>nul
    echo [OK] Created ui_test_results directory
    echo.
)

REM Check for HTML reports in build directory
echo Checking for HTML reports in build directory...
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo [OK] HTML report found in build directory!
    echo Location: app\build\reports\androidTests\connected\debug\index.html
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
    if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
    if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
    if not exist "%REPORT_DIR%\test-results" mkdir "%REPORT_DIR%\test-results"
    if not exist "%REPORT_DIR%\coverage" mkdir "%REPORT_DIR%\coverage"
    if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
    echo.
    
    REM Copy HTML reports
    echo Copying HTML reports...
    xcopy /E /I /Y /Q "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\" >nul 2>&1
    if exist "%REPORT_DIR%\reports\index.html" (
        echo [OK] HTML report copied successfully!
        echo Location: %REPORT_DIR%\reports\index.html
        echo.
    ) else (
        echo [ERROR] Failed to copy HTML report
        echo.
    )
    
    REM Copy XML test results
    if exist "app\build\outputs\androidTest-results\connected" (
        echo Copying XML test results...
        xcopy /E /I /Y /Q "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results\" >nul 2>&1
        echo [OK] XML test results copied
        echo.
    )
    
    REM Copy coverage
    if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
        echo Copying coverage reports...
        xcopy /E /I /Y /Q "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage\" >nul 2>&1
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
    echo Opening report directory...
    explorer "%REPORT_DIR%"
    timeout /t 2 /nobreak >nul
    if exist "%REPORT_DIR%\reports\index.html" (
        start "" "%REPORT_DIR%\reports\index.html"
    )
    
) else (
    echo [WARNING] HTML report NOT found in build directory
    echo.
    echo Possible reasons:
    echo   1. Tests have not been run yet
    echo   2. Tests failed before generating reports
    echo   3. Build directory was cleaned
    echo.
    echo Checking other locations...
    echo.
    
    REM Check alternative locations
    if exist "app\build\reports\androidTests" (
        echo Found: app\build\reports\androidTests
        dir /s /b "app\build\reports\androidTests\*.html" 2>nul
        echo.
    ) else (
        echo [INFO] No reports directory found
        echo.
    )
    
    echo ========================================
    echo NEXT STEPS:
    echo ========================================
    echo.
    echo To generate reports, run:
    echo   1. .\RUN_UI_TESTS_AUTO.bat
    echo      (This will run tests and generate reports)
    echo.
    echo   2. Or check if device is connected:
    echo      adb devices
    echo.
    echo   3. Or run tests manually:
    echo      gradlew.bat connectedDebugAndroidTest
    echo.
)

pause



