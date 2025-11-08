# Tao bao cao tong hop cuoi cung voi TAT CA so lieu (PASSED + FAILED)
param(
    [string]$ReportPath = ""
)

if ($ReportPath -eq "" -or $ReportPath -eq $null) {
    $reports = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
    if ($reports -and $reports.Count -gt 0) {
        $ReportPath = $reports[0].FullName
    } else {
        Write-Host "No report directory found!" -ForegroundColor Red
        exit 1
    }
}

$outputFile = "$ReportPath\BAO_CAO_TONG_HOP_TAT_CA_SO_LIEU.txt"
$csvFile = "$ReportPath\BAO_CAO_TONG_HOP_TAT_CA_SO_LIEU.csv"

Write-Host "Tao bao cao tong hop voi TAT CA so lieu..." -ForegroundColor Cyan
Write-Host ""

# Load metrics from HTML reports (FAILED tests)
$htmlCsv = "$ReportPath\TAT_CA_SO_LIEU_DO_DUOC.csv"
$consoleCsv = "$ReportPath\METRICS_FROM_CONSOLE.csv"

$allMetrics = @()

# Load from HTML CSV
if (Test-Path $htmlCsv) {
    $htmlMetrics = Import-Csv $htmlCsv
    $allMetrics += $htmlMetrics
    Write-Host "Loaded $($htmlMetrics.Count) metrics from HTML reports" -ForegroundColor Green
}

# Load from Console CSV
if (Test-Path $consoleCsv) {
    $consoleMetrics = Import-Csv $consoleCsv
    $allMetrics += $consoleMetrics
    Write-Host "Loaded $($consoleMetrics.Count) metrics from console output" -ForegroundColor Green
}

# Create comprehensive report
$report = "========================================`r`n"
$report += "BAO CAO TONG HOP - TAT CA SO LIEU DO DUOC`r`n"
$report += "========================================`r`n`r`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`r`n"
$report += "Report Directory: $ReportPath`r`n`r`n"

$report += "TONG SO METRICS: $($allMetrics.Count)`r`n"
$passedCount = ($allMetrics | Where-Object { $_.Status -eq 'PASSED' }).Count
$failedCount = ($allMetrics | Where-Object { $_.Status -eq 'FAILED' }).Count
$report += "  - PASSED: $passedCount metrics`r`n"
$report += "  - FAILED: $failedCount metrics`r`n`r`n"

# Group by category
$categories = $allMetrics | Group-Object -Property Category
$report += "PHAN LOAI THEO CATEGORY:`r`n"
foreach ($cat in $categories) {
    $report += "  - $($cat.Name): $($cat.Count) metrics`r`n"
}
$report += "`r`n"

# Group by source
$sources = $allMetrics | Group-Object -Property Source
$report += "PHAN LOAI THEO SOURCE:`r`n"
foreach ($src in $sources) {
    $report += "  - $($src.Name): $($src.Count) metrics`r`n"
}
$report += "`r`n"

# Detailed metrics by category
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

# Save report
[System.IO.File]::WriteAllText($outputFile, $report, [System.Text.Encoding]::UTF8)

# Save combined CSV
if ($allMetrics.Count -gt 0) {
    $allMetrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8
}

Write-Host "Da tao bao cao tong hop!" -ForegroundColor Green
Write-Host "   Text: $outputFile" -ForegroundColor Yellow
Write-Host "   CSV: $csvFile" -ForegroundColor Yellow
Write-Host ""
Write-Host "Tong so metrics: $($allMetrics.Count)" -ForegroundColor Cyan
Write-Host "  - PASSED: $passedCount" -ForegroundColor Green
Write-Host "  - FAILED: $failedCount" -ForegroundColor Yellow

