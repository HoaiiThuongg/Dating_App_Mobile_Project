@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY UI TESTS - TU DONG HOAN TOAN
echo ========================================
echo.
echo Script se tu dong:
echo   1. Build test APK
echo   2. Chay tat ca 74+ test cases
echo   3. Tao bao cao HTML day du
echo   4. Luu ket qua vao thu muc moi
echo   5. Tu dong mo HTML report
echo.
echo Khong can tuong tac - chay hoan toan tu dong
echo.

REM Create unique report directory with timestamp
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value 2^>nul') do set datetime=%%I
if "!datetime!"=="" (
    set datetime=%date:~-4,4%%date:~-7,2%%date:~-10,2%_%time:~0,2%%time:~3,2%%time:~6,2%
    set datetime=!datetime: =0!
)
set TIMESTAMP=!datetime:~0,8!_!datetime:~8,6!
set REPORT_BASE_DIR=ui_test_results
set REPORT_DIR=!REPORT_BASE_DIR!\report_!TIMESTAMP!

echo Creating report directory: %REPORT_DIR%
echo.

REM Create directory structure
if not exist "!REPORT_BASE_DIR!" mkdir "!REPORT_BASE_DIR!"
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
if not exist "%REPORT_DIR%\test-results" mkdir "%REPORT_DIR%\test-results"
if not exist "%REPORT_DIR%\coverage" mkdir "%REPORT_DIR%\coverage"
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"

REM Check device (auto-retry)
echo ========================================
echo STEP 1: Checking device connection
echo ========================================
echo.

set RETRY_COUNT=0
:CHECK_DEVICE
set DEVICE_FOUND=0
set DEVICE_ID=
adb start-server >nul 2>&1
set STATE=
for /f "delims=" %%S in ('adb get-state') do set STATE=%%S
if /I "!STATE!"=="device" (
    set DEVICE_FOUND=1
)
if !DEVICE_FOUND! EQU 0 (
    for /f "skip=1 tokens=1,2" %%A in ('adb devices') do (
        if /I "%%B"=="device" (
            set DEVICE_FOUND=1
            if not defined DEVICE_ID set DEVICE_ID=%%A
        )
    )
)
if !DEVICE_FOUND! EQU 0 (
    set /a RETRY_COUNT+=1
    if !RETRY_COUNT! LSS 5 (
        echo Device not found. Retrying... (!RETRY_COUNT!/5)
        timeout /t 2 /nobreak >nul
        goto CHECK_DEVICE
    ) else (
        echo ERROR: No device connected after 5 retries!
        echo Please connect a device or start an emulator.
        echo Tip: If emulator shows 'offline', run: adb kill-server ^&^& adb start-server
        echo.
        echo Report directory: %REPORT_DIR%
        echo.
        exit /b 1
    )
) else (
    echo Device connected: !DEVICE_ID!
    echo.
)

REM Clean and build (auto-retry on failure)
echo ========================================
echo STEP 2: Building test APK
echo ========================================
echo.

echo Cleaning previous build...
call gradlew.bat clean > "%REPORT_DIR%\logs\clean.log" 2>&1
if errorlevel 1 (
    echo Warning: Clean failed, continuing anyway...
    echo.
) else (
    echo Clean successful.
    echo.
)

REM Build with retry
set BUILD_RESULT=1
set BUILD_RETRY=0
:BUILD_RETRY
echo Building test APK (attempt !BUILD_RETRY!+1/3)...
echo Build log: %REPORT_DIR%\logs\build.log
echo.

call gradlew.bat assembleDebugAndroidTest > "%REPORT_DIR%\logs\build.log" 2>&1
set BUILD_RESULT=!ERRORLEVEL!

if !BUILD_RESULT! NEQ 0 (
    set /a BUILD_RETRY+=1
    if !BUILD_RETRY! LSS 3 (
        echo Build failed. Retrying... (!BUILD_RETRY!/3)
        echo.
        timeout /t 3 /nobreak >nul
        goto BUILD_RETRY
    ) else (
        echo ERROR: Build failed after 3 attempts!
        echo Check the log: %REPORT_DIR%\logs\build.log
        echo.
        echo Report directory: %REPORT_DIR%
        echo.
        exit /b 1
    )
) else (
    echo Build successful!
    echo.
)

