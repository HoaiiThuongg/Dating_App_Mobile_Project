# Hướng Dẫn: Kiểm Tra Script Có Đang Chạy

## Cách Kiểm Tra

### 1. Script tự động: `CHECK_STATUS.bat` ✅
```powershell
.\CHECK_STATUS.bat
```

Script này sẽ:
- ✅ Kiểm tra số tests đã hoàn thành
- ✅ Hiển thị thời gian log file được cập nhật
- ✅ Hiển thị dòng cuối cùng trong log
- ✅ Đưa ra kết luận về trạng thái script

### 2. Script chi tiết: `KIEM_TRA_SCRIPT_DANG_CHAY.bat`
```powershell
.\KIEM_TRA_SCRIPT_DANG_CHAY.bat
```

Script này sẽ:
- ✅ Kiểm tra processes đang chạy (cmd.exe, java.exe)
- ✅ Kiểm tra tiến độ tests
- ✅ Kiểm tra log file và thời gian cập nhật
- ✅ Đưa ra tóm tắt chi tiết

## Cách Nhận Biết Script Đang Chạy

### ✅ Script ĐANG CHẠY nếu:
1. **Log file được cập nhật gần đây** (< 5 phút)
   - Kiểm tra: `CHECK_STATUS.bat`
   - Hoặc xem trực tiếp: `performance_results\report_*\full_output.log`

2. **Có Java/Gradle processes đang chạy**
   - Kiểm tra: Task Manager → tìm `java.exe`
   - Hoặc: `tasklist | findstr java.exe`

3. **Tests đang tăng dần**
   - Kiểm tra: `CHECK_STATUS.bat`
   - Số tests hoàn thành tăng dần theo thời gian

### ❌ Script ĐÃ DỪNG nếu:
1. **Log file không được cập nhật** (> 5 phút)
   - Last modified time không thay đổi

2. **Không có Java/Gradle processes liên quan**
   - Không có `java.exe` processes (trừ Android Studio)

3. **Số tests không tăng**
   - Số tests hoàn thành không thay đổi sau nhiều phút

## Nếu Script Đã Dừng

### Cách 1: Restart tự động (Khuyến nghị)
```powershell
.\RESTART_TESTS_NEU_DUNG.bat
```

Script này sẽ:
- ✅ Kiểm tra tests đã hoàn thành
- ✅ Kiểm tra device
- ✅ Kiểm tra log file
- ✅ Tự động restart nếu cần

### Cách 2: Chạy tiếp thủ công
```powershell
.\CHAY_TIEP_METRICS_CON_LAI.bat
```

Script này sẽ:
- ✅ Chạy tiếp các tests/metrics còn lại
- ✅ Tự động tiếp tục sau mỗi test
- ✅ Tạo báo cáo cuối cùng

## Kiểm Tra Nhanh

### Xem log file trực tiếp:
```powershell
# Xem dòng cuối cùng
powershell -Command "Get-Content 'performance_results\report_*\full_output.log' -Tail 10"

# Xem thời gian cập nhật
powershell -Command "$log = Get-Item 'performance_results\report_*\full_output.log'; Write-Host $log.LastWriteTime"
```

### Xem tiến độ tests:
```powershell
.\HIEN_THI_BAO_CAO.bat
```

## Troubleshooting

### Nếu script dừng do lỗi:
1. Xem log file để biết lỗi cụ thể
2. Sửa lỗi (nếu có)
3. Restart: `.\RESTART_TESTS_NEU_DUNG.bat`

### Nếu script dừng do device disconnect:
1. Kiểm tra device: `adb devices`
2. Kết nối lại device
3. Restart: `.\RESTART_TESTS_NEU_DUNG.bat`

### Nếu script dừng do build error:
1. Xem build log: `performance_results\report_*\build_log.txt`
2. Sửa lỗi build
3. Restart: `.\RESTART_TESTS_NEU_DUNG.bat`

## Lưu ý

- **Thời gian chạy**: Mỗi test mất ~1-2 phút
- **Tổng thời gian**: ~20-25 phút cho 12 tests
- **Log file**: Được cập nhật sau mỗi test
- **Nếu log không cập nhật > 5 phút**: Script có thể đã dừng

