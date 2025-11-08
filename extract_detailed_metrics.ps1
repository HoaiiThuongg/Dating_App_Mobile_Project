# Extract detailed performance metrics from test reports
# This script extracts metrics as described in HUONG_DAN_CHI_TIET_PERFORMANCE_TESTING.md

$ErrorActionPreference = "SilentlyContinue"

Write-Host "Extracting detailed performance metrics..." -ForegroundColor Cyan
Write-Host ""

# Find latest report directory
$reportDirs = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" | Sort-Object LastWriteTime -Descending
if ($reportDirs.Count -eq 0) {
    Write-Host "❌ No report directories found!" -ForegroundColor Red
    Write-Host "   Run: .\run_all_and_collect.bat" -ForegroundColor Yellow
    exit 1
}

$latestReport = $reportDirs[0].FullName
Write-Host "Using report: $latestReport" -ForegroundColor Green
Write-Host ""

# Output file
$outputFile = Join-Path $latestReport "performance_metrics_detailed.txt"
$csvFile = Join-Path $latestReport "performance_metrics_detailed.csv"

$metrics = @()
$summary = @{}

# Extract from HTML reports
$htmlReportPath = Join-Path $latestReport "reports\androidTests\connected\debug"
if (Test-Path $htmlReportPath) {
    $htmlFiles = Get-ChildItem -Path $htmlReportPath -Filter "*.html" -Recurse
    
    foreach ($htmlFile in $htmlFiles) {
        $content = Get-Content $htmlFile -Raw -ErrorAction SilentlyContinue
        
        if ($null -eq $content) { continue }
        
        # Extract test summary
        if ($content -match '<div class="counter">(\d+)</div>\s*<p>tests</p>') {
            $summary["TotalTests"] = $matches[1]
        }
        if ($content -match '<div class="counter">(\d+)</div>\s*<p>failures</p>') {
            $summary["TotalFailures"] = $matches[1]
        }
        if ($content -match '<div class="counter">([\d.]+)s</div>\s*<p>duration</p>') {
            $summary["TotalDuration"] = $matches[1]
        }
        
        # Extract individual test results
        if ($htmlFile.Name -like "*ScreenRenderPerformanceTest*") {
            # Extract render times from test details
            if ($content -match 'measureSplashScreenRenderTime[^>]*>([^<]+)</a>') {
                # Try to find duration or error message
                if ($content -match 'SplashScreen render time: (\d+)ms') {
                    $metrics += [PSCustomObject]@{
                        Category = "Render Performance"
                        Screen = "SplashScreen"
                        Metric = "Render Time"
                        Value = $matches[1]
                        Unit = "ms"
                        Status = "Measured"
                    }
                }
            }
            
            # Similar for other screens
            $screens = @("HomeScreen", "ChatScreen", "MessageScreen", "ProfileScreen", "MyProfileScreen")
            foreach ($screen in $screens) {
                if ($content -match "$screen render time: (\d+)ms") {
                    $metrics += [PSCustomObject]@{
                        Category = "Render Performance"
                        Screen = $screen
                        Metric = "Render Time"
                        Value = $matches[1]
                        Unit = "ms"
                        Status = "Measured"
                    }
                }
            }
        }
        
        if ($htmlFile.Name -like "*ScrollPerformanceTest*") {
            # Extract scroll metrics
            if ($content -match '(\w+Screen) scrollable.*Initial: (\d+)ms.*Average idle: ([\d.]+)ms.*Max: (\d+)ms') {
                $screen = $matches[1]
                $metrics += [PSCustomObject]@{
                    Category = "Scroll Performance"
                    Screen = "$screen Scroll"
                    Metric = "Initial Composition"
                    Value = $matches[2]
                    Unit = "ms"
                    Status = "Measured"
                }
                $metrics += [PSCustomObject]@{
                    Category = "Scroll Performance"
                    Screen = "$screen Scroll"
                    Metric = "Average Idle"
                    Value = $matches[3]
                    Unit = "ms"
                    Status = "Measured"
                }
                $metrics += [PSCustomObject]@{
                    Category = "Scroll Performance"
                    Screen = "$screen Scroll"
                    Metric = "Max Idle"
                    Value = $matches[4]
                    Unit = "ms"
                    Status = "Measured"
                }
            }
        }
        
        if ($htmlFile.Name -like "*ViewModelPerformanceTest*") {
            # Extract ViewModel metrics
            if ($content -match '(\w+) - Avg: ([\d.]+)ms') {
                $operation = $matches[1]
                $metrics += [PSCustomObject]@{
                    Category = "ViewModel Performance"
                    Operation = $operation
                    Metric = "Average Time"
                    Value = $matches[2]
                    Unit = "ms"
                    Status = "Measured"
                }
            }
            if ($content -match '(\w+) - Avg: ([\d.]+)ms.*P95: ([\d.]+)ms') {
                $operation = $matches[1]
                $metrics += [PSCustomObject]@{
                    Category = "ViewModel Performance"
                    Operation = $operation
                    Metric = "P95 Time"
                    Value = $matches[3]
                    Unit = "ms"
                    Status = "Measured"
                }
            }
        }
        
        if ($htmlFile.Name -like "*MemoryPerformanceTest*") {
            # Extract memory metrics
            if ($content -match '(Initial|Peak|After navigation) memory usage: ([\d.]+)MB') {
                $metricName = $matches[1]
                $metrics += [PSCustomObject]@{
                    Category = "Memory Performance"
                    Metric = $metricName
                    Value = $matches[2]
                    Unit = "MB"
                    Status = "Measured"
                }
            }
        }
    }
}