REM Run ALL UI tests (with retry for reports)
echo ========================================
echo STEP 3: Running ALL 74+ UI test cases
echo ========================================
echo.
echo This will run ALL test methods in ALL test classes.
echo Total: 74+ test cases from Testcases.xlsx
echo.

call gradlew.bat connectedDebugAndroidTest > "%REPORT_DIR%\logs\test_execution.log" 2>&1
set TEST_RESULT=!ERRORLEVEL!

echo.
echo Test execution completed!
echo Exit code: !TEST_RESULT!
echo.

REM Note: Tests may fail, but reports should still be generated
if !TEST_RESULT! NEQ 0 (
    echo Note: Some tests failed, but reports should still be available.
    echo.
)

REM Wait for reports to be written (longer wait)
echo Waiting for reports to be written...
timeout /t 8 /nobreak >nul
echo.

REM Copy test reports (HTML) with multiple attempts
echo ========================================
echo STEP 4: Copying HTML test reports
echo ========================================
echo.

set HTML_REPORT_FOUND=0
set COPY_ATTEMPT=0

:COPY_REPORTS
set /a COPY_ATTEMPT+=1

REM Check for HTML reports in standard location
if exist "app\build\reports\androidTests\connected\debug" (
    echo Found HTML reports directory (attempt !COPY_ATTEMPT!).
    echo Copying HTML reports...
    
    xcopy /E /I /Y /Q "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\" >nul 2>&1
    
    if exist "%REPORT_DIR%\reports\index.html" (
        set HTML_REPORT_FOUND=1
        echo [OK] HTML report copied: %REPORT_DIR%\reports\index.html
        echo.
        goto REPORTS_COPIED
    ) else (
        echo Warning: index.html not found after copy.
        echo.
    )
) else (
    echo HTML reports directory not found at standard location.
    echo.
)

REM Try alternative locations
if !HTML_REPORT_FOUND! EQU 0 (
    echo Searching for HTML reports in alternative locations...
    
    REM Check build/reports/androidTests
    if exist "app\build\reports\androidTests" (
        echo Found: app\build\reports\androidTests
        xcopy /E /I /Y /Q "app\build\reports\androidTests" "%REPORT_DIR%\reports\" >nul 2>&1
        if exist "%REPORT_DIR%\reports\index.html" (
            set HTML_REPORT_FOUND=1
            echo [OK] HTML report found in alternative location.
            echo.
            goto REPORTS_COPIED
        )
    )
    
    REM Try to regenerate reports if still not found
    if !HTML_REPORT_FOUND! EQU 0 (
        if !COPY_ATTEMPT! LSS 3 (
            echo Attempting to regenerate reports (attempt !COPY_ATTEMPT!+1/3)...
            call gradlew.bat connectedDebugAndroidTest --continue >nul 2>&1
            timeout /t 5 /nobreak >nul
            goto COPY_REPORTS
        )
    )
)

:REPORTS_COPIED

REM Copy XML test results
echo ========================================
echo STEP 5: Copying XML test results
echo ========================================
echo.

if exist "app\build\outputs\androidTest-results\connected" (
    echo Found XML test results.
    xcopy /E /I /Y /Q "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results\" >nul 2>&1
    echo [OK] XML test results copied.
    echo.
) else (
    echo [INFO] XML test results not found (optional).
    echo.
)

REM Generate and copy coverage report
echo ========================================
echo STEP 6: Generating coverage report
echo ========================================
echo.

echo Generating coverage report...
call gradlew.bat createDebugCoverageReport > "%REPORT_DIR%\logs\coverage.log" 2>&1

if errorlevel 1 (
    echo [INFO] Coverage report generation skipped or failed (optional).
    echo.
) else (
    if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
        echo Coverage report generated.
        xcopy /E /I /Y /Q "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage\" >nul 2>&1
        
        if exist "%REPORT_DIR%\coverage\index.html" (
            echo [OK] Coverage report copied: %REPORT_DIR%\coverage\index.html
            echo.
        )
    )
)

REM Create summary report
echo ========================================
echo STEP 7: Creating summary report
echo ========================================
echo.

