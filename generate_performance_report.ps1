# Generate comprehensive PDF report from performance metrics
param(
    [string]$MetricsFile = "extracted_metrics/performance_metrics.csv",
    [string]$OutputFile = "reports/performance_report.pdf"
)

Write-Host "📊 Generating comprehensive PDF performance report..." -ForegroundColor Green

# Load performance metrics
try {
    $metrics = Import-Csv $MetricsFile -ErrorAction Stop
    Write-Host "✅ Loaded $($metrics.Count) metrics from $MetricsFile" -ForegroundColor Green
} catch {
    Write-Host "❌ Error loading metrics: $_" -ForegroundColor Red
    exit 1
}

# Filter meaningful performance metrics
$performanceMetrics = $metrics | Where-Object { 
    $_.Name -and 
    $_.Name -notmatch 'Console|Generated|METRICS|PASSED|FAILED' -and
    $_.Name -match 'Render|Scroll|Frame|Touch|Click|Memory|CPU|Network|Startup|Performance'
}

Write-Host "📈 Found $($performanceMetrics.Count) meaningful performance metrics" -ForegroundColor Yellow

# Calculate statistics
$totalMetrics = $performanceMetrics.Count
$passedMetrics = ($performanceMetrics | Where-Object { $_.Status -eq "PASS" }).Count
$failedMetrics = ($performanceMetrics | Where-Object { $_.Status -eq "FAIL" }).Count
$passRate = if ($totalMetrics -gt 0) { [math]::Round(($passedMetrics / $totalMetrics) * 100, 2) } else { 0 }

Write-Host "📊 Statistics: $passedMetrics passed, $failedMetrics failed ($passRate% pass rate)" -ForegroundColor Cyan

