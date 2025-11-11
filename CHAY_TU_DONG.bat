@echo off
REM Script chinh - tu dong hoan toan
REM Chay script nay de chay tu dong tat ca UI tests va tao bao cao

echo ========================================
echo CHAY UI TESTS - TU DONG HOAN TOAN
echo ========================================
echo.
echo Script se tu dong:
echo   - Kiem tra device
echo   - Build test APK (co retry neu fail)
echo   - Chay 74+ test cases
echo   - Tao bao cao HTML day du
echo   - Tu dong mo HTML report
echo.
echo Khong can tuong tac - chay hoan toan tu dong
echo.

REM Chay script tu dong
call CHAY_UI_TESTS_TU_DONG.bat

REM Exit
exit /b %ERRORLEVEL%



