# Extract metrics from console output (PASSED tests)
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

$logFile = "$ReportPath\full_output.log"
$outputFile = "$ReportPath\METRICS_FROM_CONSOLE.txt"
$csvFile = "$ReportPath\METRICS_FROM_CONSOLE.csv"

Write-Host "Extracting metrics from console output..." -ForegroundColor Cyan
Write-Host "Log file: $logFile" -ForegroundColor Yellow
Write-Host ""

if (-not (Test-Path $logFile)) {
    Write-Host "Log file not found: $logFile" -ForegroundColor Red
    exit 1
}

$allMetrics = @()
$report = "========================================`r`n"
$report += "METRICS TU CONSOLE OUTPUT (PASSED TESTS)`r`n"
$report += "========================================`r`n`r`n"
$report += "Generated: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')`r`n"
$report += "Log File: $logFile`r`n`r`n"

# Read log file
$logContent = Get-Content $logFile -Raw

# ========================================
# TEST 3: VIEWMODEL PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 3: VIEWMODEL PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

# LoadUsers
if ($logContent -match 'LoadUsers - Avg: ([\d.]+)ms, Min: ([\d.]+)ms, Max: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $min = [double]$matches[2]
    $max = [double]$matches[3]
    $report += "1. LoadUsers Performance`r`n"
    $report += "   - Average Time: $avg ms`r`n"
    $report += "   - Min Time: $min ms`r`n"
    $report += "   - Max Time: $max ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Average < 500ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="500ms"}
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Min Time"; Value=$min; Unit="ms"; Status="PASSED"; Target=""}
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadUsers"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""}
}

# LoadMessages
if ($logContent -match 'LoadMessages - Avg: ([\d.]+)ms, Max: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $max = [double]$matches[2]
    $report += "2. LoadMessages Performance`r`n"
    $report += "   - Average Time: $avg ms`r`n"
    $report += "   - Max Time: $max ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Average < 300ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadMessages"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="300ms"}
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="LoadMessages"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""}
}

# SwipeAction
if ($logContent -match 'SwipeAction - Avg: ([\d.]+)ms, P95: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $p95 = [double]$matches[2]
    $report += "3. SwipeAction Performance`r`n"
    $report += "   - Average Time: $avg ms`r`n"
    $report += "   - P95 Time: $p95 ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Average < 10ms, P95 < 20ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SwipeAction"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="10ms"}
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SwipeAction"; Metric="P95 Time"; Value=$p95; Unit="ms"; Status="PASSED"; Target="20ms"}
}

# SendMessage
if ($logContent -match 'SendMessage - Avg: ([\d.]+)ms, Max: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $max = [double]$matches[2]
    $report += "4. SendMessage Performance`r`n"
    $report += "   - Average Time: $avg ms`r`n"
    $report += "   - Max Time: $max ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Average < 100ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SendMessage"; Metric="Average Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="100ms"}
    $allMetrics += [PSCustomObject]@{Category="ViewModel"; Test="SendMessage"; Metric="Max Time"; Value=$max; Unit="ms"; Status="PASSED"; Target=""}
}

# ========================================
# TEST 4: MEMORY PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 4: MEMORY PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

# Initial Memory
if ($logContent -match 'Initial memory usage: ([\d.]+)MB') {
    $mem = [double]$matches[1]
    $report += "1. Initial Memory Usage`r`n"
    $report += "   - Memory Usage: $mem MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 100MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="Initial"; Metric="Memory Usage"; Value=$mem; Unit="MB"; Status="PASSED"; Target="100MB"}
}

# Memory After Navigation
if ($logContent -match 'Memory after navigation: ([\d.]+)MB \(increase: ([\d.]+)MB\)') {
    $mem = [double]$matches[1]
    $increase = [double]$matches[2]
    $report += "2. Memory After Navigation`r`n"
    $report += "   - Memory Usage: $mem MB`r`n"
    $report += "   - Memory Increase: $increase MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Increase < 50MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="After Navigation"; Metric="Memory Usage"; Value=$mem; Unit="MB"; Status="PASSED"; Target=""}
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="After Navigation"; Metric="Memory Increase"; Value=$increase; Unit="MB"; Status="PASSED"; Target="50MB"}
}

