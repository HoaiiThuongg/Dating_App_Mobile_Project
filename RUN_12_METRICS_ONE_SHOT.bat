@echo off
setlocal enabledelayedexpansion

echo ========================================
echo RUN 12 METRICS - ONE SHOT
echo ========================================
echo.
echo This script runs all performance tests once, pulls JSON metrics,
echo and collects reports into performance_results/.
echo.

REM Check device
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ERROR: No device connected!
    exit /b 1
)

REM Build test APK
echo Building test APK...
call gradlew.bat assembleDebugAndroidTest --quiet
if errorlevel 1 (
    echo Build failed!
    exit /b 1
)

REM Ensure debug app is installed (required for run-as to access files)
echo Installing debug app...
call gradlew.bat :app:installDebug --quiet
if errorlevel 1 (
    echo Install debug app failed (continuing, tests may install automatically)
)

REM Clear old device metrics to avoid mixing
set PKG=com.example.datingapp
echo Clearing old device metrics (if any)...
adb shell run-as %PKG% rm -f files/performance_metrics/all_metrics.json >nul 2>&1

REM Run all instrumentation tests in performance package once
echo Running all performance tests (single Gradle invocation)...
call gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.package=com.example.atry.performance --no-daemon
if errorlevel 1 (
    echo Tests encountered failures (continuing to collect metrics)...
)

REM Wait a bit for reports to flush
ping 127.0.0.1 -n 5 >nul

REM Collect results (copies reports and pulls all_metrics.json)
echo Collecting results...
call collect_performance_results.bat

echo.
echo Done! Check performance_results\ folder for the latest report.
echo.
pause