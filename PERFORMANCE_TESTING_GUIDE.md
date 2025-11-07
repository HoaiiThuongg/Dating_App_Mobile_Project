# 🚀 Hướng dẫn Kiểm thử Hiệu năng (Performance Testing)

## 📋 Tổng quan

Kiểm thử hiệu năng giúp đo lường và đảm bảo app hoạt động tốt về:
- **Thời gian khởi động** (Startup time)
- **Thời gian render UI** (Composition performance)
- **Hiệu năng scroll** (Scrolling performance)
- **Memory usage** (Sử dụng bộ nhớ)
- **CPU usage** (Sử dụng CPU)
- **Network performance** (Hiệu năng mạng)

---

## 🛠️ Các công cụ và phương pháp

### 1. **Macrobenchmark** (Đo hiệu năng toàn app)
- Đo thời gian khởi động app
- Đo hiệu năng scroll, navigation
- Đo frame rate (FPS)
- Cần device/emulator thật

### 2. **Microbenchmark** (Đo hiệu năng code nhỏ)
- Đo thời gian thực thi function
- Đo hiệu năng ViewModel operations
- Đo hiệu năng data processing
- Có thể chạy trên JVM

### 3. **Custom Performance Tests** (Tự tạo)
- Đo thời gian render Compose screens
- Đo thời gian load data
- Đo memory leaks

### 4. **Android Profiler** (Trong Android Studio)
- Memory profiler
- CPU profiler
- Network profiler
- Energy profiler

---

## 📦 Dependencies cần thiết

Đã được thêm vào `app/build.gradle.kts`:
- `androidx.benchmark:benchmark-junit4` - Cho macrobenchmark
- `androidx.benchmark.macro.junit4` - Cho macrobenchmark
- `androidx.test.ext:junit` - Đã có sẵn
- `androidx.compose.ui:ui-test-junit4` - Đã có sẵn

---

## 🎯 Các loại Performance Tests

### 1. **App Startup Performance**
Đo thời gian từ khi launch app đến khi UI sẵn sàng.

**File**: `AppStartupBenchmark.kt`

### 2. **Screen Render Performance**
Đo thời gian render các screens quan trọng:
- SplashScreen
- HomeScreen
- ChatScreen
- MessageScreen
- ProfileScreen

**File**: `ScreenRenderPerformanceTest.kt`

### 3. **Scroll Performance**
Đo hiệu năng scroll trong:
- HomeScreen (swipe cards)
- MessageScreen (list messages)
- ChatScreen (chat messages)

**File**: `ScrollPerformanceTest.kt`

### 4. **ViewModel Performance**
Đo thời gian thực thi các operations trong ViewModels:
- Load users
- Load messages
- Process swipe actions

**File**: `ViewModelPerformanceTest.kt`

### 5. **Memory Performance**
Kiểm tra memory leaks và memory usage.

**File**: `MemoryPerformanceTest.kt`

---

## 🚀 Cách chạy Performance Tests

### Chạy Macrobenchmark (cần device/emulator):
```powershell
# Chạy tất cả macrobenchmark tests
.\gradlew :app:connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark

# Hoặc chạy script
.\run_performance_tests.ps1
```

### Chạy Microbenchmark:
```powershell
# Chạy microbenchmark tests
.\gradlew :app:benchmarkDebugUnitTest
```

### Chạy Custom Performance Tests:
```powershell
# Chạy custom performance tests
.\gradlew :app:connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
```

---

## 📊 Xem kết quả

### Macrobenchmark Results:
- **Location**: `app/build/outputs/connected_android_test_additional_output/`
- **Format**: JSON và HTML reports

### Microbenchmark Results:
- **Location**: `app/build/outputs/benchmark-results/`
- **Format**: JSON reports

### Custom Performance Tests:
- **Location**: `app/build/reports/androidTests/`
- **Format**: HTML reports

---

## 📈 Metrics quan trọng

### 1. **Startup Time**
- **Cold start**: < 2 giây
- **Warm start**: < 1 giây
- **Hot start**: < 0.5 giây

### 2. **Frame Rate (FPS)**
- **Target**: 60 FPS
- **Minimum**: 55 FPS
- **Janky frames**: < 5%

### 3. **Memory Usage**
- **Initial**: < 100 MB
- **Peak**: < 200 MB
- **No memory leaks**: Stable sau 10 phút

### 4. **Composition Time**
- **Initial composition**: < 16ms (60 FPS)
- **Recomposition**: < 8ms

---

## 🔍 Best Practices

1. **Chạy trên device thật** khi có thể (không phải emulator)
2. **Tắt debug mode** khi đo performance
3. **Chạy nhiều lần** và lấy trung bình
4. **Đo trong điều kiện ổn định** (không có app khác chạy)
5. **So sánh với baseline** để track improvements
6. **Đo trước và sau** khi optimize code

---

## 🎯 Test Cases cần đo

### High Priority:
1. ✅ App startup time
2. ✅ HomeScreen render time
3. ✅ ChatScreen scroll performance
4. ✅ MessageScreen load time
5. ✅ ProfileScreen render time

### Medium Priority:
6. ✅ Swipe action performance
7. ✅ Image loading performance
8. ✅ Navigation performance
9. ✅ ViewModel operations

### Low Priority:
10. ✅ Memory usage over time
11. ✅ CPU usage during operations
12. ✅ Network request performance

---

## 📝 Notes

- Performance tests cần **device/emulator** để chạy
- Macrobenchmark tests cần **release build** hoặc **benchmark build variant**
- Microbenchmark tests có thể chạy trên **JVM** (nhanh hơn)
- Custom performance tests có thể chạy như **instrumented tests**

---

## 🚀 Next Steps

1. **Chạy baseline tests** để có metrics ban đầu
2. **Identify bottlenecks** từ kết quả
3. **Optimize code** dựa trên kết quả
4. **Re-run tests** để verify improvements
5. **Set up CI/CD** để track performance over time

