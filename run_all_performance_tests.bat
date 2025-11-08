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

REM 6. System Resource Performance Tests
echo ========================================
echo 6️⃣ System Resource Performance Tests
echo ========================================
echo.
call run_performance_tests.bat system
if errorlevel 1 (
    echo ⚠️  System resource tests failed or had issues
)
echo.
echo.

REM 7. Network Performance Tests
echo ========================================
echo 7️⃣ Network Performance Tests
echo ========================================
echo.
call run_performance_tests.bat network
if errorlevel 1 (
    echo ⚠️  Network tests failed or had issues
)
echo.
echo.

REM 8. Frame Rate Performance Tests
echo ========================================
echo 8️⃣ Frame Rate Performance Tests
echo ========================================
echo.
call run_performance_tests.bat framerate
if errorlevel 1 (
    echo ⚠️  Frame rate tests failed or had issues
)
echo.
echo.

REM 9. App Size Performance Tests
echo ========================================
echo 9️⃣ App Size Performance Tests
echo ========================================
echo.
call run_performance_tests.bat size
if errorlevel 1 (
    echo ⚠️  App size tests failed or had issues
)
echo.
echo.

REM 10. Database Performance Tests
echo ========================================
echo 🔟 Database Performance Tests
echo ========================================
echo.
call run_performance_tests.bat database
if errorlevel 1 (
    echo ⚠️  Database tests failed or had issues
)
echo.
echo.

REM 11. Image Loading Performance Tests
echo ========================================
echo 1️⃣1️⃣ Image Loading Performance Tests
echo ========================================
echo.
call run_performance_tests.bat image
if errorlevel 1 (
    echo ⚠️  Image loading tests failed or had issues
)
echo.
echo.

REM 12. Touch Response Performance Tests
echo ========================================
echo 1️⃣2️⃣ Touch Response Performance Tests
echo ========================================
echo.
call run_performance_tests.bat touch
if errorlevel 1 (
    echo ⚠️  Touch response tests failed or had issues
)
echo.
echo.

echo ========================================
echo ✅ All Performance Tests Completed!
echo ========================================
echo.

REM Wait a moment for reports to be written
echo Waiting 3 seconds for reports to be written...
timeout /t 3 /nobreak >nul
echo.

REM Check if reports were generated
if exist "app\build\reports\androidTests\connected\debug\index.html" (
    echo ✅ Test Reports Generated!
    echo    Location: app\build\reports\androidTests\connected\debug\index.html
) else if exist "app\build\reports\androidTests\index.html" (
    echo ✅ Test Reports Generated!
    echo    Location: app\build\reports\androidTests\index.html
) else (
    echo ⚠️  Test Reports NOT Found!
    echo    Expected: app\build\reports\androidTests\
    echo    This may be normal if all tests were skipped or failed early
)

if exist "app\build\outputs\connected_android_test_additional_output" (
    echo ✅ Macrobenchmark Results Generated!
    echo    Location: app\build\outputs\connected_android_test_additional_output\
) else (
    echo ⚠️  Macrobenchmark Results NOT Found
    echo    This is normal if macrobenchmark was skipped
)

echo.
echo 📊 View Results:
echo   - Test Reports: app\build\reports\androidTests\
echo   - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
echo.
echo 💡 Next Steps:
echo   1. Collect results: .\collect_performance_results.bat
echo   2. Or view directly: start app\build\reports\androidTests\connected\debug\index.html
echo   3. Check console output above for metrics
echo.


