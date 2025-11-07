# 🚀 Hướng dẫn Chạy Benchmark - Phiên bản Đơn giản

## ✅ Cách chạy nhanh:

```powershell
run_macrobenchmark.bat
```

Script sẽ:
1. ✅ Build benchmark APK (non-debuggable)
2. ✅ Install benchmark APK lên device
3. ✅ Build test APK
4. ✅ Chạy macrobenchmark tests

---

## 📊 Kết quả:

Sau khi chạy xong, bạn sẽ thấy:
- **Metrics**: timeToInitialDisplay, timeToFullDisplay, frameTiming
- **Reports**: Trong `app/build/reports/androidTests/`

---

## ⚠️ Lưu ý:

1. **App benchmark phải được install trước** - Script sẽ tự động làm điều này
2. **Tests sẽ chạy với app benchmark** đã install (non-debuggable)
3. **Có thể mất 5-10 phút** để chạy xong tất cả tests

---

## 🐛 Nếu gặp lỗi:

### Tests vẫn bị SKIPPED:
- Đảm bảo benchmark APK đã được install: `adb shell pm list packages | findstr datingapp`
- Kiểm tra app có debuggable=false: `adb shell dumpsys package com.example.datingapp | findstr debuggable`

### Build failed:
- Sync Gradle trong Android Studio
- Clean và build lại: `.\gradlew clean assembleBenchmark`

---

## 💡 Alternative: Dùng Custom Performance Tests

Nếu macrobenchmark vẫn không chạy được, dùng custom tests:

```powershell
.\run_performance_tests.bat render
.\run_performance_tests.bat scroll
.\run_performance_tests.bat viewmodel
.\run_performance_tests.bat memory
```

Các tests này không yêu cầu non-debuggable build và vẫn đo được performance!

