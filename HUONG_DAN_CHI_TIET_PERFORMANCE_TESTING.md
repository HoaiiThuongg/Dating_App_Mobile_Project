# 📊 Hướng dẫn Chi tiết: Performance Testing

## 🎯 Tổng quan

Bạn có **5 loại Performance Tests** để đo hiệu năng app:

1. **App Startup Benchmark** - Đo thời gian khởi động app
2. **Screen Render Performance** - Đo thời gian render các màn hình
3. **Scroll Performance** - Đo hiệu năng scroll/swipe
4. **ViewModel Performance** - Đo hiệu năng các operations trong ViewModels
5. **Memory Performance** - Kiểm tra sử dụng bộ nhớ và memory leaks

---

## 📋 Chi tiết từng loại test

### 1. 🚀 App Startup Benchmark (`AppStartupBenchmark`)

#### Đo được gì:
- **timeToInitialDisplay**: Thời gian từ khi launch app đến khi UI hiển thị lần đầu
- **timeToFullDisplay**: Thời gian từ khi launch đến khi UI hoàn toàn sẵn sàng
- **frameTiming**: Frame rate (FPS) và jank (frame bị lag)

#### 3 loại startup:
- **Cold Start**: App chưa chạy, khởi động từ đầu (chậm nhất)
- **Warm Start**: App đã chạy trước đó, khởi động lại (trung bình)
- **Hot Start**: App đang chạy ở background, bring to foreground (nhanh nhất)

#### Target:
- Cold start: < 2 giây
- Warm start: < 1 giây
- Hot start: < 0.5 giây

#### Cách chạy:
```powershell
# Cách 1: Dùng script (khuyến nghị)
run_macrobenchmark.bat

# Cách 2: Chạy thủ công
.\gradlew assembleBenchmark installBenchmark
.\gradlew assembleDebugAndroidTest
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

#### ⚠️ Lưu ý:
- Cần **non-debuggable build** (benchmark variant)
- Nếu tests bị SKIPPED, đảm bảo đã install benchmark APK

---

### 2. 🖼️ Screen Render Performance (`ScreenRenderPerformanceTest`)

#### Đo được gì:
- **Composition time**: Thời gian để Compose render UI
- **First frame time**: Thời gian đến frame đầu tiên
- **Render time**: Tổng thời gian render screen

#### Screens được test:
- **SplashScreen**: < 100ms
- **HomeScreen**: < 200ms
- **ChatScreen**: < 300ms (vì cần load messages)
- **MessageScreen**: < 250ms
- **ProfileScreen**: < 200ms

#### Cách chạy:
```powershell
# Cách 1: Dùng script
.\run_performance_tests.bat render

# Cách 2: Chạy thủ công
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest
```

#### Kết quả:
- Console sẽ hiển thị: `SplashScreen render time: 85ms`
- Tests sẽ PASS nếu < target, FAIL nếu > target

---

### 3. 📜 Scroll Performance (`ScrollPerformanceTest`)

#### Đo được gì:
- **Scroll frame rate**: FPS khi scroll
- **Scroll jank**: Số frame bị lag
- **Scroll smoothness**: Độ mượt khi scroll
- **Average scroll time**: Thời gian scroll trung bình
- **Max scroll time**: Thời gian scroll tối đa

#### Screens được test:
- **HomeScreen swipe**: < 50ms per swipe
- **MessageScreen scroll**: < 30ms (avg), < 60ms (max)
- **ChatScreen scroll**: < 25ms (avg), < 50ms (max)

#### Cách chạy:
```powershell
# Cách 1: Dùng script
.\run_performance_tests.bat scroll

# Cách 2: Chạy thủ công
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScrollPerformanceTest
```

#### Kết quả:
- Console sẽ hiển thị: `MessageScreen scroll - Average: 28ms, Max: 55ms`
- Tests sẽ PASS nếu < target, FAIL nếu > target

---

### 4. ⚙️ ViewModel Performance (`ViewModelPerformanceTest`)

#### Đo được gì:
- **LoadUsers**: Thời gian load danh sách users
- **LoadMessages**: Thời gian load messages
- **SwipeAction**: Thời gian thực thi swipe action
- **SendMessage**: Thời gian gửi tin nhắn

#### Targets:
- **LoadUsers**: < 500ms
- **LoadMessages**: < 300ms
- **SwipeAction**: < 10ms (avg), < 20ms (P95)
- **SendMessage**: < 100ms

#### Cách chạy:
```powershell
# Cách 1: Dùng script
.\run_performance_tests.bat viewmodel