# Extract from test output logs
$testOutputPath = "app\build\outputs\androidTest-results\connected"
if (Test-Path $testOutputPath) {
    $logFiles = Get-ChildItem -Path $testOutputPath -Filter "*.txt" -Recurse | Sort-Object LastWriteTime -Descending | Select-Object -First 10
    
    foreach ($logFile in $logFiles) {
        $content = Get-Content $logFile -Raw -ErrorAction SilentlyContinue
        if ($null -eq $content) { continue }
        
        # Extract render times from console output
        if ($content -match '(\w+Screen) render time: (\d+)ms') {
            $screen = $matches[1]
            $time = $matches[2]
            $existing = $metrics | Where-Object { $_.Screen -eq $screen -and $_.Metric -eq "Render Time" }
            if (-not $existing) {
                $metrics += [PSCustomObject]@{
                    Category = "Render Performance"
                    Screen = $screen
                    Metric = "Render Time"
                    Value = $time
                    Unit = "ms"
                    Status = "From Console"
                }
            }
        }
        
        # Extract scroll metrics
        if ($content -match '(\w+Screen) scrollable.*Initial: (\d+)ms.*Average idle: ([\d.]+)ms.*Max: (\d+)ms') {
            $screen = $matches[1]
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Initial Composition"
                Value = $matches[2]
                Unit = "ms"
                Status = "From Console"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Average Idle"
                Value = $matches[3]
                Unit = "ms"
                Status = "From Console"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Max Idle"
                Value = $matches[4]
                Unit = "ms"
                Status = "From Console"
            }
        }
        
        # Extract ViewModel metrics
        if ($content -match '(\w+) - Avg: ([\d.]+)ms') {
            $operation = $matches[1]
            $existing = $metrics | Where-Object { $_.Operation -eq $operation -and $_.Metric -eq "Average Time" }
            if (-not $existing) {
                $metrics += [PSCustomObject]@{
                    Category = "ViewModel Performance"
                    Operation = $operation
                    Metric = "Average Time"
                    Value = $matches[2]
                    Unit = "ms"
                    Status = "From Console"
                }
            }
        }
        
        # Extract memory metrics
        if ($content -match '(Initial|Peak|After navigation) memory usage: ([\d.]+)MB') {
            $metricName = $matches[1]
            $existing = $metrics | Where-Object { $_.Metric -eq $metricName }
            if (-not $existing) {
                $metrics += [PSCustomObject]@{
                    Category = "Memory Performance"
                    Metric = $metricName
                    Value = $matches[2]
                    Unit = "MB"
                    Status = "From Console"
                }
            }
        }
    }
}

# Extract from macrobenchmark JSON
$benchmarkPath = Join-Path $latestReport "benchmarks"
if (Test-Path $benchmarkPath) {
    $jsonFiles = Get-ChildItem -Path $benchmarkPath -Filter "*.json" -Recurse
    
    foreach ($jsonFile in $jsonFiles) {
        try {
            $json = Get-Content $jsonFile -Raw | ConvertFrom-Json
            
            if ($json.metrics) {
                foreach ($metric in $json.metrics) {
                    if ($metric.name -like "*startup*" -or $metric.name -like "*timeTo*") {
                        if ($metric.data) {
                            $values = $metric.data | ForEach-Object { $_.value }
                            $avg = ($values | Measure-Object -Average).Average
                            
                            $startupType = "Unknown"
                            if ($json.benchmarkName -like "*Cold*") { $startupType = "Cold" }
                            elseif ($json.benchmarkName -like "*Warm*") { $startupType = "Warm" }
                            elseif ($json.benchmarkName -like "*Hot*") { $startupType = "Hot" }
                            
                            $metrics += [PSCustomObject]@{
                                Category = "Startup Performance"
                                Metric = "$startupType Start"
                                Value = [math]::Round($avg, 2)
                                Unit = $metric.unit
                                Status = "From Macrobenchmark"
                            }
                        }
                    }
                }
            }
        } catch {
            # Skip invalid JSON
        }
    }
}

# Generate detailed report
$report = @"
========================================
PERFORMANCE METRICS SUMMARY
========================================
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")
Report Location: $latestReport

"@

# Add summary
if ($summary.Count -gt 0) {
    $report += "Test Summary:`n"
    $report += "  Total Tests: $($summary['TotalTests'] ?? 'N/A')`n"
    $report += "  Failures: $($summary['TotalFailures'] ?? 'N/A')`n"
    $report += "  Duration: $($summary['TotalDuration'] ?? 'N/A')s`n"
    $report += "`n"
}

# Group by category
$categories = $metrics | Group-Object Category

foreach ($category in $categories) {
    $report += "========================================`n"
    $report += "$($category.Name)`n"
    $report += "========================================`n"
    $report += "`n"
    
    foreach ($metric in $category.Group) {
        if ($metric.Screen) {
            $report += "  $($metric.Screen): $($metric.Value) $($metric.Unit)`n"
        } elseif ($metric.Operation) {
            $report += "  $($metric.Operation): $($metric.Value) $($metric.Unit)`n"
        } else {
            $report += "  $($metric.Metric): $($metric.Value) $($metric.Unit)`n"
        }
    }
    $report += "`n"
}

# Write to file
$report | Out-File $outputFile -Encoding UTF8

# Export to CSV
if ($metrics.Count -gt 0) {
    $metrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8
    Write-Host "✅ Extracted $($metrics.Count) metrics" -ForegroundColor Green
    Write-Host "   Detailed report: $outputFile" -ForegroundColor Cyan
    Write-Host "   CSV file: $csvFile" -ForegroundColor Cyan
} else {
    Write-Host "⚠️  No metrics extracted" -ForegroundColor Yellow
    Write-Host "   Make sure tests have been run" -ForegroundColor Yellow
}

Write-Host ""


