# Script PowerShell để kiểm tra trạng thái script

Write-Host "=== KIEM TRA TRANG THAI SCRIPT ===" -ForegroundColor Cyan
Write-Host ""

# Find latest report
$latest = Get-ChildItem -Path "performance_results" -Directory -Filter "report_*" -ErrorAction SilentlyContinue | Sort-Object LastWriteTime -Descending | Select-Object -First 1

if (-not $latest) {
    Write-Host "Khong tim thay report!" -ForegroundColor Red
    exit 1
}

$reportDir = $latest.FullName
Write-Host "Report: $($latest.Name)" -ForegroundColor Green
Write-Host ""

# Count completed tests
$types = @("render", "scroll", "viewmodel", "memory", "startup", "system", "network", "framerate", "size", "database", "image", "touch")
$count = 0
foreach ($type in $types) {
    $path = Join-Path $reportDir "reports\$type\androidTests\connected\debug\index.html"
    if (Test-Path $path) {
        $count++
    }
}

Write-Host "Tests da hoan thanh: $count / 12" -ForegroundColor $(if ($count -eq 12) { "Green" } else { "Yellow" })
Write-Host ""

# Check log file
$logFile = Join-Path $reportDir "full_output.log"
if (Test-Path $logFile) {
    $log = Get-Item $logFile
    $age = (Get-Date) - $log.LastWriteTime
    
    Write-Host "Log file: $logFile" -ForegroundColor Gray
    Write-Host "Last modified: $($log.LastWriteTime)" -ForegroundColor Gray
    Write-Host "Age: $([math]::Round($age.TotalMinutes, 1)) phut" -ForegroundColor $(if ($age.TotalMinutes -lt 5) { "Green" } else { "Yellow" })
    Write-Host ""
    
    if ($age.TotalMinutes -lt 5) {
        Write-Host "✅ Script DANG CHAY!" -ForegroundColor Green
    } else {
        Write-Host "⚠️  Script co the da DUNG" -ForegroundColor Yellow
    }
    
    Write-Host ""
    Write-Host "Dong cuoi cung (5 dong):" -ForegroundColor Cyan
    Get-Content $logFile -Tail 5 -ErrorAction SilentlyContinue | ForEach-Object {
        Write-Host "  $_" -ForegroundColor Gray
    }
} else {
    Write-Host "Log file khong ton tai" -ForegroundColor Red
}

Write-Host ""
Write-Host "=== TRANG THAI ===" -ForegroundColor Cyan
Write-Host ""

if ($count -eq 12) {
    Write-Host "✅ Tat ca tests da hoan thanh!" -ForegroundColor Green
    Write-Host "   Script da dung (hoan thanh)" -ForegroundColor Gray
} else {
    Write-Host "⏳ Con $count / 12 tests" -ForegroundColor Yellow
    Write-Host ""
    Write-Host "💡 De kiem tra script co dang chay:" -ForegroundColor Cyan
    Write-Host "   - Xem log file co duoc cap nhat gan day khong (< 5 phut)" -ForegroundColor Gray
    Write-Host "   - Neu log khong cap nhat trong 5+ phut → Script da dung" -ForegroundColor Gray
    Write-Host ""
    Write-Host "💡 Neu script da dung, chay:" -ForegroundColor Cyan
    Write-Host "   .\CHAY_TIEP_METRICS_CON_LAI.bat" -ForegroundColor White
}

Write-Host ""

