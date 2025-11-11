# extract_metrics.ps1 - Script to extract metrics from performance and UI test results
param(
    [string]$PerformanceResultsDir = "./performance_results",
    [string]$UITestResultsDir = "./ui_test_results",
    [string]$OutputDir = "./extracted_metrics"
)

# Create output directory if it doesn't exist
if (!(Test-Path $OutputDir)) {
    New-Item -ItemType Directory -Path $OutputDir -Force
}

Write-Host "=== EXTRACTING PERFORMANCE METRICS ===" -ForegroundColor Green

# Function to extract metrics from a txt file
function Extract-PerformanceMetrics {
    param([string]$FilePath)
    
    $metrics = @()
    if (Test-Path $FilePath) {
        $content = Get-Content $FilePath -Raw
        
        # Pattern 1: Vietnamese format "Name: Value Unit (FAILED - exceeds target TargetValue)"
        $pattern1 = '(?<name>[^:]+?):\s*(?<value>[\d.]+)\s*(?<unit>\w+)?\s*\((?<status>PASSED|FAILED)\s*-\s*[^\d]*(?<target>[\d.]+)\s*\w*\)'
        $matches1 = [regex]::Matches($content, $pattern1)
        
        foreach ($match in $matches1) {
            $metrics += @{
                Name = $match.Groups['name'].Value.Trim()
                Metric = $match.Groups['name'].Value.Trim()
                Value = [double]$match.Groups['value'].Value
                Unit = $match.Groups['unit'].Value.Trim()
                Target = [double]$match.Groups['target'].Value
                Status = $match.Groups['status'].Value
            }
        }
        
        # Pattern 2: Format "Frame Rate: Value FPS (FAILED - below target TargetValue)"
        $pattern2 = '(?<metric>Frame Rate|Click Response Average Time|Touch Latency):\s*(?<value>[\d.]+)\s*(?<unit>\w+)?\s*\((?<status>PASSED|FAILED)\s*-\s*[^\d]*(?<target>[\d.]+)\s*\w*\)'
        $matches2 = [regex]::Matches($content, $pattern2)
        
        foreach ($match in $matches2) {
            $metrics += @{
                Name = $match.Groups['metric'].Value.Trim()
                Metric = $match.Groups['metric'].Value.Trim()
                Value = [double]$match.Groups['value'].Value
                Unit = $match.Groups['unit'].Value.Trim()
                Target = [double]$match.Groups['target'].Value
                Status = $match.Groups['status'].Value
            }
        }
        
        # Pattern 3: Simple format "Name: Value Unit"
        $pattern3 = '^\s*\d+\.\s*(?<name>[^:]+?):\s*(?<value>[\d.]+)\s*(?<unit>\w+)?'
        $matches3 = [regex]::Matches($content, $pattern3, [System.Text.RegularExpressions.RegexOptions]::Multiline)
        
        foreach ($match in $matches3) {
            $metricName = $match.Groups['name'].Value.Trim()
            $value = [double]$match.Groups['value'].Value
            $unit = $match.Groups['unit'].Value.Trim()
            
            # Determine target based on metric name
            $target = switch -Regex ($metricName) {
                "Render Time|Time" { 300 }
                "FPS|Frame Rate" { 50 }
                "Memory" { 100 }
                "Response|Latency" { 50 }
                default { 0 }
            }
            
            $status = if ($unit -eq "FPS") {
                if ($value -ge $target) { "PASS" } else { "FAIL" }
            } else {
                if ($value -le $target) { "PASS" } else { "FAIL" }
            }
            
            $metrics += @{
                Name = $metricName
                Metric = $metricName
                Value = $value
                Unit = $unit
                Target = $target
                Status = $status
            }
        }

        # Pattern 4: Render time lines e.g. "SplashScreen render time: 123ms"
        $pattern4 = '(?<screen>\w+Screen)\s+render\s+time:\s*(?<value>[\d.]+)\s*ms'
        $matches4 = [regex]::Matches($content, $pattern4, [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $matches4) {
            $screen = $match.Groups['screen'].Value.Trim()
            $value = [double]$match.Groups['value'].Value
            $target = switch ($screen) {
                'SplashScreen' { 100 }
                'HomeScreen' { 200 }
                'MessageScreen' { 250 }
                'ChatScreen' { 300 }
                'MyProfileScreen' { 200 }
                default { 300 }
            }
            $status = if ($value -le $target) { 'PASS' } else { 'FAIL' }
            $metrics += @{
                Name = $screen
                Metric = 'Render Time'
                Value = $value
                Unit = 'ms'
                Target = $target
                Status = $status
            }
        }

        # Pattern 5: METRIC console lines from PerformanceMetricsLogger
        # Example: METRIC: Frame Rate | Scroll | Frame Rate (FPS): 46.60 FPS | Status: FAILED | Target: 50 FPS
        $pattern5 = '^METRIC:\s*(?<category>[^|]+)\|\s*(?<test>[^|]+)\|\s*(?<metric>[^:]+):\s*(?<value>[\d.]+)\s*(?<unit>\w+)?\s*\|\s*Status:\s*(?<status>\w+)\s*\|\s*Target:\s*(?<target>.*)$'
        $matches5 = [regex]::Matches($content, $pattern5, [System.Text.RegularExpressions.RegexOptions]::Multiline)
        foreach ($match in $matches5) {
            $metrics += @{
                Name = ("{0} - {1}" -f ($match.Groups['category'].Value.Trim()), ($match.Groups['test'].Value.Trim()))
                Metric = $match.Groups['metric'].Value.Trim()
                Value = [double]$match.Groups['value'].Value
                Unit = $match.Groups['unit'].Value.Trim()
                Target = ($match.Groups['target'].Value.Trim() -replace '[^\d.]','')
                Status = $match.Groups['status'].Value.Trim().ToUpper()
            }
        }

        # Pattern 6: Frame/Jank summary lines from FrameRatePerformanceTest
        # "Frame rate - Avg: 46.60 FPS"
        $pattern6a = 'Frame\s+rate\s+-\s+Avg:\s*(?<value>[\d.]+)\s*FPS'
        $matches6a = [regex]::Matches($content, $pattern6a, [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $matches6a) {
            $value = [double]$match.Groups['value'].Value
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Frame Rate (FPS)'
                Value = $value
                Unit = 'FPS'
                Target = 50
                Status = if ($value -ge 50) { 'PASS' } else { 'FAIL' }
            }
        }
        # "Frame time - Avg: 18.2ms, Min: 12ms, Max: 30ms"
        $pattern6b = 'Frame\s+time\s+-\s+Avg:\s*(?<avg>[\d.]+)\s*ms,\s*Min:\s*(?<min>[\d.]+)\s*ms,\s*Max:\s*(?<max>[\d.]+)\s*ms'
        $matches6b = [regex]::Matches($content, $pattern6b, [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $matches6b) {
            $avg = [double]$match.Groups['avg'].Value
            $min = [double]$match.Groups['min'].Value
            $max = [double]$match.Groups['max'].Value
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Average Frame Time'
                Value = $avg
                Unit = 'ms'
                Target = 16
                Status = if ($avg -le 16) { 'PASS' } else { 'FAIL' }
            }
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Min Frame Time'
                Value = $min
                Unit = 'ms'
                Target = 16
                Status = if ($min -le 16) { 'PASS' } else { 'FAIL' }
            }
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Max Frame Time'
                Value = $max
                Unit = 'ms'
                Target = 33
                Status = if ($max -le 33) { 'PASS' } else { 'FAIL' }
            }
        }
        # "Jank - Count: 12, Percentage: 3.50%"
        $pattern6c = 'Jank\s+-\s+Count:\s*(?<count>[\d.]+),\s*Percentage:\s*(?<pct>[\d.]+)\s*%'
        $matches6c = [regex]::Matches($content, $pattern6c, [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
        foreach ($match in $matches6c) {
            $count = [double]$match.Groups['count'].Value
            $pct = [double]$match.Groups['pct'].Value
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Jank Count'
                Value = $count
                Unit = ''
                Target = 0
                Status = ''
            }
            $metrics += @{
                Name = 'Scroll'
                Metric = 'Jank Percentage'
                Value = $pct
                Unit = '%'
                Target = 5
                Status = if ($pct -le 5) { 'PASS' } else { 'FAIL' }
            }
        }
    }
    return $metrics
}

