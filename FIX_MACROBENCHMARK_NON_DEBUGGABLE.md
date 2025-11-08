# Sửa Lỗi Macrobenchmark: Non-Debuggable Build

## Vấn đề
Macrobenchmark tests báo lỗi: "Macrobenchmark yêu cầu non-debuggable build"

## Nguyên nhân
- App đang được build ở debug variant (có flag DEBUGGABLE)
- Macrobenchmark chỉ chạy được với release hoặc benchmark variant (non-debuggable)

## Giải pháp đã áp dụng

### 1. Script `run_macrobenchmark.bat` đã được cập nhật:
- ✅ Uninstall app cũ trước khi install benchmark variant
- ✅ Build và install benchmark variant (non-debuggable)
- ✅ Verify app đã được install đúng variant
- ✅ Force stop app trước khi chạy tests để đảm bảo clean state
- ✅ Thêm delay sau mỗi bước để đảm bảo hoàn tất

### 2. Build variant đã được cấu hình trong `build.gradle.kts`:
```kotlin
create("benchmark") {
    initWith(getByName("release"))
    matchingFallbacks += "release"
    signingConfig = signingConfigs.getByName("debug")
    isDebuggable = false  // ← Quan trọng!
}
```

### 3. Test code đã có check:
```kotlin
@Before
fun checkBenchmarkRequirements() {
    val context = InstrumentationRegistry.getInstrumentation().targetContext
    val isDebuggable = (context.applicationInfo.flags and ApplicationInfo.FLAG_DEBUGGABLE) != 0
    Assume.assumeFalse(
        "Macrobenchmark requires non-debuggable build.",
        isDebuggable
    )
}
```

## Cách chạy

### Cách 1: Dùng script tự động (Khuyến nghị)
```powershell
.\run_macrobenchmark.bat
```

Script này sẽ:
1. Uninstall app cũ
2. Build benchmark variant
3. Install benchmark APK (non-debuggable)
4. Build và install test APK
5. Chạy macrobenchmark tests

### Cách 2: Chạy thủ công
```powershell
# 1. Uninstall app
adb uninstall com.example.datingapp
adb uninstall com.example.datingapp.test

# 2. Build và install benchmark variant
.\gradlew.bat assembleBenchmark installBenchmark

# 3. Build và install test APK
.\gradlew.bat assembleDebugAndroidTest installDebugAndroidTest

# 4. Chạy tests
.\gradlew.bat connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

## Kiểm tra app đã non-debuggable

```powershell
adb shell dumpsys package com.example.datingapp | findstr "pkgFlags"
```

Nếu không thấy `DEBUGGABLE` trong output → App đã non-debuggable ✓

## Lưu ý

1. **Device/Emulator**: Macrobenchmark có thể yêu cầu device thật hoặc emulator được cấu hình đúng
2. **Clean state**: Luôn uninstall app cũ trước khi install benchmark variant
3. **Delay**: Cần delay sau mỗi bước install để đảm bảo hoàn tất
4. **Force stop**: Force stop app trước khi chạy tests để đảm bảo clean state

## Troubleshooting

### Nếu vẫn báo lỗi "non-debuggable build":
1. Kiểm tra `build.gradle.kts` có `isDebuggable = false` trong benchmark variant
2. Uninstall app và reinstall:
   ```powershell
   adb uninstall com.example.datingapp
   .\gradlew.bat installBenchmark
   ```
3. Verify app flags:
   ```powershell
   adb shell dumpsys package com.example.datingapp | findstr "DEBUGGABLE"
   ```
   (Không nên thấy DEBUGGABLE)

### Nếu tests bị SKIPPED:
- Đây là bình thường nếu app vẫn là debug build
- Đảm bảo đã chạy `run_macrobenchmark.bat` để install benchmark variant

### Nếu build thất bại:
- Kiểm tra `build.gradle.kts` có định nghĩa benchmark variant
- Sync Gradle trong Android Studio
- Clean và rebuild:
  ```powershell
  .\gradlew.bat clean assembleBenchmark
  ```


