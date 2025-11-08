# Extract performance metrics from HTML test reports
# This is more reliable than extracting from logs

$ErrorActionPreference = "SilentlyContinue"

Write-Host "Extracting performance metrics from HTML reports..." -ForegroundColor Cyan
Write-Host ""

# Find latest report directory or use current reports
$reportDirs = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" | Sort-Object LastWriteTime -Descending
if ($reportDirs.Count -gt 0) {
    $latestReport = $reportDirs[0].FullName
    $htmlReportPath = Join-Path $latestReport "reports\androidTests\connected\debug"
} else {
    $htmlReportPath = "app\build\reports\androidTests\connected\debug"
    $latestReport = "performance_results\current"
    if (-not (Test-Path $latestReport)) {
        New-Item -ItemType Directory -Path $latestReport -Force | Out-Null
    }
}

Write-Host "Searching in: $htmlReportPath" -ForegroundColor Yellow

if (-not (Test-Path $htmlReportPath)) {
    Write-Host "❌ HTML reports not found!" -ForegroundColor Red
    Write-Host "   Expected: $htmlReportPath" -ForegroundColor Yellow
    Write-Host "   Run tests first: .\run_all_performance_tests.bat" -ForegroundColor Yellow
    exit 1
}

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

# Read HTML files
$htmlFiles = Get-ChildItem -Path $htmlReportPath -Filter "*.html" -Recurse

Write-Host "Found $($htmlFiles.Count) HTML files" -ForegroundColor Green
Write-Host ""

foreach ($htmlFile in $htmlFiles) {
    $content = Get-Content $htmlFile -Raw -ErrorAction SilentlyContinue
    if ($null -eq $content) { continue }
    
    Write-Host "Processing: $($htmlFile.Name)" -ForegroundColor Gray
    
    # Extract test summary from index.html
    if ($htmlFile.Name -eq "index.html") {
        if ($content -match '<div class="counter">(\d+)</div>\s*<p>tests</p>') {
            $summary["_TotalTests"] = $matches[1]
        }
        if ($content -match '<div class="counter">(\d+)</div>\s*<p>failures</p>') {
            $summary["_TotalFailures"] = $matches[1]
        }
        if ($content -match '<div class="counter">([\d.]+)s</div>\s*<p>duration</p>') {
            $summary["_TotalDuration"] = $matches[1]
        }
    }
    
    # Extract from test class HTML files - look for error messages that contain metrics
    if ($htmlFile.Name -like "*ScreenRenderPerformanceTest*") {
        # Extract from error messages: "ScreenName render time (XXX ms) exceeds target"
        $renderMatches = [regex]::Matches($content, '(\w+Screen)\s+render\s+time\s+\((\d+)\s*ms\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
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
                Source = "HTML Report"
            }
            Write-Host "  ✓ $screen: $time ms" -ForegroundColor Green
        }
        
        # Also try to extract from test names and durations
        $testRows = [regex]::Matches($content, '<tr[^>]*>.*?<a[^>]*>([^<]+)</a>.*?<td[^>]*>([\d.]+)\s*(ms|s)</td>', [System.Text.RegularExpressions.RegexOptions]::Singleline)
        foreach ($testRow in $testRows) {
            $testName = $testRow.Groups[1].Value
            $duration = $testRow.Groups[2].Value
            $unit = $testRow.Groups[3].Value
            
            if ($testName -like "*render*" -or $testName -like "*Render*") {
                $screen = $testName -replace '.*?(\w+Screen).*', '$1'
                if ($screen -ne $testName) {
                    $timeMs = if ($unit -eq "s") { [math]::Round([double]$duration * 1000) } else { [int]$duration }
                    $summary["Render Performance"][$screen] = "$timeMs ms"
                    $metrics += [PSCustomObject]@{
                        Category = "Render Performance"
                        Screen = $screen
                        Metric = "Render Time"
                        Value = $timeMs
                        Unit = "ms"
                        Source = "HTML Duration"
                    }
                }
            }
        }
    }
    
    # Similar for other test classes
    if ($htmlFile.Name -like "*ScrollPerformanceTest*") {
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
                Source = "HTML Report"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Average Idle"
                Value = $avg
                Unit = "ms"
                Source = "HTML Report"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "$screen Scroll"
                Metric = "Max Idle"
                Value = $max
                Unit = "ms"
                Source = "HTML Report"
            }
            Write-Host "  ✓ $screen Scroll - Initial: $initial ms, Avg: $avg ms, Max: $max ms" -ForegroundColor Green
        }
    }
    
    if ($htmlFile.Name -like "*ViewModelPerformanceTest*") {
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
                Source = "HTML Report"
            }
            Write-Host "  ✓ $operation: $avg ms" -ForegroundColor Green
        }
    }
    
    if ($htmlFile.Name -like "*MemoryPerformanceTest*") {
        $memoryMatches = [regex]::Matches($content, '(Initial|Peak|After navigation)\s+memory\s+usage:\s+([\d.]+)\s*MB', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $memoryMatches) {
            $metricName = $match.Groups[1].Value
            $value = $match.Groups[2].Value
            $summary["Memory Performance"][$metricName] = "$value MB"
            $metrics += [PSCustomObject]@{
                Category = "Memory Performance"
                Metric = $metricName
                Value = $value
                Unit = "MB"
                Source = "HTML Report"
            }
            Write-Host "  ✓ $metricName: $value MB" -ForegroundColor Green
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

# Add test summary
if ($summary.ContainsKey("_TotalTests")) {
    $report += "Test Summary:`n"
    $report += "  Total Tests: $($summary['_TotalTests'])`n"
    $report += "  Failures: $($summary['_TotalFailures'])`n"
    $report += "  Duration: $($summary['_TotalDuration'])s`n"
    $report += "`n"
}

# Add metrics by category
$categories = @("Startup Performance", "Render Performance", "Scroll Performance", "ViewModel Performance", "Memory Performance")
foreach ($category in $categories) {
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

# If no metrics found
if ($metrics.Count -eq 0) {
    $report += "⚠️  No metrics found in HTML reports!`n"
    $report += "`n"
    $report += "Metrics are printed to console during test execution.`n"
    $report += "Check the console output when running tests.`n"
    $report += "`n"
    $report += "To see metrics:`n"
    $report += "  1. Run tests: .\run_all_performance_tests.bat`n"
    $report += "  2. Watch console output for println statements`n"
    $report += "  3. Check HTML reports for test durations`n"
}

# Write to file
$report | Out-File $outputFile -Encoding UTF8

# Export to CSV
if ($metrics.Count -gt 0) {
    $metrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8
    Write-Host "✅ Extracted $($metrics.Count) metrics" -ForegroundColor Green
    Write-Host "   Report: $outputFile" -ForegroundColor Cyan
    Write-Host "   CSV: $csvFile" -ForegroundColor Cyan
} else {
    Write-Host "⚠️  No metrics extracted from HTML" -ForegroundColor Yellow
    Write-Host "   Report file created: $outputFile" -ForegroundColor Cyan
    Write-Host "   Check console output when running tests for metrics" -ForegroundColor Yellow
}

Write-Host ""


