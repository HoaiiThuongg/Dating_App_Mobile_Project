# ⚡ Hướng dẫn Nhanh: Kiểm thử Hiệu năng

## 🎯 Tổng quan

Đã setup sẵn hệ thống performance testing cho app với 5 loại tests:

1. **App Startup Benchmark** - Đo thời gian khởi động app
2. **Screen Render Performance** - Đo thời gian render screens
3. **Scroll Performance** - Đo hiệu năng scroll
4. **ViewModel Performance** - Đo hiệu năng ViewModel operations
5. **Memory Performance** - Kiểm tra memory usage và leaks

---

## 🚀 Cách chạy nhanh

### 1. Chạy tất cả performance tests:
```powershell
.\run_performance_tests.ps1
```

### 2. Chạy từng loại test:
```powershell
# Chỉ test startup
.\run_performance_tests.ps1 startup

# Chỉ test render
.\run_performance_tests.ps1 render

# Chỉ test scroll
.\run_performance_tests.ps1 scroll

# Chỉ test viewmodel
.\run_performance_tests.ps1 viewmodel

# Chỉ test memory
.\run_performance_tests.ps1 memory
```

---

## 📋 Yêu cầu

1. **Device/Emulator đã kết nối** (bắt buộc)
2. **App đã được build** (script sẽ tự động build)
3. **ADB đã được cài đặt** (thường có sẵn với Android SDK)

---

## 📊 Xem kết quả

### Macrobenchmark Results (App Startup):
```
app/build/outputs/connected_android_test_additional_output/
```

### Test Reports:
```
app/build/reports/androidTests/
```

### Logcat Output:
Kết quả cũng được in ra console với các metrics:
- Render time (ms)
- Scroll time (ms)
- Memory usage (MB)
- etc.

---

## 🎯 Metrics mục tiêu

### Startup Time:
- **Cold start**: < 2 giây
- **Warm start**: < 1 giây
- **Hot start**: < 0.5 giây

### Screen Render:
- **SplashScreen**: < 100ms
- **HomeScreen**: < 200ms
- **ChatScreen**: < 300ms
- **MessageScreen**: < 250ms
- **ProfileScreen**: < 200ms

### Scroll Performance:
- **HomeScreen swipe**: < 50ms
- **MessageScreen scroll**: < 30ms (avg), < 60ms (max)
- **ChatScreen scroll**: < 25ms (avg), < 50ms (max)

### ViewModel Operations:
- **LoadUsers**: < 500ms
- **LoadMessages**: < 300ms
- **SwipeAction**: < 10ms (avg), < 20ms (P95)
- **SendMessage**: < 100ms

### Memory Usage:
- **Initial**: < 100 MB
- **After navigation**: < 150 MB
- **Peak**: < 200 MB
- **Memory growth**: < 30 MB (sau nhiều operations)

---

## 🔧 Tùy chỉnh Tests

### Thêm test mới:
1. Tạo file mới trong `app/src/androidTest/java/com/example/atry/performance/`
2. Copy pattern từ các test files có sẵn
3. Thêm vào script `run_performance_tests.ps1` nếu cần

### Thay đổi targets:
Sửa các assertions trong test files để thay đổi targets:
```kotlin
// Ví dụ: Thay đổi target từ 100ms thành 150ms
assert(renderTime < 150) { 
    "Render time ($renderTime ms) exceeds target (150ms)" 
}
```

---

## ⚠️ Lưu ý

1. **Chạy trên device thật** khi có thể (không phải emulator) để có kết quả chính xác hơn
2. **Tắt debug mode** khi đo performance (build release variant)
3. **Chạy nhiều lần** và lấy trung bình để có kết quả chính xác
4. **Đóng các app khác** để có môi trường test ổn định
5. **Đo baseline trước** khi optimize để so sánh

---

## 🐛 Troubleshooting

### Lỗi: "No device connected"
- Kiểm tra device/emulator đã kết nối: `adb devices`
- Đảm bảo USB debugging đã bật

### Lỗi: "Build failed"
- Chạy `.\gradlew clean` trước
- Kiểm tra dependencies trong `build.gradle.kts`

### Lỗi: "Tests failed"
- Kiểm tra app đã được cài đặt trên device
- Kiểm tra package name trong test files đúng với `applicationId` trong `build.gradle.kts`

---

## 📚 Tài liệu thêm

Xem `PERFORMANCE_TESTING_GUIDE.md` để biết chi tiết về:
- Các công cụ và phương pháp
- Best practices
- Advanced usage

