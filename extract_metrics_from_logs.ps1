# Extract performance metrics directly from test logs
# This extracts metrics from console output (println statements)

$ErrorActionPreference = "SilentlyContinue"

Write-Host "Extracting performance metrics from test logs..." -ForegroundColor Cyan
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

# Output files
$outputFile = Join-Path $latestReport "performance_metrics_detailed.txt"
$csvFile = Join-Path $latestReport "performance_metrics_detailed.csv"

$metrics = @()
$summary = @{
    "Startup Performance" = @{}
    "Render Performance" = @{}
    "Scroll Performance" = @{}
    "ViewModel Performance" = @{}
    "Memory Performance" = @{}
}

# Extract from test output logs
$testOutputPath = "app\build\outputs\androidTest-results\connected"
if (Test-Path $testOutputPath) {
    Write-Host "Searching in: $testOutputPath" -ForegroundColor Yellow
    
    $logFiles = Get-ChildItem -Path $testOutputPath -Filter "*.txt" -Recurse | Sort-Object LastWriteTime -Descending | Select-Object -First 10
    
    Write-Host "Found $($logFiles.Count) log files" -ForegroundColor Yellow
    Write-Host ""
    
    foreach ($logFile in $logFiles) {
        Write-Host "Processing: $($logFile.Name)" -ForegroundColor Gray
        $content = Get-Content $logFile -Raw -ErrorAction SilentlyContinue
        if ($null -eq $content) { continue }
        
        # Extract render times - Pattern: "ScreenName render time: XXXms"
        $renderMatches = [regex]::Matches($content, '(\w+Screen)\s+render\s+time:\s+(\d+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $renderMatches) {
            $screen = $match.Groups[1].Value
            $time = $match.Groups[2].Value
            $summary["Render Performance"][$screen] = "$time ms"
            $metrics += [PSCustomObject]@{
                Category = "Render Performance"
                Screen = $screen
                Metric = "Render Time"
                Value = $time
                Unit = "ms"
                Source = "Console Output"
            }
            Write-Host "  Found: $screen = $time ms" -ForegroundColor Green
        }
        
        # Extract scroll metrics - Pattern: "Screen scrollable container composition - Initial: Xms, Average idle: Yms, Max: Zms"
        $scrollMatches = [regex]::Matches($content, '(\w+Screen)\s+scrollable.*?Initial:\s+(\d+)\s*ms.*?Average\s+idle:\s+([\d.]+)\s*ms.*?Max:\s+(\d+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::Singleline -and [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $scrollMatches) {
            $screen = $match.Groups[1].Value
            $initial = $match.Groups[2].Value
            $avg = $match.Groups[3].Value
            $max = $match.Groups[4].Value
            
            $summary["Scroll Performance"]["$screen Initial"] = "$initial ms"
            $summary["Scroll Performance"]["$screen Average"] = "$avg ms"
            $summary["Scroll Performance"]["$screen Max"] = "$max ms"
            
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Initial Composition"
                Value = $initial
                Unit = "ms"
                Source = "Console Output"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Average Idle"
                Value = $avg
                Unit = "ms"
                Source = "Console Output"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Max Idle"
                Value = $max
                Unit = "ms"
                Source = "Console Output"
            }
            Write-Host "  Found: $screen Scroll - Initial: $initial ms, Avg: $avg ms, Max: $max ms" -ForegroundColor Green
        }
        
        # Extract ViewModel metrics - Pattern: "Operation - Avg: Xms"
        $viewModelMatches = [regex]::Matches($content, '(\w+)\s+-\s+Avg:\s+([\d.]+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $viewModelMatches) {
            $operation = $match.Groups[1].Value
            $avg = $match.Groups[2].Value
            $summary["ViewModel Performance"][$operation] = "$avg ms"
            $metrics += [PSCustomObject]@{
                Category = "ViewModel Performance"
                Operation = $operation
                Metric = "Average Time"
                Value = $avg
                Unit = "ms"
                Source = "Console Output"
            }
            Write-Host "  Found: $operation = $avg ms" -ForegroundColor Green
        }
        
        # Extract ViewModel P95 - Pattern: "Operation - Avg: Xms, P95: Yms"
        $p95Matches = [regex]::Matches($content, '(\w+)\s+-\s+Avg:\s+[\d.]+\s*ms.*?P95:\s+([\d.]+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::Singleline -and [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $p95Matches) {
            $operation = $match.Groups[1].Value
            $p95 = $match.Groups[2].Value
            $summary["ViewModel Performance"]["$operation P95"] = "$p95 ms"
            $metrics += [PSCustomObject]@{
                Category = "ViewModel Performance"
                Operation = $operation
                Metric = "P95 Time"
                Value = $p95
                Unit = "ms"
                Source = "Console Output"
            }
            Write-Host "  Found: $operation P95 = $p95 ms" -ForegroundColor Green
        }
        
        # Extract memory metrics - Pattern: "memory usage: XMB" or "Initial memory: XMB"
        $memoryMatches = [regex]::Matches($content, '(Initial|Peak|After navigation|memory)\s+memory\s+usage:\s+([\d.]+)\s*MB', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $memoryMatches) {
            $metricName = $match.Groups[1].Value
            if ($metricName -eq "memory") { $metricName = "Current" }
            $value = $match.Groups[2].Value
            $summary["Memory Performance"][$metricName] = "$value MB"
            $metrics += [PSCustomObject]@{
                Category = "Memory Performance"
                Metric = $metricName
                Value = $value
                Unit = "MB"
                Source = "Console Output"
            }
            Write-Host "  Found: $metricName memory = $value MB" -ForegroundColor Green
        }
        
        # Extract memory increase - Pattern: "Memory after navigation: XMB (increase: YMB)"
        $memoryIncreaseMatches = [regex]::Matches($content, 'Memory\s+after\s+navigation:\s+[\d.]+\s*MB\s*\(increase:\s+([\d.]+)\s*MB\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $memoryIncreaseMatches) {
            $increase = $match.Groups[1].Value
            $summary["Memory Performance"]["Memory Growth"] = "$increase MB"
            $metrics += [PSCustomObject]@{
                Category = "Memory Performance"
                Metric = "Memory Growth"
                Value = $increase
                Unit = "MB"
                Source = "Console Output"
            }
            Write-Host "  Found: Memory Growth = $increase MB" -ForegroundColor Green
        }
    }
} else {
    Write-Host "⚠️  Test output directory not found: $testOutputPath" -ForegroundColor Yellow
}

