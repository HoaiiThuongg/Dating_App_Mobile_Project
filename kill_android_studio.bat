@echo off
echo ========================================
echo Kill Android Studio and Gradle Processes
echo ========================================
echo.

echo [1/3] Stopping Gradle daemons...
call gradlew.bat --stop
if %ERRORLEVEL% NEQ 0 (
    echo Warning: gradlew --stop failed, continuing...
)
echo.

echo [2/3] Killing Android Studio processes...
taskkill /F /IM "studio64.exe" 2>nul
taskkill /F /IM "studio.exe" 2>nul
taskkill /F /IM "idea64.exe" 2>nul
taskkill /F /IM "idea.exe" 2>nul
echo.

echo [3/3] Waiting 3 seconds for processes to release locks...
timeout /t 3 /nobreak >nul
echo.

echo Done! You can now run tests.
echo.
pause


