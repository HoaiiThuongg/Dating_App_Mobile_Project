# Extract TAT CA so lieu tu HTML reports va console output logs
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

$outputFile = "$ReportPath\TAT_CA_SO_LIEU_DO_DUOC_COMPLETE.txt"
$csvFile = "$ReportPath\TAT_CA_SO_LIEU_DO_DUOC_COMPLETE.csv"

Write-Host "Extracting ALL metrics from HTML reports and console logs..." -ForegroundColor Cyan
Write-Host ""

$allMetrics = @()
$report = "========================================`r`n"
$report += "TAT CA SO LIEU DO DUOC - TEST 1-8`r`n"
$report += "========================================`r`n`r`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`r`n"
$report += "Report Directory: $ReportPath`r`n`r`n"
$report += "LUU Y: Bao cao nay bao gom TAT CA so lieu do duoc,`r`n"
$report += "       ke ca tu cac tests PASSED va FAILED.`r`n`r`n"

# ========================================
# Extract from HTML Reports (FAILED tests)
# ========================================

# TEST 1: RENDER PERFORMANCE
$report += "========================================`r`n"
$report += "TEST 1: RENDER PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$renderFile = "$ReportPath\reports\render\androidTests\connected\debug\com.example.atry.performance.ScreenRenderPerformanceTest.html"
if (Test-Path $renderFile) {
    $content = Get-Content $renderFile -Raw
    
    if ($content -match 'SplashScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "1. SplashScreen Render Time: $value ms (FAILED - vuot target 100ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="SplashScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="100ms"; Source="HTML"}
    }
    if ($content -match 'HomeScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "2. HomeScreen Render Time: $value ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="HomeScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="PASSED"; Target="200ms"; Source="HTML"}
    }
    if ($content -match 'MessageScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "3. MessageScreen Render Time: $value ms (FAILED - vuot target 250ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="MessageScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="250ms"; Source="HTML"}
    }
    if ($content -match 'ChatScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "4. ChatScreen Render Time: $value ms (FAILED - vuot target 300ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="ChatScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="300ms"; Source="HTML"}
    }
    if ($content -match 'MyProfileScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "5. MyProfileScreen Render Time: $value ms (FAILED - vuot target 200ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="MyProfileScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="200ms"; Source="HTML"}
    }
}

# TEST 2: SCROLL PERFORMANCE
$report += "`r`n========================================`r`n"
$report += "TEST 2: SCROLL PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$scrollFile = "$ReportPath\reports\scroll\androidTests\connected\debug\com.example.atry.performance.ScrollPerformanceTest.html"
if (Test-Path $scrollFile) {
    $content = Get-Content $scrollFile -Raw
    
    if ($content -match 'MessageScreen average idle time \(([\d.]+)\s*ms\)') {
        $value = [double]$matches[1]
        $report += "1. MessageScreen Scroll Average Idle Time: $value ms (FAILED - vuot target 10ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="MessageScreen"; Metric="Scroll Average Idle"; Value=$value; Unit="ms"; Status="FAILED"; Target="10ms"; Source="HTML"}
    }
    if ($content -match 'ChatScreen average idle time \(([\d.]+)\s*ms\)') {
        $value = [double]$matches[1]
        $report += "2. ChatScreen Scroll Average Idle Time: $value ms (FAILED - vuot target 10ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="ChatScreen"; Metric="Scroll Average Idle"; Value=$value; Unit="ms"; Status="FAILED"; Target="10ms"; Source="HTML"}
    }
    if ($content -match 'HomeScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "3. HomeScreen Render Time (Swipe Test): $value ms (FAILED - vuot target 2000ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="HomeScreen"; Metric="Render Time (Swipe)"; Value=$value; Unit="ms"; Status="FAILED"; Target="2000ms"; Source="HTML"}
    }
}

