# 📊 Hướng Dẫn Lấy Kết Quả Đo Hiệu Năng Để Làm Báo Cáo

## 🎯 Tổng Quan

Sau khi chạy performance tests, bạn có thể lấy kết quả từ nhiều nguồn khác nhau để tạo báo cáo.

---

## 🚀 Cách 1: Tự Động Thu Thập Kết Quả (Khuyến Nghị)

### Bước 1: Chạy Performance Tests

```powershell
# Chạy tất cả tests
.\run_all_performance_tests.bat

# Hoặc chạy từng loại
.\run_performance_tests.bat render
.\run_performance_tests.bat scroll
.\run_performance_tests.bat viewmodel
.\run_performance_tests.bat memory
.\run_macrobenchmark.bat
```

### Bước 2: Thu Thập Kết Quả

```powershell
.\collect_performance_results.bat
```

Script này sẽ:
- ✅ Copy tất cả test reports (HTML)
- ✅ Copy macrobenchmark results (JSON)
- ✅ Extract metrics từ reports
- ✅ Tạo file CSV chứa tất cả metrics
- ✅ Tạo file JSON summary
- ✅ Tạo file Markdown report

### Bước 3: Xem Kết Quả

Sau khi chạy script, kết quả sẽ được lưu tại:
```
performance_results/report_YYYYMMDD_HHMMSS/
├── README.txt              # Hướng dẫn nhanh
├── summary.md              # Báo cáo Markdown
├── metrics.csv             # Metrics dạng CSV (dễ import Excel)
├── metrics.json            # Metrics dạng JSON
├── reports/
│   └── androidTests/      # HTML reports
│       └── index.html     # Mở file này trong browser
└── benchmarks/             # Macrobenchmark JSON files
```

---

## 📋 Cách 2: Lấy Kết Quả Thủ Công

### 1. Console Output (Kết Quả In Trực Tiếp)

Khi chạy tests, kết quả sẽ được in ra console:

```
SplashScreen render time: 85ms
HomeScreen render time: 180ms
MessageScreen scrollable container composition - Initial: 45ms, Average idle: 8ms, Max: 15ms
LoadUsers - Avg: 450ms, Min: 420ms, Max: 480ms
Initial memory usage: 85MB
```

**Cách lấy:**
- Copy output từ console
- Hoặc redirect output vào file:
  ```powershell
  .\run_performance_tests.bat render > results_render.txt
  ```

### 2. HTML Test Reports

**Location:**
```
app/build/reports/androidTests/
```

**Cách xem:**
1. Mở file `index.html` trong browser
2. Xem chi tiết từng test:
   - Test name
   - Duration
   - Status (PASSED/FAILED)
   - Screenshots (nếu có)

**Cách lấy:**
```powershell
# Copy toàn bộ folder
xcopy /E /I app\build\reports\androidTests C:\Reports\androidTests
```

### 3. Macrobenchmark JSON Results

**Location:**
```
app/build/outputs/connected_android_test_additional_output/
```

**Format:** JSON files chứa:
- `timeToInitialDisplay`: Thời gian đến frame đầu tiên
- `timeToFullDisplay`: Thời gian đến khi UI sẵn sàng
- `frameTiming`: Frame timing metrics (FPS, jank)

**Cách đọc:**
```powershell
# Xem file JSON
Get-Content app\build\outputs\connected_android_test_additional_output\*.json | ConvertFrom-Json
```

### 4. Test Logs

**Location:**
```
app/build/outputs/androidTest-results/connected/
```

Chứa log chi tiết của từng test run.

---

## 📊 Format Kết Quả Cho Báo Cáo

### Format 1: CSV (Cho Excel/Google Sheets)

File `metrics.csv` có format:
```csv
Test,Metric,Value,Unit,Source
SplashScreen,Render Time,85,ms,Console Output
HomeScreen,Render Time,180,ms,Console Output
MessageScreen Scroll,Initial Composition,45,ms,Console Output
MessageScreen Scroll,Average Idle,8,ms,Console Output
```

**Cách dùng:**
1. Mở file CSV trong Excel
2. Tạo pivot table để phân tích
3. Tạo charts/graphs

### Format 2: Markdown (Cho GitHub/Documentation)

File `summary.md` có format Markdown, dễ đọc và có thể:
- Upload lên GitHub
- Convert sang PDF
- Dùng trong documentation

### Format 3: JSON (Cho Automation/Analysis)

File `metrics.json` có format JSON, dễ parse bằng code:
```json
{
  "Timestamp": "2024-01-15 10:30:00",
  "TotalMetrics": 25,
  "Metrics": [
    {
      "Test": "SplashScreen",
      "Metric": "Render Time",
      "Value": "85",
      "Unit": "ms",
      "Source": "Console Output"
    }
  ]
}
```

---

## 📈 Các Metrics Quan Trọng Cần Báo Cáo

### 1. App Startup Performance
- **Cold start time** (ms)
- **Warm start time** (ms)
- **Hot start time** (ms)
- **Time to initial display** (ms)
- **Time to full display** (ms)

### 2. Screen Render Performance
- **SplashScreen render time** (ms)
- **HomeScreen render time** (ms)
- **ChatScreen render time** (ms)
- **MessageScreen render time** (ms)
- **ProfileScreen render time** (ms)

### 3. Scroll Performance
- **Initial composition time** (ms)
- **Average idle time** (ms)
- **Max idle time** (ms)
- **Frame rate** (FPS) - từ macrobenchmark

