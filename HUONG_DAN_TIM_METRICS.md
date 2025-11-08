# 📊 Hướng Dẫn: Tìm File Metrics

## 🔍 File Metrics Ở Đâu?

Sau khi có reports, file metrics có thể ở các vị trí sau:

---

## 📍 Vị Trí Có Thể Có Metrics

### 1. Trong Report Directory (Nếu đã extract)

```
performance_results/report_YYYYMMDD_HHMMSS/performance_metrics_detailed.txt
performance_results/report_YYYYMMDD_HHMMSS/performance_metrics_detailed.csv
```

**Tìm report mới nhất:**
```powershell
.\TIM_FILE_METRICS.bat
```

### 2. Trong Root Directory (Nếu đã capture)

```
performance_metrics_YYYYMMDD_HHMMSS.txt
```

### 3. Chưa Có (Cần Extract)

Nếu chưa có file metrics, bạn cần extract từ reports.

---

## 🚀 Cách Tìm File Metrics

### Script Tự Động:

```powershell
.\TIM_FILE_METRICS.bat
```

Script này sẽ:
- ✅ Tìm trong `performance_results/`
- ✅ Tìm trong root directory
- ✅ Tìm CSV files
- ✅ Hiển thị vị trí file metrics

---

## 📊 Nếu Chưa Có Metrics File

### Cách 1: Extract Từ HTML Reports (Nếu có reports)

```powershell
.\extract_metrics_now.bat
```

**Hoặc:**

```powershell
.\extract_metrics_from_html.ps1
```

**Script sẽ:**
- ✅ Tìm HTML reports trong report directory
- ✅ Extract metrics từ HTML
- ✅ Tạo file `performance_metrics_detailed.txt`
- ✅ Tạo file `performance_metrics_detailed.csv`

### Cách 2: Capture Từ Console Output

```powershell
.\run_tests_with_metrics_capture.bat
```

**Script sẽ:**
- ✅ Chạy lại tests (nếu cần)
- ✅ Capture console output
- ✅ Extract metrics từ output
- ✅ Tạo file metrics

### Cách 3: Chạy Script Master

```powershell
.\RUN_TESTS_BAO_DAM_KET_QUA_SAFE.bat
```

**Script sẽ:**
- ✅ Chạy tất cả tests
- ✅ Collect reports
- ✅ Extract metrics tự động
- ✅ Tạo file metrics

---

## 📄 File Metrics Sẽ Có

### 1. Text File

**Location:** `performance_results/report_*/performance_metrics_detailed.txt`

**Chứa:**
```
========================================
PERFORMANCE METRICS SUMMARY
========================================
Generated: [date] [time]

========================================
METRICS TỪ CONSOLE OUTPUT
========================================

SplashScreen render time: 85ms
HomeScreen render time: 180ms
MessageScreen scrollable container composition - Initial: 45ms, Average idle: 8ms, Max: 15ms
LoadUsers - Avg: 450ms
Initial memory usage: 85MB
...
```

### 2. CSV File

**Location:** `performance_results/report_*/performance_metrics_detailed.csv`

**Chứa:** Metrics dạng CSV (có thể import vào Excel)

---

## ✅ Quick Actions

### Tìm File Metrics:

```powershell
.\TIM_FILE_METRICS.bat
```

### Extract Metrics Ngay (Nếu có reports):

```powershell
<｜tool▁calls▁begin｜><｜tool▁call▁begin｜>
run_terminal_cmd