# Cách 2: Chạy thủ công
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ViewModelPerformanceTest
```

#### Kết quả:
- Console sẽ hiển thị: `LoadUsers - Avg: 450ms, Min: 420ms, Max: 480ms`
- Tests sẽ PASS nếu < target, FAIL nếu > target

---

### 5. 💾 Memory Performance (`MemoryPerformanceTest`)

#### Đo được gì:
- **Initial memory**: Bộ nhớ khi app mới start
- **Memory after navigation**: Bộ nhớ sau khi navigate qua nhiều screens
- **Memory growth**: Tăng trưởng bộ nhớ theo thời gian
- **Peak memory**: Bộ nhớ cao nhất
- **Memory leaks**: Kiểm tra memory leaks

#### Targets:
- **Initial**: < 100 MB
- **After navigation**: < 150 MB
- **Peak**: < 200 MB
- **Memory growth**: < 30 MB (sau nhiều operations)

#### Cách chạy:
```powershell
# Cách 1: Dùng script
.\run_performance_tests.bat memory

# Cách 2: Chạy thủ công
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.MemoryPerformanceTest
```

#### Kết quả:
- Console sẽ hiển thị: `Initial memory usage: 85MB`
- Tests sẽ PASS nếu < target, FAIL nếu > target (có thể có memory leak)

---

## 🚀 Cách chạy TẤT CẢ Performance Tests

### Cách 1: Chạy từng loại (Khuyến nghị)

```powershell
# 1. App Startup Benchmark (cần benchmark variant)
run_macrobenchmark.bat

# 2. Screen Render Performance
.\run_performance_tests.bat render

# 3. Scroll Performance
.\run_performance_tests.bat scroll

# 4. ViewModel Performance
.\run_performance_tests.bat viewmodel

# 5. Memory Performance
.\run_performance_tests.bat memory
```

### Cách 2: Tạo script chạy tất cả

Tạo file `run_all_performance_tests.bat`:

```batch
@echo off
echo 🚀 Running ALL Performance Tests...
echo.

echo 1️⃣ Screen Render Performance Tests...
call run_performance_tests.bat render
echo.

echo 2️⃣ Scroll Performance Tests...
call run_performance_tests.bat scroll
echo.

echo 3️⃣ ViewModel Performance Tests...
call run_performance_tests.bat viewmodel
echo.

echo 4️⃣ Memory Performance Tests...
call run_performance_tests.bat memory
echo.

echo 5️⃣ App Startup Benchmarks (Macrobenchmark)...
call run_macrobenchmark.bat
echo.

