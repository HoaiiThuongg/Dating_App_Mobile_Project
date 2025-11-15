# Script kiểm tra hoàn thành việc chuyển Android Studio sang ổ E
Write-Host "=== KIỂM TRA HOÀN THÀNH CHUYỂN ANDROID STUDIO SANG Ổ E ===" -ForegroundColor Green

Write-Host ""
Write-Host "1. Kiểm tra thư mục cache mới:" -ForegroundColor Yellow
Get-ChildItem -Path "E:\Android" -Force | Format-Table Name, @{Name="Size (MB)";Expression={[math]::Round($_.Length/1MB,2)}}, LastWriteTime

Write-Host ""
Write-Host "2. Kiểm tra biến môi trường:" -ForegroundColor Yellow
Write-Host "   ANDROID_SDK_HOME: $env:ANDROID_SDK_HOME" -ForegroundColor Cyan
Write-Host "   ANDROID_AVD_HOME: $env:ANDROID_AVD_HOME" -ForegroundColor Cyan
Write-Host "   GRADLE_USER_HOME: $env:GRADLE_USER_HOME" -ForegroundColor Cyan

Write-Host ""
Write-Host "3. Kiểm tra file cấu hình:" -ForegroundColor Yellow
if (Test-Path "E:\Android\GradleCache") { Write-Host "   ✅ Gradle cache directory: OK" -ForegroundColor Green }
if (Test-Path "E:\Android\AVD") { Write-Host "   ✅ AVD directory: OK" -ForegroundColor Green }
if (Test-Path ".\gradle.properties") { Write-Host "   ✅ gradle.properties: OK" -ForegroundColor Green }
if (Test-Path ".\idea.properties") { Write-Host "   ✅ idea.properties: OK" -ForegroundColor Green }

Write-Host ""
Write-Host "4. Dung lượng đã giải phóng:" -ForegroundColor Yellow
Write-Host "   (Kiểm tra trong Windows Settings > System > Storage)" -ForegroundColor Cyan

Write-Host ""
Write-Host "=== HOÀN THÀNH! ===" -ForegroundColor Green
Write-Host "Bạn cần khởi động lại máy để:" -ForegroundColor Yellow
Write-Host "• Biến môi trường có hiệu lực" -ForegroundColor White
Write-Host "• Android Studio nhận cấu hình mới" -ForegroundColor White
Write-Host "• Các thay đổi được áp dụng hoàn toàn" -ForegroundColor White

Write-Host ""
Write-Host "Sau khi khởi động lại:" -ForegroundColor Green
Write-Host "1. Mở Android Studio" -ForegroundColor Cyan
Write-Host "2. Vào File → Settings → Appearance & Behavior → System Settings → Android SDK" -ForegroundColor Cyan
Write-Host "3. Chỉ định SDK path: E:\Android\SDK" -ForegroundColor Cyan
Write-Host "4. Kiểm tra AVD Manager để xem thiết bị ảo" -ForegroundColor Cyan