# Function to extract metrics from console output
function Extract-ConsoleMetrics {
    param([string]$FilePath)
    
    $metrics = @()
    if (Test-Path $FilePath) {
        $content = Get-Content $FilePath
        
        foreach ($line in $content) {
            # Find lines containing "Time:", "FPS:", "Memory:", etc.
            if ($line -match '(\w+):\s*([\d.]+)\s*(\w+)?') {
                $metricName = $matches[1]
                $value = [double]$matches[2]
                $unit = $matches[3]
                
                # Determine target based on metric type
                $target = switch ($metricName) {
                    "Time" { 300 }  # 300ms for render time
                    "FPS" { 50 }    # 50 FPS minimum
                    "Memory" { 100 } # 100MB maximum
                    default { 0 }
                }
                
                $metrics += @{
                    Name = "Console"
                    Metric = $metricName
                    Value = $value
                    Unit = $unit
                    Target = $target
                    Status = if ($value -le $target -or ($metricName -eq "FPS" -and $value -ge $target)) { "PASS" } else { "FAIL" }
                }
            }
        }
    }
    return $metrics
}

# Extract performance metrics
$allPerformanceMetrics = @()

# Find all metric files in the performance_results directory
Get-ChildItem -Path $PerformanceResultsDir -Recurse -File | Where-Object {
    $_.Name -match "(metrics|performance|so_lieu|bao_cao|all_metrics)" -and $_.Extension -match "(txt|csv|log|json)"
} | ForEach-Object {
    Write-Host "Processing: $($_.FullName)" -ForegroundColor Yellow
    
    if ($_.Extension -eq ".csv") {
        # Read CSV file
        $csvData = Import-Csv $_.FullName
        $allPerformanceMetrics += $csvData
    } elseif ($_.Extension -eq ".json") {
        # Read JSON lines (each line is a JSON object)
        $jsonContent = Get-Content $_.FullName -ErrorAction SilentlyContinue
        foreach ($line in $jsonContent) {
            try {
                $obj = $null
                $obj = $line | ConvertFrom-Json -ErrorAction Stop
                if ($obj -ne $null -and $obj.metricName -ne $null) {
                    # Normalize status from PASSED/FAILED
                    $status = ''
                    if ($obj.status -ne $null) { $status = ($obj.status.ToUpper() -replace 'PASSED','PASS' -replace 'FAILED','FAIL') }
                    $allPerformanceMetrics += @{
                        Name = ("{0} - {1}" -f ([string]$obj.testCategory), ([string]$obj.testName))
                        Metric = [string]$obj.metricName
                        Value = [double]$obj.value
                        Unit = [string]$obj.unit
                        Target = [string]$obj.target
                        Status = $status
                    }
                }
            } catch {
                # ignore invalid json line
            }
        }
    } else {
        # Extract from txt/log file
        $metrics = Extract-PerformanceMetrics $_.FullName
        if ($metrics.Count -eq 0) {
            $metrics = Extract-ConsoleMetrics $_.FullName
        }
        $allPerformanceMetrics += $metrics
    }
}

