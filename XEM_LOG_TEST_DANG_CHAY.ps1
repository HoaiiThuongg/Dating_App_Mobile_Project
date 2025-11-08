# Script to view real-time test progress
param(
    [int]$RefreshInterval = 5
)

Write-Host "========================================" -ForegroundColor Cyan
Write-Host "REAL-TIME UI TESTS MONITOR" -ForegroundColor Green
Write-Host "========================================" -ForegroundColor Cyan
Write-Host ""
Write-Host "Refreshing every $RefreshInterval seconds..." -ForegroundColor Yellow
Write-Host "Press Ctrl+C to stop" -ForegroundColor Yellow
Write-Host ""

while ($true) {
    Clear-Host
    Write-Host "========================================" -ForegroundColor Cyan
    Write-Host "REAL-TIME UI TESTS MONITOR" -ForegroundColor Green
    Write-Host "========================================" -ForegroundColor Cyan
    Write-Host "Last updated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')" -ForegroundColor Gray
    Write-Host ""
    
    # Find latest report directory
    $reportDirs = Get-ChildItem -Path "ui_test_results" -Directory -Filter "report_*" -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
    if ($reportDirs -and $reportDirs.Count -gt 0) {
        $latestReport = $reportDirs[0]
        Write-Host "[REPORT DIR] $($latestReport.Name)" -ForegroundColor Cyan
        Write-Host "             Full path: $($latestReport.FullName)" -ForegroundColor Gray
        Write-Host ""
        
        # Count test logs
        $logFiles = Get-ChildItem -Path $latestReport.FullName -Filter "*.log" -ErrorAction SilentlyContinue
        if ($logFiles) {
            Write-Host "[TEST LOGS] Total: $($logFiles.Count) log files" -ForegroundColor Yellow
            $latestLog = $logFiles | Sort-Object LastWriteTime -Descending | Select-Object -First 1
            Write-Host "            Latest: $($latestLog.Name)" -ForegroundColor White
            Write-Host "            Updated: $($latestLog.LastWriteTime)" -ForegroundColor Gray
            Write-Host "            Size: $([math]::Round($latestLog.Length / 1KB, 2)) KB" -ForegroundColor Gray
            
            # Show last few lines of latest log
            if ($latestLog.Length -gt 0) {
                Write-Host ""
                Write-Host "            Last lines from latest log:" -ForegroundColor Cyan
                try {
                    $lastLines = Get-Content -Path $latestLog.FullName -Tail 3 -ErrorAction SilentlyContinue
                    foreach ($line in $lastLines) {
                        Write-Host "            $line" -ForegroundColor DarkGray
                    }
                } catch {
                    Write-Host "            (Could not read log file)" -ForegroundColor Red
                }
            }
        } else {
            Write-Host "[TEST LOGS] No log files yet" -ForegroundColor Yellow
        }
        Write-Host ""
        
        # Check reports
        $reportHtml = Join-Path $latestReport.FullName "reports\index.html"
        if (Test-Path $reportHtml) {
            Write-Host "[REPORTS] HTML report available!" -ForegroundColor Green
            Write-Host "          Location: $reportHtml" -ForegroundColor White
            
            # Try to parse test results from HTML
            try {
                $htmlContent = Get-Content -Path $reportHtml -Raw -ErrorAction SilentlyContinue
                if ($htmlContent -match 'Tests:\s*(\d+)') {
                    Write-Host "          Tests: $($matches[1])" -ForegroundColor Cyan
                }
                if ($htmlContent -match 'Failures:\s*(\d+)') {
                    Write-Host "          Failures: $($matches[1])" -ForegroundColor $(if ([int]$matches[1] -eq 0) { "Green" } else { "Red" })
                }
            } catch {
                # Ignore parsing errors
            }
        } else {
            Write-Host "[REPORTS] HTML report not yet created" -ForegroundColor Yellow
        }
        Write-Host ""
        
        # Check coverage
        $coverageHtml = Join-Path $latestReport.FullName "coverage\index.html"
        if (Test-Path $coverageHtml) {
            Write-Host "[COVERAGE] HTML report available!" -ForegroundColor Green
            Write-Host "           Location: $coverageHtml" -ForegroundColor White
        } else {
            Write-Host "[COVERAGE] HTML report not yet created" -ForegroundColor Yellow
        }
        Write-Host ""
        
        # Check summary
        $summaryFile = Join-Path $latestReport.FullName "TEST_SUMMARY.txt"
        if (Test-Path $summaryFile) {
            Write-Host "[SUMMARY] Summary file available!" -ForegroundColor Green
            Write-Host "          Location: $summaryFile" -ForegroundColor White
        }
        Write-Host ""
    } else {
        Write-Host "[STATUS] No report directory found yet" -ForegroundColor Yellow
        Write-Host "         Script may not have started or build is in progress" -ForegroundColor Gray
        Write-Host ""
    }
    
    # Check if Gradle/Java is running
    $javaProcesses = Get-Process -Name "java" -ErrorAction SilentlyContinue
    if ($javaProcesses) {
        Write-Host "[PROCESS] Java/Gradle process RUNNING" -ForegroundColor Green
        Write-Host "          Process count: $($javaProcesses.Count)" -ForegroundColor Cyan
        Write-Host "          Tests are in progress..." -ForegroundColor Yellow
    } else {
        Write-Host "[PROCESS] No Java/Gradle process running" -ForegroundColor Gray
        Write-Host "          Tests may have completed" -ForegroundColor Gray
    }
    
    Write-Host ""
    Write-Host "========================================" -ForegroundColor Cyan
    Write-Host "Refreshing in $RefreshInterval seconds..." -ForegroundColor Yellow
    Write-Host "Press Ctrl+C to stop" -ForegroundColor Yellow
    Write-Host "========================================" -ForegroundColor Cyan
    
    Start-Sleep -Seconds $RefreshInterval
}

