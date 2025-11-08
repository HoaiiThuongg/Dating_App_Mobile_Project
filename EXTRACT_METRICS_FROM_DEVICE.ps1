# Extract metrics from device (from PerformanceMetricsLogger files)
param(
    [string]$ReportPath = ""
)

if ($ReportPath -eq "" -or $ReportPath -eq $null) {
    $reports = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
    if ($reports -and $reports.Count -gt 0) {
        $ReportPath = $reports[0].FullName
    } else {
        $timestamp = Get-Date -Format "yyyyMMdd_HHmmss"
        $ReportPath = "performance_results\report_$timestamp"
        New-Item -ItemType Directory -Path $ReportPath -Force | Out-Null
    }
}

Write-Host "Extracting metrics from device..." -ForegroundColor Cyan
Write-Host ""

# Get package name - test context uses app package name, not test package
$packageName = "com.example.datingapp"
$metricsDir = "/data/data/$packageName/files/performance_metrics"

# Pull metrics files from device
Write-Host "Pulling metrics files from device..." -ForegroundColor Yellow
$deviceMetricsDir = "$ReportPath\device_metrics"
New-Item -ItemType Directory -Path $deviceMetricsDir -Force | Out-Null

# Try to pull all_metrics.json file
Write-Host "  Checking for metrics files..." -ForegroundColor Yellow
$metricsFile = "$metricsDir/all_metrics.json"

# Check if file exists
$fileExists = adb shell "run-as $packageName test -f $metricsFile && echo 'exists' || echo 'not exists'" 2>$null
if ($fileExists -match "exists") {
    Write-Host "  Found: all_metrics.json" -ForegroundColor Green
    adb shell "run-as $packageName cat $metricsFile" | Out-File -FilePath "$deviceMetricsDir\all_metrics.json" -Encoding UTF8 -ErrorAction SilentlyContinue
    
    # Verify file was pulled
    if (Test-Path "$deviceMetricsDir\all_metrics.json") {
        $fileSize = (Get-Item "$deviceMetricsDir\all_metrics.json").Length
        if ($fileSize -gt 0) {
            Write-Host "  Successfully pulled all_metrics.json ($fileSize bytes)" -ForegroundColor Green
        } else {
            Write-Host "  File is empty" -ForegroundColor Yellow
        }
    } else {
        Write-Host "  Failed to pull file" -ForegroundColor Red
    }
} else {
    Write-Host "  No metrics file found. Run tests first to generate metrics." -ForegroundColor Yellow
}

# Also try to list all files in metrics directory
Write-Host "  Listing all files in metrics directory..." -ForegroundColor Yellow
$files = adb shell "run-as $packageName ls -la $metricsDir 2>/dev/null" 2>$null
if ($files) {
    Write-Host $files -ForegroundColor Cyan
}

# Parse JSON files
$allMetrics = @()
$outputFile = "$ReportPath\METRICS_FROM_DEVICE.txt"
$csvFile = "$ReportPath\METRICS_FROM_DEVICE.csv"

Write-Host ""
Write-Host "Parsing metrics files..." -ForegroundColor Yellow

$jsonFiles = @()
$allMetricsFile = Get-Item -Path "$deviceMetricsDir\all_metrics.json" -ErrorAction SilentlyContinue
if ($allMetricsFile) {
    $jsonFiles += $allMetricsFile
} else {
    $jsonFiles += Get-ChildItem -Path $deviceMetricsDir -Filter "metrics_*.json" -ErrorAction SilentlyContinue
}

if ($jsonFiles.Count -eq 0) {
    Write-Host "No metrics files found on device. Metrics will be saved after running tests." -ForegroundColor Yellow
    Write-Host "Run tests first, then run this script again to extract metrics." -ForegroundColor Yellow
    Write-Host ""
    Write-Host "To verify metrics are being saved, check device logs:" -ForegroundColor Cyan
    Write-Host "  adb logcat | grep METRIC" -ForegroundColor White
    exit 0
}

foreach ($jsonFile in $jsonFiles) {
    Write-Host "  Processing: $($jsonFile.Name)" -ForegroundColor Yellow
    $lines = Get-Content $jsonFile -ErrorAction SilentlyContinue
    $lineCount = 0
    foreach ($line in $lines) {
        if ($line.Trim() -eq "") { continue }
        try {
            $json = $line | ConvertFrom-Json
            $allMetrics += [PSCustomObject]@{
                Category = $json.testCategory
                Test = $json.testName
                Metric = $json.metricName
                Value = [double]$json.value
                Unit = $json.unit
                Status = $json.status
                Target = $json.target
                Timestamp = $json.timestamp
                Date = $json.date
            }
            $lineCount++
        } catch {
            # Skip invalid JSON
            Write-Host "    Skipping invalid JSON line: $($_.Exception.Message)" -ForegroundColor Red
        }
    }
    Write-Host "    Parsed $lineCount metrics from $($jsonFile.Name)" -ForegroundColor Green
}

if ($allMetrics.Count -eq 0) {
    Write-Host "No metrics found in files." -ForegroundColor Yellow
    exit 0
}

# Generate report
$report = "========================================`r`n"
$report += "METRICS FROM DEVICE (PerformanceMetricsLogger)`r`n"
$report += "========================================`r`n`r`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`r`n"
$report += "Report Directory: $ReportPath`r`n`r`n"
$report += "Total Metrics: $($allMetrics.Count)`r`n`r`n"

# Group by category
$categories = $allMetrics | Group-Object -Property Category
foreach ($cat in $categories | Sort-Object Name) {
    $report += "========================================`r`n"
    $report += "$($cat.Name.ToUpper())`r`n"
    $report += "========================================`r`n`r`n"
    
    $catMetrics = $cat.Group | Sort-Object Test, Metric
    foreach ($metric in $catMetrics) {
        $report += "- $($metric.Test) - $($metric.Metric): $($metric.Value) $($metric.Unit)`r`n"
        $report += "  Status: $($metric.Status)"
        if ($metric.Target) {
            $report += ", Target: $($metric.Target)"
        }
        $report += "`r`n"
    }
    $report += "`r`n"
}

# Summary
$report += "========================================`r`n"
$report += "SUMMARY`r`n"
$report += "========================================`r`n`r`n"
$passedCount = ($allMetrics | Where-Object { $_.Status -eq 'PASSED' }).Count
$failedCount = ($allMetrics | Where-Object { $_.Status -eq 'FAILED' }).Count
$report += "Total Metrics: $($allMetrics.Count)`r`n"
$report += "  - PASSED: $passedCount`r`n"
$report += "  - FAILED: $failedCount`r`n`r`n"

# Save report
[System.IO.File]::WriteAllText($outputFile, $report, [System.Text.Encoding]::UTF8)

# Save CSV
$allMetrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8

Write-Host "✅ Extracted $($allMetrics.Count) metrics from device!" -ForegroundColor Green
Write-Host "   Text: $outputFile" -ForegroundColor Yellow
Write-Host "   CSV: $csvFile" -ForegroundColor Yellow
Write-Host ""
Write-Host "  - PASSED: $passedCount" -ForegroundColor Green
Write-Host "  - FAILED: $failedCount" -ForegroundColor Yellow