# TEST 7: FRAME RATE PERFORMANCE
$report += "`r`n========================================`r`n"
$report += "TEST 7: FRAME RATE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$framerateFile = "$ReportPath\reports\framerate\androidTests\connected\debug\com.example.atry.performance.FrameRatePerformanceTest.html"
if (Test-Path $framerateFile) {
    $content = Get-Content $framerateFile -Raw
    
    if ($content -match 'Frame rate \(([\d.]+)FPS\)') {
        $fps = [double]$matches[1]
        $report += "1. Frame Rate During Scroll: FAILED`r`n"
        $report += "   - Frame Rate: $fps FPS (FAILED - duoi target 50 FPS)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Frame Rate"; Test="Scroll"; Metric="Frame Rate (FPS)"; Value=$fps; Unit="FPS"; Status="FAILED"; Target="50 FPS"; Source="HTML"}
    }
}

# TEST 8: TOUCH RESPONSE PERFORMANCE
$report += "`r`n========================================`r`n"
$report += "TEST 8: TOUCH RESPONSE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$touchFile = "$ReportPath\reports\touch\androidTests\connected\debug\com.example.atry.performance.TouchResponsePerformanceTest.html"
if (Test-Path $touchFile) {
    $content = Get-Content $touchFile -Raw
    
    if ($content -match 'Click response average time \(([\d.]+)ms\)') {
        $clickTime = [double]$matches[1]
        $report += "1. Click Response Time: FAILED`r`n"
        $report += "   - Click Response Average Time: $clickTime ms (FAILED - vuot target 50ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Touch"; Test="Click Response"; Metric="Average Time"; Value=$clickTime; Unit="ms"; Status="FAILED"; Target="50ms"; Source="HTML"}
    }
    if ($content -match 'Touch latency \(([\d.]+)ms\)') {
        $latency = [double]$matches[1]
        $report += "2. Touch Latency: FAILED`r`n"
        $report += "   - Touch Latency: $latency ms (FAILED - vuot target 16ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Touch"; Test="Touch Latency"; Metric="Average Latency"; Value=$latency; Unit="ms"; Status="FAILED"; Target="16ms"; Source="HTML"}
    }
}

# ========================================
# Extract from Console Output Log (PASSED tests)
# ========================================
$report += "`r`n========================================`r`n"
$report += "METRICS TU CONSOLE OUTPUT (PASSED TESTS)`r`n"
$report += "========================================`r`n`r`n"

