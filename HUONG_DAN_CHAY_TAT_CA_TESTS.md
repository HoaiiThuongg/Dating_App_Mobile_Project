# 🚀 Hướng Dẫn: Chạy Tất Cả Tests và Lấy Hiệu Năng

## 🎯 Mục Tiêu

Chạy tất cả performance tests và lấy được các metrics như trong file hướng dẫn chi tiết:
- Startup Performance (Cold/Warm/Hot start)
- Render Performance (tất cả screens)
- Scroll Performance
- ViewModel Performance
- Memory Performance

---

## 🚀 Cách 1: Tự Động (Khuyến Nghị)

### Chạy Tất Cả và Thu Thập Tự Động:

```powershell
.\run_all_and_collect.bat
```

**Hoặc chạy với metrics capture:**

```powershell
.\run_tests_with_metrics_capture.bat
```

Script này sẽ capture console output và extract metrics.

**Script này sẽ:**
1. ✅ Chạy tất cả performance tests
2. ✅ Chờ reports được tạo
3. ✅ Thu thập kết quả
4. ✅ Extract metrics chi tiết
5. ✅ Tạo summary report

**Thời gian:** ~10-15 phút

---

## 📋 Cách 2: Từng Bước

### Bước 1: Chạy Tất Cả Tests

```powershell
.\run_all_performance_tests.bat
```

Hoặc chạy từng loại:

```powershell
# 1. Screen Render Performance
.\run_performance_tests.bat render

# 2. Scroll Performance
.\run_performance_tests.bat scroll

# 3. ViewModel Performance
.\run_performance_tests.bat viewmodel

# 4. Memory Performance
.\run_performance_tests.bat memory

# 5. App Startup (Macrobenchmark)
.\run_macrobenchmark.bat
```

### Bước 2: Chờ Reports Được Tạo

Sau khi tests chạy xong, chờ 5-10 giây để reports được ghi vào disk.

### Bước 3: Thu Thập Kết Quả

```powershell
.\collect_performance_results_simple.bat
```

### Bước 4: Extract Metrics Chi Tiết

```powershell
.\extract_detailed_metrics.ps1
```

---

## 📊 Kết Quả Bạn Sẽ Có

Sau khi chạy xong, bạn sẽ có:

### 1. HTML Reports (Chi Tiết)

**Location:**
```
performance_results/report_YYYYMMDD_HHMMSS/reports/androidTests/connected/debug/index.html
```

**Mở trong browser để xem:**
- Danh sách tất cả tests
- Kết quả pass/fail
- Duration của từng test
- Error messages (nếu có)

### 2. Performance Metrics (Tổng Hợp)

**Location:**
```
performance_results/report_YYYYMMDD_HHMMSS/performance_metrics_detailed.txt
performance_results/report_YYYYMMDD_HHMMSS/performance_metrics_detailed.csv
```

**Format:**
```
========================================
PERFORMANCE METRICS SUMMARY
========================================

Test Summary:
  Total Tests: 5
  Failures: 4
  Duration: 3m17.81s

========================================
Render Performance
========================================
  SplashScreen: 85 ms
  HomeScreen: 180 ms
  ChatScreen: 857 ms
  MessageScreen: 731 ms
  MyProfileScreen: 609 ms

========================================
Scroll Performance
========================================
  MessageScreen Scroll - Initial Composition: 45 ms
  MessageScreen Scroll - Average Idle: 8 ms
  MessageScreen Scroll - Max Idle: 15 ms
  ChatScreen Scroll - Initial Composition: 42 ms
  ChatScreen Scroll - Average Idle: 7 ms
  ChatScreen Scroll - Max Idle: 14 ms

========================================
ViewModel Performance
========================================
  LoadUsers - Average Time: 450 ms
  LoadMessages - Average Time: 320 ms
  SwipeAction - Average Time: 8 ms
  SwipeAction - P95 Time: 18 ms
  SendMessage - Average Time: 95 ms

========================================
Memory Performance
========================================
  Initial memory usage: 85 MB
  Peak memory usage: 120 MB
  After navigation memory usage: 95 MB

========================================
Startup Performance
========================================
  Cold Start: 1850 ms
  Warm Start: 850 ms
  Hot Start: 420 ms
```

### 3. CSV File (Cho Excel)

**Location:**
```
performance_results/report_YYYYMMDD_HHMMSS/performance_metrics_detailed.csv
```

**Cột:**
- Category
- Screen/Operation
- Metric
- Value
- Unit
- Status

---

## 📈 Metrics Theo Hướng Dẫn

### ✅ Startup Performance:
- **Cold start:** X ms (từ macrobenchmark)
- **Warm start:** X ms (từ macrobenchmark)
- **Hot start:** X ms (từ macrobenchmark)

### ✅ Render Performance:
- **SplashScreen:** X ms
- **HomeScreen:** X ms
- **ChatScreen:** X ms
- **MessageScreen:** X ms
- **ProfileScreen/MyProfileScreen:** X ms

### ✅ Scroll Performance:
- **HomeScreen swipe:** X ms
- **MessageScreen scroll:** X ms (avg), X ms (max)
- **ChatScreen scroll:** X ms (avg), X ms (max)

### ✅ ViewModel Performance:
- **LoadUsers:** X ms
- **LoadMessages:** X ms
- **SwipeAction:** X ms (avg), X ms (P95)
- **SendMessage:** X ms

### ✅ Memory Performance:
- **Initial:** X MB
- **After navigation:** X MB
- **Peak:** X MB
- **Memory growth:** X MB

---

## 🎯 Quick Start

### Chạy Tất Cả và Lấy Kết Quả:

```powershell
# 1. Chạy tất cả tests và collect tự động
.\run_all_and_collect.bat

# 2. Xem kết quả
start performance_results\report_*\performance_metrics_detailed.txt
start performance_results\report_*\reports\androidTests\connected\debug\index.html
```

---

## 📝 Làm Báo Cáo

### Từ File Text:

Mở `performance_metrics_detailed.txt` và copy metrics vào báo cáo.

### Từ CSV:

1. Mở `performance_metrics_detailed.csv` trong Excel
2. Tạo pivot table để phân tích
3. Tạo charts/graphs
4. Export vào báo cáo

### Từ HTML Report:

1. Mở `index.html` trong browser
2. Chụp screenshots
3. Copy thông tin chi tiết
4. Thêm vào báo cáo

---

## ⚠️ Lưu Ý

1. **Thời gian:** Chạy tất cả tests mất ~10-15 phút
2. **Device:** Phải có device/emulator kết nối
3. **Tests có thể fail:** Nhưng metrics vẫn được extract
4. **Macrobenchmark:** Có thể bị skip nếu app debuggable

---

## 🆘 Troubleshooting

### Không có metrics?

1. **Kiểm tra reports có tồn tại:**
   ```powershell
   .\verify_reports.bat
   ```

2. **Chạy lại tests:**
   ```powershell
   .\run_all_performance_tests.bat
   ```

3. **Extract lại metrics:**
   ```powershell
   .\extract_detailed_metrics.ps1
   ```

### Metrics không đầy đủ?

- **Metrics được in ra console** - Chạy `.\run_tests_with_metrics_capture.bat` để capture
- Một số metrics chỉ có trong console output (println statements)
- Macrobenchmark metrics chỉ có khi chạy với benchmark variant
- Kiểm tra console output khi chạy tests

### Không có file metrics?

Xem file `FIX_NO_METRICS_FILE.md` để biết cách:
1. Extract từ HTML reports
2. Capture console output
3. Xem metrics trực tiếp trong console

---

*Last updated: [Date]*

