# 🚀 Hướng dẫn Chạy Benchmark - Final

## ✅ Cách chạy:

```powershell
run_macrobenchmark.bat
```

---

## ⚠️ Nếu gặp lỗi "file is being used":

### Giải pháp 1: Đóng Android Studio
1. Đóng Android Studio hoàn toàn
2. Chạy lại script

### Giải pháp 2: Bỏ qua clean
Script đã được cập nhật để bỏ qua clean nếu files bị lock. Chỉ cần chạy lại:

```powershell
run_macrobenchmark.bat
```

### Giải pháp 3: Chạy thủ công (không clean)
```powershell
# Build benchmark APK
.\gradlew assembleBenchmark

# Install
.\gradlew installBenchmark

# Build test APK
.\gradlew assembleDebugAndroidTest

# Chạy tests
.\gradlew connectedDebugAndroidTest -Pandroid.testInstrumentationRunnerArguments.class=com.example.atry.performance.AppStartupBenchmark
```

---

## 📊 Kết quả mong đợi:

Sau khi chạy thành công, bạn sẽ thấy:
- ✅ Tests chạy (không bị SKIPPED)
- 📊 Metrics: timeToInitialDisplay, timeToFullDisplay, frameTiming
- 📄 Reports trong `app/build/reports/androidTests/`

---

## 💡 Alternative: Custom Performance Tests

Nếu macrobenchmark vẫn gặp vấn đề, dùng custom tests:

```powershell
.\run_performance_tests.bat render
.\run_performance_tests.bat scroll
.\run_performance_tests.bat viewmodel
.\run_performance_tests.bat memory
```

Các tests này:
- ✅ Không yêu cầu non-debuggable build
- ✅ Chạy được ngay với debug build
- ✅ Vẫn đo được performance metrics hữu ích

