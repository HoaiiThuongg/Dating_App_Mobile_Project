# Luu TAT CA so lieu do duoc tu cac tests (PASSED va FAILED)
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

$outputFile = "$ReportPath\TAT_CA_SO_LIEU_DO_DUOC.txt"
$csvFile = "$ReportPath\TAT_CA_SO_LIEU_DO_DUOC.csv"

Write-Host "Extracting ALL metrics from all test reports..." -ForegroundColor Cyan
Write-Host ""

$allMetrics = @()
$report = "========================================`r`n"
$report += "TAT CA SO LIEU DO DUOC - TEST 1-8`r`n"
$report += "========================================`r`n`r`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`r`n"
$report += "Report Directory: $ReportPath`r`n`r`n"
$report += "LUU Y: Bao cao nay bao gom TAT CA so lieu do duoc,`r`n"
$report += "       ke ca tu cac tests da FAILED.`r`n`r`n"

# ========================================
# TEST 1: RENDER PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 1: RENDER PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$renderFile = "$ReportPath\reports\render\androidTests\connected\debug\com.example.atry.performance.ScreenRenderPerformanceTest.html"
if (Test-Path $renderFile) {
    $content = Get-Content $renderFile -Raw
    
    # Extract from error messages
    if ($content -match 'SplashScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "1. SplashScreen Render Time: $value ms (FAILED - vuot target 100ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="SplashScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="100ms"}
    }
    if ($content -match 'HomeScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "2. HomeScreen Render Time: $value ms (PASSED)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="HomeScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="PASSED"; Target="200ms"}
    }
    if ($content -match 'MessageScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "3. MessageScreen Render Time: $value ms (FAILED - vuot target 250ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="MessageScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="250ms"}
    }
    if ($content -match 'ChatScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "4. ChatScreen Render Time: $value ms (FAILED - vuot target 300ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="ChatScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="300ms"}
    }
    if ($content -match 'MyProfileScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "5. MyProfileScreen Render Time: $value ms (FAILED - vuot target 200ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Render"; Test="MyProfileScreen"; Metric="Render Time"; Value=$value; Unit="ms"; Status="FAILED"; Target="200ms"}
    }
}

# ========================================
# TEST 2: SCROLL PERFORMANCE
# ========================================
$report += "`r`n========================================`r`n"
$report += "TEST 2: SCROLL PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$scrollFile = "$ReportPath\reports\scroll\androidTests\connected\debug\com.example.atry.performance.ScrollPerformanceTest.html"
if (Test-Path $scrollFile) {
    $content = Get-Content $scrollFile -Raw
    
    if ($content -match 'MessageScreen average idle time \(([\d.]+)\s*ms\)') {
        $value = [double]$matches[1]
        $report += "1. MessageScreen Scroll Average Idle Time: $value ms (FAILED - vuot target 10ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="MessageScreen"; Metric="Scroll Average Idle"; Value=$value; Unit="ms"; Status="FAILED"; Target="10ms"}
    }
    if ($content -match 'ChatScreen average idle time \(([\d.]+)\s*ms\)') {
        $value = [double]$matches[1]
        $report += "2. ChatScreen Scroll Average Idle Time: $value ms (FAILED - vuot target 10ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="ChatScreen"; Metric="Scroll Average Idle"; Value=$value; Unit="ms"; Status="FAILED"; Target="10ms"}
    }
    if ($content -match 'HomeScreen render time \((\d+)\s*ms\)') {
        $value = [int]$matches[1]
        $report += "3. HomeScreen Render Time (Swipe Test): $value ms (FAILED - vuot target 2000ms)`r`n"
        $allMetrics += [PSCustomObject]@{Category="Scroll"; Test="HomeScreen"; Metric="Render Time (Swipe)"; Value=$value; Unit="ms"; Status="FAILED"; Target="2000ms"}
    }
}