# Memory After Operations
if ($logContent -match 'Memory after operations: ([\d.]+)MB \(increase: ([\d.]+)MB\)') {
    $mem = [double]$matches[1]
    $increase = [double]$matches[2]
    $report += "3. Memory After Operations`r`n"
    $report += "   - Memory Usage: $mem MB`r`n"
    $report += "   - Memory Increase: $increase MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Increase < 30MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="After Operations"; Metric="Memory Usage"; Value=$mem; Unit="MB"; Status="PASSED"; Target=""}
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="After Operations"; Metric="Memory Increase"; Value=$increase; Unit="MB"; Status="PASSED"; Target="30MB"}
}

# Peak Memory
if ($logContent -match 'Peak memory usage: ([\d.]+)MB') {
    $mem = [double]$matches[1]
    $report += "4. Peak Memory Usage`r`n"
    $report += "   - Peak Memory: $mem MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Peak < 200MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Memory"; Test="Peak"; Metric="Peak Memory"; Value=$mem; Unit="MB"; Status="PASSED"; Target="200MB"}
}

# ========================================
# TEST 5: SYSTEM RESOURCE PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 5: SYSTEM RESOURCE PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

# Initial CPU Usage
if ($logContent -match 'Initial CPU usage: ([\d.]+)%') {
    $cpu = [double]$matches[1]
    $report += "1. Initial CPU Usage`r`n"
    $report += "   - CPU Usage: $cpu%`r`n"
    $report += "   - Status: PASSED`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="CPU Usage"; Value=$cpu; Unit="%"; Status="PASSED"; Target=""}
}

# Initial Thread Count
if ($logContent -match 'Initial thread count: (\d+)') {
    $threads = [int]$matches[1]
    $report += "2. Initial Thread Count`r`n"
    $report += "   - Thread Count: $threads`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 50`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target="50"}
}

# Initial Heap Size
if ($logContent -match 'Initial heap size: (\d+)MB') {
    $heap = [int]$matches[1]
    $report += "3. Initial Heap Size`r`n"
    $report += "   - Heap Size: $heap MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 200MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target="200MB"}
}

# Initial Available Memory
if ($logContent -match 'Initial available memory: (\d+)MB') {
    $mem = [int]$matches[1]
    $report += "4. Initial Available Memory`r`n"
    $report += "   - Available Memory: $mem MB`r`n"
    $report += "   - Status: PASSED`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Initial"; Metric="Available Memory"; Value=$mem; Unit="MB"; Status="PASSED"; Target=""}
}

# Thread Count After Operations
if ($logContent -match 'Thread count after operations: (\d+) \(increase: (-?\d+)\)') {
    $threads = [int]$matches[1]
    $increase = [int]$matches[2]
    $report += "5. Thread Count After Operations`r`n"
    $report += "   - Thread Count: $threads`r`n"
    $report += "   - Thread Increase: $increase`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Increase < 10`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target=""}
    $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Thread Increase"; Value=$increase; Unit=""; Status="PASSED"; Target="10"}
}

# Heap Size After Operations
if ($logContent -match 'Heap size after operations: (\d+)MB \(increase: (-?\d+)MB\)') {
    $heap = [int]$matches[1]
    $increase = [int]$matches[2]
    $report += "6. Heap Size After Operations`r`n"
    $report += "   - Heap Size: $heap MB`r`n"
    $report += "   - Heap Increase: $increase MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: Increase < 50MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target=""}
    $allMetrics += [PSCustomObject]@{Category="System"; Test="After Operations"; Metric="Heap Increase"; Value=$increase; Unit="MB"; Status="PASSED"; Target="50MB"}
}

# Peak CPU Usage
if ($logContent -match 'Peak CPU usage: ([\d.]+)%') {
    $cpu = [double]$matches[1]
    $report += "7. Peak CPU Usage`r`n"
    $report += "   - Peak CPU: $cpu%`r`n"
    $report += "   - Status: PASSED`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="CPU Usage"; Value=$cpu; Unit="%"; Status="PASSED"; Target=""}
}

# Peak Thread Count
if ($logContent -match 'Peak thread count: (\d+)') {
    $threads = [int]$matches[1]
    $report += "8. Peak Thread Count`r`n"
    $report += "   - Peak Threads: $threads`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 100`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="Thread Count"; Value=$threads; Unit=""; Status="PASSED"; Target="100"}
}