# Create HTML content for PDF generation
$htmlContent = @"
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Dating App Performance Report</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; margin: 20px; line-height: 1.6; }
        .header { background: linear-gradient(135deg, #667eea 0%, #764ba2 100%); color: white; padding: 30px; text-align: center; border-radius: 10px; margin-bottom: 30px; }
        .stats-grid { display: grid; grid-template-columns: repeat(auto-fit, minmax(200px, 1fr)); gap: 20px; margin-bottom: 30px; }
        .stat-card { background: #f8f9fa; padding: 20px; border-radius: 8px; text-align: center; border-left: 4px solid #007bff; }
        .stat-number { font-size: 2em; font-weight: bold; color: #007bff; }
        .metric-table { width: 100%; border-collapse: collapse; margin-bottom: 30px; }
        .metric-table th, .metric-table td { padding: 12px; text-align: left; border-bottom: 1px solid #ddd; }
        .metric-table th { background-color: #f8f9fa; font-weight: bold; }
        .pass { color: #28a745; font-weight: bold; }
        .fail { color: #dc3545; font-weight: bold; }
        .recommendations { background: #fff3cd; padding: 20px; border-radius: 8px; border-left: 4px solid #ffc107; }
        .chart-container { text-align: center; margin: 30px 0; }
        .progress-bar { width: 80%; height: 30px; background: #e9ecef; border-radius: 15px; overflow: hidden; margin: 20px auto; }
        .progress-fill { height: 100%; background: linear-gradient(90deg, #28a745, #20c997); transition: width 0.3s; }
        @media print { body { margin: 0; } .no-print { display: none; } }
    </style>
</head>
<body>
    <div class="header">
        <h1>🚀 Dating App Mobile Project</h1>
        <h2>📊 Performance Test Report</h2>
        <p>Generated on: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")</p>
    </div>

    <div class="stats-grid">
        <div class="stat-card">
            <h3>Total Metrics</h3>
            <div class="stat-number">$totalMetrics</div>
        </div>
        <div class="stat-card">
            <h3>Passed</h3>
            <div class="stat-number pass">$passedMetrics</div>
        </div>
        <div class="stat-card">
            <h3>Failed</h3>
            <div class="stat-number fail">$failedMetrics</div>
        </div>
        <div class="stat-card">
            <h3>Pass Rate</h3>
            <div class="stat-number">$passRate%</div>
        </div>
    </div>

    <div class="chart-container">
        <h3>Performance Pass Rate</h3>
        <div class="progress-bar">
            <div class="progress-fill" style="width: $passRate%"></div>
        </div>
        <p>$passRate% of performance metrics are passing</p>
    </div>

    <h3>📋 Performance Metrics Details</h3>
    <table class="metric-table">
        <thead>
            <tr>
                <th>Metric Name</th>
                <th>Value</th>
                <th>Unit</th>
                <th>Target</th>
                <th>Status</th>
            </tr>
        </thead>
        <tbody>
"@

# Add metrics to table
foreach ($metric in $performanceMetrics | Sort-Object { if($_.Status -eq "FAIL") { 0 } else { 1 } }, Name) {
    $statusClass = if ($metric.Status -eq "PASS") { "pass" } else { "fail" }
    $htmlContent += @"
            <tr>
                <td>$($metric.Name)</td>
                <td>$($metric.Value)</td>
                <td>$($metric.Unit)</td>
                <td>$($metric.Target)</td>
                <td class="$statusClass">$($metric.Status)</td>
            </tr>
"@
}

$htmlContent += @"
        </tbody>
    </table>

    <div class="recommendations">
        <h3>🔧 Recommendations</h3>
        <ul>
"@

# Add recommendations based on failed metrics
$failedMetricNames = $performanceMetrics | Where-Object { $_.Status -eq "FAIL" } | Select-Object -ExpandProperty Name -Unique
foreach ($failedMetric in $failedMetricNames) {
    switch -Wildcard ($failedMetric) {
        "*Frame*" { $htmlContent += "            <li>Optimize frame rate performance - target is 50 FPS for smooth scrolling</li>`n" }
        "*Render*" { $htmlContent += "            <li>Improve render performance - consider optimizing component rendering</li>`n" }
        "*Scroll*" { $htmlContent += "            <li>Optimize scroll performance - implement virtual scrolling if needed</li>`n" }
        "*Touch*" { $htmlContent += "            <li>Reduce touch latency - optimize touch event handling</li>`n" }
        "*Click*" { $htmlContent += "            <li>Improve click response time - target is under 50ms</li>`n" }
        "*Memory*" { $htmlContent += "            <li>Monitor and optimize memory usage - implement proper cleanup</li>`n" }
        "*Network*" { $htmlContent += "            <li>Optimize network requests - implement caching and request optimization</li>`n" }
        default { $htmlContent += "            <li>Investigate and optimize $failedMetric performance</li>`n" }
    }
}

$htmlContent += @"
        </ul>
    </div>

    <div style="margin-top: 40px; padding: 20px; background: #f8f9fa; border-radius: 8px;">
        <h3>📈 Summary</h3>
        <p>This report analyzes <strong>$totalMetrics performance metrics</strong> from the Dating App Mobile Project.</p>
        <p><strong>Key Findings:</strong></p>
        <ul>
            <li>Pass Rate: <strong>$passRate%</strong> ($passedMetrics out of $totalMetrics metrics)</li>
            <li>Critical Issues: <strong>$failedMetrics metrics</strong> are failing performance targets</li>
            <li>UI Test Coverage: <strong>No UI test results</strong> were found in the current dataset</li>
        </ul>
        <p><strong>Next Steps:</strong></p>
        <ul>
            <li>Address the $failedMetrics failing performance metrics</li>
            <li>Implement comprehensive UI testing</li>
            <li>Set up continuous performance monitoring</li>
            <li>Establish performance budgets for key metrics</li>
        </ul>
    </div>

    <hr style="margin: 40px 0; border: none; height: 2px; background: linear-gradient(90deg, #667eea, #764ba2);">
    <p style="text-align: center; color: #6c757d; font-size: 0.9em;">
        Report generated by Dating App Mobile Project Performance Testing System<br>
        For questions or support, contact the development team.
    </p>
</body>
</html>
"@

# Save HTML file
$htmlFile = "reports/performance_report.html"
$htmlContent | Out-File -FilePath $htmlFile -Encoding UTF8
Write-Host "📝 HTML report saved to $htmlFile" -ForegroundColor Green

# Generate PDF using built-in Windows Print to PDF functionality
Write-Host "🖨️ Generating PDF..." -ForegroundColor Yellow

# Create a simple PDF using PowerShell and .NET
$pdfContent = @"
Dating App Mobile Project - Performance Test Report
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")

SUMMARY
-------
Total Performance Metrics: $totalMetrics
Passed: $passedMetrics
Failed: $failedMetrics  
Pass Rate: $passRate%

TOP FAILED METRICS
-----------------
"@

$topFailed = $performanceMetrics | Where-Object { $_.Status -eq "FAIL" } | Select-Object -First 5
foreach ($metric in $topFailed) {
    $pdfContent += "$($metric.Name): $($metric.Value) $($metric.Unit) (Target: $($metric.Target))`n"
}

$pdfContent += @"

RECOMMENDATIONS
---------------
1. Optimize frame rate performance (target: 50 FPS)
2. Improve click response time (target: < 50ms)
3. Implement comprehensive UI testing
4. Set up continuous performance monitoring

This report was automatically generated from performance test data.
"@

# Save as text file for now (can be converted to PDF using any PDF printer)
$pdfContent | Out-File -FilePath "reports/performance_report.txt" -Encoding UTF8
Write-Host "📄 Text report saved to reports/performance_report.txt" -ForegroundColor Green

Write-Host "✅ Report generation completed!" -ForegroundColor Green
Write-Host "📂 Files created:" -ForegroundColor Cyan
Write-Host "  - HTML Report: $htmlFile" -ForegroundColor White
Write-Host "  - Text Report: reports/performance_report.txt" -ForegroundColor White
Write-Host "  - To create PDF, print the HTML file to PDF using your browser" -ForegroundColor Yellow