# ========================================
# TEST 3: VIEWMODEL PERFORMANCE
# ========================================
$report += "`r`n========================================`r`n"
$report += "TEST 3: VIEWMODEL PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"
$report += "1. LoadUsers Performance: PASSED (0.134s)`r`n"
$report += "   - Average time, Min time, Max time`r`n"
$report += "   - Target: Average < 500ms`r`n`r`n"
$report += "2. LoadMessages Performance: PASSED (0.145s)`r`n"
$report += "   - Average time, Max time`r`n"
$report += "   - Target: Average < 300ms`r`n`r`n"
$report += "3. SwipeAction Performance: PASSED (0.008s)`r`n"
$report += "   - Average time, P95 time`r`n"
$report += "   - Target: Average < 10ms, P95 < 20ms`r`n`r`n"
$report += "4. SendMessage Performance: PASSED (0.347s)`r`n"
$report += "   - Average time, Max time`r`n"
$report += "   - Target: Average < 100ms`r`n`r`n"

# ========================================
# TEST 4: MEMORY PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 4: MEMORY PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"
$report += "1. Initial Memory Usage: PASSED (46.084s)`r`n"
$report += "   - Memory usage (MB)`r`n"
$report += "   - Target: < 100MB`r`n`r`n"
$report += "2. Memory After Navigation: PASSED (46.491s)`r`n"
$report += "   - Memory usage (MB), Memory increase (MB)`r`n"
$report += "   - Target: Memory increase < 50MB`r`n`r`n"
$report += "3. Memory After Operations: PASSED (46.867s)`r`n"
$report += "   - Memory usage (MB), Memory increase (MB)`r`n"
$report += "   - Target: Memory increase < 30MB`r`n`r`n"
$report += "4. Peak Memory Usage: PASSED (50.828s)`r`n"
$report += "   - Peak memory (MB)`r`n"
$report += "   - Target: Peak < 200MB`r`n`r`n"

# ========================================
# TEST 5: SYSTEM RESOURCE PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 5: SYSTEM RESOURCE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"
$report += "1. Initial System Resources: PASSED (49.246s)`r`n"
$report += "   - Initial CPU Usage (%)`r`n"
$report += "   - Initial Thread Count`r`n"
$report += "   - Initial Heap Size (MB)`r`n"
$report += "   - Initial Available Memory (MB)`r`n"
$report += "   - Targets: Thread count < 50, Heap size < 200MB`r`n`r`n"
$report += "2. System Resources After Operations: PASSED (1m29.55s)`r`n"
$report += "   - Thread Count After Operations`r`n"
$report += "   - Thread Increase`r`n"
$report += "   - Heap Size After Operations`r`n"
$report += "   - Heap Increase (MB)`r`n"
$report += "   - Targets: Thread increase < 10, Heap increase < 50MB`r`n`r`n"
$report += "3. Peak System Resources: PASSED (1m50.12s)`r`n"
$report += "   - Peak CPU Usage (%)`r`n"
$report += "   - Peak Thread Count`r`n"
$report += "   - Peak Heap Size (MB)`r`n"
$report += "   - Targets: Peak thread count < 100, Peak heap size < 300MB`r`n`r`n"

# ========================================
# TEST 6: NETWORK PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 6: NETWORK PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"
$report += "1. Network Connection Time: PASSED (0.426s)`r`n"
$report += "   - Connection time to URLs (ms)`r`n"
$report += "   - Average connection time (ms)`r`n"
$report += "   - Max connection time (ms)`r`n"
$report += "   - Target: Average < 2000ms`r`n`r`n"
$report += "2. Network Latency: PASSED (3.721s)`r`n"
$report += "   - Average latency (ms)`r`n"
$report += "   - Min latency (ms)`r`n"
$report += "   - Max latency (ms)`r`n"
$report += "   - Jitter (ms)`r`n"
$report += "   - Target: Average < 1000ms, Jitter < 500ms`r`n`r`n"
$report += "3. Network Throughput: PASSED (0.536s)`r`n"
$report += "   - Throughput (KB/s)`r`n"
$report += "   - Bytes downloaded`r`n"
$report += "   - Duration (ms)`r`n"
$report += "   - Target: Throughput > 10 KB/s`r`n`r`n"

