@echo off
echo ========================================
echo Fix Corrupted Build Directory
echo ========================================
echo.
echo This will:
echo   1. Stop Gradle daemons
echo   2. Delete corrupted build directories
echo   3. Rebuild the project
echo.
echo ⚠️ IMPORTANT: Close Android Studio before running this!
echo.
pause
echo.

echo [1/4] Stopping Gradle daemons...
call gradlew.bat --stop
if %ERRORLEVEL% NEQ 0 (
    echo ⚠️ Warning: Could not stop all daemons
)
echo.

echo [2/4] Waiting 3 seconds for processes to release locks...
timeout /t 3 /nobreak >nul
echo.

echo [3/4] Deleting corrupted build directories...
if exist "app\build\intermediates\dex" (
    echo   Deleting app\build\intermediates\dex...
    rd /s /q "app\build\intermediates\dex" 2>nul
    if %ERRORLEVEL% EQU 0 (
        echo   ✓ Deleted dex directory
    ) else (
        echo   ⚠️ Could not delete (may be locked by another process)
    )
)

if exist "app\build\intermediates" (
    echo   Deleting app\build\intermediates...
    rd /s /q "app\build\intermediates" 2>nul
    if %ERRORLEVEL% EQU 0 (
        echo   ✓ Deleted intermediates directory
    ) else (
        echo   ⚠️ Could not delete (may be locked by another process)
    )
)

if exist "app\build" (
    echo   Deleting entire app\build directory...
    rd /s /q "app\build" 2>nul
    if %ERRORLEVEL% EQU 0 (
        echo   ✓ Deleted build directory
    ) else (
        echo   ⚠️ Could not delete (may be locked by another process)
        echo   Please close Android Studio and try again
    )
)
echo.

echo [4/4] Rebuilding project...
call gradlew.bat clean --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ⚠️ Clean failed, but continuing with build...
)
echo.

call gradlew.bat assembleDebug --no-daemon
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ Build failed!
    echo.
    echo Please try:
    echo   1. Close Android Studio completely
    echo   2. Kill all Java processes: taskkill /F /IM java.exe
    echo   3. Run this script again
    echo.
    pause
    exit /b 1
) else (
    echo.
    echo ✅ Build successful!
    echo.
    echo You can now try building test APK:
    echo   .\gradlew assembleDebugAndroidTest
    echo.
)
echo.

pause

