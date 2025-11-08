# Hướng Dẫn: Chạy Tests Tự Động Tiếp Tục

## Vấn đề
Sau khi chạy xong một test (ví dụ: macrobenchmark), script dừng lại và không tự động tiếp tục các tests còn lại.

## Giải pháp

### 1. Script mới: `CHAY_TAT_CA_TESTS_TU_DONG.bat` ✅
Script này được thiết kế để **tự động tiếp tục** sau mỗi test, không dừng lại giữa chừng.

**Cách dùng:**
```powershell
.\CHAY_TAT_CA_TESTS_TU_DONG.bat
```

**Tính năng:**
- ✅ Chạy tất cả 12 tests liên tiếp
- ✅ Tự động tiếp tục sau mỗi test
- ✅ Không dừng lại giữa chừng
- ✅ Tự động collect reports sau mỗi test
- ✅ Tạo báo cáo tổng hợp cuối cùng

### 2. Script đã cập nhật: `KIEM_TRA_VA_CHAY_TIEP.bat` ✅
Script này đã được cập nhật để tự động tiếp tục các tests còn lại.

**Cách dùng:**
```powershell
.\KIEM_TRA_VA_CHAY_TIEP.bat
```

**Tính năng:**
- ✅ Kiểm tra tests đã hoàn thành
- ✅ Chạy tiếp các tests còn lại
- ✅ Tự động tiếp tục sau mỗi test
- ✅ Tạo báo cáo cuối cùng

## So sánh các scripts

| Script | Mô tả | Khi nào dùng |
|--------|-------|--------------|
| `CHAY_TAT_CA_TESTS_TU_DONG.bat` | Chạy tất cả tests từ đầu, tự động tiếp tục | Khi muốn chạy lại từ đầu |
| `KIEM_TRA_VA_CHAY_TIEP.bat` | Chạy tiếp các tests còn lại | Khi đã có một số tests hoàn thành |
| `CHAY_TAT_CA_TESTS_VA_TAO_BAO_CAO.bat` | Chạy tất cả tests, có thể dừng lại | Khi muốn kiểm soát từng bước |

## Cách hoạt động

### Script tự động tiếp tục:
1. Chạy test 1 → Collect reports → **Tiếp tục ngay**
2. Chạy test 2 → Collect reports → **Tiếp tục ngay**
3. Chạy test 3 → Collect reports → **Tiếp tục ngay**
4. ... (lặp lại cho đến test 12)
5. Tạo báo cáo tổng hợp cuối cùng

### Không dừng lại:
- Không có `pause` giữa các tests
- Không có `exit` khi một test fail
- Luôn tiếp tục test tiếp theo
- Chỉ dừng lại khi tất cả tests hoàn thành

## Lưu ý

1. **Thời gian**: Script sẽ chạy liên tục ~20-25 phút
2. **Device**: Đảm bảo device/emulator vẫn kết nối trong suốt quá trình
3. **Reports**: Reports được collect sau mỗi test, không bị mất
4. **Lỗi**: Nếu một test fail, script vẫn tiếp tục test tiếp theo

## Troubleshooting

### Nếu script dừng lại giữa chừng:
1. Kiểm tra device còn kết nối:
   ```powershell
   adb devices
   ```
2. Kiểm tra log:
   ```powershell
   type performance_results\report_*\full_output.log
   ```
3. Chạy tiếp:
   ```powershell
   .\KIEM_TRA_VA_CHAY_TIEP.bat
   ```

### Nếu một test fail:
- Script vẫn tiếp tục test tiếp theo
- Xem log để biết lỗi cụ thể
- Có thể chạy lại test đó riêng:
  ```powershell
  .\run_performance_tests.bat <test_type>
  ```

## Ví dụ Output

```
[1/12] Screen Render Performance Tests
    ✓ Reports collected
    → Tiếp tục test tiếp theo...

[2/12] Scroll Performance Tests
    ✓ Reports collected
    → Tiếp tục test tiếp theo...

[3/12] ViewModel Performance Tests
    ✓ Reports collected
    → Tiếp tục test tiếp theo...

...
[12/12] Touch Response Performance Tests
    ✓ Reports collected
    → Tất cả tests đã hoàn thành!

✅ TẤT CẢ TESTS ĐÃ HOÀN THÀNH
```

