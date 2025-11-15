# Script thiết lập biến môi trường cho Android Studio
Write-Host "=== Thiết lập biến môi trường Android ===" -ForegroundColor Green

# Tạo biến môi trường hệ thống
[Environment]::SetEnvironmentVariable("ANDROID_SDK_HOME", "E:\Android\SDK", "User")
[Environment]::SetEnvironmentVariable("ANDROID_AVD_HOME", "E:\Android\AVD", "User")
[Environment]::SetEnvironmentVariable("GRADLE_USER_HOME", "E:\Android\GradleCache", "User")

Write-Host "✅ Đã tạo các biến môi trường:" -ForegroundColor Green
Write-Host "   ANDROID_SDK_HOME = E:\Android\SDK" -ForegroundColor Cyan
Write-Host "   ANDROID_AVD_HOME = E:\Android\AVD" -ForegroundColor Cyan
Write-Host "   GRADLE_USER_HOME = E:\Android\GradleCache" -ForegroundColor Cyan

Write-Host ""
Write-Host "⚠️  LƯU Ý: Bạn cần khởi động lại máy hoặc đăng xuất/đăng nhập lại để các biến môi trường có hiệu lực!" -ForegroundColor Yellow