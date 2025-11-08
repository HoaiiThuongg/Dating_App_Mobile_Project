# 🔧 Fix Build Errors - Performance Testing Dependencies

## ❌ Lỗi gặp phải:
```
8 errors trong build:
- :app:checkDebugAndroidTestAarMetadata
- :app:mapDebugAndroidTestSourceSetPaths
- :app:mergeDebugAndroidTestResources
- :app:processDebugAndroidTestManifest
- :app:mergeDebugAndroidTestAssets
- :app:checkDebugAndroidTestDuplicateClasses
- :app:desugarDebugAndroidTestFileDependencies
- :app:mergeDebugAndroidTestNativeLibs
```

## ✅ Nguyên nhân:
Benchmark dependency được đặt sai chỗ trong `app/build.gradle.kts`:
- **Dòng 128**: `implementation(libs.androidx.benchmark.macro.junit4)` ❌
- Benchmark dependencies chỉ nên ở `androidTestImplementation`, không nên ở `implementation`

## ✅ Đã sửa:
1. ✅ Xóa dòng `implementation(libs.androidx.benchmark.macro.junit4)` 
2. ✅ Sử dụng `libs.androidx.benchmark.macro.junit4` từ `libs.versions.toml` trong `androidTestImplementation`

## 🚀 Cách build lại:

### Bước 1: Clean project
```powershell
.\gradlew clean
```

### Bước 2: Sync Gradle
Trong Android Studio:
- File → Sync Project with Gradle Files
- Hoặc nhấn `Ctrl+Shift+O` (Windows) / `Cmd+Shift+I` (Mac)

### Bước 3: Rebuild
```powershell
.\gradlew assembleDebugAndroidTest
```

Hoặc trong Android Studio:
- Build → Rebuild Project
- Hoặc nhấn `Ctrl+F9` (Windows) / `Cmd+F9` (Mac)

## ✅ Kiểm tra:
Nếu build thành công, bạn sẽ thấy:
```
BUILD SUCCESSFUL
```

## 📝 Lưu ý:
- Benchmark dependencies chỉ dùng cho testing, không nên có trong production code
- Luôn đặt test dependencies trong `testImplementation` hoặc `androidTestImplementation`
- Không đặt test dependencies trong `implementation`

## 🔍 Nếu vẫn còn lỗi:
1. **Invalidate Caches** trong Android Studio:
   - File → Invalidate Caches / Restart
   - Chọn "Invalidate and Restart"

2. **Xóa build folders**:
   ```powershell
   Remove-Item -Recurse -Force app\build
   Remove-Item -Recurse -Force build
   .\gradlew clean
   ```

3. **Kiểm tra Gradle version**:
   - Đảm bảo Gradle version tương thích với AGP 8.13.0