Write-Host "Found $($allPerformanceMetrics.Count) performance metrics (raw)" -ForegroundColor Cyan

# Filter and process metrics - keep only meaningful metrics
$filteredMetrics = @()
foreach ($metric in $allPerformanceMetrics) {
    # Skip junk metrics and console logs
    if ($metric.Name -match 'Console|Generated|METRICS|PASSED|FAILED|do|^\d+$|ps1|char|n\s+\d+|Reports' -or 
        $metric.Name -eq '' -or 
        $metric.Name -like '*System.Object*' -or
        $metric.Value -match 'System\.Object\[\]|Generated|Console|^\d+$' -or
        ($metric.Target -eq '0' -and $metric.Name -notmatch 'Render|Scroll|Frame|Touch|Click')) {
        continue
    }
    
    # Keep only metrics with valid values and meaningful names
    if ($metric.Value -match '^\d+\.?\d*$' -and [double]$metric.Value -ge 0 -and 
        $metric.Name -match 'Render|Scroll|Frame|Touch|Click|Memory|CPU|Network|Startup') {
        # Chuẩn hóa Target về số nếu có thể, nếu không đặt 0
        $targetParsed = 0.0
        if ($metric.Target -ne $null -and [double]::TryParse([string]$metric.Target, [ref]$targetParsed)) {
            $metric.Target = [double]$targetParsed
        } else {
            $metric.Target = 0
        }
        # Chuẩn hóa Unit null về chuỗi rỗng
        if ($null -eq $metric.Unit) { $metric.Unit = "" }
        # Chuẩn hóa Status
        if ($null -eq $metric.Status -or $metric.Status -eq "") {
            $metric.Status = ""
        }
        $filteredMetrics += $metric
    }
}

