@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY TAT CA 74+ UI TESTS - KHONG LOC
echo ========================================
echo.
echo QUAN TRONG: Script nay se chay TAT CA 74+ tests
echo ma KHONG loc theo class nao ca.
echo.
echo Gradle se tu dong chay TAT CA test classes.
echo.

REM Create report directory
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value 2^>nul') do set datetime=%%I
if "!datetime!"=="" (
    set datetime=%date:~-4,4%%date:~-7,2%%date:~-10,2%_%time:~0,2%%time:~3,2%%time:~6,2%
    set datetime=!datetime: =0!
)
set TIMESTAMP=!datetime:~0,8!_!datetime:~8,6!
set REPORT_DIR=ui_test_results\report_!TIMESTAMP!

echo Report directory: %REPORT_DIR%
if not exist "ui_test_results" mkdir "ui_test_results"
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"
if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
if not exist "%REPORT_DIR%\test-results" mkdir "%REPORT_DIR%\test-results"
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
echo.

REM Check device
echo Checking device...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    pause
    exit /b 1
)
echo Device connected.
echo.

REM Build
echo Building test APK...
call gradlew.bat assembleDebugAndroidTest > "%REPORT_DIR%\logs\build.log" 2>&1
if errorlevel 1 (
    echo Build failed! Check: %REPORT_DIR%\logs\build.log
    pause
    exit /b 1
)
echo Build successful!
echo.

REM Run ALL tests - NO FILTERS
echo ========================================
echo CHAY TAT CA 74+ TESTS - KHONG LOC
echo ========================================
echo.
echo Dang chay TAT CA test classes...
echo Khong co filter nao - se chay TAT CA 74+ tests.
echo.
echo Thoi gian uoc tinh: 15-20 phut
echo.

call gradlew.bat connectedDebugAndroidTest > "%REPORT_DIR%\logs\test_all.log" 2>&1
set TEST_RESULT=!ERRORLEVEL!

echo.
echo Tests completed! Exit code: !TEST_RESULT!
echo.

REM Wait longer for all reports
echo Waiting for reports (30 seconds)...
timeout /t 30 /nobreak >nul
call gradlew.bat --stop >nul 2>&1
timeout /t 5 /nobreak >nul
echo.

REM Copy reports
echo Copying reports...
if exist "app\build\reports\androidTests\connected\debug" (
    robocopy "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports" /E /NFL /NDL /NJH /NJS >nul 2>&1
    
    if exist "%REPORT_DIR%\reports\index.html" (
        echo [OK] HTML report: %REPORT_DIR%\reports\index.html
        echo.
        
        REM Open report
        explorer "%REPORT_DIR%"
        timeout /t 2 /nobreak >nul
        start "" "%REPORT_DIR%\reports\index.html"
    ) else (
        echo [ERROR] HTML report not found!
    )
) else (
    echo [ERROR] Reports directory not found!
)

REM Copy XML
if exist "app\build\outputs\androidTest-results\connected" (
    robocopy "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results" /E /NFL /NDL /NJH /NJS >nul 2>&1
)

echo.
echo ========================================
echo DONE!
echo ========================================
echo.
echo Report: %REPORT_DIR%\reports\index.html
echo.
echo Check the HTML report to see ALL 74+ test results.
echo.

pause



