@echo off
setlocal enabledelayedexpansion

echo ========================================
echo RUN ALL UI TESTS (74+ TEST CASES)
echo ========================================
echo.
echo This script will:
echo   1. Build the test APK
echo   2. Run all 33 test classes
echo   3. Create a results report
echo.
echo Estimated time: 10-15 minutes
echo.
pause
echo.

REM Create report directory
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value 2^>nul') do set datetime=%%I
if "!datetime!"=="" (
    set datetime=%date:~-4,4%%date:~-7,2%%date:~-10,2%_%time:~0,2%%time:~3,2%%time:~6,2%
    set datetime=!datetime: =0!
)
set TIMESTAMP=!datetime:~0,8!_!datetime:~8,6!
set REPORT_DIR=ui_test_results\report_!TIMESTAMP!
if not exist "%REPORT_DIR%" mkdir "%REPORT_DIR%"

echo Report directory: %REPORT_DIR%
echo.

REM Check device
echo Checking device connection...
adb start-server >nul 2>&1
set DEVICE_FOUND=
set DEVICE_ID=
set STATE=
for /f "delims=" %%S in ('adb get-state') do set STATE=%%S
if /I "!STATE!"=="device" (
    set DEVICE_FOUND=1
)
if not defined DEVICE_FOUND (
    for /f "skip=1 tokens=1,2" %%A in ('adb devices') do (
        if /I "%%B"=="device" (
            set DEVICE_FOUND=1
            if not defined DEVICE_ID set DEVICE_ID=%%A
        )
    )
)
if not defined DEVICE_FOUND (
    echo.
    echo ERROR: No device connected!
    echo Please connect a device or start an emulator.
    echo.
    pause
    exit /b 1
) else (
    echo Device connected: !DEVICE_ID!
    echo.
)

REM Clean and build
echo ========================================
echo STEP 1: Building test APK
echo ========================================
echo.
echo Cleaning previous build...
call gradlew.bat clean
if errorlevel 1 (
    echo Warning: Clean failed, continuing anyway...
    echo.
)

echo.
echo Building test APK (this may take 2-3 minutes)...
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo.
    echo ERROR: Build failed!
    echo Please check the errors above.
    echo.
    pause
    exit /b 1
)
echo.
echo Build successful!
echo.

REM Run all UI tests (all 74+ test cases from Testcases.xlsx)
echo ========================================
echo STEP 2: Running all UI tests (74+ test cases)
echo ========================================
echo.
echo Note: This will run all test methods in all test classes.
echo Each test class may contain multiple @Test methods.
echo.

REM Option 1: Run all tests at once (faster, but less detailed progress)
echo Running all UI tests at once...
echo This includes all 74+ test cases from Testcases.xlsx
echo.

call gradlew.bat connectedDebugAndroidTest
set ALL_TESTS_RESULT=!ERRORLEVEL!

REM Also run individual test classes for detailed tracking
set TEST_CLASSES=com.example.atry.ui.screens.auth.SplashScreenTest com.example.atry.ui.screens.auth.login.LoginScreenMockTest com.example.atry.ui.screens.auth.ForgetPasswordTest com.example.atry.ui.screens.auth.forgetPassword.ForgetPasswordTest com.example.atry.ui.screens.auth.register.RegisterEntryScreenTest com.example.atry.ui.screens.auth.register.EmailInputScreenTest com.example.atry.ui.screens.auth.register.ProfileCreationTest com.example.atry.ui.screens.functionalScreens.home.HomeScreenTest com.example.atry.ui.screens.functionalScreens.home.HomeScreenSwipeTest com.example.atry.ui.screens.functionalScreens.home.MenuNavigationTest com.example.atry.ui.screens.functionalScreens.MessageScreenTest com.example.atry.ui.screens.functionalScreens.chat.ChatScreenTest com.example.atry.ui.screens.functionalScreens.LikeYouScreenTest com.example.atry.ui.screens.functionalScreens.MyProfileScreenTest com.example.atry.ui.screens.functionalScreens.SettingsScreenTest com.example.atry.ui.screens.functionalScreens.EditProfileScreenTest com.example.atry.ui.screens.functionalScreens.SupportScreenTest com.example.atry.ui.screens.functionalScreens.AiChatScreenTest com.example.atry.ui.screens.functionalScreens.DetailedProfileScreenTest com.example.atry.ui.screens.functionalScreens.QRCodeTest com.example.atry.ui.screens.functionalScreens.NotificationScreenTest com.example.atry.ui.screens.functionalScreens.ProfileScreenTest com.example.atry.ui.screens.functionalScreens.UnmatchTest com.example.atry.ui.screens.functionalScreens.SettingsThemeTest com.example.atry.ui.screens.functionalScreens.UserQrScreenTest com.example.atry.ui.screens.functionalScreens.DevelopingScreenTest com.example.atry.ui.screens.functionalScreens.EmailInputScreenTest com.example.atry.ui.screens.functionalScreens.PasswordInputScreenTest com.example.atry.ui.screens.functionalScreens.OtpInputScreenTest com.example.atry.ui.screens.functionalScreens.InfoInput1Test com.example.atry.ui.screens.functionalScreens.InfoInput2Test com.example.atry.ui.screens.functionalScreens.HobbiesInputTest com.example.atry.ui.screens.functionalScreens.PicturesInputTest

