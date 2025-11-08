# 📊 Kết Quả Test Hiệu Năng

## 📍 Vị Trí Các File Kết Quả

Sau khi chạy `run_all_performance_tests.bat`, kết quả có thể ở các vị trí sau:

---

## 1. 📄 HTML Reports (Chi Tiết)

### Location 1: Build Directory (Gốc)
```
app\build\reports\androidTests\connected\debug\index.html
```

**Mở trong browser:**
```powershell
start app\build\reports\androidTests\connected\debug\index.html
```

### Location 2: Collected Results (Đã thu thập)
```
performance_results\report_YYYYMMDD_HHMMSS\reports\androidTests\connected\debug\index.html
```

**Tìm report mới nhất:**
```powershell
.\show_latest_results.bat
```

**Hoặc mở trực tiếp:**
```powershell
# Tìm report mới nhất
$latest = Get-ChildItem "performance_results\report_*" | Sort-Object LastWriteTime -Descending | Select-Object -First 1
start "$latest\reports\androidTests\connected\debug\index.html"
```

---

## 2. 📊 Macrobenchmark Results (JSON)

### Location:
```
app\build\outputs\connected_android_test_additional_output\
```

**Hoặc trong collected results:**
```
performance_results\report_YYYYMMDD_HHMMSS\benchmarks\
```

**Chứa:** JSON files với startup metrics (Cold/Warm/Hot start)

---

## 3. 📈 Metrics Files (Tổng Hợp)

### Nếu đã extract:
```
performance_results\report_YYYYMMDD_HHMMSS\performance_metrics_detailed.txt
performance_results\report_YYYYMMDD_HHMMSS\performance_metrics_detailed.csv
```

### Nếu chưa extract:
Chạy script để extract:
```powershell
.\extract_metrics_from_html.ps1
```

**Hoặc capture từ console:**
```powershell
.\run_tests_with_metrics_capture.bat
```

---

## 🔍 Cách Tìm Kết Quả

### Script Tự Động:

```powershell
.\find_test_results.bat
```

**Hoặc:**

```powershell
.\show_latest_results.bat
```

### Tìm Thủ Công:

1. **HTML Reports:**
   ```powershell
   # Trong build directory
   dir app\build\reports\androidTests\*.html /s
   
   # Trong collected results
   dir performance_results\report_*\reports\*.html /s
   ```

2. **Metrics Files:**
   ```powershell
   dir performance_metrics_*.txt
   dir performance_results\report_*\performance_metrics_*.txt
   ```

3. **Macrobenchmark:**
   ```powershell
   dir app\build\outputs\connected_android_test_additional_output\*.json /s
   dir performance_results\report_*\benchmarks\*.json /s
   ```

---

## 📋 Checklist Tìm Kết Quả

### ✅ HTML Reports:
- [ ] `app\build\reports\androidTests\connected\debug\index.html`
- [ ] `performance_results\report_*\reports\androidTests\connected\debug\index.html`

### ✅ Macrobenchmark:
- [ ] `app\build\outputs\connected_android_test_additional_output\*.json`
- [ ] `performance_results\report_*\benchmarks\*.json`

### ✅ Metrics:
- [ ] `performance_metrics_*.txt` (root)
- [ ] `performance_results\report_*\performance_metrics_detailed.txt`

---

## 🚀 Quick Actions

### Xem HTML Report:

```powershell
# Tự động tìm và mở
.\show_latest_results.bat

# Hoặc mở trực tiếp
start app\build\reports\androidTests\connected\debug\index.html
```

### Extract Metrics:

```powershell
# Từ HTML reports
.\extract_metrics_from_html.ps1

# Hoặc capture từ console
.\run_tests_with_metrics_capture.bat
```

### Collect All Results:

```powershell
.\collect_performance_results_simple.bat
```

---

## ⚠️ Nếu Không Tìm Thấy

### 1. Reports không có trong build directory?

Có thể đã bị collect hoặc tests chưa chạy xong.

**Kiểm tra:**
```powershell
# Xem có reports không
dir app\build\reports\androidTests\*.html /s

# Nếu không có, collect lại
.\collect_performance_results_simple.bat
```

### 2. Metrics files không có?

**Extract ngay:**
```powershell
.\extract_metrics_from_html.ps1
```

**Hoặc capture từ console:**
```powershell
.\run_tests_with_metrics_capture.bat
```

### 3. Không có gì cả?

**Chạy lại tests:**
```powershell
.\run_all_performance_tests.bat
```

**Sau đó collect:**
```powershell
.\collect_performance_results_simple.bat
```

---

*Last updated: [Date]*

