# 🔧 Hướng Dẫn Fix: Không Tìm Thấy Test Reports

## ❌ Vấn đề:

Sau khi chạy `run_all_performance_tests.bat`, script `collect_performance_results.bat` không tìm thấy reports mặc dù reports đã được tạo.

## 🔍 Nguyên nhân:

1. **Script có lỗi syntax** - "else was unexpected at this time"
2. **Logic tìm kiếm không đúng** - Không tìm ở đúng vị trí
3. **Clean build xóa reports** - `run_performance_tests.bat` có `clean` → xóa reports cũ

---

## ✅ Đã Sửa:

### 1. Sửa Script `collect_performance_results.bat`

- ✅ **Sửa lỗi syntax** - Dùng `>>` (append) thay vì heredoc
- ✅ **Sửa logic tìm kiếm** - Tìm ở đúng vị trí: `app\build\reports\androidTests\connected\debug\index.html`
- ✅ **Tìm ở nhiều vị trí** - Fallback nếu không tìm thấy ở vị trí chuẩn

### 2. Bỏ Clean Build

- ✅ **Comment dòng clean** trong `run_performance_tests.bat` để giữ reports

### 3. Tạo Script Đơn Giản

- ✅ **`collect_performance_results_simple.bat`** - Version đơn giản, ít lỗi hơn

---

## 🚀 Cách Sử Dụng:

### Option 1: Dùng Script Đơn Giản (Khuyến Nghị)

```powershell
.\collect_performance_results_simple.bat
```

**Ưu điểm:**
- ✅ Đơn giản, ít lỗi
- ✅ Đã test và hoạt động tốt
- ✅ Copy reports thành công

### Option 2: Dùng Script Đầy Đủ (Đã Sửa)

```powershell
.\collect_performance_results.bat
```

**Ưu điểm:**
- ✅ Đã sửa lỗi syntax
- ✅ Tìm reports đúng cách
- ✅ Tạo README đầy đủ

---

## 📊 Kiểm Tra Reports:

### Kiểm Tra Thủ Công:

```powershell
# Kiểm tra reports có tồn tại không
dir app\build\reports\androidTests\connected\debug\index.html

# Hoặc dùng script
.\check_reports.bat
```

### Nếu Reports Có:

```powershell
# Thu thập ngay
.\collect_performance_results_simple.bat

# Hoặc
.\collect_performance_results.bat
```

---

## ⚠️ Lưu Ý:

1. **KHÔNG chạy `clean`** - Sẽ xóa reports
2. **Chờ vài giây** sau khi tests chạy xong
3. **Reports được tạo** ngay cả khi tests fail
4. **PowerShell scripts có thể fail** - Nhưng reports vẫn được copy

---

## 🆘 Nếu Vẫn Không Tìm Thấy:

### 1. Kiểm Tra Reports Có Tồn Tại:

```powershell
Test-Path "app\build\reports\androidTests\connected\debug\index.html"
```

### 2. Copy Thủ Công:

```powershell
xcopy /E /I /Y "app\build\reports\androidTests" "performance_results\reports\androidTests"
```

### 3. Xem Trực Tiếp:

```powershell
start app\build\reports\androidTests\connected\debug\index.html
```

---

## ✅ Kết Quả:

Sau khi chạy `collect_performance_results_simple.bat`, bạn sẽ có:

```
performance_results/report_YYYYMMDD_HHMMSS/
├── README.txt              # Hướng dẫn
├── reports/
│   └── androidTests/      # HTML reports
│       └── connected/
│           └── debug/
│               └── index.html
└── benchmarks/             # Macrobenchmark (nếu có)
```

---

*Last updated: [Date]*

