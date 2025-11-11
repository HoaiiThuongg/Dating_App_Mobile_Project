# generate_report.ps1 - Script tạo HTML dashboard và báo cáo tổng hợp
param(
    [string]$MetricsDir = "./extracted_metrics",
    [string]$OutputDir = "./reports",
    [string]$ProjectName = "Dating App Mobile Project"
)

# Tạo thư mục output nếu chưa tồn tại
if (!(Test-Path $OutputDir)) {
    New-Item -ItemType Directory -Path $OutputDir -Force
}

Write-Host "=== GENERATING COMPREHENSIVE REPORT ===" -ForegroundColor Green

# Đọc dữ liệu metrics
$performanceCsv = "$MetricsDir/performance_metrics.csv"
$uiTestJson = "$MetricsDir/ui_test_results.json"
$summaryJson = "$MetricsDir/extraction_summary.json"

$performanceData = @()
$uiTestData = @()
$summaryData = $null

# Đọc performance metrics
if (Test-Path $performanceCsv) {
    # Lọc bỏ console logs và dòng không phải metrics thực thụ
    $performanceData = Import-Csv $performanceCsv | Where-Object { 
        $_.Name -notmatch 'Console|Generated|METRICS|PASSED|FAILED' -and $_.Name.Trim() -ne '' 
    }
    Write-Host "Loaded $($performanceData.Count) performance metrics" -ForegroundColor Cyan
}

# Đọc UI test results
if (Test-Path $uiTestJson) {
    $uiTestData = Get-Content $uiTestJson -Raw | ConvertFrom-Json
    Write-Host "Loaded $($uiTestData.Count) UI test result files" -ForegroundColor Cyan
}

# Đọc summary data
if (Test-Path $summaryJson) {
    $summaryData = Get-Content $summaryJson -Raw | ConvertFrom-Json
}

# Tính toán statistics
$stats = @{
    Performance = @{
        Total = $performanceData.Count
        Passed = ($performanceData | Where-Object { $_.Status -eq "PASS" }).Count
        Failed = ($performanceData | Where-Object { $_.Status -eq "FAIL" }).Count
        PassRate = if ($performanceData.Count -gt 0) { 
            [math]::Round((($performanceData | Where-Object { $_.Status -eq "PASS" }).Count / $performanceData.Count) * 100, 2)
        } else { 0 }
    }
    UITests = @{
        TotalRuns = $uiTestData.Count
        TotalTests = 0
        TotalPassed = 0
        TotalFailed = 0
        PassRate = 0
    }
}

# Tính UI test statistics
foreach ($testRun in $uiTestData) {
    $stats.UITests.TotalTests += $testRun.Results.TotalTests
    $stats.UITests.TotalPassed += $testRun.Results.Passed
    $stats.UITests.TotalFailed += $testRun.Results.Failed
}

if ($stats.UITests.TotalTests -gt 0) {
    $stats.UITests.PassRate = [math]::Round(($stats.UITests.TotalPassed / $stats.UITests.TotalTests) * 100, 2)
}

