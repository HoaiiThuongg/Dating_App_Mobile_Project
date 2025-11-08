# Script to generate comprehensive code coverage report
param(
    [switch]$Clean = $false,
    [switch]$RunTests = $true,
    [switch]$GenerateReport = $true
)

Write-Host "📊 Code Coverage Report Generator" -ForegroundColor Cyan
Write-Host "=================================" -ForegroundColor Cyan
Write-Host ""

if ($Clean) {
    Write-Host "🧹 Cleaning previous build..." -ForegroundColor Yellow
    ./gradlew clean
    if ($LASTEXITCODE -ne 0) {
        Write-Host "❌ Clean failed!" -ForegroundColor Red
        exit 1
    }
}

if ($RunTests) {
    Write-Host "🔨 Building project..." -ForegroundColor Yellow
    ./gradlew assembleDebugAndroidTest
    if ($LASTEXITCODE -ne 0) {
        Write-Host "❌ Build failed!" -ForegroundColor Red
        exit 1
    }

    Write-Host "`n🧪 Running all UI tests..." -ForegroundColor Yellow
    
    # Run all test classes
    $testClasses = @(
        "com.example.atry.ui.screens.auth.SplashScreenTest",
        "com.example.atry.ui.screens.auth.login.LoginScreenMockTest",
        "com.example.atry.ui.screens.auth.register.RegisterEntryScreenTest",
        "com.example.atry.ui.screens.functionalScreens.home.HomeScreenTest",
        "com.example.atry.ui.screens.functionalScreens.ProfileScreenTest"
    )
    
    $failedTests = @()
    foreach ($testClass in $testClasses) {
        Write-Host "  Running: $testClass" -ForegroundColor Cyan
        ./gradlew connectedAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=$testClass
        if ($LASTEXITCODE -ne 0) {
            $failedTests += $testClass
            Write-Host "    ⚠️  Some tests failed" -ForegroundColor Yellow
        } else {
            Write-Host "    ✅ All tests passed" -ForegroundColor Green
        }
    }
    
    if ($failedTests.Count -gt 0) {
        Write-Host "`n⚠️  Some test classes had failures:" -ForegroundColor Yellow
        foreach ($test in $failedTests) {
            Write-Host "  - $test" -ForegroundColor Yellow
        }
    }
}

if ($GenerateReport) {
    Write-Host "`n📈 Generating coverage report..." -ForegroundColor Yellow
    
    # Generate JaCoCo report for unit tests
    Write-Host "  Generating unit test coverage..." -ForegroundColor Cyan
    ./gradlew jacocoTestReport
    
    # Generate Android test coverage
    Write-Host "  Generating Android test coverage..." -ForegroundColor Cyan
    ./gradlew createDebugCoverageReport
    
    # Check if reports were generated
    $unitTestReport = "app/build/reports/jacoco/jacocoTestReport/html/index.html"
    $androidTestReport = "app/build/outputs/code_coverage/debugAndroidTest/connected/index.html"
    
    Write-Host "`n📄 Coverage Reports:" -ForegroundColor Green
    if (Test-Path $unitTestReport) {
        Write-Host "  ✅ Unit Test Coverage: $unitTestReport" -ForegroundColor Green
    } else {
        Write-Host "  ⚠️  Unit Test Coverage report not found" -ForegroundColor Yellow
    }
    
    if (Test-Path $androidTestReport) {
        Write-Host "  ✅ Android Test Coverage: $androidTestReport" -ForegroundColor Green
    } else {
        Write-Host "  ⚠️  Android Test Coverage report not found" -ForegroundColor Yellow
    }
    
    # Generate summary
    Write-Host "`n📋 Generating test summary..." -ForegroundColor Yellow
    $summary = @"
# Test Coverage Summary
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")

## Test Cases from Excel
- Total Test Cases: 74
- Categories: 17
- Test Files Generated: 17

## Test Execution Status
- Unit Tests: Run with jacocoTestReport
- UI Tests: Run with connectedAndroidTest

## Coverage Reports
- Unit Test Coverage: $unitTestReport
- Android Test Coverage: $androidTestReport

## Test Files
"@
    
    $testFiles = Get-ChildItem -Path "app/src/androidTest" -Recurse -Filter "*Test.kt" | Select-Object -ExpandProperty FullName
    foreach ($file in $testFiles) {
        $relativePath = $file.Replace((Get-Location).Path + "\", "")
        $summary += "`n- $relativePath"
    }
    
    $summary | Out-File -FilePath "COVERAGE_SUMMARY.md" -Encoding UTF8
    Write-Host "  ✅ Summary saved to COVERAGE_SUMMARY.md" -ForegroundColor Green
}

Write-Host "`n✅ Coverage report generation completed!" -ForegroundColor Green
Write-Host "`n💡 To view reports, open the HTML files in your browser" -ForegroundColor Yellow




