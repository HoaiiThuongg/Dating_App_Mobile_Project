# 🚀 Hướng dẫn Kiểm thử Hiệu năng App

## 📋 Tổng quan

Đã setup đầy đủ hệ thống **Performance Testing** cho app Dating của bạn với 5 loại tests chính:

1. ✅ **App Startup Benchmark** - Đo thời gian khởi động app (cold/warm/hot start)
2. ✅ **Screen Render Performance** - Đo thời gian render các screens
3. ✅ **Scroll Performance** - Đo hiệu năng scroll/swipe
4. ✅ **ViewModel Performance** - Đo hiệu năng các operations trong ViewModels
5. ✅ **Memory Performance** - Kiểm tra memory usage và memory leaks

---

## 🎯 Cách sử dụng nhanh

### ⚠️ Lưu ý: PowerShell Execution Policy

Nếu gặp lỗi "cannot be loaded" hoặc "not digitally signed", xem file `FIX_POWERSHELL_EXECUTION_POLICY.md` hoặc dùng file `.bat` thay thế:

```cmd
run_performance_tests.bat
```

### Bước 1: Kết nối device/emulator
```powershell
# Kiểm tra device đã kết nối
adb devices
```

### Bước 2: Chạy tất cả performance tests

**Cách 1: Dùng PowerShell (nếu không có lỗi execution policy)**
```powershell
.\run_performance_tests.ps1
```

**Cách 2: Bypass execution policy**
```powershell
powershell -ExecutionPolicy Bypass -File .\run_performance_tests.ps1
```

**Cách 3: Dùng file .bat (không cần PowerShell)**
```cmd
run_performance_tests.bat
```

### Bước 3: Xem kết quả
- **Console output**: Metrics được in trực tiếp ra console
- **Test reports**: `app/build/reports/androidTests/`
- **Macrobenchmark results**: `app/build/outputs/connected_android_test_additional_output/`

---

## 📊 Các loại Tests

### 1. App Startup Benchmark (`AppStartupBenchmark.kt`)
Đo thời gian khởi động app với 3 modes:
- **Cold start**: App chưa chạy, khởi động từ đầu
- **Warm start**: App đã chạy trước đó, khởi động lại
- **Hot start**: App đang chạy ở background, bring to foreground

**Chạy:**
```powershell
.\run_performance_tests.ps1 startup
```

**Metrics:**
- `timeToInitialDisplay`: Thời gian đến khi UI hiển thị
- `timeToFullDisplay`: Thời gian đến khi UI hoàn toàn sẵn sàng
- `frameTiming`: Frame rate và jank

**Target:**
- Cold start: < 2 giây
- Warm start: < 1 giây
- Hot start: < 0.5 giây

---

### 2. Screen Render Performance (`ScreenRenderPerformanceTest.kt`)
Đo thời gian render các screens quan trọng:
- SplashScreen
- HomeScreen
- ChatScreen
- MessageScreen
- ProfileScreen

**Chạy:**
```powershell
.\run_performance_tests.ps1 render
```

**Metrics:**
- Composition time: Thời gian compose UI
- First frame time: Thời gian đến frame đầu tiên

**Target:**
- SplashScreen: < 100ms
- HomeScreen: < 200ms
- ChatScreen: < 300ms
- MessageScreen: < 250ms
- ProfileScreen: < 200ms

---

### 3. Scroll Performance (`ScrollPerformanceTest.kt`)
Đo hiệu năng scroll trong:
- HomeScreen (swipe cards)
- MessageScreen (list messages)
- ChatScreen (chat messages)

**Chạy:**
```powershell
.\run_performance_tests.ps1 scroll
```

**Metrics:**
- Scroll frame rate: FPS khi scroll
- Scroll jank: Số frame bị jank
- Scroll smoothness: Độ mượt khi scroll

**Target:**
- HomeScreen swipe: < 50ms
- MessageScreen scroll: < 30ms (avg), < 60ms (max)
- ChatScreen scroll: < 25ms (avg), < 50ms (max)

---

### 4. ViewModel Performance (`ViewModelPerformanceTest.kt`)
Đo thời gian thực thi các operations:
- Load users
- Load messages
- Swipe actions
- Send message

**Chạy:**
```powershell
.\run_performance_tests.ps1 viewmodel
```

**Metrics:**
- Operation time: Thời gian thực thi
- Throughput: Số operations/second

**Target:**
- LoadUsers: < 500ms
- LoadMessages: < 300ms
- SwipeAction: < 10ms (avg), < 20ms (P95)
- SendMessage: < 100ms

---

### 5. Memory Performance (`MemoryPerformanceTest.kt`)
Kiểm tra memory usage và memory leaks:
- Initial memory
- Memory after navigation
- Memory growth over time
- Peak memory

