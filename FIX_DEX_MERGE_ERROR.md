# 🔧 Fix Lỗi: DexArchiveMergerException - NoSuchFileException

## ❌ Lỗi gặp phải:
```
com.android.builder.dexing.DexArchiveMergerException: Error while merging dex archives
Caused by: java.nio.file.NoSuchFileException: 
E:\...\app\build\intermediates\dex\debug\mergeProjectDexDebug\1
```

## 🔍 Nguyên nhân:
- **Build directory bị corrupt** - Files/thư mục bị xóa trong quá trình build
- **Files bị lock** - Android Studio hoặc process khác đang lock files
- **Nhiều Gradle processes** chạy cùng lúc và conflict
- **Build bị interrupt** - Build bị dừng giữa chừng

## ✅ Giải pháp:

### Cách 1: Dùng Script Tự Động (Khuyến Nghị)

```powershell
# Đóng Android Studio trước!

# Chạy script fix
.\fix_build_corrupt.bat
```

Script sẽ:
1. Stop Gradle daemons
2. Xóa corrupted build directories
3. Rebuild project

### Cách 2: Manual Fix

**Bước 1: Đóng Android Studio**
- File → Exit
- Đảm bảo không còn process nào chạy

**Bước 2: Stop Gradle Daemons**
```powershell
.\gradlew --stop
```

**Bước 3: Kill Java Processes (Nếu cần)**
```powershell
taskkill /F /IM java.exe
```

**Bước 4: Xóa Build Directory**
```powershell
# Xóa toàn bộ build directory
Remove-Item -Recurse -Force app\build

# Hoặc chỉ xóa dex directory
Remove-Item -Recurse -Force app\build\intermediates\dex
```

**Bước 5: Rebuild**
```powershell
.\gradlew clean
.\gradlew assembleDebug
```

### Cách 3: Clean và Rebuild trong Android Studio

1. **Đóng tất cả files đang mở**
2. **File → Invalidate Caches / Restart**
   - Chọn "Invalidate and Restart"
3. **Sau khi restart:**
   - Build → Clean Project
   - Build → Rebuild Project

---

## 🚀 Quick Fix:

### Option A: Script (Nhanh nhất)
```powershell
# Đóng Android Studio
.\fix_build_corrupt.bat
```

### Option B: Manual
```powershell
# 1. Đóng Android Studio
# 2. Stop daemons
.\gradlew --stop

# 3. Xóa build
Remove-Item -Recurse -Force app\build

# 4. Rebuild
.\gradlew clean assembleDebug
```

---

## ⚠️ Lưu ý QUAN TRỌNG:

- **⚠️ PHẢI đóng Android Studio** trước khi xóa build directory
- **Chờ 3-5 giây** sau khi stop daemons trước khi xóa files
- **Nếu không xóa được**, có process khác đang lock files
- **Kill Java processes** nếu cần: `taskkill /F /IM java.exe`

---

## 🔍 Verify Fix:

Sau khi fix, kiểm tra:

1. **Build thành công:**
   ```powershell
   .\gradlew assembleDebug
   ```

2. **Test APK build thành công:**
   ```powershell
   .\gradlew assembleDebugAndroidTest
   ```

3. **Không còn lỗi `NoSuchFileException`** → ✅ Fixed!

---

## 🆘 Nếu vẫn lỗi:

### 1. Files vẫn bị lock?

```powershell
# Kill tất cả Java processes
taskkill /F /IM java.exe

# Kill Gradle processes
Get-Process | Where-Object {$_.ProcessName -like "*gradle*"} | Stop-Process -Force

# Chờ 5 giây
timeout /t 5

# Xóa build
Remove-Item -Recurse -Force app\build
```

### 2. Build directory không xóa được?

- **Đóng Android Studio hoàn toàn**
- **Đóng File Explorer** nếu đang mở folder `app\build`
- **Kill tất cả Java processes**
- **Restart computer** (last resort)

### 3. Vẫn lỗi sau khi rebuild?

- **Invalidate caches trong Android Studio:**
  - File → Invalidate Caches / Restart
- **Xóa .gradle cache:**
  ```powershell
  # Đóng Android Studio trước!
  Remove-Item -Recurse -Force .gradle
  .\gradlew --refresh-dependencies
  ```

---

## 📝 Prevention:

Để tránh lỗi này:

1. **Đóng Android Studio** trước khi chạy Gradle từ command line
2. **Không chạy nhiều builds cùng lúc**
3. **Đợi build hoàn tất** trước khi chạy build khác
4. **Dùng `--no-daemon`** khi build từ script để tránh conflicts

---

*Last updated: [Date]*

