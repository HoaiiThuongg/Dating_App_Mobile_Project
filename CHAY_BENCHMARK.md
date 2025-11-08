# 🚀 Hướng dẫn Chạy Benchmark

## ✅ Cách chạy nhanh nhất:

### Bước 1: Đảm bảo device/emulator đã kết nối
```powershell
adb devices
```
Phải thấy device trong danh sách.

### Bước 2: Chạy script
```powershell
run_macrobenchmark.bat
```

Script sẽ tự động:
1. ✅ Clean build
2. ✅ Build benchmark variant (non-debuggable)
3. ✅ Install APK lên device
4. ✅ Chạy macrobenchmark tests

---

## 📊 Kết quả mong đợi:

### Nếu thành công:
```
✅ Macrobenchmark tests completed successfully!

📊 View results:
  - Macrobenchmark: app\build\outputs\connected_android_test_additional_output\
  - Test Reports: app\build\reports\androidTests\
```

### Metrics sẽ đo được:
- **timeToInitialDisplay**: Thời gian từ launch đến khi UI hiển thị
- **timeToFullDisplay**: Thời gian từ launch đến khi UI hoàn toàn sẵn sàng
- **frameTiming**: Frame rate và jank metrics

---

## 🔧 Chạy thủ công (nếu script không hoạt động):

### Bước 1: Clean
```powershell
.\gradlew clean
```

### Bước 2: Build benchmark variant
```powershell
.\gradlew assembleBenchmark
```

### Bước 3: Install APK
```powershell
.\gradlew installBenchmark
```

### Bước 4: Chạy tests
```powershell
.\gradlew connectedBenchmarkAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

---

## ⚠️ Lưu ý:

1. **Benchmark variant yêu cầu**:
   - Non-debuggable build (đã được cấu hình)
   - Device/emulator đã kết nối
   - App phải được install trước khi chạy tests

2. **Thời gian chạy**:
   - Mỗi test chạy 5 iterations
   - Tổng cộng 3 tests (cold, warm, hot)
   - Có thể mất 5-10 phút

3. **Kết quả**:
   - JSON reports: `app/build/outputs/connected_android_test_additional_output/`
   - HTML reports: `app/build/reports/androidTests/`

---

## 🐛 Troubleshooting:

### Lỗi: "No device connected"
```powershell
# Kiểm tra device
adb devices

# Nếu không có, start emulator hoặc kết nối device qua USB
```

### Lỗi: "Build failed"
```powershell
# Sync Gradle trong Android Studio
# File → Sync Project with Gradle Files

# Hoặc clean và build lại
.\gradlew clean
.\gradlew assembleBenchmark
```

### Lỗi: "Tests still skipped"
- Đảm bảo đã build và install **benchmark variant**
- Không phải debug variant
- Kiểm tra: `adb shell dumpsys package com.example.datingapp | findstr debuggable`
  - Phải hiển thị `debuggable=false`

### Tests chạy nhưng không có kết quả:
- Kiểm tra device có đủ RAM (benchmark cần nhiều tài nguyên)
- Đảm bảo không có app khác đang chạy
- Thử trên device thật thay vì emulator

---

## 📈 Xem kết quả:

### Trong Android Studio:
- Mở tab "Run" hoặc "Build"
- Xem kết quả trong test runner

### Trong file system:
```powershell
# Xem JSON reports
dir app\build\outputs\connected_android_test_additional_output\

# Xem HTML reports
start app\build\reports\androidTests\index.html
```

---

## 🎯 Next Steps:

Sau khi chạy benchmark thành công:
1. Xem kết quả trong reports
2. So sánh với baseline (nếu có)
3. Identify bottlenecks
4. Optimize code
5. Re-run để verify improvements

---

## 💡 Tips:

- **Chạy nhiều lần** và lấy trung bình để có kết quả chính xác
- **Đóng các app khác** để có môi trường test ổn định
- **Dùng device thật** thay vì emulator để có kết quả chính xác hơn
- **Đo baseline trước** khi optimize để so sánh


