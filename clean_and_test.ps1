# Script để clean build và chạy test coverage
Write-Host "Cleaning project..." -ForegroundColor Yellow
.\gradlew clean

Write-Host "Building project..." -ForegroundColor Yellow
.\gradlew build

Write-Host "Running unit tests..." -ForegroundColor Yellow
.\gradlew testDebugUnitTest

Write-Host "Generating coverage report..." -ForegroundColor Yellow
.\gradlew jacocoTestReport

Write-Host "Coverage report generated at: app\build\reports\jacoco\jacocoTestReport\html\index.html" -ForegroundColor Green
Write-Host "Opening report..." -ForegroundColor Green
Start-Process "app\build\reports\jacoco\jacocoTestReport\html\index.html"

