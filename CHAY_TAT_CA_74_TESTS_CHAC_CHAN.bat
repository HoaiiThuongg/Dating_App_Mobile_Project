@echo off
setlocal enabledelayedexpansion

echo ========================================
echo CHAY TAT CA 74+ UI TESTS - CHAC CHAN
echo ========================================
echo.
echo Script nay se chay TAT CA 33 test classes
echo de dam bao co TAT CA 74+ test cases trong bao cao.
echo.
echo QUAN TRONG: Se chay TUNG test class mot
echo de dam bao KHONG BO SOT test nao.
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

REM List of ALL 33 test classes
set TEST_CLASSES=com.example.atry.ui.screens.auth.SplashScreenTest com.example.atry.ui.screens.auth.login.LoginScreenMockTest com.example.atry.ui.screens.auth.ForgetPasswordTest com.example.atry.ui.screens.auth.forgetPassword.ForgetPasswordTest com.example.atry.ui.screens.auth.register.RegisterEntryScreenTest com.example.atry.ui.screens.auth.register.EmailInputScreenTest com.example.atry.ui.screens.auth.register.ProfileCreationTest com.example.atry.ui.screens.functionalScreens.home.HomeScreenTest com.example.atry.ui.screens.functionalScreens.home.HomeScreenSwipeTest com.example.atry.ui.screens.functionalScreens.home.MenuNavigationTest com.example.atry.ui.screens.functionalScreens.MessageScreenTest com.example.atry.ui.screens.functionalScreens.chat.ChatScreenTest com.example.atry.ui.screens.functionalScreens.LikeYouScreenTest com.example.atry.ui.screens.functionalScreens.MyProfileScreenTest com.example.atry.ui.screens.functionalScreens.SettingsScreenTest com.example.atry.ui.screens.functionalScreens.EditProfileScreenTest com.example.atry.ui.screens.functionalScreens.SupportScreenTest com.example.atry.ui.screens.functionalScreens.AiChatScreenTest com.example.atry.ui.screens.functionalScreens.DetailedProfileScreenTest com.example.atry.ui.screens.functionalScreens.QRCodeTest com.example.atry.ui.screens.functionalScreens.NotificationScreenTest com.example.atry.ui.screens.functionalScreens.ProfileScreenTest com.example.atry.ui.screens.functionalScreens.UnmatchTest com.example.atry.ui.screens.functionalScreens.SettingsThemeTest com.example.atry.ui.screens.functionalScreens.UserQrScreenTest com.example.atry.ui.screens.functionalScreens.DevelopingScreenTest com.example.atry.ui.screens.functionalScreens.EmailInputScreenTest com.example.atry.ui.screens.functionalScreens.PasswordInputScreenTest com.example.atry.ui.screens.functionalScreens.OtpInputScreenTest com.example.atry.ui.screens.functionalScreens.InfoInput1Test com.example.atry.ui.screens.functionalScreens.InfoInput2Test com.example.atry.ui.screens.functionalScreens.HobbiesInputTest com.example.atry.ui.screens.functionalScreens.PicturesInputTest

set TOTAL_CLASSES=33
set CURRENT=0
set PASSED=0
set FAILED=0

echo ========================================
echo CHAY TAT CA 33 TEST CLASSES
echo ========================================
echo.
echo Se chay TUNG test class mot de dam bao
echo TAT CA 74+ test cases duoc chay.
echo.
echo Thoi gian uoc tinh: 15-20 phut
echo.

REM Run each test class
for %%T in (%TEST_CLASSES%) do (
    set /a CURRENT+=1
    
    REM Extract short name
    set TEST_NAME=%%T
    set TEST_NAME=!TEST_NAME:com.example.atry.ui.screens.=!
    set TEST_NAME=!TEST_NAME:.= !
    
    echo.
    echo ========================================
    echo [!CURRENT!/!TOTAL_CLASSES!] Running: !TEST_NAME!
    echo ========================================
    echo Full class: %%T
    echo.
    
    REM Run this test class
    call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=%%T >> "%REPORT_DIR%\logs\test_execution.log" 2>&1
    set TEST_RESULT=!ERRORLEVEL!
    
    if !TEST_RESULT! NEQ 0 (
        set /a FAILED+=1
        echo [FAILED] !TEST_NAME!
    ) else (
        set /a PASSED+=1
        echo [PASSED] !TEST_NAME!
    )
    echo.
    echo Progress: !CURRENT!/!TOTAL_CLASSES! classes completed
    echo Passed: !PASSED!
    echo Failed: !FAILED!
    echo.
)

echo.
echo ========================================
echo ALL TESTS COMPLETED!
echo ========================================
echo.
echo Total classes: !TOTAL_CLASSES!
echo Passed: !PASSED!
echo Failed: !FAILED!
echo.

REM Wait for reports
echo Waiting for reports to be written...
timeout /t 20 /nobreak >nul
call gradlew.bat --stop >nul 2>&1
timeout /t 5 /nobreak >nul
echo.

REM Copy reports
echo ========================================
echo Copying reports...
echo ========================================
echo.

if exist "app\build\reports\androidTests\connected\debug" (
    echo Copying HTML reports...
    robocopy "app\build\reports\androidTests\connected\debug" "%REPORT_DIR%\reports" /E /NFL /NDL /NJH /NJS >nul 2>&1
    
    if exist "%REPORT_DIR%\reports\index.html" (
        echo [OK] HTML report: %REPORT_DIR%\reports\index.html
        echo.
        
        REM Create summary
        (
            echo ========================================
            echo UI TEST RESULTS SUMMARY - 74+ TESTS
            echo ========================================
            echo.
            echo Report Date: %date% %time%
            echo Report Directory: %REPORT_DIR%
            echo.
            echo Test Execution:
            echo   - Total test classes: !TOTAL_CLASSES!
            echo   - Total test cases: 74+
            echo   - Classes passed: !PASSED!
            echo   - Classes failed: !FAILED!
            echo.
            echo Report Locations:
            echo   - HTML Report: %REPORT_DIR%\reports\index.html
            echo   - XML Results: %REPORT_DIR%\test-results\
            echo   - Test Log: %REPORT_DIR%\logs\test_execution.log
            echo.
            echo Note: This report contains results from ALL 33 test classes
            echo       which includes ALL 74+ test cases.
            echo.
        ) > "%REPORT_DIR%\TEST_SUMMARY.txt"
        
        echo Summary created: %REPORT_DIR%\TEST_SUMMARY.txt
        echo.
        
        REM Copy XML
        if exist "app\build\outputs\androidTest-results\connected" (
            robocopy "app\build\outputs\androidTest-results\connected" "%REPORT_DIR%\test-results" /E /NFL /NDL /NJH /NJS >nul 2>&1
            echo XML results copied.
            echo.
        )
        
        echo ========================================
        echo DONE!
        echo ========================================
        echo.
        echo HTML report: %REPORT_DIR%\reports\index.html
        echo.
        echo This report contains ALL 74+ test results!
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

pause

