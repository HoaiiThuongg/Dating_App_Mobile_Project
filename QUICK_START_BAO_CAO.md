# ⚡ Quick Start: Lấy Kết Quả Performance Test

## 🚀 3 Bước Đơn Giản

### Bước 1: Chạy Tests
```powershell
.\run_all_performance_tests.bat
```

### Bước 2: Thu Thập Kết Quả
```powershell
.\collect_performance_results.bat
```

### Bước 3: Xem Báo Cáo
```powershell
# Mở file Markdown (dễ đọc nhất)
notepad performance_results\report_*\summary.md

# Hoặc mở HTML report (chi tiết nhất)
start performance_results\report_*\reports\androidTests\index.html

# Hoặc mở CSV (để import Excel)
start performance_results\report_*\metrics.csv
```

---

## 📁 Kết Quả Ở Đâu?

Sau khi chạy `collect_performance_results.bat`, kết quả sẽ ở:

```
performance_results/report_YYYYMMDD_HHMMSS/
├── summary.md              ← Báo cáo Markdown (dùng cho báo cáo)
├── metrics.csv             ← Metrics CSV (import Excel)
├── metrics.json            ← Metrics JSON (cho automation)
├── reports/
│   └── androidTests/
│       └── index.html      ← HTML report (chi tiết)
└── benchmarks/             ← Macrobenchmark JSON files
```

---

## 📊 Các Metrics Có Trong Báo Cáo

### 1. App Startup
- Cold start time
- Warm start time  
- Hot start time

### 2. Screen Render
- SplashScreen, HomeScreen, ChatScreen, MessageScreen, ProfileScreen render times

### 3. Scroll Performance
- Initial composition time
- Average idle time
- Max idle time

### 4. ViewModel Operations
- LoadUsers, LoadMessages, SwipeAction, SendMessage times

### 5. Memory Usage
- Initial memory
- Peak memory
- Memory increase

---

## 💡 Tips

1. **Dùng `summary.md`** để copy vào báo cáo Word/Google Docs
2. **Dùng `metrics.csv`** để tạo charts trong Excel
3. **Dùng HTML report** để xem chi tiết và screenshots
4. **So sánh với targets** trong file summary.md

---

## 📖 Chi Tiết Hơn?

Xem file **`HUONG_DAN_LAY_KET_QUA_BAO_CAO.md`** để biết:
- Cách parse kết quả programmatically
- Template báo cáo mẫu
- Troubleshooting

---

*Simple and fast! 🚀*


