# ⚡ Quick Start: Thu Thập Kết Quả Performance Test

## ⚠️ QUAN TRỌNG: Chạy Tests Trước!

**Bạn PHẢI chạy tests trước khi thu thập kết quả!**

---

## 🚀 Các Bước

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

Sau khi tests chạy xong:

```powershell
.\collect_performance_results.bat
```

### Bước 3: Xem Kết Quả

```powershell
# Mở file Markdown
notepad performance_results\report_*\summary.md

# Hoặc mở HTML report
start performance_results\report_*\reports\androidTests\index.html

# Hoặc mở CSV
start performance_results\report_*\metrics.csv
```

---

## ❌ Nếu Gặp Lỗi "Test reports not found"

### Nguyên nhân:
- Tests chưa được chạy
- Tests chạy nhưng failed trước khi tạo reports
- Build directory bị xóa

### Giải pháp:

1. **Chạy lại tests:**
   ```powershell
   .\run_all_performance_tests.bat
   ```

2. **Kiểm tra xem tests có chạy thành công không:**
   ```powershell
   # Kiểm tra reports
   dir app\build\reports\androidTests
   ```

3. **Nếu không có reports, chạy lại từng test:**
   ```powershell
   .\run_performance_tests.bat render
   # Chờ hoàn tất, sau đó
   .\collect_performance_results.bat
   ```

---

## 📁 Kết Quả Ở Đâu?

Sau khi chạy `collect_performance_results.bat`, kết quả sẽ ở:

```
performance_results/report_YYYYMMDD_HHMMSS/
├── README.txt              # Hướng dẫn nhanh
├── summary.md              # Báo cáo Markdown (nếu có)
├── metrics.csv             # Metrics CSV (nếu có)
├── metrics.json            # Metrics JSON (nếu có)
├── reports/
│   └── androidTests/      # HTML reports (nếu có)
│       └── index.html
└── benchmarks/             # Macrobenchmark JSON (nếu có)
```

---

## ✅ Checklist

Trước khi thu thập kết quả, đảm bảo:

- [ ] Đã chạy ít nhất 1 loại performance test
- [ ] Tests đã chạy thành công (không bị crash)
- [ ] Device/emulator đã kết nối (cho instrumentation tests)
- [ ] Build thành công

---

## 🆘 Troubleshooting

### "extract_metrics.ps1 not found"
- Scripts PowerShell phải ở cùng thư mục với `collect_performance_results.bat`
- Kiểm tra: `dir extract_metrics.ps1`

### "Test reports not found"
- Chạy tests trước: `.\run_performance_tests.bat render`
- Kiểm tra: `dir app\build\reports\androidTests`

### "Macrobenchmark results not found"
- Chạy macrobenchmark: `.\run_macrobenchmark.bat`
- Macrobenchmark chỉ có kết quả khi chạy với benchmark variant

---

*Simple and fast! 🚀*