# Extract from macrobenchmark JSON
$benchmarkPath = "app\build\outputs\connected_android_test_additional_output"
if (Test-Path $benchmarkPath) {
    Write-Host ""
    Write-Host "Searching macrobenchmark results..." -ForegroundColor Yellow
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
                            if ($json.benchmarkName -like "*Cold*" -or $json.benchmarkName -like "*cold*") { $startupType = "Cold" }
                            elseif ($json.benchmarkName -like "*Warm*" -or $json.benchmarkName -like "*warm*") { $startupType = "Warm" }
                            elseif ($json.benchmarkName -like "*Hot*" -or $json.benchmarkName -like "*hot*") { $startupType = "Hot" }
                            
                            $summary["Startup Performance"]["$startupType Start"] = "$([math]::Round($avg, 2)) $($metric.unit)"
                            $metrics += [PSCustomObject]@{
                                Category = "Startup Performance"
                                Metric = "$startupType Start"
                                Value = [math]::Round($avg, 2)
                                Unit = $metric.unit
                                Source = "Macrobenchmark"
                            }
                            Write-Host "  Found: $startupType Start = $([math]::Round($avg, 2)) $($metric.unit)" -ForegroundColor Green
                        }
                    }
                }
            }
        } catch {
            # Skip invalid JSON
        }
    }
}

Write-Host ""

# Generate detailed report
$report = @"
========================================
PERFORMANCE METRICS SUMMARY
========================================
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")
Report Location: $latestReport

"@

# Add metrics by category
foreach ($category in $summary.Keys) {
    if ($summary[$category].Count -gt 0) {
        $report += "========================================`n"
        $report += "$category`n"
        $report += "========================================`n"
        $report += "`n"
        
        foreach ($key in $summary[$category].Keys | Sort-Object) {
            $report += "  $key`: $($summary[$category][$key])`n"
        }
        $report += "`n"
    }
}

# If no metrics found, add instructions
if ($metrics.Count -eq 0) {
    $report += "⚠️  No metrics found in logs!`n"
    $report += "`n"
    $report += "Possible reasons:`n"
    $report += "  1. Tests haven't been run yet`n"
    $report += "  2. Console output not captured in logs`n"
    $report += "  3. Tests failed before printing metrics`n"
    $report += "`n"
    $report += "Try:`n"
    $report += "  1. Run tests: .\run_all_performance_tests.bat`n"
    $report += "  2. Check console output manually`n"
    $report += "  3. Check HTML reports for test results`n"
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
    Write-Host "⚠️  No metrics extracted from logs" -ForegroundColor Yellow
    Write-Host "   Report file created: $outputFile" -ForegroundColor Cyan
    Write-Host "   Check the file for troubleshooting tips" -ForegroundColor Yellow
}

Write-Host ""


