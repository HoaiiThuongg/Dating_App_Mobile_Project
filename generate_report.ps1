# Generate performance test report in Markdown format
param(
    [string]$OutputDir = "performance_results"
)

$ErrorActionPreference = "SilentlyContinue"

Write-Host "Generating performance report..." -ForegroundColor Cyan

$reportFile = Join-Path $OutputDir "summary.md"
$metricsFile = Join-Path $OutputDir "metrics.csv"

$report = @"
# 📊 Performance Test Report

**Generated:** $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")

---

## 📋 Summary

This report contains performance metrics collected from automated performance tests.

---

## 📈 Metrics

"@

# Read metrics from CSV if available
if (Test-Path $metricsFile) {
    $metrics = Import-Csv $metricsFile
    
    # Group by test
    $grouped = $metrics | Group-Object Test
    
    foreach ($group in $grouped) {
        $report += "`n### $($group.Name)`n`n"
        $report += "| Metric | Value | Unit | Source |`n"
        $report += "|--------|-------|------|--------|`n"
        
        foreach ($metric in $group.Group) {
            $report += "| $($metric.Metric) | $($metric.Value) | $($metric.Unit) | $($metric.Source) |`n"
        }
    }
} else {
    $report += "`n⚠️ No metrics data found. Please run tests first.`n"
}

$report += @"

---

## 📁 Report Locations

- **HTML Test Reports:** `reports\androidTests\index.html`
- **Macrobenchmark Results:** `benchmarks\`
- **Metrics CSV:** `metrics.csv`
- **Metrics JSON:** `metrics.json`

---

## 🎯 Performance Targets

### Startup Time
- **Cold start:** < 2000ms
- **Warm start:** < 1000ms
- **Hot start:** < 500ms

### Screen Render
- **SplashScreen:** < 100ms
- **HomeScreen:** < 200ms
- **ChatScreen:** < 300ms
- **MessageScreen:** < 250ms
- **ProfileScreen:** < 200ms

### Scroll Performance
- **Initial composition:** < 100ms
- **Average idle:** < 10ms
- **Max idle:** < 50ms

### ViewModel Operations
- **LoadUsers:** < 500ms (avg)
- **LoadMessages:** < 300ms (avg)
- **SwipeAction:** < 10ms (avg), < 20ms (P95)
- **SendMessage:** < 100ms (avg)

### Memory Usage
- **Initial:** < 100 MB
- **After navigation:** < 150 MB
- **Peak:** < 200 MB
- **Memory increase (50 ops):** < 30 MB

---

## 📝 Notes

- Metrics are collected from test execution logs and reports
- Some metrics may vary based on device performance
- For accurate results, run tests on a physical device or properly configured emulator
- Macrobenchmark tests require non-debuggable builds (benchmark or release variant)

---

*Report generated automatically by performance test collection script*
"@

$report | Out-File $reportFile -Encoding UTF8

Write-Host "  ✓ Report generated: $reportFile" -ForegroundColor Green