# Loại bỏ metrics trùng: giữ một bản duy nhất theo cặp (Name, Metric)
$deduped = @()
$seen = @{}
foreach ($m in $filteredMetrics) {
    $key = "{0}|{1}" -f ($m.Name.Trim()), ($m.Metric.Trim())
    if (-not $seen.ContainsKey($key)) {
        $seen[$key] = $true
        $deduped += $m
    }
}

# Save performance metrics to CSV
if ($deduped.Count -gt 0) {
    $performanceCsv = "$OutputDir/performance_metrics.csv"
    
    # Convert hashtables to custom objects with the correct columns
    $csvData = $deduped | ForEach-Object {
        [PSCustomObject]@{
            Name = $_.Name
            Metric = $_.Metric
            Value = $_.Value
            Unit = $_.Unit
            Target = $_.Target
            Status = $_.Status
        }
    }

    # Also extract per-class summary metrics from HTML reports and append to CSV
    function Extract-ClassSummaryFromReports {
        param([string]$ReportBaseDir)
        $classMetrics = @()
        $candidates = @(
            (Join-Path $ReportBaseDir "reports/androidTests/connected/debug/index.html"),
            (Join-Path $ReportBaseDir "reports/androidTests/index.html")
        )

        $htmlPath = $null
        foreach ($p in $candidates) { if (Test-Path $p) { $htmlPath = $p; break } }
        if ($null -eq $htmlPath) { return $classMetrics }

        # Iterate all per-class pages under the same directory
        $debugDir = Split-Path $htmlPath -Parent
        $classPages = Get-ChildItem -Path $debugDir -File | Where-Object { $_.Name -like 'com.example.atry.performance.*.html' -and $_.Name -ne 'com.example.atry.performance.html' }
        foreach ($page in $classPages) {
            $html = Get-Content $page.FullName -Raw
            $h1Match = [regex]::Match($html, '<h1>Class\s+(?<cls>[^<]+)</h1>')
            $cls = if ($h1Match.Success) { $h1Match.Groups['cls'].Value.Trim() } else { [System.IO.Path]::GetFileNameWithoutExtension($page.Name) }

            $testsMatch    = [regex]::Match($html, 'id="tests"[\s\S]*?<div class="counter">(?<v>\d+)</div>')
            $failMatch     = [regex]::Match($html, 'id="failures"[\s\S]*?<div class="counter">(?<v>\d+)</div>')
            $skipMatch     = [regex]::Match($html, 'id="skipped"[\s\S]*?<div class="counter">(?<v>\d+)</div>')
            $durationMatch = [regex]::Match($html, 'id="duration"[\s\S]*?<div class="counter">(?<v>[^<]+)</div>')
            $rateMatch     = [regex]::Match($html, 'id="successRate"[\s\S]*?<div class="percent">(?<v>\d+)%</div>')

            $tests = if ($testsMatch.Success) { [int]$testsMatch.Groups['v'].Value } else { 0 }
            $fail  = if ($failMatch.Success) { [int]$failMatch.Groups['v'].Value } else { 0 }
            $skip  = if ($skipMatch.Success) { [int]$skipMatch.Groups['v'].Value } else { 0 }
            $duration = if ($durationMatch.Success) { $durationMatch.Groups['v'].Value.Trim() } else { '' }
            $rateVal = if ($rateMatch.Success) { [int]$rateMatch.Groups['v'].Value } else { 0 }
            $rateStatus = if ($rateVal -ge 100) { 'PASS' } else { 'FAIL' }

            $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = 'Class Success Rate'; Value = [double]$rateVal; Unit = '%'; Target = 100; Status = $rateStatus }
            $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = 'Tests'; Value = $tests; Unit = ''; Target = 0; Status = '' }
            $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = 'Failures'; Value = $fail; Unit = ''; Target = 0; Status = '' }
            $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = 'Skipped'; Value = $skip; Unit = ''; Target = 0; Status = '' }
            $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = 'Duration'; Value = $duration; Unit = ''; Target = 0; Status = '' }

            # Parse per-test rows from the "Tests" tab and record their durations
            $testsTableMatch = [regex]::Match($html, '<div id="tab(?:0|1)"[\s\S]*?<h2>Tests</h2>[\s\S]*?<table>[\s\S]*?<thead>[\s\S]*?</thead>(?<tbody>[\s\S]*?)</table>')
            if ($testsTableMatch.Success) {
                $tbody = $testsTableMatch.Groups['tbody'].Value
                $rowMatches = [regex]::Matches($tbody, '<tr>\s*<td>(?<test>[^<]+)</td>\s*<td[^>]*>(?<raw>[^<]+)</td>\s*</tr>')
                foreach ($rm in $rowMatches) {
                    $testName = $rm.Groups['test'].Value.Trim()
                    $raw = $rm.Groups['raw'].Value.Trim()
                    $rr = [regex]::Match($raw, '(?<res>passed|failed|ignored)\s*\((?<dur>[^)]+)\)')
                    $res = if ($rr.Success) { $rr.Groups['res'].Value } else { '' }
                    $durText = if ($rr.Success) { $rr.Groups['dur'].Value } else { '' }
                    # convert duration to seconds if available
                    $seconds = $null
                    if ($durText -and $durText -ne '-') {
                        $dm = [regex]::Match($durText, '^(?:(?<m>\d+)m)?(?<s>\d+(?:\.\d+)?)s$')
                        if ($dm.Success) {
                            $mins = 0
                            if ($dm.Groups['m'].Success) { $mins = [int]$dm.Groups['m'].Value }
                            $secs = [double]$dm.Groups['s'].Value
                            $seconds = [math]::Round(($mins*60) + $secs, 3)
                        }
                    }
                    $status = switch ($res) { 'passed' { 'PASS' } 'failed' { 'FAIL' } 'ignored' { 'SKIP' } default { '' } }
                    $unit = if ($seconds -ne $null) { 's' } else { '' }
                    $valueToStore = if ($seconds -ne $null) { $seconds } else { $durText }
                    $classMetrics += [PSCustomObject]@{ Name = $cls; Metric = $testName; Value = $valueToStore; Unit = $unit; Target = 0; Status = $status }
                }
            }
        }
        return $classMetrics
    }

    $classSummaryMetrics = Extract-ClassSummaryFromReports -ReportBaseDir $OutputDir
    if ($classSummaryMetrics.Count -gt 0) {
        $csvData = $csvData + $classSummaryMetrics
    }
    # Xuất CSV với UTF8 để tránh lỗi dấu tiếng Việt
    try {
        $csvData | Export-Csv -Path $performanceCsv -NoTypeInformation -Encoding UTF8
        $totalOut = $csvData.Count
        Write-Host "Performance metrics saved to: $performanceCsv (deduped: $($deduped.Count), with class metrics: $totalOut)" -ForegroundColor Green
    } catch {
        Write-Warning "Không ghi được $performanceCsv vì file đang bị khóa: $($_.Exception.Message)"
        $altCsv = "$OutputDir/performance_metrics_detailed.csv"
        $csvData | Export-Csv -Path $altCsv -NoTypeInformation -Encoding UTF8
        $totalOut = $csvData.Count
        Write-Host "Performance metrics saved to: $altCsv (deduped: $($deduped.Count), with class metrics: $totalOut)" -ForegroundColor Green
    }
}

