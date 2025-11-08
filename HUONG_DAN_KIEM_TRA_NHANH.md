# Hướng Dẫn: Kiểm Tra Script Có Đang Chạy (Nhanh)

## Cách Kiểm Tra Nhanh

### 1. Dùng PowerShell Script (Khuyến nghị) ✅
```powershell
powershell -ExecutionPolicy Bypass -File "CHECK_STATUS.ps1"
```

Hoặc đơn giản hơn:
```powershell
.\CHECK_STATUS.ps1
```

Script này sẽ hiển thị:
- ✅ Số tests đã hoàn thành
- ✅ Thời gian log file được cập nhật
- ✅ Dòng cuối cùng trong log
- ✅ Kết luận: Script đang chạy hay đã dừng

### 2. Kiểm Tra Thủ Công

#### Xem số tests đã hoàn thành:
```powershell
.\HIEN_THI_BAO_CAO.bat
```

#### Xem log file trực tiếp:
```powershell
# Xem dòng cuối cùng
Get-Content "performance_results\report_*\full_output.log" -Tail 10

# Xem thời gian cập nhật
$log = Get-Item "performance_results\report_*\full_output.log"
Write-Host $log.LastWriteTime
```

## Cách Nhận Biết

### ✅ Script ĐANG CHẠY nếu:
- **Log file được cập nhật < 5 phút trước**
- **Số tests tăng dần** (kiểm tra sau vài phút)
- **Có Java/Gradle processes** (Task Manager)

### ❌ Script ĐÃ DỪNG nếu:
- **Log file không cập nhật > 5 phút**
- **Số tests không tăng** sau nhiều phút
- **Không có Java/Gradle processes** (trừ Android Studio)

## Nếu Script Đã Dừng

### Chạy tiếp:
```powershell
.\CHAY_TIEP_METRICS_CON_LAI.bat
```

### Hoặc restart tự động:
```powershell
.\RESTART_TESTS_NEU_DUNG.bat
```

## Lưu Ý

- **Thời gian mỗi test**: ~1-2 phút
- **Tổng thời gian**: ~20-25 phút cho 12 tests
- **Log cập nhật**: Sau mỗi test hoàn thành
- **Nếu log không cập nhật > 5 phút**: Script có thể đã dừng

