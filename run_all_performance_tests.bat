@echo off
REM Script để chạy TẤT CẢ Performance Tests
REM Usage: run_all_performance_tests.bat

echo ========================================
echo 🚀 Running ALL Performance Tests
echo ========================================
echo.

REM Check if device is connected
adb devices | findstr /C:"device" >nul
if errorlevel 1 (
    echo ❌ No device connected. Please connect a device or start an emulator.
    exit /b 1
) else (
    echo ✅ Device connected
    echo.
)

REM 1. Screen Render Performance Tests
echo ========================================
echo 1️⃣ Screen Render Performance Tests
echo ========================================
echo.
call run_performance_tests.bat render
if errorlevel 1 (
    echo ⚠️  Render tests failed or had issues
)
echo.
echo.

REM 2. Scroll Performance Tests
echo ========================================
echo 2️⃣ Scroll Performance Tests
echo ========================================
echo.
call run_performance_tests.bat scroll
if errorlevel 1 (
    echo ⚠️  Scroll tests failed or had issues
)
echo.
echo.

REM 3. ViewModel Performance Tests
echo ========================================
echo 3️⃣ ViewModel Performance Tests
echo ========================================
echo.
call run_performance_tests.bat viewmodel
if errorlevel 1 (
    echo ⚠️  ViewModel tests failed or had issues
)
echo.
echo.

REM 4. Memory Performance Tests
echo ========================================
echo 4️⃣ Memory Performance Tests
echo ========================================
echo.
call run_performance_tests.bat memory
if errorlevel 1 (
    echo ⚠️  Memory tests failed or had issues
)
echo.
echo.

REM 5. App Startup Benchmarks (Macrobenchmark)
echo ========================================
echo 5️⃣ App Startup Benchmarks (Macrobenchmark)
echo ========================================
echo.
echo ⚠️  Note: Macrobenchmark requires non-debuggable build
echo.
call run_macrobenchmark.bat
if errorlevel 1 (
    echo ⚠️  Macrobenchmark tests failed or were skipped
    echo 💡 This is normal if app is debuggable or on emulator
)
echo.
echo.

echo ========================================
echo ✅ All Performance Tests Completed!
echo ========================================
echo.
echo 📊 View Results:
echo   - Test Reports: app\build\reports\androidTests\
echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
echo.
echo 💡 Tips:
echo   - Check console output for metrics
echo   - Open HTML reports in browser for details
echo   - Compare results with targets in documentation
echo.