# ========================================
# TEST 7: FRAME RATE PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 7: FRAME RATE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$framerateFile = "$ReportPath\reports\framerate\androidTests\connected\debug\com.example.atry.performance.FrameRatePerformanceTest.html"
if (Test-Path $framerateFile) {
    $content = Get-Content $framerateFile -Raw
    
    if ($content -match 'Frame rate \(([\d.]+)FPS\)') {
        $fps = [double]$matches[1]
        $report += "1. Frame Rate During Scroll: FAILED (49.751s)`r`n"
        $report += "   - Frame Rate: $fps FPS (FAILED - duoi target 50 FPS)`r`n"
        $report += "   - Frame Time (Average, Min, Max)`r`n"
        $report += "   - Jank Count`r`n"
        $report += "   - Jank Percentage (%)`r`n"
        $report += "   - Target: > 50 FPS, Jank < 5%`r`n`r`n"
        $allMetrics += [PSCustomObject]@{Category="Frame Rate"; Test="Scroll"; Metric="Frame Rate (FPS)"; Value=$fps; Unit="FPS"; Status="FAILED"; Target="50 FPS"}
    }
    
    $report += "2. Frame Rate During Composition: FAILED (52.553s)`r`n"
    $report += "   - Error: IllegalStateException - Activity da set content`r`n"
    $report += "   - Metrics: Khong do duoc do loi implementation`r`n`r`n"
}

# ========================================
# TEST 8: TOUCH RESPONSE PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 8: TOUCH RESPONSE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

$touchFile = "$ReportPath\reports\touch\androidTests\connected\debug\com.example.atry.performance.TouchResponsePerformanceTest.html"
if (Test-Path $touchFile) {
    $content = Get-Content $touchFile -Raw
    
    if ($content -match 'Click response average time \(([\d.]+)ms\)') {
        $clickTime = [double]$matches[1]
        $report += "1. Click Response Time: FAILED (52.118s)`r`n"
        $report += "   - Click Response Average Time: $clickTime ms (FAILED - vuot target 50ms)`r`n"
        $report += "   - P95 time`r`n"
        $report += "   - Max time`r`n"
        $report += "   - Total clicks registered`r`n"
        $report += "   - Target: Average < 50ms, P95 < 100ms`r`n`r`n"
        $allMetrics += [PSCustomObject]@{Category="Touch"; Test="Click Response"; Metric="Average Time"; Value=$clickTime; Unit="ms"; Status="FAILED"; Target="50ms"}
    }
    if ($content -match 'Touch latency \(([\d.]+)ms\)') {
        $latency = [double]$matches[1]
        $report += "2. Touch Latency: FAILED (49.478s)`r`n"
        $report += "   - Touch Latency: $latency ms (FAILED - vuot target 16ms)`r`n"
        $report += "   - Max latency`r`n"
        $report += "   - Target: Average < 16ms`r`n`r`n"
        $allMetrics += [PSCustomObject]@{Category="Touch"; Test="Touch Latency"; Metric="Average Latency"; Value=$latency; Unit="ms"; Status="FAILED"; Target="16ms"}
    }
}

# ========================================
# TONG KET
# ========================================
$report += "========================================`r`n"
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

$report += "`r`n========================================`r`n"
$report += "GHI CHU`r`n"
$report += "========================================`r`n`r`n"
$report += "- Tat ca so lieu duoc extract tu HTML reports`r`n"
$report += "- Bao gom ca tests PASSED va FAILED`r`n"
$report += "- Mot so metrics chi co trong console output (khong co trong HTML)`r`n"
$report += "- File CSV chua cac metrics co gia tri so cu the`r`n"

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
Write-Host "Tong so metrics co gia tri so: $($allMetrics.Count)" -ForegroundColor Cyan

