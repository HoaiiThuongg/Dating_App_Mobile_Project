# 🔧 Fix Lỗi: ClassNotFoundException androidx.startup.InitializationProvider

## ❌ Lỗi gặp phải:
```
java.lang.ClassNotFoundException: Didn't find class "androidx.startup.InitializationProvider"
```

## 🔍 Nguyên nhân:
- Test APK chưa được rebuild sau khi thêm dependency `androidx.startup:startup-runtime`
- Gradle chưa sync lại dependencies
- Test APK không chứa class `InitializationProvider` từ dependency

## ✅ Giải pháp:

### Cách 1: Sync Gradle trong Android Studio (Khuyến nghị)

1. **Mở Android Studio**
2. **Sync Gradle:**
   - File → Sync Project with Gradle Files
   - Hoặc click icon "Sync Now" trên thanh toolbar
3. **Chờ sync hoàn tất**
4. **Rebuild project:**
   - Build → Rebuild Project
5. **Chạy lại tests**

### Cách 2: Rebuild Test APK từ Command Line

```powershell
# Bước 1: Stop Gradle daemons
.\gradlew --stop

# Bước 2: Rebuild test APK
.\gradlew assembleDebugAndroidTest

# Bước 3: Install test APK
.\gradlew installDebugAndroidTest

# Bước 4: Chạy lại tests
.\run_performance_tests.bat render
```

Hoặc dùng script tự động:
```powershell
.\rebuild_test_apk.bat
```

### Cách 3: Clean và Rebuild Toàn Bộ

**⚠️ Lưu ý:** Đóng Android Studio trước khi chạy clean!

```powershell
# Đóng Android Studio trước!

# Stop Gradle daemons
.\gradlew --stop

# Clean (có thể fail nếu Android Studio đang mở)
.\gradlew clean 2>nul

# Rebuild test APK
.\gradlew assembleDebugAndroidTest

# Install
.\gradlew installDebugAndroidTest
```

---

## 🔍 Kiểm tra Dependency

Đảm bảo trong `app/build.gradle.kts` có:

```kotlin
dependencies {
    // Startup library - required for Firebase and other libraries
    implementation("androidx.startup:startup-runtime:1.1.1")
    androidTestImplementation("androidx.startup:startup-runtime:1.1.1")
}
```

**Quan trọng:** Phải có cả `implementation` VÀ `androidTestImplementation`!

---

## 🚀 Quick Fix:

### Nếu đang dùng Android Studio:
1. File → Sync Project with Gradle Files
2. Build → Rebuild Project
3. Chạy lại tests

### Nếu chỉ dùng Command Line:
```powershell
.\rebuild_test_apk.bat
```

Sau đó chạy lại tests.

---

## ⚠️ Lưu ý:

- **Phải sync Gradle** sau khi thêm dependency mới
- **Test APK phải được rebuild** để include dependency
- **Đóng Android Studio** trước khi chạy clean (nếu cần)
- **Dependency phải có trong cả `implementation` và `androidTestImplementation`**

---

## 🔍 Verify Fix:

Sau khi rebuild, kiểm tra:

1. **Test APK có chứa class:**
   ```powershell
   # Extract và check (advanced)
   # Test APK location: app/build/outputs/apk/androidTest/debug/app-debug-androidTest.apk
   ```

2. **Chạy test đơn giản:**
   ```powershell
   .\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.ScreenRenderPerformanceTest#measureSplashScreenRenderTime
   ```

3. **Nếu không còn lỗi `ClassNotFoundException`** → ✅ Fixed!

---

## 🆘 Nếu vẫn lỗi:

1. **Kiểm tra version:**
   - Đảm bảo version `1.1.1` hoặc mới hơn
   - Có thể thử version mới nhất: `1.1.2` hoặc `1.2.0`

2. **Kiểm tra manifest merge:**
   - `InitializationProvider` sẽ tự động được merge vào manifest
   - Không cần thêm thủ công vào AndroidManifest.xml

3. **Invalidate caches trong Android Studio:**
   - File → Invalidate Caches / Restart
   - Chọn "Invalidate and Restart"

4. **Xóa .gradle cache:**
   ```powershell
   # Đóng Android Studio trước!
   Remove-Item -Recurse -Force .gradle
   .\gradlew --refresh-dependencies
   ```

---

*Last updated: [Date]*


