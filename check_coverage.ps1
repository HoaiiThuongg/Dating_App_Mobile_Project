# Script để check và hiển thị coverage report
param(
    [int]$MinCoverage = 80
)

Write-Host "Running tests and generating coverage report..." -ForegroundColor Yellow
.\gradlew testDebugUnitTest jacocoTestReport --no-daemon

$coverageFile = "app\build\reports\jacoco\jacocoTestReport\html\index.html"

if (Test-Path $coverageFile) {
    Write-Host "`n✅ Coverage report generated!" -ForegroundColor Green
    Write-Host "Opening report at: $coverageFile" -ForegroundColor Cyan
    
    # Parse coverage từ XML (nếu có)
    $xmlFile = "app\build\reports\jacoco\jacocoTestReport\jacocoTestReport.xml"
    if (Test-Path $xmlFile) {
        [xml]$xml = Get-Content $xmlFile
        $counter = $xml.report.counter | Where-Object { $_.type -eq "LINE" }
        if ($counter) {
            $missed = [int]$counter.missed
            $covered = [int]$counter.covered
            $total = $missed + $covered
            $percentage = if ($total -gt 0) { [math]::Round(($covered / $total) * 100, 2) } else { 0 }
            
            Write-Host "`n📊 Coverage Summary:" -ForegroundColor Cyan
            Write-Host "   Lines Covered: $covered / $total ($percentage%)" -ForegroundColor $(if ($percentage -ge $MinCoverage) { "Green" } else { "Yellow" })
            
            if ($percentage -lt $MinCoverage) {
                Write-Host "`n⚠️  Coverage is below minimum threshold ($MinCoverage%)" -ForegroundColor Yellow
                Write-Host "   Consider adding more tests to improve coverage." -ForegroundColor Yellow
            } else {
                Write-Host "`n✅ Coverage meets minimum threshold!" -ForegroundColor Green
            }
        }
    }
    
    Start-Process $coverageFile
} else {
    Write-Host "❌ Coverage report not found!" -ForegroundColor Red
    Write-Host "   Make sure tests ran successfully." -ForegroundColor Yellow
    exit 1
}

