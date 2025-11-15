# Script xóa thêm nhiều file để giải phóng dung lượng ổ C
Write-Host "=== DỌN DẸP TRIỆT ĐỂ Ổ C: ===" -ForegroundColor Green

# 1. Xóa Windows Update cache
Write-Host "1. Xóa Windows Update cache..." -ForegroundColor Yellow
Stop-Service -Name wuauserv -Force -ErrorAction SilentlyContinue
Remove-Item -Path "C:\Windows\SoftwareDistribution\Download\*" -Recurse -Force -ErrorAction SilentlyContinue
Start-Service -Name wuauserv -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa Windows Update cache" -ForegroundColor Green

# 2. Xóa Recycle Bin
Write-Host "2. Xóa Recycle Bin..." -ForegroundColor Yellow
Clear-RecycleBin -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa Recycle Bin" -ForegroundColor Green

# 3. Xóa Windows Logs
Write-Host "3. Xóa Windows Logs..." -ForegroundColor Yellow
wevtutil el | ForEach-Object {wevtutil cl "$_"} 2>$null
Write-Host "   ✅ Đã xóa Windows Logs" -ForegroundColor Green

# 4. Xóa Browser Cache
Write-Host "4. Xóa Browser Cache..." -ForegroundColor Yellow
# Chrome
Remove-Item -Path "$env:USERPROFILE\AppData\Local\Google\Chrome\User Data\Default\Cache\*" -Recurse -Force -ErrorAction SilentlyContinue
# Firefox
Remove-Item -Path "$env:USERPROFILE\AppData\Local\Mozilla\Firefox\Profiles\*\cache2\*" -Recurse -Force -ErrorAction SilentlyContinue
# Edge
Remove-Item -Path "$env:USERPROFILE\AppData\Local\Microsoft\Edge\User Data\Default\Cache\*" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa Browser Cache" -ForegroundColor Green

# 5. Xóa Downloads folder temp files
Write-Host "5. Xóa file tạm trong Downloads..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\Downloads\*.tmp" -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:USERPROFILE\Downloads\*.crdownload" -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:USERPROFILE\Downloads\*.partial" -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa file tạm trong Downloads" -ForegroundColor Green

# 6. Xóa Visual Studio cache (nếu có)
Write-Host "6. Xóa Visual Studio cache..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\.vscode\extensions\*" -Recurse -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:APPDATA\Code\Cache\*" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa Visual Studio cache" -ForegroundColor Green

# 7. Xóa .gradle trong AppData
Write-Host "7. Xóa .gradle trong AppData..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\AppData\Roaming\.gradle" -Recurse -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:USERPROFILE\AppData\Local\.gradle" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa .gradle trong AppData" -ForegroundColor Green

# 8. Xóa Android SDK cache cũ (nếu còn)
Write-Host "8. Xóa Android SDK cache cũ..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\AppData\Local\Android\Sdk\.temp\" -Recurse -Force -ErrorAction SilentlyContinue
Remove-Item -Path "$env:USERPROFILE\AppData\Local\Android\Sdk\system-images\" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✅ Đã xóa Android SDK cache" -ForegroundColor Green

Write-Host ""
Write-Host "=== HOÀN THÀNH DỌN DẸP TRIỆT ĐỂ ===" -ForegroundColor Green
Write-Host "Bạn nên khởi động lại máy để hoàn tất việc dọn dẹp!" -ForegroundColor Yellow