# Dating App Mobile Project - Testing Guide

## 📋 Tổng quan

Dự án này bao gồm:
- **70+ UI Tests** từ file `Testcases.xlsx`
- **12 Performance Tests** để kiểm thử hiệu năng

## 🚀 Cách chạy tests

### Chạy tất cả tests (UI + Performance)

```batch
CHAY_TAT_CA_TESTS.bat
```

Script này sẽ:
1. Chạy 70+ UI Tests
2. Chạy 12 Performance Tests
3. Thu thập kết quả

**Thời gian ước tính:** 15-20 phút

### Chạy riêng từng loại

#### Chạy UI Tests (70+ test cases)

```batch
CHAY_UI_TESTS.bat
```

#### Chạy Performance Tests (12 tests)

**Cách 1: Chạy và thu thập metrics tự động (Khuyến nghị)**
```batch
CHAY_PERFORMANCE_VA_THU_THAP.bat
```

**Cách 2: Chạy riêng**
```batch
run_all_performance_tests.bat
```

Sau đó chạy:
```batch
collect_performance_results.bat
```

## 📊 12 Performance Tests

1. **Screen Render Performance** - Đo thời gian render các màn hình
2. **Scroll Performance** - Đo hiệu năng scroll/swipe
3. **ViewModel Performance** - Đo hiệu năng ViewModel operations
4. **Memory Performance** - Kiểm tra memory usage và leaks
5. **App Startup Benchmark** - Đo thời gian khởi động app (cold/warm/hot start)
6. **System Resource Performance** - Đo CPU, memory, thread usage
7. **Network Performance** - Đo latency, throughput
8. **Frame Rate Performance** - Đo FPS và jank
9. **App Size Performance** - Kiểm tra kích thước app
10. **Database Performance** - Đo hiệu năng database operations
11. **Image Loading Performance** - Đo thời gian load ảnh
12. **Touch Response Performance** - Đo thời gian phản hồi touch

## 📁 Kết quả

Sau khi chạy tests, kết quả sẽ được lưu trong:

- **UI Test Results:** `ui_test_results\report_YYYYMMDD_HHMMSS\`
  - Test reports: `reports\index.html`
  - Coverage reports: `coverage\index.html`
  - Summary: `TEST_SUMMARY.txt`

- **Performance Results:** `performance_results\report_YYYYMMDD_HHMMSS\`
  - Test reports: `reports\androidTests\`
  - Macrobenchmark: `benchmarks\`
  - Summary: `README.txt`

## ⚙️ Yêu cầu

- Android device/emulator đã kết nối
- ADB đã cài đặt và trong PATH
- Gradle đã được cấu hình

## 📝 File quan trọng

- `Testcases.xlsx` - Danh sách 70+ test cases
- `CHAY_UI_TESTS.bat` - Script chạy UI tests
- `CHAY_PERFORMANCE_VA_THU_THAP.bat` - Script chạy performance tests và thu thập metrics (khuyến nghị)
- `run_all_performance_tests.bat` - Script chạy performance tests
- `collect_performance_results.bat` - Script thu thập kết quả

## 🔧 Troubleshooting

### Device không kết nối
```batch
adb devices
```
Đảm bảo device hiển thị là "device" (không phải "unauthorized")

### Build failed
- Kiểm tra kết nối internet (để download dependencies)
- Chạy `gradlew clean` trước khi chạy tests

### Performance tests bị skip
- Macrobenchmark yêu cầu non-debuggable build
- Đảm bảo đã install benchmark APK trước khi chạy
