@echo off
echo ========================================
echo Run Simple Performance Test
echo ========================================
echo.
echo This will run a simple test to generate reports
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected!
    pause
    exit /b 1
)

echo [1/3] Building test APK...
call gradlew.bat assembleDebugAndroidTest --no-daemon
if errorlevel 1 (
    echo ❌ Build failed!
    pause
    exit /b 1
)
echo.

echo [2/3] Installing test APK...
call gradlew.bat installDebugAndroidTest --no-daemon
if errorlevel 1 (
    echo ⚠️ Install failed, but continuing...
)
echo.

echo [3/3] Running ScreenRenderPerformanceTest...
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest --no-daemon
if errorlevel 1 (
    echo.
    echo ⚠️ Some tests may have failed, but reports should be generated
    echo Check: app\build\reports\androidTests\
) else (
    echo.
    echo ✅ Tests completed!
)
echo.

echo Reports location:
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo   app\build\reports\androidTests\connected\debug\index.html
) else if exist "app\build\reports\androidTests\index.html" (
    echo   app\build\reports\androidTests\index.html
) else (
    echo   app\build\reports\androidTests\
)
echo.

pause