(
    echo ========================================
    echo UI TEST RESULTS SUMMARY
    echo ========================================
    echo.
    echo Report Date: %date% %time%
    echo Report Directory: %REPORT_DIR%
    echo.
    echo Test Information:
    echo   - Total test cases: 74+ ^(from Testcases.xlsx^)
    echo   - Test classes: 33
    echo   - Test execution: connectedDebugAndroidTest
    echo   - Build result: 
    if !BUILD_RESULT! EQU 0 (
        echo     SUCCESS
    ) else (
        echo     FAILED
    )
    echo   - Test result: 
    if !TEST_RESULT! EQU 0 (
        echo     ALL TESTS PASSED
    ) else (
        echo     SOME TESTS FAILED OR SKIPPED
    )
    echo   - HTML Report: 
    if !HTML_REPORT_FOUND! EQU 1 (
        echo     FOUND - %REPORT_DIR%\reports\index.html
    ) else (
        echo     NOT FOUND
    )
    echo.
    echo Report Locations:
    if !HTML_REPORT_FOUND! EQU 1 (
        echo   - HTML Test Report: %REPORT_DIR%\reports\index.html
        echo     ^(MAIN REPORT - Open this in browser^)
    ) else (
        echo   - HTML Test Report: NOT FOUND
        echo     ^(Check logs for errors^)
    )
    echo   - XML Test Results: %REPORT_DIR%\test-results\
    echo   - Coverage Report: %REPORT_DIR%\coverage\index.html
    echo   - Build Log: %REPORT_DIR%\logs\build.log
    echo   - Test Log: %REPORT_DIR%\logs\test_execution.log
    echo   - Coverage Log: %REPORT_DIR%\logs\coverage.log
    echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
    echo.
    echo Directory Structure:
    echo   %REPORT_DIR%\
    echo     - reports\          HTML test reports
    echo     - test-results\     XML test results
    echo     - coverage\         Coverage reports
    echo     - logs\             Build and test logs
    echo.
    echo ========================================
) > "%REPORT_DIR%\TEST_SUMMARY.txt"

echo Summary report created: %REPORT_DIR%\TEST_SUMMARY.txt
echo.

REM Final verification and auto-open
echo ========================================
echo STEP 8: Final verification
echo ========================================
echo.

if !HTML_REPORT_FOUND! EQU 1 (
    echo [OK] HTML test report found: %REPORT_DIR%\reports\index.html
    echo.
    echo ========================================
    echo DONE - Opening HTML report...
    echo ========================================
    echo.
    echo Report directory: %REPORT_DIR%
    echo.
    
    REM Open report directory
    explorer "%REPORT_DIR%"
    
    REM Wait a bit then open HTML report
    timeout /t 2 /nobreak >nul
    if exist "%REPORT_DIR%\reports\index.html" (
        start "" "%REPORT_DIR%\reports\index.html"
    )
) else (
    echo [WARNING] HTML test report NOT FOUND!
    echo.
    echo Searching for any HTML files...
    dir /s /b "%REPORT_DIR%\*.html" 2>nul
    echo.
    
    REM Try one more time with different approach
    echo Attempting final retry...
    call gradlew.bat connectedDebugAndroidTest --continue >nul 2>&1
    timeout /t 5 /nobreak >nul
    
    if exist "app\build\reports\androidTests\connected\debug\index.html" (
        xcopy /E /I /Y /Q "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\" >nul 2>&1
        if exist "%REPORT_DIR%\reports\index.html" (
            set HTML_REPORT_FOUND=1
            echo [OK] HTML report found after final retry!
            echo.
            explorer "%REPORT_DIR%"
            timeout /t 2 /nobreak >nul
            start "" "%REPORT_DIR%\reports\index.html"
        )
    )
    
    if !HTML_REPORT_FOUND! EQU 0 (
        echo.
        echo Report directory: %REPORT_DIR%
        echo Check logs for details:
        echo   - Build log: %REPORT_DIR%\logs\build.log
        echo   - Test log: %REPORT_DIR%\logs\test_execution.log
        echo.
        explorer "%REPORT_DIR%"
    )
)

echo.
echo ========================================
echo Process completed!
echo ========================================
echo.