set PASSED=0
set FAILED=0
set TOTAL_CLASSES=33
set TOTAL_TESTS=74
set CURRENT=0

echo.
echo ========================================
echo Detailed test execution (by class):
echo ========================================
echo.

for %%T in (%TEST_CLASSES%) do (
    set /a CURRENT+=1
    
    REM Extract short name
    set TEST_NAME=%%T
    set TEST_NAME=!TEST_NAME:com.example.atry.ui.screens.=%%
    set TEST_NAME=!TEST_NAME:.=%%
    
    echo.
    echo ========================================
    echo Test !CURRENT!/!TOTAL!: !TEST_NAME!
    echo ========================================
    echo Full class: %%T
    echo.
    
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=%%T
    set TEST_RESULT=!ERRORLEVEL!
    
    if !TEST_RESULT! NEQ 0 (
        set /a FAILED+=1
        echo.
        echo [FAILED] !TEST_NAME!
    ) else (
        set /a PASSED+=1
        echo.
        echo [PASSED] !TEST_NAME!
    )
    echo.
    echo Progress: !CURRENT!/!TOTAL_CLASSES! test classes completed
    echo Passed classes: !PASSED!
    echo Failed classes: !FAILED!
    echo.
)

echo.
echo ========================================
echo STEP 3: Test Results Summary
echo ========================================
echo.
echo Total test classes: !TOTAL_CLASSES!
echo Total test cases: !TOTAL_TESTS!+ (from Testcases.xlsx)
echo.
echo Test classes passed: !PASSED!
echo Test classes failed: !FAILED!
echo.
if !TOTAL_CLASSES! GTR 0 (
    set /a PASS_RATE=(!PASSED! * 100) / !TOTAL_CLASSES!
    echo Pass rate: !PASS_RATE!%%
)
echo.
echo Note: Check the HTML report for detailed results of all 74+ test cases.
echo.

REM Copy test reports
echo ========================================
echo STEP 4: Copying test reports...
echo ========================================
echo.

if exist "app\build\reports\androidTests\connected\debug" (
    if not exist "%REPORT_DIR%\reports" mkdir "%REPORT_DIR%\reports"
    xcopy /E /I /Y "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports\" >nul 2>&1
    echo Reports copied to: %REPORT_DIR%\reports\
    echo.
) else (
    echo Warning: Reports not found in app\build\reports\androidTests\connected\debug
    echo.
)

REM Generate coverage report if possible
echo ========================================
echo STEP 5: Generating coverage report...
echo ========================================
echo.

call gradlew.bat createDebugCoverageReport 2>nul
if errorlevel 1 (
    echo Coverage report generation skipped or failed
    echo.
) else (
    if exist "app\build\outputs\code_coverage\debugAndroidTest\connected" (
        if not exist "%REPORT_DIR%\coverage" mkdir "%REPORT_DIR%\coverage"
        xcopy /E /I /Y "app\build\outputs\code_coverage\debugAndroidTest\connected" "%REPORT_DIR%\coverage\" >nul 2>&1
        echo Coverage report copied to: %REPORT_DIR%\coverage\
        echo.
    )
)

REM Create summary report
echo ========================================
echo STEP 6: Creating summary report...
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
    echo Test Results:
    echo   Total: !TOTAL!
    echo   Passed: !PASSED!
    echo   Failed: !FAILED!
    echo   Pass Rate: !PASS_RATE!%%
    echo.
    echo Test Classes Run:
    set COUNT=0
    for %%T in (%TEST_CLASSES%) do (
        set /a COUNT+=1
        echo   [!COUNT!] %%T
    )
    echo.
    echo Report Locations:
    echo   - Test Reports: %REPORT_DIR%\reports\index.html
    echo   - Coverage Report: %REPORT_DIR%\coverage\index.html
    echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
    echo.
    echo ========================================
) > "%REPORT_DIR%\TEST_SUMMARY.txt"

echo Summary report created: %REPORT_DIR%\TEST_SUMMARY.txt
echo.

echo ========================================
echo DONE!
echo ========================================
echo.
echo Report directory: %REPORT_DIR%
echo.
echo To view results:
echo   - Test Reports: %REPORT_DIR%\reports\index.html
echo   - Coverage Report: %REPORT_DIR%\coverage\index.html
echo   - Summary: %REPORT_DIR%\TEST_SUMMARY.txt
echo.
echo Press any key to open the report directory...
pause >nul

REM Open report directory
explorer "%REPORT_DIR%"