### 4. ViewModel Performance
- **LoadUsers average time** (ms)
- **LoadMessages average time** (ms)
- **SwipeAction average time** (ms)
- **SwipeAction P95 time** (ms)
- **SendMessage average time** (ms)

### 5. Memory Performance
- **Initial memory usage** (MB)
- **Memory after navigation** (MB)
- **Peak memory usage** (MB)
- **Memory increase after 50 operations** (MB)

---

## 📝 Tạo Báo Cáo Chi Tiết

### Bước 1: Thu Thập Tất Cả Kết Quả

```powershell
# Chạy tất cả tests
.\run_all_performance_tests.bat

# Thu thập kết quả
.\collect_performance_results.bat
```

### Bước 2: Mở File Summary

```powershell
# Mở file Markdown
notepad performance_results\report_*\summary.md

# Hoặc mở HTML report
start performance_results\report_*\reports\androidTests\index.html
```

### Bước 3: Tạo Báo Cáo

**Option A: Copy từ Summary Markdown**

File `summary.md` đã có format sẵn, bạn chỉ cần:
1. Copy nội dung
2. Paste vào báo cáo của bạn
3. Thêm screenshots nếu cần

**Option B: Dùng CSV để Tạo Charts**

1. Mở `metrics.csv` trong Excel
2. Tạo charts:
   - Bar chart cho render times
   - Line chart cho memory usage
   - Pie chart cho performance distribution
3. Export charts vào báo cáo

**Option C: Tạo Báo Cáo Tự Động**

Sử dụng script `generate_report.ps1` để tạo báo cáo tự động:
```powershell
.\generate_report.ps1 -OutputDir "performance_results/report_YYYYMMDD_HHMMSS"
```

---

## 🎨 Template Báo Cáo Mẫu

### 1. Executive Summary
```
Performance Test Results - Dating App
Date: [Date]
Device: [Device Model]
Android Version: [Version]

Summary:
- App startup: [X]ms (Cold), [Y]ms (Warm), [Z]ms (Hot)
- Average screen render: [X]ms
- Memory usage: [X]MB (initial), [Y]MB (peak)
- All tests: [PASSED/FAILED]
```

### 2. Detailed Metrics

**Startup Performance:**
| Metric | Value | Target | Status |
|--------|-------|--------|--------|
| Cold start | X ms | < 2000ms | ✅/❌ |
| Warm start | Y ms | < 1000ms | ✅/❌ |
| Hot start | Z ms | < 500ms | ✅/❌ |

**Screen Render:**
| Screen | Render Time | Target | Status |
|--------|-------------|--------|--------|
| SplashScreen | X ms | < 100ms | ✅/❌ |
| HomeScreen | Y ms | < 200ms | ✅/❌ |
| ... | ... | ... | ... |

### 3. Charts/Graphs
- Bar chart: Render times comparison
- Line chart: Memory usage over time
- Pie chart: Performance distribution

### 4. Screenshots
- Test execution screenshots
- HTML report screenshots
- Charts/graphs

---

## 🔧 Advanced: Parse Results Programmatically

### PowerShell Script Example

```powershell
# Parse metrics from CSV
$metrics = Import-Csv "performance_results\report_*\metrics.csv"

# Filter by test type
$renderMetrics = $metrics | Where-Object { $_.Metric -like "*Render*" }
$memoryMetrics = $metrics | Where-Object { $_.Metric -like "*Memory*" }

# Calculate statistics
$avgRenderTime = ($renderMetrics | Measure-Object -Property Value -Average).Average
$maxMemory = ($memoryMetrics | Measure-Object -Property Value -Maximum).Maximum

Write-Host "Average render time: $avgRenderTime ms"
Write-Host "Max memory: $maxMemory MB"
```

### Python Script Example

```python
import json
import csv

# Read JSON
with open('performance_results/report_*/metrics.json') as f:
    data = json.load(f)

# Process metrics
for metric in data['Metrics']:
    print(f"{metric['Test']}: {metric['Value']} {metric['Unit']}")
```

---

## ✅ Checklist Trước Khi Làm Báo Cáo

- [ ] Đã chạy tất cả performance tests
- [ ] Đã thu thập kết quả bằng `collect_performance_results.bat`
- [ ] Đã mở và xem HTML reports
- [ ] Đã kiểm tra metrics.csv và metrics.json
- [ ] Đã tạo summary.md
- [ ] Đã chụp screenshots (nếu cần)
- [ ] Đã so sánh với performance targets
- [ ] Đã ghi chú các metrics vượt target

---

## 🆘 Troubleshooting

### Không tìm thấy kết quả?

1. **Kiểm tra xem tests đã chạy chưa:**
   ```powershell
   dir app\build\reports\androidTests
   ```

2. **Chạy lại tests:**
   ```powershell
   .\run_all_performance_tests.bat
   ```

3. **Thu thập lại kết quả:**
   ```powershell
   .\collect_performance_results.bat
   ```

### Metrics không đầy đủ?

- Một số metrics chỉ có trong console output
- Macrobenchmark metrics chỉ có khi chạy với benchmark variant
- Kiểm tra log files trong `app/build/outputs/androidTest-results/`

---

## 📚 Tài Liệu Tham Khảo

- `HUONG_DAN_CHI_TIET_PERFORMANCE_TESTING.md` - Hướng dẫn chi tiết về performance testing
- `PERFORMANCE_TESTING_GUIDE.md` - Guide tiếng Anh
- Android Benchmark Documentation: https://developer.android.com/topic/performance/benchmarking

---

*Last updated: [Date]*

