@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY TESTS VA TAO BAO CAO NGAY
echo ========================================
echo.
echo Script nay se:
echo   1. Kiem tra device
echo   2. Build test APK (neu can)
echo   3. Chay tests
echo   4. Tao bao cao ngay lap tuc
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
if not exist "%REPORT_DIR%\logs" mkdir "%REPORT_DIR%\logs"
echo.

REM Check device
echo Checking device...
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    echo Please connect a device or start an emulator.
    pause
    exit /b 1
)
echo Device connected.
echo.

REM Check if test APK exists, if not build it
echo Checking test APK...
if not exist "app\build\outputs\apk\androidTest\debug\app-debug-androidTest.apk" (
    echo Test APK not found. Building...
    call gradlew.bat assembleDebugAndroidTest
    if errorlevel 1 (
        echo ERROR: Build failed!
        pause
        exit /b 1
    )
    echo Build successful.
    echo.
) else (
    echo Test APK found.
    echo.
)

REM Run tests
echo ========================================
echo Running UI tests...
echo ========================================
echo.
call gradlew.bat connectedDebugAndroidTest
set TEST_RESULT=!ERRORLEVEL!
echo.
echo Tests completed with exit code: !TEST_RESULT!
echo.

REM Wait for reports
echo Waiting for reports to be written...
timeout /t 10 /nobreak >nul
echo.

REM Copy reports immediately
echo ========================================
echo Copying reports...
echo ========================================
echo.

REM Copy HTML reports
if exist "app\build\reports\androidTests\connected\debug" (
    echo Copying HTML reports...
    xcopy /E /I /Y "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\"
    echo.
    
    if exist "%REPORT_DIR%\reports\index.html" (
        echo [OK] HTML report copied: %REPORT_DIR%\reports\index.html
        echo.
    ) else (
        echo [WARNING] index.html not found
        echo Checking contents...
        dir /b "%REPORT_DIR%\reports" 2>nul
        echo.
    )
) else (
    echo [WARNING] HTML reports directory not found
    echo.
    echo Checking for reports in other locations...
    if exist "app\build\reports\androidTests" (
        echo Found: app\build\reports\androidTests
        xcopy /E /I /Y "app\build\reports\androidTests" "%REPORT_DIR%\reports\"
        echo.
    )
)

REM Copy XML results
if exist "app\build\outputs\androidTest-results\connected" (
    echo Copying XML test results...
    xcopy /E /I /Y "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results\"
    echo [OK] XML results copied
    echo.
)

REM Generate coverage
echo Generating coverage report...
call gradlew.bat createDebugCoverageReport >nul 2>&1
if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
    echo Copying coverage reports...
    xcopy /E /I /Y "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage\"
    echo [OK] Coverage copied
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
    echo Test Result: 
    if !TEST_RESULT! EQU 0 (
        echo   ALL TESTS PASSED
    ) else (
        echo   SOME TESTS FAILED
    )
    echo.
    echo Report Locations:
    echo   - HTML Report: %REPORT_DIR%\reports\index.html
    echo   - XML Results: %REPORT_DIR%\test-results\
    echo   - Coverage: %REPORT_DIR%\coverage\index.html
    echo.
) > "%REPORT_DIR%\TEST_SUMMARY.txt"

echo Summary created: %REPORT_DIR%\TEST_SUMMARY.txt
echo.

echo ========================================
echo DONE!
echo ========================================
echo.
echo Report directory: %REPORT_DIR%
echo.

if exist "%REPORT_DIR%\reports\index.html" (
    echo Opening HTML report...
    explorer "%REPORT_DIR%"
    timeout /t 2 /nobreak >nul
    start "" "%REPORT_DIR%\reports\index.html"
) else (
    echo [WARNING] HTML report not found!
    echo.
    echo Report directory: %REPORT_DIR%
    echo Check logs for details.
    echo.
    explorer "%REPORT_DIR%"
)

pause