# Tạo HTML dashboard
$htmlContent = @"
<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>$ProjectName - Test Results Dashboard</title>
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            min-height: 100vh;
            padding: 20px;
        }
        
        .container {
            max-width: 1400px;
            margin: 0 auto;
            background: white;
            border-radius: 15px;
            box-shadow: 0 20px 40px rgba(0,0,0,0.1);
            overflow: hidden;
        }
        
        .header {
            background: linear-gradient(135deg, #2c3e50 0%, #34495e 100%);
            color: white;
            padding: 30px;
            text-align: center;
        }
        
        .header h1 {
            font-size: 2.5em;
            margin-bottom: 10px;
            text-shadow: 2px 2px 4px rgba(0,0,0,0.3);
        }
        
        .header p {
            font-size: 1.2em;
            opacity: 0.9;
        }
        
        .stats-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 20px;
            padding: 30px;
            background: #f8f9fa;
        }
        
        .stat-card {
            background: white;
            padding: 25px;
            border-radius: 10px;
            box-shadow: 0 5px 15px rgba(0,0,0,0.08);
            text-align: center;
            transition: transform 0.3s ease, box-shadow 0.3s ease;
        }
        
        .stat-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 10px 25px rgba(0,0,0,0.15);
        }
        
        .stat-card h3 {
            color: #2c3e50;
            margin-bottom: 15px;
            font-size: 1.3em;
        }
        
        .stat-number {
            font-size: 2.5em;
            font-weight: bold;
            margin-bottom: 10px;
        }
        
        .stat-pass { color: #27ae60; }
        .stat-fail { color: #e74c3c; }
        .stat-neutral { color: #3498db; }
        
        .charts-section {
            padding: 30px;
        }
        
        .charts-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(400px, 1fr));
            gap: 30px;
            margin-bottom: 40px;
        }
        
        .chart-container {
            background: white;
            padding: 25px;
            border-radius: 10px;
            box-shadow: 0 5px 15px rgba(0,0,0,0.08);
        }
        
        .chart-container h3 {
            color: #2c3e50;
            margin-bottom: 20px;
            text-align: center;
            font-size: 1.4em;
        }
        
        .chart-wrapper {
            position: relative;
            height: 300px;
        }
        
        .details-section {
            padding: 30px;
            background: #f8f9fa;
        }
        
        .details-grid {
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 30px;
        }
        
        .details-panel {
            background: white;
            padding: 25px;
            border-radius: 10px;
            box-shadow: 0 5px 15px rgba(0,0,0,0.08);
        }
        
        .details-panel h3 {
            color: #2c3e50;
            margin-bottom: 20px;
            font-size: 1.3em;
            border-bottom: 2px solid #3498db;
            padding-bottom: 10px;
        }
        
        .metric-item {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 12px 0;
            border-bottom: 1px solid #ecf0f1;
        }
        
        .metric-item:last-child {
            border-bottom: none;
        }
        
        .metric-name {
            font-weight: 600;
            color: #2c3e50;
        }
        
        .metric-value {
            font-weight: bold;
        }
        
        .metric-pass { color: #27ae60; }
        .metric-fail { color: #e74c3c; }
        
        .timestamp {
            text-align: center;
            color: #7f8c8d;
            font-style: italic;
            margin-top: 30px;
            padding: 20px;
            background: #ecf0f1;
            border-radius: 10px;
        }
        
        @media (max-width: 768px) {
            .details-grid {
                grid-template-columns: 1fr;
            }
            
            .charts-grid {
                grid-template-columns: 1fr;
            }
            
            .stats-grid {
                grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>$ProjectName</h1>
            <p>Test Results Dashboard</p>
        </div>
        
        <div class="stats-grid">
            <div class="stat-card">
                <h3>Performance Tests</h3>
                <div class="stat-number stat-neutral">$($stats.Performance.Total)</div>
                <p>Total Metrics</p>
            </div>
            
            <div class="stat-card">
                <h3>Performance Pass Rate</h3>
                <div class="stat-number $($(if($stats.Performance.PassRate -ge 70){'stat-pass'}else{'stat-fail'}))">$($stats.Performance.PassRate)%</div>
                <p>$($stats.Performance.Passed) / $($stats.Performance.Total) Passed</p>
            </div>
            
            <div class="stat-card">
                <h3>UI Test Runs</h3>
                <div class="stat-number stat-neutral">$($stats.UITests.TotalRuns)</div>
                <p>Test Executions</p>
            </div>
            
            <div class="stat-card">
                <h3>UI Test Pass Rate</h3>
                <div class="stat-number $($(if($stats.UITests.PassRate -ge 80){'stat-pass'}else{'stat-fail'}))">$($stats.UITests.PassRate)%</div>
                <p>$($stats.UITests.TotalPassed) / $($stats.UITests.TotalTests) Passed</p>
            </div>
        </div>
        
        <div class="charts-section">
            <div class="charts-grid">
                <div class="chart-container">
                    <h3>Performance Metrics Status</h3>
                    <div class="chart-wrapper">
                        <canvas id="performanceChart"></canvas>
                    </div>
                </div>
                
                <div class="chart-container">
                    <h3>UI Test Results Overview</h3>
                    <div class="chart-wrapper">
                        <canvas id="uiTestChart"></canvas>
                    </div>
                </div>
            </div>
        </div>
        
        <div class="details-section">
            <div class="details-grid">
                <div class="details-panel">
                    <h3>Top Performance Metrics</h3>
                    <div id="performanceDetails">
                        $(
                            $performanceData | Select-Object -First 10 | ForEach-Object {
                                $statusClass = if($_.Status) { "metric-" + $_.Status.ToLower() } else { "metric-neutral" }
                                @"
                                <div class="metric-item">
                                    <span class="metric-name">$($_.Name) - $($_.Metric)</span>
                                    <span class="metric-value $statusClass">$($_.Value) $($_.Unit) $(if($_.Target) { "(Target: $($_.Target))" })</span>
                                </div>
"@
                            }
                        )
                    </div>
                </div>
                
                <div class="details-panel">
                    <h3>Recent UI Test Results</h3>
                    <div id="uiTestDetails">
                        $(
                            $uiTestData | Select-Object -First 5 | ForEach-Object {
                                $result = $_.Results
                                @"
                                <div class="metric-item">
                                    <span class="metric-name">Test Run</span>
                                    <span class="metric-value">$($result.Passed)/$($result.TotalTests) Passed</span>
                                </div>
"@
                            }
                        )
                    </div>
                </div>
            </div>
        </div>
        
        <div class="timestamp">
            <p>Report generated on: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")</p>
            <p>Project: $ProjectName</p>
        </div>
    </div>
    
    <script>
        // Performance Chart
        const performanceCtx = document.getElementById('performanceChart').getContext('2d');
        new Chart(performanceCtx, {
            type: 'doughnut',
            data: {
                labels: ['Passed', 'Failed'],
                datasets: [{
                    data: [$($stats.Performance.Passed), $($stats.Performance.Failed)],
                    backgroundColor: ['#27ae60', '#e74c3c'],
                    borderWidth: 0
                }]
            },
            options: {
                responsive: true,
                maintainAspectRatio: false,
                plugins: {
                    legend: {
                        position: 'bottom'
                    }
                }
            }
        });
        
        // UI Test Chart
        const uiTestCtx = document.getElementById('uiTestChart').getContext('2d');
        new Chart(uiTestCtx, {
            type: 'bar',
            data: {
                labels: ['Passed', 'Failed', 'Skipped'],
                datasets: [{
                    label: 'Tests',
                    data: [$($stats.UITests.TotalPassed), $($stats.UITests.TotalFailed), 0],
                    backgroundColor: ['#27ae60', '#e74c3c', '#f39c12'],
                    borderWidth: 0
                }]
            },
            options: {
                responsive: true,
                maintainAspectRatio: false,
                plugins: {
                    legend: {
                        display: false
                    }
                },
                scales: {
                    y: {
                        beginAtZero: true
                    }
                }
            }
        });
    </script>
</body>
</html>
"@

# Lưu HTML dashboard
$htmlFile = "$OutputDir/dashboard.html"
$htmlContent | Out-File -FilePath $htmlFile -Encoding UTF8
Write-Host "HTML dashboard saved to: $htmlFile" -ForegroundColor Green

# Tạo text summary report
$textReport = @"
================================================================================
$ProjectName - TEST RESULTS SUMMARY
================================================================================
Generated: $(Get-Date -Format "yyyy-MM-dd HH:mm:ss")

PERFORMANCE METRICS:
-------------------
Total Metrics: $($stats.Performance.Total)
Passed: $($stats.Performance.Passed)
Failed: $($stats.Performance.Failed)
Pass Rate: $($stats.Performance.PassRate)%

UI TEST RESULTS:
----------------
Total Test Runs: $($stats.UITests.TotalRuns)
Total Tests: $($stats.UITests.TotalTests)
Passed: $($stats.UITests.TotalPassed)
Failed: $($stats.UITests.TotalFailed)
Pass Rate: $($stats.UITests.PassRate)%

TOP FAILED PERFORMANCE METRICS:
-------------------------------
$(
    $failedMetrics = $performanceData | Where-Object { $_.Status -eq "FAIL" } | Select-Object -First 5
    if ($failedMetrics) {
        $failedMetrics | ForEach-Object {
            "$($_.Name) - $($_.Metric): $($_.Value) $($_.Unit) (Target: $($_.Target))"
        }
    } else {
        "No failed metrics found"
    }
)

RECOMMENDATIONS:
---------------
$(
    $recommendations = @()
    if ($stats.Performance.PassRate -lt 70) { $recommendations += "• Performance tests need optimization - current pass rate is only $($stats.Performance.PassRate)%" }
    if ($stats.UITests.PassRate -lt 80) { $recommendations += "• UI tests have high failure rate - investigate test stability" }
    if ($stats.Performance.Total -eq 0) { $recommendations += "• No performance metrics found - check test execution" }
    if ($stats.UITests.TotalTests -eq 0) { $recommendations += "• No UI test results found - check test execution" }
    if ($recommendations.Count -eq 0) { $recommendations += "• All tests are performing well!" }
    $recommendations -join "`n"
)

================================================================================
"@

$textFile = "$OutputDir/test_summary.txt"
$textReport | Out-File -FilePath $textFile -Encoding UTF8
Write-Host "Text summary saved to: $textFile" -ForegroundColor Green

Write-Host "`n=== REPORT GENERATION COMPLETED ===" -ForegroundColor Green
Write-Host "Dashboard: $htmlFile" -ForegroundColor Cyan
Write-Host "Summary: $textFile" -ForegroundColor Cyan
Write-Host "All reports saved to: $OutputDir" -ForegroundColor Cyan