echo ✅ All Performance Tests Completed!
```

Sau đó chạy:
```powershell
.\run_all_performance_tests.bat
```

---

## 📊 Xem kết quả

### 1. Console Output
Kết quả sẽ được in trực tiếp ra console:
```
SplashScreen render time: 85ms
HomeScreen render time: 180ms
MessageScreen scroll - Average: 28ms, Max: 55ms
LoadUsers - Avg: 450ms, Min: 420ms, Max: 480ms
Initial memory usage: 85MB
```

### 2. Test Reports (HTML)
```
app/build/reports/androidTests/
```
Mở file `index.html` trong browser để xem chi tiết.

### 3. Macrobenchmark Reports (JSON)
```
app/build/outputs/connected_android_test_additional_output/
```
Các file JSON chứa metrics chi tiết.

---

## 📈 Metrics tổng hợp

Sau khi chạy tất cả tests, bạn sẽ có **HƠN 60 METRICS** khác nhau:

### Startup Performance:
- Cold start: X ms
- Warm start: X ms
- Hot start: X ms
- Time to initial display: X ms
- Time to full display: X ms

### Render Performance:
- SplashScreen: X ms
- HomeScreen: X ms
- ChatScreen: X ms
- MessageScreen: X ms
- ProfileScreen: X ms
- Composition time: X ms
- First frame time: X ms

### Scroll Performance:
- HomeScreen swipe: X ms
- MessageScreen scroll: X ms (avg), X ms (max)
- ChatScreen scroll: X ms (avg), X ms (max)
- Initial composition: X ms

### ViewModel Performance:
- LoadUsers: X ms (avg), X ms (min), X ms (max)
- LoadMessages: X ms (avg), X ms (max)
- SwipeAction: X ms (avg), X ms (P95)
- SendMessage: X ms (avg), X ms (max)
- Throughput: X ops/s

### Memory Performance:
- Initial: X MB
- After navigation: X MB
- Peak: X MB
- Memory growth: X MB
- Memory leak detection: Yes/No

### System Resource Performance: ⭐ MỚI
- CPU usage: X%
- Thread count: X
- Heap size: X MB
- Available memory: X MB
- Thread leak detection: Yes/No

### Network Performance: ⭐ MỚI
- Connection time: X ms
- Network latency: X ms (avg), X ms (min), X ms (max)
- Jitter: X ms
- Throughput: X KB/s
- Success rate: X%

### Frame Rate Performance: ⭐ MỚI
- Frame rate (FPS): X FPS
- Average frame time: X ms
- Jank count: X
- Jank percentage: X%
- Smoothness: X/10

### App Size Performance: ⭐ MỚI
- APK size: X MB
- Installed size: X MB
- Cache size: X MB
- Data size: X MB

### Database Performance: ⭐ MỚI
- Query time: X ms (avg), X ms (P95), X ms (max)
- Insert time: X ms (avg), X ms (max)
- Batch throughput: X ops/s

### Image Loading Performance: ⭐ MỚI
- Image load time: X ms (avg), X ms (P95), X ms (max)
- Memory usage: X MB
- Cache hit rate: X%

### Touch Response Performance: ⭐ MỚI
- Touch latency: X ms
- Click response time: X ms (avg), X ms (P95), X ms (max)
- Gesture recognition: X ms

---

## 🎯 Workflow đề xuất

### 1. Baseline (Lần đầu)
```powershell
# Chạy tất cả tests để có metrics ban đầu
.\run_all_performance_tests.bat
```

### 2. Identify Bottlenecks
- Xem metrics nào vượt target
- Xác định screens/operations chậm nhất

### 3. Optimize
- Tối ưu code dựa trên kết quả
- Focus vào các điểm chậm nhất

### 4. Re-test
```powershell
# Chạy lại để verify improvements
.\run_all_performance_tests.bat
```

### 5. Compare
- So sánh với baseline
- Track improvements

---

## ⚠️ Lưu ý quan trọng

1. **Device/Emulator**: Tất cả tests cần device/emulator đã kết nối
2. **Macrobenchmark**: Cần non-debuggable build (benchmark variant)
3. **Custom Tests**: Có thể chạy với debug build
4. **Thời gian**: Chạy tất cả có thể mất 15-20 phút
5. **Môi trường**: Đóng các app khác để có kết quả chính xác

---

## 🐛 Troubleshooting

### Tests bị SKIPPED:
- Macrobenchmark: Đảm bảo đã install benchmark APK
- Custom tests: Không nên bị skip

### Build failed:
- Sync Gradle trong Android Studio
- Đóng Android Studio nếu files bị lock

### Không có kết quả:
- Kiểm tra device đã kết nối: `adb devices`
- Kiểm tra app đã được install

---

## ✅ Checklist

- [ ] Device/emulator đã kết nối
- [ ] Đã chạy Screen Render Performance Tests
- [ ] Đã chạy Scroll Performance Tests
- [ ] Đã chạy ViewModel Performance Tests
- [ ] Đã chạy Memory Performance Tests
- [ ] Đã chạy App Startup Benchmarks (nếu cần)
- [ ] Đã xem kết quả trong reports
- [ ] Đã identify bottlenecks
- [ ] Đã optimize code
- [ ] Đã re-test để verify

---

## 📊 Lấy Kết Quả Để Làm Báo Cáo

### Cách Nhanh (Khuyến Nghị)

1. **Chạy tất cả tests:**
   ```powershell
   .\run_all_performance_tests.bat
   ```

2. **Thu thập kết quả:**
   ```powershell
   .\collect_performance_results.bat
   ```

3. **Xem kết quả:**
   - Mở `performance_results/report_*/summary.md` - Báo cáo Markdown
   - Mở `performance_results/report_*/metrics.csv` - Metrics CSV (cho Excel)
   - Mở `performance_results/report_*/reports/androidTests/index.html` - HTML report

### Chi Tiết

Xem file **`HUONG_DAN_LAY_KET_QUA_BAO_CAO.md`** để biết:
- Cách lấy kết quả từ console, HTML reports, JSON files
- Format kết quả (CSV, JSON, Markdown)
- Template báo cáo mẫu
- Cách parse và analyze kết quả

---

## 📚 Files liên quan

- `run_performance_tests.bat` - Script chạy custom performance tests
- `run_macrobenchmark.bat` - Script chạy macrobenchmark
- `run_all_performance_tests.bat` - Script chạy tất cả
- `collect_performance_results.bat` - Script thu thập kết quả
- `extract_metrics.ps1` - Script extract metrics từ reports
- `generate_report.ps1` - Script tạo báo cáo Markdown
- `HUONG_DAN_LAY_KET_QUA_BAO_CAO.md` - Hướng dẫn lấy kết quả chi tiết
- `HUONG_DAN_TEST_HIEU_NANG.md` - Hướng dẫn tổng quan
- `PERFORMANCE_TESTING_GUIDE.md` - Hướng dẫn chi tiết (tiếng Anh)

---

Chúc bạn test hiệu năng thành công! 🚀


