# 🚀 Hướng Dẫn Chạy Tests Và Tạo Báo Cáo

## 📋 Tổng Quan

Script `RUN_ALL_TESTS_FINAL.bat` sẽ:
- ✅ **Rebuild test APK** (sửa lỗi nếu có)
- ✅ **Chạy tất cả 12 loại performance tests**
- ✅ **Chia folder theo từng loại** (không trộn lẫn)
- ✅ **KHÔNG xóa báo cáo cũ** (bảo vệ dữ liệu)
- ✅ **Tạo báo cáo tổng hợp** với metrics

---

## 🚀 Chạy Script

### Cách 1: Double-click file
```
RUN_ALL_TESTS_FINAL.bat
```

### Cách 2: Command line
```powershell
.\RUN_ALL_TESTS_FINAL.bat
```

---

## ⏱️ Thời Gian

- **Tổng thời gian:** ~20-25 phút
- **Mỗi test:** ~2-3 phút
- **Build:** ~3-5 phút

---

## 📁 Cấu Trúc Thư Mục Kết Quả

```
performance_results/
└── report_YYYYMMDD_HHMMSS/
    ├── TEST_SUMMARY.txt                    # Báo cáo tổng hợp
    ├── full_output.log                     # Log đầy đủ
    ├── build_log.txt                       # Log build
    ├── performance_metrics_detailed.txt    # Metrics chi tiết
    ├── performance_metrics_detailed.csv    # Metrics CSV
    ├── benchmarks/                         # Macrobenchmark results
    └── reports/                            # Reports theo từng loại
        ├── render/                         # Screen Render Performance
        │   └── androidTests/
        ├── scroll/                         # Scroll Performance
        │   └── androidTests/
        ├── viewmodel/                      # ViewModel Performance
        │   └── androidTests/
        ├── memory/                         # Memory Performance
        │   └── androidTests/
        ├── startup/                        # App Startup
        │   └── androidTests/
        ├── system/                         # System Resource
        │   └── androidTests/
        ├── network/                        # Network Performance
        │   └── androidTests/
        ├── framerate/                      # Frame Rate Performance
        │   └── androidTests/
        ├── size/                           # App Size Performance
        │   └── androidTests/
        ├── database/                       # Database Performance
        │   └── androidTests/
        ├── image/                          # Image Loading Performance
        │   └── androidTests/
        └── touch/                          # Touch Response Performance
            └── androidTests/
```

---

## 📊 Xem Báo Cáo

### 1. Báo Cáo Tổng Hợp

```powershell
type performance_results\report_YYYYMMDD_HHMMSS\TEST_SUMMARY.txt
```

**Nội dung:**
- Tổng số tests đã chạy
- Số tests passed/failed
- Exit code của từng test
- Vị trí reports

### 2. Metrics Chi Tiết

```powershell
type performance_results\report_YYYYMMDD_HHMMSS\performance_metrics_detailed.txt
```

**Nội dung:**
- Render Performance metrics
- Scroll Performance metrics
- ViewModel Performance metrics
- Memory Performance metrics
- System Resource metrics
- Network Performance metrics
- Frame Rate metrics
- App Size metrics
- Database Performance metrics
- Image Loading metrics
- Touch Response metrics

### 3. HTML Reports

Mở file `index.html` trong mỗi thư mục:

```powershell
# Render Performance
start performance_results\report_YYYYMMDD_HHMMSS\reports\render\androidTests\connected\debug\index.html

# Scroll Performance
start performance_results\report_YYYYMMDD_HHMMSS\reports\scroll\androidTests\connected\debug\index.html

# ... và các loại khác
```

### 4. Full Output Log

```powershell
type performance_results\report_YYYYMMDD_HHMMSS\full_output.log
```

---

## 🔧 Sửa Lỗi

### Lỗi 1: Build Failed

**Triệu chứng:**
```
❌ Build vẫn thất bại!
```

**Giải pháp:**
1. Kiểm tra `build_log.txt`
2. Sync Gradle trong Android Studio
3. Đóng Android Studio và chạy lại

### Lỗi 2: No Device Connected

**Triệu chứng:**
```
❌ Không có device/emulator kết nối!
```

**Giải pháp:**
1. Kết nối device qua USB, HOẶC
2. Khởi động Android Emulator

### Lỗi 3: ClassNotFoundException

**Triệu chứng:**
```
ClassNotFoundException: androidx.startup.InitializationProvider
```

**Giải pháp:**
Script sẽ tự động rebuild test APK. Nếu vẫn lỗi:
1. Sync Gradle trong Android Studio
2. Rebuild project
3. Chạy lại script

---

## 📈 Metrics Được Tạo

Sau khi chạy xong, bạn sẽ có **HƠN 60 METRICS**:

### Render Performance (7 metrics)
- SplashScreen render time
- HomeScreen render time
- ChatScreen render time
- MessageScreen render time
- ProfileScreen render time
- Composition time
- First frame time

### Scroll Performance (3 metrics)
- Initial composition time
- Average idle time
- Max idle time

### ViewModel Performance (8 metrics)
- LoadUsers (Avg, Min, Max)
- LoadMessages (Avg, Max)
- SwipeAction (Avg, P95)
- SendMessage (Avg, Max)

### Memory Performance (5 metrics)
- Initial memory
- After navigation memory
- Peak memory
- Memory growth
- Memory leak detection

### System Resource Performance (6 metrics)
- CPU usage
- Thread count
- Heap size
- Available memory
- Thread leak detection

### Network Performance (6 metrics)
- Connection time
- Network latency (Avg, Min, Max)
- Jitter
- Throughput
- Success rate

### Frame Rate Performance (6 metrics)
- Frame rate (FPS)
- Average frame time
- Jank count
- Jank percentage
- Smoothness

### App Size Performance (5 metrics)
- APK size
- Installed size
- Cache size
- Data size

### Database Performance (6 metrics)
- Query time (Avg, P95, Max)
- Insert time (Avg, Max)
- Batch throughput

### Image Loading Performance (5 metrics)
- Image load time (Avg, P95, Max)
- Memory usage
- Cache hit rate

### Touch Response Performance (4 metrics)
- Touch latency
- Click response time (Avg, P95, Max)
- Gesture recognition

---

## 🎯 Lưu Ý

1. **KHÔNG xóa báo cáo cũ:** Script tạo thư mục mới với timestamp, không ghi đè
2. **Thời gian chạy:** ~20-25 phút, cần kiên nhẫn
3. **Device phải kết nối:** Đảm bảo device/emulator đã kết nối trước khi chạy
4. **Build có thể lâu:** Lần đầu build sẽ mất nhiều thời gian hơn

---

## 📝 Ví Dụ Output

```
========================================
🚀 CHẠY TẤT CẢ TESTS VÀ TẠO BÁO CÁO
========================================

✅ Device đã kết nối
✅ Đã tạo thư mục: performance_results\report_20250108_143022

========================================
Building test APK...
========================================
✅ Build thành công

[1/12] Screen Render Performance Tests
    ✓ Reports collected
[2/12] Scroll Performance Tests
    ✓ Reports collected
...

========================================
✅ TẤT CẢ TESTS ĐÃ HOÀN THÀNH
========================================

Test Results:
  Total: 12 tests
  Passed: 10
  Failed/Issues: 2

========================================
📊 BÁO CÁO ĐÃ ĐƯỢC TẠO
========================================

Report Directory: performance_results\report_20250108_143022
```

---

*Script tự động chạy tất cả tests và tạo báo cáo đầy đủ! 🚀*

