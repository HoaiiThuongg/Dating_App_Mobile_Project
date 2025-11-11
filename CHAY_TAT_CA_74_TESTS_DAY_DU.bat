@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY TAT CA 74+ UI TESTS - DAY DU
echo ========================================
echo.
echo Script nay se chay TAT CA 74+ test cases
echo tu TAT CA 33 test classes.
echo.
echo Thoi gian uoc tinh: 15-20 phut
echo.

REM Create unique report directory with timestamp
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
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
echo.

REM Check device
echo Checking device connection...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    echo Please connect a device or start an emulator.
    pause
    exit /b 1
)
echo Device connected.
echo.

REM Clean and build
echo ========================================
echo STEP 1: Building test APK
echo ========================================
echo.

echo Cleaning previous build...
call gradlew.bat clean > "%REPORT_DIR%\logs\clean.log" 2>&1

echo Building test APK (this may take 2-3 minutes)...
call gradlew.bat assembleDebugAndroidTest > "%REPORT_DIR%\logs\build.log" 2>&1
if errorlevel 1 (
    echo ERROR: Build failed!
    echo Check log: %REPORT_DIR%\logs\build.log
    pause
    exit /b 1
)
echo Build successful!
echo.

REM Run ALL UI tests - IMPORTANT: This runs ALL test classes
echo ========================================
echo STEP 2: Running ALL 74+ UI test cases
echo ========================================
echo.
echo This will run ALL test methods in ALL test classes.
echo Total: 74+ test cases from 33 test classes.
echo.
echo IMPORTANT: This may take 15-20 minutes.
echo.

REM Run connectedDebugAndroidTest without any filters - this runs ALL tests
echo Starting test execution...
call gradlew.bat connectedDebugAndroidTest > "%REPORT_DIR%\logs\test_execution.log" 2>&1
set TEST_RESULT=!ERRORLEVEL!

echo.
echo Test execution completed!
echo Exit code: !TEST_RESULT!
echo.

REM Wait for reports to be written
echo Waiting for reports to be written...
timeout /t 15 /nobreak >nul
echo.

REM Stop Gradle daemon to ensure reports are written
echo Ensuring reports are fully written...
call gradlew.bat --stop >nul 2>&1
timeout /t 5 /nobreak >nul
echo.

REM Copy HTML reports
echo ========================================
echo STEP 3: Copying HTML test reports
echo ========================================
echo.

set HTML_REPORT_FOUND=0

if exist "app\build\reports\androidTests\connected\debug" (
    echo Found HTML reports directory.
    echo Copying HTML reports...
    
    robocopy "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports" /E /NFL /NDL /NJH /NJS >nul 2>&1
    timeout /t 2 /nobreak >nul
    
    if exist "%REPORT_DIR%\reports\index.html" (
        set HTML_REPORT_FOUND=1
        echo [OK] HTML report copied: %REPORT_DIR%\reports\index.html
        
        REM Count tests in report
        echo.
        echo Checking test count in report...
        findstr /C:"tests" "%REPORT_DIR%\reports\index.html" | findstr /C:"74" >nul
        if errorlevel 1 (
            echo Note: Report may not show all 74+ tests yet.
            echo This is normal if tests are still being processed.
        )
        echo.
    ) else (
        echo [WARNING] index.html not found after copy.
        echo.
    )
) else (
    echo [WARNING] HTML reports directory not found.
    echo.
)

REM Copy XML test results
if exist "app\build\outputs\androidTest-results\connected" (
    echo Copying XML test results...
    robocopy "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results" /E /NFL /NDL /NJH /NJS >nul 2>&1
    echo [OK] XML test results copied.
    echo.
)

REM Generate coverage
echo Generating coverage report...
call gradlew.bat createDebugCoverageReport > "%REPORT_DIR%\logs\coverage.log" 2>&1
if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
    echo Copying coverage reports...
    robocopy "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage" /E /NFL /NDL /NJH /NJS >nul 2>&1
    echo [OK] Coverage copied.
    echo.
)

REM Create summary
(
    echo ========================================
    echo UI TEST RESULTS SUMMARY - 74+ TESTS
    echo ========================================
    echo.
    echo Report Date: %date% %time%
    echo Report Directory: %REPORT_DIR%
    echo.
    echo Test Information:
    echo   - Total test cases: 74+ ^(from Testcases.xlsx^)
    echo   - Test classes: 33
    echo   - Test execution: connectedDebugAndroidTest ^(ALL TESTS^)
    echo   - Test result: 
    if !TEST_RESULT! EQU 0 (
        echo     ALL TESTS PASSED
    ) else (
        echo     SOME TESTS FAILED OR SKIPPED
    )
    echo.
    echo Report Locations:
    if !HTML_REPORT_FOUND! EQU 1 (
        echo   - HTML Test Report: %REPORT_DIR%\reports\index.html
        echo     ^(MAIN REPORT - Contains ALL 74+ test results^)
    ) else (
        echo   - HTML Test Report: NOT FOUND
    )
    echo   - XML Test Results: %REPORT_DIR%\test-results\
    echo   - Coverage Report: %REPORT_DIR%\coverage\index.html
    echo   - Build Log: %REPORT_DIR%\logs\build.log
    echo   - Test Log: %REPORT_DIR%\logs\test_execution.log
    echo.
    echo Note: Check the HTML report to see all 74+ test results.
    echo.
    echo ========================================
) > "%REPORT_DIR%\TEST_SUMMARY.txt"

echo Summary created: %REPORT_DIR%\TEST_SUMMARY.txt
echo.

echo ========================================
echo DONE!
echo ========================================
echo.

if !HTML_REPORT_FOUND! EQU 1 (
    echo HTML report: %REPORT_DIR%\reports\index.html
    echo.
    echo Opening HTML report...
    explorer "%REPORT_DIR%"
    timeout /t 2 /nobreak >nul
    start "" "%REPORT_DIR%\reports\index.html"
) else (
    echo [WARNING] HTML report not found!
    echo Check logs: %REPORT_DIR%\logs\test_execution.log
    echo.
    explorer "%REPORT_DIR%"
)

pause



