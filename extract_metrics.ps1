# Extract performance metrics from test reports and console output
param(
    [string]$OutputDir = "performance_results"
)

$ErrorActionPreference = "SilentlyContinue"

Write-Host "Extracting performance metrics..." -ForegroundColor Cyan

# Create metrics file
$metricsFile = Join-Path $OutputDir "metrics.csv"
$metrics = @()

# Extract from HTML test reports
$htmlReportPath = Join-Path $OutputDir "reports\androidTests"
if (Test-Path $htmlReportPath) {
    $htmlFiles = Get-ChildItem -Path $htmlReportPath -Filter "*.html" -Recurse
    
    foreach ($htmlFile in $htmlFiles) {
        $content = Get-Content $htmlFile -Raw
        
        # Extract test names and results
        if ($content -match 'class="test">([^<]+)</td>') {
            $testName = $matches[1]
            
            # Extract duration if available
            if ($content -match 'class="duration">([^<]+)</td>') {
                $duration = $matches[1]
                $metrics += [PSCustomObject]@{
                    Test = $testName
                    Metric = "Duration"
                    Value = $duration
                    Unit = "ms"
                    Source = "HTML Report"
                }
            }
        }
    }
}

# Extract from console output patterns (if log file exists)
$logPatterns = @{
    "render time" = "Render Time"
    "scroll.*Average" = "Scroll Average"
    "scroll.*Max" = "Scroll Max"
    "memory usage" = "Memory Usage"
    "Avg:" = "Average Time"
    "P95:" = "P95 Time"
}

# Try to extract from recent test output
$testOutputPath = "app\build\outputs\androidTest-results\connected"
if (Test-Path $testOutputPath) {
    $logFiles = Get-ChildItem -Path $testOutputPath -Filter "*.txt" -Recurse | Sort-Object LastWriteTime -Descending | Select-Object -First 5
    
    foreach ($logFile in $logFiles) {
        $content = Get-Content $logFile -Raw
        
        # Extract render times
        if ($content -match '(\w+Screen) render time: (\d+)ms') {
            $screen = $matches[1]
            $time = $matches[2]
            $metrics += [PSCustomObject]@{
                Test = $screen
                Metric = "Render Time"
                Value = $time
                Unit = "ms"
                Source = "Console Output"
            }
        }
        
        # Extract scroll metrics
        if ($content -match '(\w+Screen) scrollable.*Initial: (\d+)ms.*Average idle: ([\d.]+)ms.*Max: (\d+)ms') {
            $screen = $matches[1]
            $initial = $matches[2]
            $avg = $matches[3]
            $max = $matches[4]
            
            $metrics += [PSCustomObject]@{
                Test = "$screen Scroll"
                Metric = "Initial Composition"
                Value = $initial
                Unit = "ms"
                Source = "Console Output"
            }
            $metrics += [PSCustomObject]@{
                Test = "$screen Scroll"
                Metric = "Average Idle"
                Value = $avg
                Unit = "ms"
                Source = "Console Output"
            }
            $metrics += [PSCustomObject]@{
                Test = "$screen Scroll"
                Metric = "Max Idle"
                Value = $max
                Unit = "ms"
                Source = "Console Output"
            }
        }
        
        # Extract memory metrics
        if ($content -match '(\w+ memory usage|Initial memory|Peak memory): ([\d.]+)MB') {
            $metricName = $matches[1]
            $value = $matches[2]
            $metrics += [PSCustomObject]@{
                Test = "Memory"
                Metric = $metricName
                Value = $value
                Unit = "MB"
                Source = "Console Output"
            }
        }
        
        # Extract ViewModel metrics
        if ($content -match '(\w+) - Avg: ([\d.]+)ms') {
            $operation = $matches[1]
            $avg = $matches[2]
            $metrics += [PSCustomObject]@{
                Test = $operation
                Metric = "Average Time"
                Value = $avg
                Unit = "ms"
                Source = "Console Output"
            }
        }
    }
}

# Extract from macrobenchmark JSON files
$benchmarkPath = Join-Path $OutputDir "benchmarks"
if (Test-Path $benchmarkPath) {
    $jsonFiles = Get-ChildItem -Path $benchmarkPath -Filter "*.json" -Recurse
    
    foreach ($jsonFile in $jsonFiles) {
        try {
            $json = Get-Content $jsonFile -Raw | ConvertFrom-Json
            
            if ($json.metrics) {
                foreach ($metric in $json.metrics) {
                    if ($metric.data) {
                        foreach ($dataPoint in $metric.data) {
                            $metrics += [PSCustomObject]@{
                                Test = $json.benchmarkName
                                Metric = $metric.name
                                Value = $dataPoint.value
                                Unit = $metric.unit
                                Source = "Macrobenchmark JSON"
                            }
                        }
                    }
                }
            }
        } catch {
            # Skip invalid JSON
        }
    }
}

# Export to CSV
if ($metrics.Count -gt 0) {
    $metrics | Export-Csv -Path $metricsFile -NoTypeInformation -Encoding UTF8
    Write-Host "  ✓ Extracted $($metrics.Count) metrics to $metricsFile" -ForegroundColor Green
} else {
    Write-Host "  ⚠ No metrics found" -ForegroundColor Yellow
}

# Create summary JSON
$summary = @{
    Timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    TotalMetrics = $metrics.Count
    Metrics = $metrics
}

$summaryFile = Join-Path $OutputDir "metrics.json"
$summary | ConvertTo-Json -Depth 10 | Out-File $summaryFile -Encoding UTF8

Write-Host "  ✓ Summary JSON created: $summaryFile" -ForegroundColor Green

