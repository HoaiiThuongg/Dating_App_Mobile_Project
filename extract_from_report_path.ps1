# Extract metrics from specific report path with subdirectories
param(
    [string]$ReportPath = "performance_results\report_202501Sa_182604"
)

$ErrorActionPreference = "Continue"

Write-Host "========================================" -ForegroundColor Cyan
Write-Host "Extract Metrics from Report" -ForegroundColor Cyan
Write-Host "========================================" -ForegroundColor Cyan
Write-Host ""

# Find HTML reports in subdirectories
$htmlPaths = @(
    "$ReportPath\reports\render\androidTests\connected\debug",
    "$ReportPath\reports\scroll\androidTests\connected\debug",
    "$ReportPath\reports\viewmodel\androidTests\connected\debug",
    "$ReportPath\reports\memory\androidTests\connected\debug",
    "$ReportPath\reports\androidTests\connected\debug"
)

$allHtmlFiles = @()
foreach ($htmlPath in $htmlPaths) {
    if (Test-Path $htmlPath) {
        $files = Get-ChildItem -Path $htmlPath -Filter "*.html" -Recurse -ErrorAction SilentlyContinue
        $allHtmlFiles += $files
        Write-Host "Found $($files.Count) HTML files in: $htmlPath" -ForegroundColor Green
    }
}

if ($allHtmlFiles.Count -eq 0) {
    Write-Host "❌ No HTML files found!" -ForegroundColor Red
    exit 1
}

Write-Host ""
Write-Host "Total HTML files: $($allHtmlFiles.Count)" -ForegroundColor Yellow
Write-Host ""

# Output files
$outputFile = Join-Path $ReportPath "performance_metrics_detailed.txt"
$csvFile = Join-Path $ReportPath "performance_metrics_detailed.csv"

$metrics = @()
$summary = @{
    "Render Performance" = @{}
    "Scroll Performance" = @{}
    "ViewModel Performance" = @{}
    "Memory Performance" = @{}
}

# Process HTML files
foreach ($htmlFile in $allHtmlFiles) {
    $content = Get-Content $htmlFile -Raw -ErrorAction SilentlyContinue
    if ($null -eq $content) { continue }
    
    # Extract from ScreenRenderPerformanceTest
    if ($htmlFile.Name -like "*ScreenRenderPerformanceTest*") {
        $renderMatches = [regex]::Matches($content, '(\w+Screen)\s+render\s+time\s+\((\d+)\s*ms\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $renderMatches) {
            $screen = $match.Groups[1].Value
            $time = $match.Groups[2].Value
            if (-not $summary["Render Performance"].ContainsKey($screen)) {
                $summary["Render Performance"][$screen] = "$time ms"
                $metrics += [PSCustomObject]@{
                    Category = "Render Performance"
                    Screen = $screen
                    Metric = "Render Time"
                    Value = $time
                    Unit = "ms"
                    Source = "HTML Report"
                }
                Write-Host "  ✓ ${screen}: ${time} ms" -ForegroundColor Green
            }
        }
    }
    
    # Extract from ScrollPerformanceTest
    if ($htmlFile.Name -like "*ScrollPerformanceTest*") {
        $scrollMatches = [regex]::Matches($content, '(\w+Screen)\s+scrollable.*?Initial:\s+(\d+)\s*ms.*?Average\s+idle:\s+([\d.]+)\s*ms.*?Max:\s+(\d+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::Singleline -bor [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $scrollMatches) {
            $screen = $match.Groups[1].Value
            $initial = $match.Groups[2].Value
            $avg = $match.Groups[3].Value
            $max = $match.Groups[4].Value
            
            $summary["Scroll Performance"]["${screen} Initial"] = "$initial ms"
            $summary["Scroll Performance"]["${screen} Average"] = "$avg ms"
            $summary["Scroll Performance"]["${screen} Max"] = "$max ms"
            
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "${screen} Scroll"
                Metric = "Initial Composition"
                Value = $initial
                Unit = "ms"
                Source = "HTML Report"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "${screen} Scroll"
                Metric = "Average Idle"
                Value = $avg
                Unit = "ms"
                Source = "HTML Report"
            }
            $metrics += [PSCustomObject]@{
                Category = "Scroll Performance"
                Screen = "${screen} Scroll"
                Metric = "Max Idle"
                Value = $max
                Unit = "ms"
                Source = "HTML Report"
            }
            Write-Host "  ✓ ${screen} Scroll - Initial: ${initial} ms, Avg: ${avg} ms, Max: ${max} ms" -ForegroundColor Green
        }
    }
    
    # Extract from ViewModelPerformanceTest
    if ($htmlFile.Name -like "*ViewModelPerformanceTest*") {
        $viewModelMatches = [regex]::Matches($content, '(\w+)\s+-\s+Avg:\s+([\d.]+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $viewModelMatches) {
            $operation = $match.Groups[1].Value
            $avg = $match.Groups[2].Value
            if (-not $summary["ViewModel Performance"].ContainsKey($operation)) {
                $summary["ViewModel Performance"][$operation] = "$avg ms"
                $metrics += [PSCustomObject]@{
                    Category = "ViewModel Performance"
                    Operation = $operation
                    Metric = "Average Time"
                    Value = $avg
                    Unit = "ms"
                    Source = "HTML Report"
                }
                Write-Host "  ✓ ${operation}: ${avg} ms" -ForegroundColor Green
            }
        }
    }
    
    # Extract from MemoryPerformanceTest
    if ($htmlFile.Name -like "*MemoryPerformanceTest*") {
        $memoryMatches = [regex]::Matches($content, '(Initial|Peak|After navigation)\s+memory\s+usage:\s+([\d.]+)\s*MB', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $memoryMatches) {
            $metricName = $match.Groups[1].Value
            $value = $match.Groups[2].Value
            if (-not $summary["Memory Performance"].ContainsKey($metricName)) {
                $summary["Memory Performance"][$metricName] = "$value MB"
                $metrics += [PSCustomObject]@{
                    Category = "Memory Performance"
                    Metric = $metricName
                    Value = $value
                    Unit = "MB"
                    Source = "HTML Report"
                }
                Write-Host "  ✓ ${metricName}: ${value} MB" -ForegroundColor Green
            }
        }
    }
}

Write-Host ""

# Generate report
$report = @"
========================================
PERFORMANCE METRICS SUMMARY
========================================
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")
Report Location: $ReportPath

"@

# Add metrics by category
$categories = @("Render Performance", "Scroll Performance", "ViewModel Performance", "Memory Performance")
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
    Write-Host "   Metrics are in console output when running tests" -ForegroundColor Yellow
}

Write-Host ""

