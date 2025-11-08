# Extract metrics from performance test reports
param(
    [string]$ReportPath = ""
)

# If no path provided, find latest report
if ($ReportPath -eq "" -or $ReportPath -eq $null) {
    $reports = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending
    if ($reports -and $reports.Count -gt 0) {
        $ReportPath = $reports[0].FullName
        Write-Host "Using latest report: $ReportPath" -ForegroundColor Yellow
    } else {
        Write-Host "❌ No report directory found!" -ForegroundColor Red
        exit 1
    }
}

$outputFile = "$ReportPath\performance_metrics_detailed.txt"
$csvFile = "$ReportPath\performance_metrics_detailed.csv"

$metrics = @()
$summary = @{}

# Extract from render reports
$renderFile = "$ReportPath\reports\render\androidTests\connected\debug\com.example.atry.performance.ScreenRenderPerformanceTest.html"
if (Test-Path $renderFile) {
    $content = Get-Content $renderFile -Raw
    $matches = [regex]::Matches($content, '(\w+Screen)\s+render\s+time\s+\((\d+)\s*ms\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $screen = $m.Groups[1].Value
        $time = $m.Groups[2].Value
        $summary["$screen"] = "$time ms"
        $metrics += [PSCustomObject]@{Category="Render Performance"; Screen=$screen; Metric="Render Time"; Value=$time; Unit="ms"}
    }
}

# Extract from scroll reports
$scrollFile = "$ReportPath\reports\scroll\androidTests\connected\debug\com.example.atry.performance.ScrollPerformanceTest.html"
if (Test-Path $scrollFile) {
    $content = Get-Content $scrollFile -Raw
    $matches = [regex]::Matches($content, '(\w+Screen)\s+average\s+idle\s+time\s+\(([\d.]+)\s*ms\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $screen = $m.Groups[1].Value
        $avg = $m.Groups[2].Value
        $summary["${screen} Scroll Average Idle"] = "$avg ms"
        $metrics += [PSCustomObject]@{Category="Scroll Performance"; Screen="${screen} Scroll"; Metric="Average Idle"; Value=$avg; Unit="ms"}
    }
}

# Extract from viewmodel reports
$viewmodelFile = "$ReportPath\reports\viewmodel\androidTests\connected\debug\com.example.atry.performance.ViewModelPerformanceTest.html"
if (Test-Path $viewmodelFile) {
    $content = Get-Content $viewmodelFile -Raw
    $matches = [regex]::Matches($content, 'measure(\w+)Performance.*?passed\s+\(([\d.]+)s\)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $op = $m.Groups[1].Value
        $time = [math]::Round([double]$m.Groups[2].Value * 1000)
        $summary["$op"] = "$time ms"
        $metrics += [PSCustomObject]@{Category="ViewModel Performance"; Operation=$op; Metric="Time"; Value=$time; Unit="ms"}
    }
}

# Extract from memory reports
$memoryFile = "$ReportPath\reports\memory\androidTests\connected\debug\com.example.atry.performance.MemoryPerformanceTest.html"
if (Test-Path $memoryFile) {
    $content = Get-Content $memoryFile -Raw
    $matches = [regex]::Matches($content, '(Initial|Peak|After navigation)\s+memory\s+usage:\s+([\d.]+)\s*MB', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary[$name] = "$val MB"
    }
}

# Extract from system resource reports
$systemFile = "$ReportPath\reports\system\androidTests\connected\debug\com.example.atry.performance.SystemResourcePerformanceTest.html"
if (Test-Path $systemFile) {
    $content = Get-Content $systemFile -Raw
    $matches = [regex]::Matches($content, '(CPU usage|Thread count|Heap size|Available memory):\s+([\d.]+)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["System $name"] = $val
    }
}

# Extract from network reports
$networkFile = "$ReportPath\reports\network\androidTests\connected\debug\com.example.atry.performance.NetworkPerformanceTest.html"
if (Test-Path $networkFile) {
    $content = Get-Content $networkFile -Raw
    $matches = [regex]::Matches($content, '(Connection time|Network latency|Throughput):\s+([\d.]+)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["Network $name"] = $val
    }
}

# Extract from framerate reports
$framerateFile = "$ReportPath\reports\framerate\androidTests\connected\debug\com.example.atry.performance.FrameRatePerformanceTest.html"
if (Test-Path $framerateFile) {
    $content = Get-Content $framerateFile -Raw
    $matches = [regex]::Matches($content, '(Frame rate|FPS|Jank|Frame time):\s+([\d.]+)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["FrameRate $name"] = $val
    }
}

