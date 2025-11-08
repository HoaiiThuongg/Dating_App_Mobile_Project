# ⚡ Quick Start: Lấy Kết Quả Hiệu Năng

## 🎯 Mục Tiêu

Lấy **kết quả hiệu năng** của ứng dụng một cách nhanh nhất.

---

## 📊 Kết Quả Sẽ Có

1. **Startup Performance:** Cold/Warm/Hot start times
2. **Render Performance:** Tất cả screen render times
3. **Scroll Performance:** Scroll metrics (Initial, Avg, Max)
4. **ViewModel Performance:** LoadUsers, LoadMessages, SwipeAction, SendMessage
5. **Memory Performance:** Initial, Peak, After navigation, Growth

---

## 🚀 3 Bước Đơn Giản

### Bước 1: Kiểm Tra Device

```powershell
adb devices
```

Phải có device kết nối.

---

### Bước 2: Chạy Tests và Capture Metrics

```powershell
.\run_tests_with_metrics_capture.bat
```

**Thời gian:** ~10-15 phút

**Script ĐẢM BẢO:**
- ✅ **File metrics LUÔN được tạo** (dù có extract được hay không)
- ✅ Chạy tất cả performance tests
- ✅ Capture console output (nơi có metrics)
- ✅ Extract metrics từ output
- ✅ Lưu full output vào file (để check nếu cần)

---

### Bước 3: Xem Kết Quả

```powershell
# Xem file metrics
type performance_metrics_*.txt

# Hoặc mở HTML report
start performance_results\report_*\reports\androidTests\connected\debug\index.html
```

---

## 📄 File Kết Quả

### 1. Metrics Text File

**Location:** `performance_metrics_YYYYMMDD_HHMMSS.txt`

**Chứa:**
```
========================================
PERFORMANCE METRICS SUMMARY
========================================

Startup Performance:
  Cold Start: 1850 ms
  Warm Start: 850 ms
  Hot Start: 420 ms

Render Performance:
  SplashScreen: 85 ms
  HomeScreen: 180 ms
  ...

Scroll Performance:
  MessageScreen Scroll - Initial: 45 ms, Average: 8 ms, Max: 15 ms
  ...

ViewModel Performance:
  LoadUsers: 450 ms
  LoadMessages: 320 ms
  ...

Memory Performance:
  Initial: 85 MB
  Peak: 120 MB
  ...
```

### 2. HTML Report

**Location:** `performance_results/report_*/reports/androidTests/connected/debug/index.html`

**Chứa:** Chi tiết từng test, pass/fail, durations

### 3. CSV File (Nếu có)

**Location:** `performance_results/report_*/performance_metrics_detailed.csv`

**Dùng cho:** Excel, charts, phân tích

---

## ✅ Checklist

- [ ] Device đã kết nối
- [ ] Chạy `.\run_tests_with_metrics_capture.bat`
- [ ] Đợi tests hoàn thành
- [ ] Xem file metrics
- [ ] Copy vào báo cáo

---

## 🆘 Vấn Đề?

### Không có file metrics?

1. **Xem console output:** Metrics được in khi chạy tests
2. **Chạy lại:** `.\run_tests_with_metrics_capture.bat`
3. **Xem hướng dẫn:** `FIX_NO_METRICS_FILE.md`

### Tests fail?

- Kiểm tra device: `adb devices`
- Kiểm tra app đã build: `gradlew.bat assembleDebug`
- Xem error trong HTML reports

---

## 📚 Chi Tiết Hơn?

Xem: `HUONG_DAN_TONG_HOP_HIEU_NANG.md`

---

*Simple and Fast! 🚀*

