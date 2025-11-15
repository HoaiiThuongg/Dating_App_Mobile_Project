# Script dọn dẹp ổ C: để giải phóng dung lượng ngay lập tức
Write-Host "=== Dọn dẹp ổ C: để giải phóng dung lượng ===" -ForegroundColor Green

# 1. Xóa Gradle cache cũ
Write-Host "1. Xóa Gradle cache cũ..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\.gradle" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✓ Đã xóa Gradle cache" -ForegroundColor Green

# 2. Xóa Android build cache
Write-Host "2. Xóa Android build cache..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\.android\build-cache" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✓ Đã xóa Android build cache" -ForegroundColor Green

# 3. Xóa temp files
Write-Host "3. Xóa temp files..." -ForegroundColor Yellow
Remove-Item -Path "$env:TEMP\*" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✓ Đã xóa temp files" -ForegroundColor Green

# 4. Xóa Android Studio log files
Write-Host "4. Xóa Android Studio log files..." -ForegroundColor Yellow
Remove-Item -Path "$env:USERPROFILE\.AndroidStudio*\system\log\*" -Recurse -Force -ErrorAction SilentlyContinue
Write-Host "   ✓ Đã xóa log files" -ForegroundColor Green

# 5. Xóa npm cache (nếu có)
Write-Host "5. Xóa npm cache..." -ForegroundColor Yellow
npm cache clean --force 2>$null
Write-Host "   ✓ Đã xóa npm cache" -ForegroundColor Green

Write-Host ""
Write-Host "=== Hoàn thành dọn dẹp! ===" -ForegroundColor Green
Write-Host "Bạn có thể kiểm tra lại dung lượng ổ C:\\" -ForegroundColor Cyan
Write-Host ""
Write-Host "Tiếp theo: Hãy thực hiện các bước trong file ANDROID_STUDIO_MIGRATION_GUIDE.md" -ForegroundColor Yellow