$logFile = "$ReportPath\full_output.log"
if (Test-Path $logFile) {
    $logContent = Get-Content $logFile -Raw
    
    # Extract ViewModel metrics
    if ($logContent -match 'LoadUsers - Avg: ([\d.]+)ms, Min: ([\d.]+)ms, Max: ([\d.]+)ms') {
        $avg = [double]$matches[1]
        $min = [double]$matches[2]
        $max = [double]$matches[3]
        $report += "TEST 3: VIEWMODEL PERFORMANCE`r`n"
        $report += "1. LoadUsers - Avg: $avg ms, Min: $min ms, Max: $max ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="500ms"; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Min Time"; Value=$min; Unit="ms"; Status="PASSED"; Target=""; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""; Source="Console"}
    }
    if ($logContent -match 'LoadMessages - Avg: ([\d.]+)ms, Max: ([\d.]+)ms') {
        $avg = [double]$matches[1]
        $max = [double]$matches[2]
        $report += "2. LoadMessages - Avg: $avg ms, Max: $max ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadMessages"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="300ms"; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadMessages"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""; Source="Console"}
    }
    if ($logContent -match 'SwipeAction - Avg: ([\d.]+)ms, P95: ([\d.]+)ms') {
        $avg = [double]$matches[1]
        $p95 = [double]$matches[2]
        $report += "3. SwipeAction - Avg: $avg ms, P95: $p95 ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SwipeAction"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="10ms"; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SwipeAction"; Metric="P95 Time"; Value=$p95; Unit="ms"; Status="PASSED"; Target="20ms"; Source="Console"}
    }
    if ($logContent -match 'SendMessage - Avg: ([\d.]+)ms, Max: ([\d.]+)ms') {
        $avg = [double]$matches[1]
        $max = [double]$matches[2]
        $report += "4. SendMessage - Avg: $avg ms, Max: $max ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SendMessage"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="100ms"; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SendMessage"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""; Source="Console"}
    }
    
    # Extract System Resource metrics
    $report += "`r`nTEST 5: SYSTEM RESOURCE PERFORMANCE`r`n"
    if ($logContent -match 'Initial CPU usage: ([\d.]+)%') {
        $cpu = [double]$matches[1]
        $report += "1. Initial CPU Usage: $cpu% (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="CPU Usage"; Value=$cpu; Unit="%"; Status="PASSED"; Target=""; Source="Console"}
    }
    if ($logContent -match 'Initial thread count: (\d+)') {
        $threads = [int]$matches[1]
        $report += "2. Initial Thread Count: $threads (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target="50"; Source="Console"}
    }
    if ($logContent -match 'Initial heap size: (\d+)MB') {
        $heap = [int]$matches[1]
        $report += "3. Initial Heap Size: $heap MB (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target="200MB"; Source="Console"}
    }
    if ($logContent -match 'Initial available memory: (\d+)MB') {
        $mem = [int]$matches[1]
        $report += "4. Initial Available Memory: $mem MB (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Available Memory"; Value=$mem; Unit="MB"; Status="PASSED"; Target=""; Source="Console"}
    }
    if ($logContent -match 'Thread count after operations: (\d+) \(increase: (-?\d+)\)') {
        $threads = [int]$matches[1]
        $increase = [int]$matches[2]
        $report += "5. Thread Count After Operations: $threads (increase: $increase) (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target=""; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Thread Increase"; Value=$increase; Unit=""; Status="PASSED"; Target="10"; Source="Console"}
    }
    if ($logContent -match 'Heap size after operations: (\d+)MB \(increase: (-?\d+)MB\)') {
        $heap = [int]$matches[1]
        $increase = [int]$matches[2]
        $report += "6. Heap Size After Operations: $heap MB (increase: $increase MB) (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target=""; Source="Console"}
        $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Heap Increase"; Value=$increase; Unit="MB"; Status="PASSED"; Target="50MB"; Source="Console"}
    }
    if ($logContent -match 'Peak CPU usage: ([\d.]+)%') {
        $cpu = [double]$matches[1]
        $report += "7. Peak CPU Usage: $cpu% (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="CPU Usage"; Value=$cpu; Unit="%"; Status="PASSED"; Target=""; Source="Console"}
    }
    if ($logContent -match 'Peak thread count: (\d+)') {
        $threads = [int]$matches[1]
        $report += "8. Peak Thread Count: $threads (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target="100"; Source="Console"}
    }
    if ($logContent -match 'Peak heap size: (\d+)MB') {
        $heap = [int]$matches[1]
        $report += "9. Peak Heap Size: $heap MB (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target="300MB"; Source="Console"}
    }
}

# ========================================
# TONG KET
# ========================================
$report += "`r`n========================================`r`n"
$report += "TONG KET`r`n"
$report += "========================================`r`n`r`n"

$report += "Tong so metrics da do: $($allMetrics.Count)`r`n"
$passedCount = ($allMetrics | Where-Object { $_.Status -eq 'PASSED' }).Count
$failedCount = ($allMetrics | Where-Object { $_.Status -eq 'FAILED' }).Count
$report += "Metrics tu tests PASSED: $passedCount`r`n"
$report += "Metrics tu tests FAILED: $failedCount`r`n`r`n"

$report += "Phan loai theo category:`r`n"
$categories = $allMetrics | Group-Object -Property Category
foreach ($cat in $categories) {
    $report += "  - $($cat.Name): $($cat.Count) metrics`r`n"
}

$report += "`r`nPhan loai theo source:`r`n"
$sources = $allMetrics | Group-Object -Property Source
foreach ($src in $sources) {
    $report += "  - $($src.Name): $($src.Count) metrics`r`n"
}

# Save text report
[System.IO.File]::WriteAllText($outputFile, $report, [System.Text.Encoding]::UTF8)

# Save CSV
if ($allMetrics.Count -gt 0) {
    $allMetrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8
}

Write-Host "Da luu tat ca so lieu!" -ForegroundColor Green
Write-Host "   Text: $outputFile" -ForegroundColor Yellow
Write-Host "   CSV: $csvFile" -ForegroundColor Yellow
Write-Host ""
Write-Host "Tong so metrics: $($allMetrics.Count)" -ForegroundColor Cyan
Write-Host "  - PASSED: $passedCount" -ForegroundColor Green
Write-Host "  - FAILED: $failedCount" -ForegroundColor Yellow

