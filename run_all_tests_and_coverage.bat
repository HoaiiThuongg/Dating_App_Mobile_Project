@echo off
REM Batch file để chạy tests và coverage (không cần PowerShell execution policy)
REM Usage: run_all_tests_and_coverage.bat

echo 🧪 Running All UI Tests and Generating Coverage Report
echo =====================================================
echo.

REM Check if gradlew exists
if not exist "gradlew.bat" (
    echo ❌ gradlew.bat not found!
    exit /b 1
)

REM Clean (optional - uncomment if needed)
REM echo 🧹 Cleaning previous build...
REM call gradlew.bat clean
REM if errorlevel 1 (
REM     echo ❌ Clean failed!
REM     exit /b 1
REM )

echo 🔨 Building project...
call gradlew.bat assembleDebugAndroidTest
if errorlevel 1 (
    echo ❌ Build failed!
    exit /b 1
)

echo.
echo 🧪 Running all UI tests...
echo.

REM Run all test classes
call gradlew.bat connectedAndroidTest
if errorlevel 1 (
    echo ⚠️  Some tests failed or were skipped
) else (
    echo ✅ All tests passed
)

echo.
echo 📈 Generating coverage report...
call gradlew.bat createDebugCoverageReport
if errorlevel 1 (
    echo ❌ Coverage report generation failed!
    exit /b 1
)

if exist "app\build\outputs\code_coverage\debugAndroidTest\connected\index.html" (
    echo.
    echo ✅ Coverage report generated!
    echo 📄 Report location: app\build\outputs\code_coverage\debugAndroidTest\connected\index.html
    echo.
    echo 💡 To view the report, open the HTML file in your browser
) else (
    echo ⚠️  Report file not found at expected location
)

echo.
echo ✅ All tests completed!

