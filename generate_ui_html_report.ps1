param(
    [Parameter(Mandatory=$true)]
    [string]$InputDir,
    [Parameter(Mandatory=$true)]
    [string]$OutputHtml,
    [string]$Title = 'UI Test Results Summary (connectedDebugAndroidTest)'
)

function Parse-TestLog {
    param([string]$logPath)
    $results = @()
    if (!(Test-Path $logPath)) { return $results }
    $class = $null
    $test = $null
    Get-Content -Path $logPath | ForEach-Object {
        $line = $_
        if ($line -match '^INSTRUMENTATION_STATUS: class=(.+)$') {
            $class = $Matches[1].Trim()
        } elseif ($line -match '^INSTRUMENTATION_STATUS: test=(.+)$') {
            $test = $Matches[1].Trim()
        } elseif ($line -match '^INSTRUMENTATION_STATUS_CODE:\s*(-?\d+)') {
            $code = [int]$Matches[1]
            if ($class -and $test) {
                $status = switch ($code) {
                    0 { 'passed' }
                    -1 { 'ignored' }
                    -2 { 'failed' }
                    -3 { 'assumption_failed' }
                    -4 { 'skipped' }
                    default { "code_$code" }
                }
                $results += [pscustomobject]@{ Class=$class; Test=$test; Code=$code; Status=$status }
                # Reset test to avoid duplicate code=1 entries
                $test = $null
            }
        }
    }
    return $results
}

function Group-And-RenderHtml {
    param($results, [string]$outPath, [string]$title)
    $total = $results.Count
    $passed = ($results | Where-Object { $_.Status -eq 'passed' }).Count
    $failed = ($results | Where-Object { $_.Status -eq 'failed' }).Count
    $skipped = ($results | Where-Object { $_.Status -eq 'skipped' -or $_.Status -eq 'assumption_failed' }).Count
    $ignored = ($results | Where-Object { $_.Status -eq 'ignored' }).Count
    $classes = $results | Group-Object Class | Sort-Object Name

    $css = @'
    body { font-family: Segoe UI, Roboto, Arial, sans-serif; margin: 20px; }
    h1 { margin-bottom: 8px; }
    .summary { display: flex; gap: 16px; margin: 12px 0 24px; }
    .box { border: 1px solid #ddd; border-radius: 8px; padding: 12px; min-width: 120px; }
    .ok { color: #0a7; }
    .fail { color: #c33; }
    .skip { color: #cc8; }
    table { border-collapse: collapse; width: 100%; margin-bottom: 24px; }
    th, td { border: 1px solid #eee; padding: 8px 10px; text-align: left; }
    th { background: #fafafa; }
    .status-passed { color: #0a7; }
    .status-failed { color: #c33; font-weight: 600; }
    .status-skipped { color: #cc8; }
    .status-ignored { color: #888; }
'@

    $html = @()
    $html += '<!DOCTYPE html><html><head><meta charset="utf-8" />'
    $html += "<title>$title</title>"
    $html += "<style>$css</style>"
    $html += '</head><body>'
    $html += "<h1>$title</h1>"
    $html += "<div>Generated at $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')</div>"
    $html += '<div class="summary">'
    $html += "<div class='box'><div>Total</div><div><b>$total</b></div></div>"
    $html += "<div class='box ok'><div>Passed</div><div><b>$passed</b></div></div>"
    $html += "<div class='box fail'><div>Failed</div><div><b>$failed</b></div></div>"
    $html += "<div class='box skip'><div>Skipped</div><div><b>$skipped</b></div></div>"
    $html += "<div class='box'><div>Ignored</div><div><b>$ignored</b></div></div>"
    $html += '</div>'

    foreach ($grp in $classes) {
        $html += "<h2>$($grp.Name)</h2>"
        $html += '<table><thead><tr><th>Test</th><th>Status</th></tr></thead><tbody>'
        foreach ($r in ($grp.Group | Sort-Object Test)) {
            $cls = "status-$($r.Status)"
            $html += "<tr><td>$($r.Test)</td><td class='$cls'>$($r.Status)</td></tr>"
        }
        $html += '</tbody></table>'
    }
    $html += '</body></html>'
    $dir = Split-Path -Parent $outPath
    if (!(Test-Path $dir)) { New-Item -ItemType Directory -Path $dir -Force | Out-Null }
    Set-Content -Path $outPath -Value ($html -join "`n") -Encoding UTF8
}

$testLog = Join-Path $InputDir 'testlog\test-results.log'
$results = Parse-TestLog -logPath $testLog
if ($results.Count -eq 0) {
    Write-Host "No parsed results from $testLog" -ForegroundColor Yellow
}
Group-And-RenderHtml -results $results -outPath $OutputHtml -title $Title
Write-Host "HTML report generated: $OutputHtml" -ForegroundColor Green