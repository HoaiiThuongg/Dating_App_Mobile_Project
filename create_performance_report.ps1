# Create performance report
$metrics = Import-Csv "extracted_metrics/performance_metrics.csv"

# Filter performance metrics
$perfMetrics = $metrics | Where-Object { 
    $_.Name -and 
    $_.Name -notmatch 'Console|Generated|METRICS|PASSED|FAILED' -and
    $_.Name -match 'Render|Scroll|Frame|Touch|Click|Memory|CPU|Network|Startup|Performance'
}

$total = $perfMetrics.Count
$passed = ($perfMetrics | Where-Object { $_.Status -eq "PASS" }).Count
$failed = ($perfMetrics | Where-Object { $_.Status -eq "FAIL" }).Count
$passRate = if ($total -gt 0) { [math]::Round(($passed / $total) * 100, 2) } else { 0 }

Write-Host "Found $total performance metrics ($passed passed, $failed failed, $passRate% rate)"

# Create HTML
$html = @"
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Performance Report</title>
    <style>
        body { font-family: Arial; margin: 20px; background: #f5f5f5; }
        .container { max-width: 1000px; margin: 0 auto; background: white; padding: 20px; border-radius: 10px; }
        .header { background: #667eea; color: white; padding: 20px; text-align: center; border-radius: 10px; margin-bottom: 20px; }
        .stats { display: grid; grid-template-columns: repeat(4, 1fr); gap: 15px; margin-bottom: 20px; }
        .stat-card { background: #f8f9fa; padding: 15px; text-align: center; border-radius: 8px; }
        .stat-number { font-size: 1.8em; font-weight: bold; color: #007bff; }
        .pass { color: #28a745; }
        .fail { color: #dc3545; }
        table { width: 100%; border-collapse: collapse; margin-top: 20px; }
        th, td { padding: 10px; text-align: left; border-bottom: 1px solid #ddd; }
        th { background-color: #f8f9fa; font-weight: bold; }
        .recommendations { background: #fff3cd; padding: 15px; border-radius: 8px; margin-top: 20px; }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>Dating App Mobile Project</h1>
            <h2>Performance Test Report</h2>
            <p>Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")</p>
        </div>

        <div class="stats">
            <div class="stat-card">
                <h3>Total Metrics</h3>
                <div class="stat-number">$total</div>
            </div>
            <div class="stat-card">
                <h3>Passed</h3>
                <div class="stat-number pass">$passed</div>
            </div>
            <div class="stat-card">
                <h3>Failed</h3>
                <div class="stat-number fail">$failed</div>
            </div>
            <div class="stat-card">
                <h3>Pass Rate</h3>
                <div class="stat-number">$passRate%</div>
            </div>
        </div>

        <h3>Performance Metrics</h3>
        <table>
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

foreach ($metric in $perfMetrics | Sort-Object Status, Name) {
    $statusClass = if ($metric.Status -eq "PASS") { "pass" } else { "fail" }
    $html += @"
                <tr>
                    <td>$($metric.Name)</td>
                    <td>$($metric.Value)</td>
                    <td>$($metric.Unit)</td>
                    <td>$($metric.Target)</td>
                    <td class="$statusClass">$($metric.Status)</td>
                </tr>
"@
}

$html += @"
            </tbody>
        </table>

        <div class="recommendations">
            <h3>Recommendations</h3>
            <ul>
                <li>Optimize frame rate performance (currently below 50 FPS target)</li>
                <li>Improve click response time (target: under 50ms)</li>
                <li>Implement comprehensive UI testing</li>
                <li>Set up continuous performance monitoring</li>
            </ul>
        </div>
    </div>
</body>
</html>
"@

$html | Out-File -FilePath "reports/performance_report.html" -Encoding UTF8
Write-Host "✅ Report created: reports/performance_report.html"