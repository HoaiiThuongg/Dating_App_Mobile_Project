# 🚀 Hướng Dẫn Chạy UI Tests Tự Động

## ⚡ Script Chính (Tự Động Hoàn Toàn)

### `RUN_UI_TESTS_AUTO.bat` ⭐

**Script tự động hoàn toàn - KHÔNG CẦN TƯƠNG TÁC**

```batch
.\RUN_UI_TESTS_AUTO.bat
```

## ✨ Tính Năng Tự Động

- ✅ **Tự động kiểm tra device** (retry 5 lần nếu chưa kết nối)
- ✅ **Tự động build** (retry 3 lần nếu fail)
- ✅ **Tự động chạy 74+ test cases**
- ✅ **Tự động copy reports** (retry 3 lần nếu chưa có)
- ✅ **Tự động mở HTML report** khi xong
- ✅ **Không cần pause hay tương tác**
- ✅ **Tự động xử lý lỗi**

## 📁 Cấu Trúc Thư Mục

Sau khi chạy, các báo cáo được lưu tại:

```
ui_test_results\
  report_YYYYMMDD_HHMMSS\
    reports\          HTML test reports (index.html) ⭐
    test-results\     XML test results
    coverage\         Coverage reports
    logs\             Build and test logs
    TEST_SUMMARY.txt  Summary report
```

## 🎯 Cách Sử Dụng

### Cách 1: Chạy Script Chính (Khuyến Nghị)
```batch
.\RUN_UI_TESTS_AUTO.bat
```

### Cách 2: Chạy Script Chi Tiết
```batch
.\CHAY_UI_TESTS_TU_DONG.bat
```

### Cách 3: Chạy Script Wrapper
```batch
.\CHAY_TU_DONG.bat
```

## 📊 Kết Quả

Sau khi chạy xong, script sẽ:
1. ✅ Tự động mở thư mục report
2. ✅ Tự động mở HTML report trong browser
3. ✅ Hiển thị đường dẫn report

## 📄 HTML Report

**File chính:** `ui_test_results\report_YYYYMMDD_HHMMSS\reports\index.html`

Báo cáo HTML chứa:
- Danh sách tất cả 74+ test cases
- Kết quả pass/fail
- Thời gian thực thi
- Logs chi tiết

## ⚙️ Quy Trình Tự Động

1. **Kiểm tra device** (auto-retry 5 lần)
2. **Clean và build** (auto-retry 3 lần)
3. **Chạy tests** (74+ test cases)
4. **Copy reports** (auto-retry 3 lần)
5. **Generate coverage** (optional)
6. **Tạo summary**
7. **Mở HTML report** (tự động)

## 🔧 Xử Lý Lỗi Tự Động

- **Device không kết nối**: Tự động retry 5 lần
- **Build fail**: Tự động retry 3 lần
- **Reports chưa có**: Tự động retry 3 lần, tìm ở nhiều vị trí
- **Tests fail**: Vẫn tạo reports (báo cáo lỗi trong HTML)

## 📝 Lưu Ý

1. **Device/Emulator**: Đảm bảo có device hoặc emulator đang chạy
2. **Thời gian**: 
   - Build: 2-3 phút
   - Tests: 10-15 phút
   - Tổng: ~15-20 phút
3. **Reports**: HTML reports được tạo ngay cả khi tests fail

## 🐛 Troubleshooting

### HTML Report Không Tìm Thấy

1. Kiểm tra logs:
   ```
   ui_test_results\report_YYYYMMDD_HHMMSS\logs\test_execution.log
   ```

2. Kiểm tra thủ công:
   ```batch
   .\KIEM_TRA_HTML_REPORT.bat
   ```

3. Script tự động retry 3 lần, nếu vẫn không có thì check logs

### Device Không Kết Nối

- Script tự động retry 5 lần
- Nếu vẫn không có, kiểm tra:
  - Device có bật USB debugging không?
  - Emulator có đang chạy không?
  - ADB có hoạt động không?

## ✅ Đảm Bảo

- ✅ HTML report luôn được tạo (nếu tests chạy được)
- ✅ Thư mục mới mỗi lần chạy (không ghi đè)
- ✅ Tự động mở HTML report khi xong
- ✅ Xử lý lỗi tự động
- ✅ Không cần tương tác

---

**Chỉ cần chạy một lệnh duy nhất:**
```batch
.\RUN_UI_TESTS_AUTO.bat
```

**Script sẽ làm tất cả tự động!** 🎉