**Chạy:**
```powershell
.\run_performance_tests.ps1 memory
```

**Metrics:**
- Initial memory: Memory khi app mới start
- Peak memory: Memory cao nhất
- Memory growth: Tăng trưởng memory

**Target:**
- Initial: < 100 MB
- After navigation: < 150 MB
- Peak: < 200 MB
- Memory growth: < 30 MB (sau nhiều operations)

---

## 📁 Cấu trúc Files

```
app/src/androidTest/java/com/example/atry/performance/
├── AppStartupBenchmark.kt          # Startup benchmarks
├── ScreenRenderPerformanceTest.kt   # Screen render tests
├── ScrollPerformanceTest.kt        # Scroll performance tests
├── ViewModelPerformanceTest.kt     # ViewModel performance tests
└── MemoryPerformanceTest.kt        # Memory performance tests

run_performance_tests.ps1            # Script chạy tests
PERFORMANCE_TESTING_GUIDE.md         # Hướng dẫn chi tiết
PERFORMANCE_TESTING_QUICK_START.md   # Quick start guide
HUONG_DAN_TEST_HIEU_NANG.md          # Hướng dẫn tiếng Việt (file này)
```

---

## 🔧 Tùy chỉnh Tests

### Thay đổi targets:
Mở file test tương ứng và sửa assertions:

```kotlin
// Ví dụ: Thay đổi target từ 100ms thành 150ms
assert(renderTime < 150) { 
    "Render time ($renderTime ms) exceeds target (150ms)" 
}
```

### Thêm test mới:
1. Tạo file mới trong `app/src/androidTest/java/com/example/atry/performance/`
2. Copy pattern từ các test files có sẵn
3. Thêm vào script `run_performance_tests.ps1` nếu cần

---

## ⚠️ Lưu ý quan trọng

1. **Cần device/emulator**: Tất cả performance tests cần device/emulator đã kết nối
2. **Build release variant**: Để có kết quả chính xác, nên build release variant (không phải debug)
3. **Chạy nhiều lần**: Chạy nhiều lần và lấy trung bình để có kết quả chính xác
4. **Đóng app khác**: Đóng các app khác để có môi trường test ổn định
5. **Đo baseline**: Đo baseline trước khi optimize để so sánh

---

## 🐛 Troubleshooting

### Lỗi: "No device connected"
```powershell
# Kiểm tra device
adb devices

# Nếu không có device, start emulator hoặc kết nối device qua USB
```

### Lỗi: "Build failed"
```powershell
# Clean và build lại
.\gradlew clean
.\gradlew assembleDebugAndroidTest
```

### Lỗi: "Tests failed"
- Kiểm tra app đã được cài đặt trên device
- Kiểm tra package name trong test files đúng với `applicationId` trong `build.gradle.kts` (hiện tại là `com.example.datingapp`)

### Macrobenchmark không chạy được:
- Macrobenchmark cần device thật (không phải emulator) hoặc emulator với API level cao
- Có thể cần build release variant
- Nếu không chạy được, có thể bỏ qua và dùng các custom performance tests khác

---

## 📈 Workflow đề xuất

1. **Baseline**: Chạy tất cả tests để có metrics ban đầu
2. **Identify bottlenecks**: Xác định các điểm chậm từ kết quả
3. **Optimize**: Tối ưu code dựa trên kết quả
4. **Re-test**: Chạy lại tests để verify improvements
5. **Track over time**: Setup CI/CD để track performance over time

---

## 📚 Tài liệu thêm

- `PERFORMANCE_TESTING_GUIDE.md` - Hướng dẫn chi tiết (tiếng Anh)
- `PERFORMANCE_TESTING_QUICK_START.md` - Quick start guide (tiếng Anh)
- [Android Performance Testing](https://developer.android.com/training/testing/performance) - Official docs

---

## ✅ Checklist

- [x] Dependencies đã được thêm vào `build.gradle.kts`
- [x] 5 loại performance tests đã được tạo
- [x] Script `run_performance_tests.ps1` đã sẵn sàng
- [x] Hướng dẫn đã được viết
- [ ] Chạy baseline tests (cần device/emulator)
- [ ] Xác định bottlenecks
- [ ] Optimize code
- [ ] Re-test để verify improvements

---

## 🎯 Next Steps

1. **Kết nối device/emulator**
2. **Chạy baseline tests**: `.\run_performance_tests.ps1`
3. **Xem kết quả** và xác định bottlenecks
4. **Optimize code** dựa trên kết quả
5. **Re-test** để verify improvements

Chúc bạn test hiệu năng thành công! 🚀