# Extract from app size reports
$sizeFile = "$ReportPath\reports\size\androidTests\connected\debug\com.example.atry.performance.AppSizePerformanceTest.html"
if (Test-Path $sizeFile) {
    $content = Get-Content $sizeFile -Raw
    $matches = [regex]::Matches($content, '(APK size|Installed size|App size):\s+([\d.]+)\s*MB', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["AppSize $name"] = "$val MB"
    }
}

# Extract from database reports
$databaseFile = "$ReportPath\reports\database\androidTests\connected\debug\com.example.atry.performance.DatabasePerformanceTest.html"
if (Test-Path $databaseFile) {
    $content = Get-Content $databaseFile -Raw
    $matches = [regex]::Matches($content, '(Database query|Database insert|Batch throughput):\s+([\d.]+)', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["Database $name"] = $val
    }
}

# Extract from image loading reports
$imageFile = "$ReportPath\reports\image\androidTests\connected\debug\com.example.atry.performance.ImageLoadingPerformanceTest.html"
if (Test-Path $imageFile) {
    $content = Get-Content $imageFile -Raw
    $matches = [regex]::Matches($content, '(Image load time|Image decode time):\s+([\d.]+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["Image $name"] = "$val ms"
    }
}

# Extract from touch response reports
$touchFile = "$ReportPath\reports\touch\androidTests\connected\debug\com.example.atry.performance.TouchResponsePerformanceTest.html"
if (Test-Path $touchFile) {
    $content = Get-Content $touchFile -Raw
    $matches = [regex]::Matches($content, '(Click response time|Touch latency):\s+([\d.]+)\s*ms', [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    foreach ($m in $matches) {
        $name = $m.Groups[1].Value
        $val = $m.Groups[2].Value
        $summary["Touch $name"] = "$val ms"
    }
}

# Generate report with categories
$report = "========================================`n"
$report += "PERFORMANCE METRICS SUMMARY`n"
$report += "========================================`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`n"
$report += "Report Location: $ReportPath`n`n"

# Group by category
$renderMetrics = $summary.Keys | Where-Object { $_ -like "*Screen" -and $_ -notlike "*Scroll*" } | Sort-Object
$scrollMetrics = $summary.Keys | Where-Object { $_ -like "*Scroll*" } | Sort-Object
$viewmodelMetrics = $summary.Keys | Where-Object { $_ -match "^(Load|Send|Swipe)" } | Sort-Object
$memoryMetrics = $summary.Keys | Where-Object { $_ -match "^(Initial|Peak|After)" } | Sort-Object
$systemMetrics = $summary.Keys | Where-Object { $_ -like "System*" } | Sort-Object
$networkMetrics = $summary.Keys | Where-Object { $_ -like "Network*" } | Sort-Object
$framerateMetrics = $summary.Keys | Where-Object { $_ -like "FrameRate*" } | Sort-Object
$sizeMetrics = $summary.Keys | Where-Object { $_ -like "AppSize*" } | Sort-Object
$databaseMetrics = $summary.Keys | Where-Object { $_ -like "Database*" } | Sort-Object
$imageMetrics = $summary.Keys | Where-Object { $_ -like "Image*" } | Sort-Object
$touchMetrics = $summary.Keys | Where-Object { $_ -like "Touch*" } | Sort-Object

if ($renderMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "RENDER PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $renderMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($scrollMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "SCROLL PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $scrollMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($viewmodelMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "VIEWMODEL PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $viewmodelMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($memoryMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "MEMORY PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $memoryMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($systemMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "SYSTEM RESOURCE PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $systemMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($networkMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "NETWORK PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $networkMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($framerateMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "FRAME RATE PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $framerateMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($sizeMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "APP SIZE PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $sizeMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($databaseMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "DATABASE PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $databaseMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($imageMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "IMAGE LOADING PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $imageMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($touchMetrics.Count -gt 0) {
    $report += "========================================`n"
    $report += "TOUCH RESPONSE PERFORMANCE`n"
    $report += "========================================`n`n"
    foreach ($key in $touchMetrics) {
        $report += "  $key`: $($summary[$key])`n"
    }
    $report += "`n"
}

if ($summary.Count -eq 0) {
    $report += "⚠️  No metrics found in HTML reports!`n"
    $report += "`n"
    $report += "Metrics are printed to console during test execution.`n"
    $report += "Check the console output when running tests.`n"
    $report += "`n"
    $report += "To see metrics:`n"
    $report += "  1. Run tests: .\CHAY_TAT_CA_TESTS_VA_TAO_BAO_CAO.bat`n"
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
    Write-Host "   Metrics are in console output when running tests" -ForegroundColor Yellow
}

Write-Host ""