Write-Host "`n=== EXTRACTING UI TEST RESULTS ===" -ForegroundColor Green

# Function to extract UI test results from a build log
function Extract-UITestResults {
    param([string]$LogPath)
    
    $results = @{
        TotalTests = 0
        Passed = 0
        Failed = 0
        Skipped = 0
        TestDetails = @()
    }
    
    if (Test-Path $LogPath) {
        $content = Get-Content $LogPath
        
        foreach ($line in $content) {
            # Find lines containing test results
            if ($line -match '(\w+)\.(\w+)\s+(PASSED|FAILED|SKIPPED|ERROR)') {
                $className = $matches[1]
                $testName = $matches[2]
                $status = $matches[3]
                
                $results.TotalTests++
                switch ($status) {
                    "PASSED" { $results.Passed++ }
                    "FAILED" { $results.Failed++ }
                    "SKIPPED" { $results.Skipped++ }
                    "ERROR" { $results.Failed++ }
                }
                
                $results.TestDetails += @{
                    Class = $className
                    Test = $testName
                    Status = $status
                }
            }
        }
    }
    
    return $results
}

# Extract UI test results
$allUITestResults = @()

Get-ChildItem -Path $UITestResultsDir -Recurse -File | Where-Object {
    $_.Name -match "(build\.log|test.*\.log|output\.log)" 
} | ForEach-Object {
    Write-Host "Processing UI test log: $($_.FullName)" -ForegroundColor Yellow
    
    $testResults = Extract-UITestResults $_.FullName
    if ($testResults.TotalTests -gt 0) {
        $allUITestResults += @{
            LogFile = $_.FullName
            Results = $testResults
            Timestamp = $_.CreationTime
        }
    }
}

