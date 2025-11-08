# 🔧 Fix Lỗi Gradle Lock File

## ❌ Lỗi gặp phải:

### Lỗi 1: File Hash Cache Lock
```
Cannot lock file hash cache (E:\UET\Project\Dating_App_Mobile_Project\.gradle\8.13\fileHashes) 
as it has already been locked by this process.
```

### Lỗi 2: Cache Directory Lock (Android Studio Sync)
```
Cannot lock cache directory md-supplier (E:\.gradle\caches\8.13\md-supplier) 
as it has already been locked by this process.
Initialization script 'C:\Users\Acer\AppData\Local\Temp\sync.studio.tooling2.gradle'
```

## 🔍 Nguyên nhân:
- **Android Studio đang sync/build** và lock file cache
- Gradle daemon đang chạy và đã lock file
- Nhiều Gradle process đang chạy cùng lúc
- Android Studio sync script đang lock global Gradle cache (`E:\.gradle\caches`)

## ✅ Giải pháp:

### ⚠️ QUAN TRỌNG: Đóng Android Studio trước!

**Lỗi này xảy ra vì Android Studio đang sync project và lock cache. Bạn PHẢI đóng Android Studio trước khi chạy tests từ command line.**

### Cách 1: Đóng Android Studio + Stop Gradle (Khuyến nghị)

1. **Đóng Android Studio hoàn toàn:**
   - File → Exit (hoặc Alt+F4)
   - Đảm bảo không còn process Android Studio nào chạy

2. **Stop Gradle daemons:**
   ```powershell
   .\gradlew --stop
   ```

3. **Chờ 3-5 giây** để Android Studio release locks

4. **Chạy lại tests:**
   ```powershell
   .\run_performance_tests.bat scroll
   ```

### Cách 2: Kill Android Studio Processes (Nếu không đóng được)

```powershell
# Kill tất cả Android Studio processes
Get-Process | Where-Object {$_.ProcessName -like "*studio*" -or $_.ProcessName -like "*idea*"} | Stop-Process -Force

# Kill Java processes (cẩn thận - có thể kill các app Java khác)
Get-Process | Where-Object {$_.ProcessName -eq "java"} | Where-Object {$_.Path -like "*android*" -or $_.Path -like "*studio*"} | Stop-Process -Force

# Stop Gradle daemons
.\gradlew --stop
```

### Cách 3: Kill Gradle Processes (Nếu cách 1 không work)
```powershell
# Windows PowerShell
Get-Process | Where-Object {$_.ProcessName -like "*java*" -or $_.ProcessName -like "*gradle*"} | Stop-Process -Force
```

### Cách 4: Xóa .gradle folder (Last resort)
```powershell
# Đóng Android Studio trước
Remove-Item -Recurse -Force .gradle
.\gradlew clean
```

Sau đó chạy lại tests.

---

## 🚀 Quick Fix:

### Option A: Manual (Khuyến nghị)
1. **Đóng Android Studio** (File → Exit)
2. Chạy:
   ```powershell
   .\gradlew --stop
   ```
3. Chờ 3-5 giây
4. Chạy lại tests:
   ```powershell
   .\run_performance_tests.bat scroll
   ```

### Option B: Auto Kill (Nếu Android Studio không đóng được)
```powershell
# Chạy script tự động kill processes
.\kill_android_studio.bat

# Sau đó chạy tests
.\run_performance_tests.bat scroll
```

---

## ⚠️ Lưu ý QUAN TRỌNG:

- **⚠️ PHẢI đóng Android Studio** trước khi chạy tests từ command line
- **Không xóa .gradle folder** nếu Android Studio đang mở
- **Chờ 3-5 giây** sau khi đóng Android Studio và stop daemon
- **Android Studio sync** sẽ lock global Gradle cache (`E:\.gradle\caches`)
- **Nếu Android Studio đang mở**, tốt nhất là chạy tests từ Android Studio thay vì command line

---

## 🔍 Kiểm tra:

Sau khi stop daemon, kiểm tra:
```powershell
# Kiểm tra Gradle daemon
.\gradlew --status
```

Nếu không có daemon nào chạy, sẽ thấy:
```
No Gradle daemons are running.
```

