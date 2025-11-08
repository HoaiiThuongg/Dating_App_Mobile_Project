# 🔧 Cách Fix Lỗi PowerShell Execution Policy

## ❌ Lỗi gặp phải:
```
The file cannot be loaded. The file is not digitally signed.
You cannot run this script on the current system.
```

## ✅ Giải pháp (3 cách)

### Cách 1: Bypass Execution Policy (Khuyến nghị - An toàn nhất)

Chạy script với `-ExecutionPolicy Bypass`:

```powershell
powershell -ExecutionPolicy Bypass -File .\run_all_tests_and_coverage.ps1
```

Hoặc cho performance tests:
```powershell
powershell -ExecutionPolicy Bypass -File .\run_performance_tests.ps1
```

**Ưu điểm**: Không thay đổi system-wide policy, chỉ áp dụng cho script này

---

### Cách 2: Thay đổi Execution Policy (Tạm thời)

Mở PowerShell **với quyền Administrator** và chạy:

```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
```

Sau đó chạy script bình thường:
```powershell
.\run_all_tests_and_coverage.ps1
```

**Lưu ý**: Chỉ áp dụng cho user hiện tại, không ảnh hưởng system-wide

---

### Cách 3: Unblock File (Một lần)

Chạy lệnh này để unblock file:

```powershell
Unblock-File -Path .\run_all_tests_and_coverage.ps1
Unblock-File -Path .\run_performance_tests.ps1
```

Sau đó chạy script bình thường:
```powershell
.\run_all_tests_and_coverage.ps1
```

---

## 🚀 Cách nhanh nhất (Khuyến nghị)

Sử dụng **Cách 1** - Bypass execution policy:

```powershell
# Chạy tests và coverage
powershell -ExecutionPolicy Bypass -File .\run_all_tests_and_coverage.ps1

# Chạy performance tests
powershell -ExecutionPolicy Bypass -File .\run_performance_tests.ps1
```

---

## 📝 Tạo Alias (Tùy chọn)

Để không phải gõ dài, có thể tạo alias trong PowerShell profile:

1. Mở PowerShell profile:
```powershell
notepad $PROFILE
```

2. Thêm dòng này:
```powershell
function Run-Tests { powershell -ExecutionPolicy Bypass -File .\run_all_tests_and_coverage.ps1 }
function Run-PerfTests { powershell -ExecutionPolicy Bypass -File .\run_performance_tests.ps1 }
```

3. Reload profile:
```powershell
. $PROFILE
```

4. Sau đó chỉ cần gõ:
```powershell
Run-Tests
Run-PerfTests
```

---

## ⚠️ Lưu ý bảo mật

- **Cách 1 (Bypass)**: An toàn nhất, chỉ áp dụng cho script cụ thể
- **Cách 2 (Set-ExecutionPolicy)**: Thay đổi policy cho user, cần quyền admin
- **Cách 3 (Unblock-File)**: Chỉ unblock file cụ thể, an toàn

**Khuyến nghị**: Sử dụng **Cách 1** vì không thay đổi system settings.



