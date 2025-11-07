# Script to read test cases from Excel file
param(
    [string]$ExcelFile = "Testcases.xlsx"
)

if (-not (Test-Path $ExcelFile)) {
    Write-Host "Error: File '$ExcelFile' not found!" -ForegroundColor Red
    exit 1
}

Write-Host "Reading test cases from $ExcelFile..." -ForegroundColor Cyan

try {
    # Create Excel COM object
    $excel = New-Object -ComObject Excel.Application
    $excel.Visible = $false
    $excel.DisplayAlerts = $false
    
    # Open workbook
    $workbook = $excel.Workbooks.Open((Resolve-Path $ExcelFile).Path)
    $worksheet = $workbook.Worksheets.Item(1)
    
    # Find used range
    $usedRange = $worksheet.UsedRange
    $rowCount = $usedRange.Rows.Count
    $colCount = $usedRange.Columns.Count
    
    Write-Host "Found $rowCount rows, $colCount columns" -ForegroundColor Green
    
    # Read headers (first row)
    $headers = @()
    for ($col = 1; $col -le $colCount; $col++) {
        $header = $worksheet.Cells.Item(1, $col).Text
        if ($header) {
            $headers += $header
        } else {
            $headers += "Column$col"
        }
    }
    
    Write-Host ""
    Write-Host "Headers: $($headers -join ', ')" -ForegroundColor Yellow
    
    # Read test cases
    $testcases = @()
    for ($row = 2; $row -le $rowCount; $row++) {
        $testcase = @{}
        $testcase.RowNumber = $row
        $hasData = $false
        
        for ($col = 1; $col -le $colCount; $col++) {
            $header = $headers[$col - 1]
            $value = $worksheet.Cells.Item($row, $col).Text
            if ($value) {
                $testcase[$header] = $value.Trim()
                $hasData = $true
            }
        }
        
        if ($hasData) {
            $testcases += $testcase
        }
    }
    
    # Close Excel
    $workbook.Close($false)
    $excel.Quit()
    [System.Runtime.Interopservices.Marshal]::ReleaseComObject($excel) | Out-Null
    
    Write-Host ""
    Write-Host "Found $($testcases.Count) test cases!" -ForegroundColor Green
    
    # Display test cases
    Write-Host ""
    Write-Host "=" * 80 -ForegroundColor Cyan
    Write-Host "TEST CASES SUMMARY" -ForegroundColor Cyan
    Write-Host "=" * 80 -ForegroundColor Cyan
    
    for ($i = 0; $i -lt $testcases.Count; $i++) {
        $tc = $testcases[$i]
        Write-Host ""
        Write-Host "Test Case #$($i+1) (Row $($tc.RowNumber)):" -ForegroundColor Yellow
        foreach ($key in $tc.Keys) {
            if ($key -ne "RowNumber" -and $tc[$key]) {
                Write-Host "  $key : $($tc[$key])" -ForegroundColor White
            }
        }
    }
    
    # Export to JSON
    $jsonFile = "testcases.json"
    $testcases | ConvertTo-Json -Depth 10 | Out-File -FilePath $jsonFile -Encoding UTF8
    Write-Host ""
    Write-Host "Exported to $jsonFile" -ForegroundColor Green
    
} catch {
    Write-Host "Error: $_" -ForegroundColor Red
    Write-Host $_.Exception.Message -ForegroundColor Red
    exit 1
}