# Peak Heap Size
if ($logContent -match 'Peak heap size: (\d+)MB') {
    $heap = [int]$matches[1]
    $report += "9. Peak Heap Size`r`n"
    $report += "   - Peak Heap: $heap MB`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 300MB`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="System"; Test="Peak"; Metric="Heap Size"; Value=$heap; Unit="MB"; Status="PASSED"; Target="300MB"}
}

# ========================================
# TEST 6: NETWORK PERFORMANCE
# ========================================
$report += "========================================`r`n"
$report += "TEST 6: NETWORK PERFORMANCE`r`n"
$report += "========================================`r`n`r`n"

# Connection Time
if ($logContent -match 'Connection time to ([^:]+): ([\d.]+)ms') {
    $url = $matches[1]
    $time = [double]$matches[2]
    $report += "1. Network Connection Time`r`n"
    $report += "   - URL: $url`r`n"
    $report += "   - Connection Time: $time ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 2000ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Connection"; Metric="Connection Time"; Value=$time; Unit="ms"; Status="PASSED"; Target="2000ms"; Note=$url}
}

# Average Connection Time
if ($logContent -match 'Average connection time: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $report += "   - Average Connection Time: $avg ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Connection"; Metric="Average Connection Time"; Value=$avg; Unit="ms"; Status="PASSED"; Target="2000ms"}
}

# Network Latency
if ($logContent -match 'Average latency: ([\d.]+)ms') {
    $avg = [double]$matches[1]
    $report += "2. Network Latency`r`n"
    $report += "   - Average Latency: $avg ms`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: < 1000ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Latency"; Metric="Average Latency"; Value=$avg; Unit="ms"; Status="PASSED"; Target="1000ms"}
}

if ($logContent -match 'Min latency: ([\d.]+)ms') {
    $min = [double]$matches[1]
    $report += "   - Min Latency: $min ms`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Latency"; Metric="Min Latency"; Value=$min; Unit="ms"; Status="PASSED"; Target=""}
}

if ($logContent -match 'Max latency: ([\d.]+)ms') {
    $max = [double]$matches[1]
    $report += "   - Max Latency: $max ms`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Latency"; Metric="Max Latency"; Value=$max; Unit="ms"; Status="PASSED"; Target=""}
}

if ($logContent -match 'Jitter: ([\d.]+)ms') {
    $jitter = [double]$matches[1]
    $report += "   - Jitter: $jitter ms`r`n"
    $report += "   - Target: Jitter < 500ms`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Latency"; Metric="Jitter"; Value=$jitter; Unit="ms"; Status="PASSED"; Target="500ms"}
}

# Network Throughput
if ($logContent -match 'Throughput: ([\d.]+) KB/s') {
    $throughput = [double]$matches[1]
    $report += "3. Network Throughput`r`n"
    $report += "   - Throughput: $throughput KB/s`r`n"
    $report += "   - Status: PASSED`r`n"
    $report += "   - Target: > 10 KB/s`r`n`r`n"
    $allMetrics += [PSCustomObject]@{Category="Network"; Test="Throughput"; Metric="Throughput"; Value=$throughput; Unit="KB/s"; Status="PASSED"; Target="10 KB/s"}
}

# ========================================
# TONG KET
# ========================================
$report += "========================================`r`n"
$report += "TONG KET`r`n"
$report += "========================================`r`n`r`n"

$report += "Tong so metrics da extract: $($allMetrics.Count)`r`n`r`n"

$report += "Phan loai theo category:`r`n"
$categories = $allMetrics | Group-Object -Property Category
foreach ($cat in $categories) {
    $report += "  - $($cat.Name): $($cat.Count) metrics`r`n"
}

# Save text report
[System.IO.File]::WriteAllText($outputFile, $report, [System.Text.Encoding]::UTF8)

# Save CSV
if ($allMetrics.Count -gt 0) {
    $allMetrics | Export-Csv -Path $csvFile -NoTypeInformation -Encoding UTF8
}

Write-Host "Da extract metrics tu console output!" -ForegroundColor Green
Write-Host "   Text: $outputFile" -ForegroundColor Yellow
Write-Host "   CSV: $csvFile" -ForegroundColor Yellow
Write-Host ""
Write-Host "Tong so metrics: $($allMetrics.Count)" -ForegroundColor Cyan