Write-Host "Found $($allUITestResults.Count) UI test result files" -ForegroundColor Cyan

# Save UI test results to JSON
if ($allUITestResults.Count -gt 0) {
    $uiTestJson = "$OutputDir/ui_test_results.json"
    $allUITestResults | ConvertTo-Json -Depth 10 | Out-File -FilePath $uiTestJson
    Write-Host "UI test results saved to: $uiTestJson" -ForegroundColor Green
}

# Create summary report
$summary = @{
    ExtractionTime = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    PerformanceMetrics = @{
        Count = $deduped.Count
        PassRate = if ($deduped.Count -gt 0) { 
            $passed = ($deduped | Where-Object { $_.Status -eq "PASS" }).Count
            [math]::Round(($passed / $deduped.Count) * 100, 2)
        } else { 0 }
    }
    UITestResults = @{
        TotalRuns = $allUITestResults.Count
        TotalTests = ($allUITestResults | Measure-Object -Property { $_.Results.TotalTests } -Sum).Sum
        TotalPassed = ($allUITestResults | Measure-Object -Property { $_.Results.Passed } -Sum).Sum
        TotalFailed = ($allUITestResults | Measure-Object -Property { $_.Results.Failed } -Sum).Sum
    }
}

$summaryJson = "$OutputDir/extraction_summary.json"
$summary | ConvertTo-Json -Depth 5 | Out-File -FilePath $summaryJson
Write-Host "Extraction summary saved to: $summaryJson" -ForegroundColor Green

Write-Host "`n=== EXTRACTION COMPLETED ===" -ForegroundColor Green
Write-Host "All metrics have been extracted to: $OutputDir" -ForegroundColor Cyan